using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectWaypoint : MonoBehaviour
{
    public ObjectWaypoint next;
    public ObjectWaypoint last;

    public Vector3 position { get => transform.position; private set => position = value; }

    void Awake()
    {
        next = null;
        last = null;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = last == null ? Color.green : Color.cyan;
        Gizmos.color = next == null ? Color.blue : Gizmos.color;

        Gizmos.DrawSphere(transform.position, .5f);

        Gizmos.color = Color.white;
        if(last)
            Gizmos.DrawLine(last.transform.position, transform.position);
    }

}
