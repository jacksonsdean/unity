using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FixRotation : MonoBehaviour
{
    Quaternion originalRot;

    // Start is called before the first frame update
    void Start()
    {
        originalRot = transform.rotation;   
    }

    // Update is called once per frame
    void Update()
    {
        transform.rotation = originalRot;
    }
}
