using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sun : MonoBehaviour
{

    [SerializeField]
    AnimationCurve rotationSpeedCurve = null;
    [SerializeField]
    AnimationCurve brightnessCurve = null;
    public float speedMult = 0.5f;
    float speed = 1.0f;
    private float currentDayPercent = 0;

    Light mLight;

    private Quaternion startRot;

   public static float TimeOfDay = 0.0f;

    public static Sun Instance { get; private set; }

    private void Awake()
    {
        Instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        mLight = GetComponent<Light>();
        startRot = transform.rotation;

    }

    // Update is called once per frame
    void Update()
    {

        speed = rotationSpeedCurve.Evaluate(currentDayPercent);
        mLight.intensity = brightnessCurve.Evaluate(currentDayPercent);
        float deltaTheta = speedMult * speed * Time.deltaTime;
        currentDayPercent += (deltaTheta/360.0f);
        if (currentDayPercent >= 1.0f)
        {
            currentDayPercent = 0.0f;
            transform.rotation = startRot;
        }
        else {
            transform.Rotate(deltaTheta, 0,0,Space.World);
        }
        TimeOfDay = currentDayPercent;
    }
}
