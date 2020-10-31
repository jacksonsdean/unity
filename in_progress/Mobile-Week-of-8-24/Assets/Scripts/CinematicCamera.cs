using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
public class CinematicCamera : MonoBehaviour
{
    Transform player;

    CinemachineVirtualCamera cam;

    [SerializeField]
    bool noPlayMode = false;

    [SerializeField]
    bool noEnemies = false;

    [SerializeField]
    float rippleOrthoSize = 500;

    [SerializeField]
    float sunSpeedModifier = .8f;

    [SerializeField]
    bool destroyDuringPlay = true;

    [SerializeField]
    float sunStartRot;

    [SerializeField]
    string[] boats = null;

    [SerializeField]
    float waterSpeed = -1;

    public float changeInterval = 1;



    // Start is called before the first frame update
    void Awake()
    {
#if UNITY_EDITOR

#else
       if(destroyDuringPlay) Destroy(this.gameObject);
#endif
        cam = GetComponentInChildren<CinemachineVirtualCamera>();
        if(FindObjectOfType<EnemySpawner>())
            FindObjectOfType<EnemySpawner>().aboveScreenOffset = 100;


        Sun.Instance.transform.rotation = Quaternion.Euler(sunStartRot,Sun.Instance.transform.rotation.y,Sun.Instance.transform.rotation.z);
        Sun.Instance.speedMult = sunSpeedModifier;

        Sun.Instance.GetComponent<Light>().shadowResolution = UnityEngine.Rendering.LightShadowResolution.VeryHigh;
        Sun.Instance.GetComponent<Light>().shadows = LightShadows.Soft;
        GameObject.Find("RippleCamera").GetComponent<Camera>().orthographicSize = rippleOrthoSize;

     

    }
    float waterOffset = 0;

    // Update is called once per frame
    void Update()
    {
        ScreenEdges se = new ScreenEdges();
        se.maxX =  15.0f;
        se.minX = -15.0f;

        se.maxY = 90.0f;
        se.minY = -40.0f;

        GameManager.screenEdges = se;

        GameObject.Find("Return to menu")?.SetActive(false);


        if (Player.Instance)
        {
            if (noPlayMode)
            {
                Destroy(Player.Instance.gameObject);
            }
            else {
                Player.Instance.SetDebug(true);
                Player.Instance.SetSpeed(15.0f);
                Player.Instance.MinRipples();
            }
        }

        if (noEnemies && EnemySpawner.Instance!=null) {
            Destroy(EnemySpawner.Instance.gameObject);
        }


        GameManager.UpdateGameSpeed(true);


        if (Input.GetKeyDown(KeyCode.Z)) {
            StartCoroutine(ChangeBoats());
        }

        if (Input.GetKeyDown(KeyCode.X))
        {
            GameManager.meters = 0;
            GameManager.Instance.GetComponent<PhaseManager>().Restart();
        }


        // Water:
        if (waterSpeed >= 0)
        {
            waterOffset += waterSpeed * Time.deltaTime;
            Shader.SetGlobalFloat("_WaterOffsetY", waterOffset);
            }
        }

    IEnumerator ChangeBoats() {

        for (int i = 0; i < boats.Length; i++)
        {
            float thisWait = Mathf.Lerp(changeInterval, changeInterval/3.5f, (float)i/(float)boats.Length);
            yield return new WaitForSeconds(thisWait);
            PlayerPrefabManager.SetCurrent(boats[i]);
        }
  
    }
}
