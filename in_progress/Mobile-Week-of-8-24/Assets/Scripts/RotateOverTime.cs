using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateOverTime : MonoBehaviour
{
    [SerializeField]
    float rate;

    [SerializeField]
    Vector3 amt;

    // Update is called once per frame
    void Update()
    {
        Vector3 delta = amt * rate * Time.deltaTime;
        transform.Rotate(delta = amt * rate * Time.deltaTime, Space.Self);
    }
}
