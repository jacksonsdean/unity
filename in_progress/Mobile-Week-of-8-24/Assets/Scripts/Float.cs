using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Float : MonoBehaviour
{
    [SerializeField]
    float rate;

    [SerializeField]
    float amplitude;



    // Update is called once per frame
    void Update(){
        transform.position += Time.deltaTime*(amplitude * Mathf.Sin(rate*Time.time) * Vector3.forward);
    }
}
