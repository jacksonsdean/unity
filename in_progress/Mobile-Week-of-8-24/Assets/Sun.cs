using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sun : MonoBehaviour
{

    [SerializeField]
    AnimationCurve rotationSpeedCurve;
    [SerializeField]
    AnimationCurve brightnessCurve;
    public float speedMult = 0.5f;
    float speed = 1.0f;
    private float currentDayPercent = 0;

    Light light;

    private Quaternion startRot;

    // Start is called before the first frame update
    void Start()
    {
        light = GetComponent<Light>();
        startRot = transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {

        speed = rotationSpeedCurve.Evaluate(currentDayPercent);
        light.intensity = brightnessCurve.Evaluate(currentDayPercent);
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
    }
}
