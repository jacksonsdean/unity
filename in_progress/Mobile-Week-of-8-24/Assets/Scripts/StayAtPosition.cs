using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StayAtPosition : MonoBehaviour
{
    Vector3 _pos;
    // Start is called before the first frame update
    void Start()
    {
        _pos = transform.position;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        transform.position = _pos;
    }
}
