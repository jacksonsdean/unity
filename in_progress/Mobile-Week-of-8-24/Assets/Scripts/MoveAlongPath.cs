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

    float baseSpeed = 1;

    Vector3 lastWaypointPos;

    // Start is called before the first frame update
    void Start()
    {
        Init();
        baseSpeed = speed;
        lastWaypointPos = transform.position;

    }

    public void Init() {
        dir = PathDir.Forward;

        currentIndex = 0;

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
        bool pingDown = false;
        bool pingUp = false;
        lastWaypointPos = currentWaypoint.position;
        path.SetNextWaypoint(ref currentIndex, ref currentWaypoint, ref nextWaypoint, ref dir, ref pingDown, ref pingUp);


        return;
        if (pingDown) {
            StartCoroutine("PingSpeedDown");
        }
        else if (pingUp) {
            StartCoroutine("PingSpeedUp");
        }
    }
    IEnumerator PingSpeedDown()
    {
        while (speed > .5f)
        {
            if (Vector3.Distance(transform.position, nextWaypoint.transform.position)<3.0f) {
                speed -= .1f;
                speed = Mathf.Clamp(speed, .5f, baseSpeed);
            }
                yield return new WaitForSeconds(.1f);
        }
    }
    IEnumerator PingSpeedUp() {
        StopAllCoroutines();
        while (speed < baseSpeed) {
            speed += 0.1f;
            yield return new WaitForSeconds(.1f);
        }
        speed = baseSpeed;
    }
}
