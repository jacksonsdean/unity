using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveAlongPath : MonoBehaviour
{
    private const float MARGIN = 0.001f;


    [SerializeField]
    public ObjectPath path;
    [SerializeField]
    float speed;

    internal PathDir dir;
    internal ObjectWaypoint currentWaypoint;
    internal ObjectWaypoint nextWaypoint;

    internal int currentIndex = 0;


    [SerializeField]
    bool startAtRandomPoint = true;


    [SerializeField]
    bool randomDir = true;

    [SerializeField]
    bool lookAtTarget = false;

    // Start is called before the first frame update
    void Start()
    {
        Init();  
    }

    public void Init() {
        dir = PathDir.Forward;

        if (randomDir)
        {
            if (Random.Range(0, 1.0f) > 0.5f)
            {
                dir = PathDir.Back;
            }

        }

        if (startAtRandomPoint)
        {
            currentWaypoint = path.GetRandom(out currentIndex);
        }
        else
        {
            currentIndex = 0;
            currentWaypoint = path.Get(currentIndex);
        }
        transform.position = currentWaypoint.transform.position;

        GetNextWaypoint();
    }
    // Update is called once per frame
    void Update()
    {
        if (!currentWaypoint) return;
        if (!nextWaypoint) return;




        if (lookAtTarget) {
            var targetRotation = Quaternion.LookRotation(nextWaypoint.transform.position - transform.position,Vector3.back);
            // Smoothly rotate towards the target point.
            transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, (speed/2.0f) * Time.deltaTime);
        }

        transform.position = Vector3.MoveTowards(
            transform.position,
            nextWaypoint.transform.position,
            speed * Time.deltaTime);
        
     

        if (Vector3.Distance(transform.position, nextWaypoint.transform.position) < MARGIN){
            GetNextWaypoint();
        }
    }

    void GetNextWaypoint() {
        path.SetNextWaypoint(ref currentIndex, ref currentWaypoint, ref nextWaypoint, ref dir);
    }
}
