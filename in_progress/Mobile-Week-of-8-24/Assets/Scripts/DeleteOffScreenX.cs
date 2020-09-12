using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

public class DeleteOffScreenX : MonoBehaviour
{

    BoxCollider col;

    private void Awake()
    {
        col = GetComponent<BoxCollider>();
    }
    // Update is called once per frame
    void Update()
    {
        if (!col) return;
        Vector3 right = col.bounds.center + col.bounds.extents;
        Vector3 left = col.bounds.center - col.bounds.extents;
        if (right.x > GameManager.screenEdges.maxX && left.x > GameManager.screenEdges.maxX)
            Destroy(this.gameObject);
        else if (left.x < GameManager.screenEdges.minX && right.x < GameManager.screenEdges.minX)
            Destroy(this.gameObject);
    }

    private void OnDrawGizmos()
    {
        if (col)
        {
            Gizmos.color = Color.white;
            Gizmos.DrawSphere(col.bounds.center + col.bounds.extents, 1.0f);
            Gizmos.DrawSphere(col.bounds.center - col.bounds.extents, 1.0f);
        }

    }
}
