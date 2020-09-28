using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
public class CinematicCamera : MonoBehaviour
{
    Transform player;

    CinemachineVirtualCamera cam;

    [SerializeField]
    string[] boats;

    public float changeInterval = 1;
    // Start is called before the first frame update
    void Awake()
    {
#if UNITY_EDITOR

#else
        Destroy(this.gameObject);
#endif
        cam = GetComponentInChildren<CinemachineVirtualCamera>();
        FindObjectOfType<EnemySpawner>().aboveScreenOffset = 70;
    }

    // Update is called once per frame
    void Update()
    {
        if (Player.Instance)
        {
            Player.Instance.SetDebug(true);
            Player.Instance.SetSpeed(15.0f);
            Player.Instance.MinRipples();
        }

        GameManager.UpdateGameSpeed(true);


        if (Input.GetKeyDown(KeyCode.Z)) {
            StartCoroutine(ChangeBoats());
        }

        //if (!player) {
        //    player = FindObjectOfType<PlayerBoat>().transform;
        //}

        //if (player) {
        //    cam.Follow = player;
        //    cam.LookAt = player;
        //}
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
