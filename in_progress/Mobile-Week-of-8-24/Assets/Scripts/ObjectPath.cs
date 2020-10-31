using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public enum PathType {
    Loop,
    PingPong
}

public enum PathDir
{
    Forward,
    Back
}


public class ObjectPath : MonoBehaviour
{

    public PathType mType;

    ObjectWaypoint[] waypoints;

    
    // Start is called before the first frame update
    void Awake()
    {
        BuildPath();
    }

    // Update is called once per frame
    void Start()
    {
        BuildPath();
    }

    public ObjectWaypoint GetRandom(out int index) {
        index = Random.Range(0, waypoints.Length-1);
        return Get(index);
    }

    public ObjectWaypoint Get(int index) {
        if (index >= waypoints.Length)
            return waypoints[waypoints.Length - 1];
        if (index < 0)
            return waypoints[0];

        return waypoints[index];
    }

    public void SetNextWaypoint(ref int currentIndex, ref ObjectWaypoint currentWaypoint, ref ObjectWaypoint nextWaypoint, ref PathDir dir, ref bool pingDown, ref bool pingUp) {

        switch (dir)
        {
            case PathDir.Forward:
                currentIndex++;
                break;
            case PathDir.Back:
                currentIndex--;
                break;
            default:
                break;
        }

        if (currentIndex >= waypoints.Length) {
            
            switch (mType)
            {
                case PathType.Loop:
                    currentIndex = 0;
                    break;
                case PathType.PingPong:
                    currentIndex-=2;
                    dir = dir == PathDir.Forward ? PathDir.Back : PathDir.Forward; // flip dir
                    break;
                default:
                    break;
            }
        }

        if (currentIndex < 0)
        {

            switch (mType)
            {
                case PathType.Loop:
                    currentIndex = waypoints.Length;
                    break;
                case PathType.PingPong:
                    currentIndex++;
                    dir = dir == PathDir.Forward ? PathDir.Back : PathDir.Forward; // flip dir
                    break;
                default:
                    break;
            }
        }

        if (currentIndex - 1 < 0 || currentIndex+1 >= waypoints.Length) {
            pingDown = true;
        }


        if (nextWaypoint != null){
            currentWaypoint = nextWaypoint;
        }

        nextWaypoint = Get(currentIndex);

    }

    public void BuildPath() {

        waypoints = GetComponentsInChildren<ObjectWaypoint>();
        for (int i = 0; i < waypoints.Length - 1; i++){
            waypoints[i].next = waypoints[i + 1];
        }

        for (int i = 1; i < waypoints.Length; i++){
            waypoints[i].last = waypoints[i - 1];
        }
    }

    private void OnDrawGizmos()
    {
        if (waypoints == null || waypoints.Length == 0) return;
        if (mType == PathType.Loop) {
            Gizmos.color = Color.white;
            Gizmos.DrawLine(waypoints[waypoints.Length-1].transform.position, waypoints[0].transform.position);
        }
    }
}
