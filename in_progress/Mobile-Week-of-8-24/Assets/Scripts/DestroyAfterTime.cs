using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

public class DestroyAfterTime : MonoBehaviour
{

    [SerializeField]
    float time;


    private float start;

    // Start is called before the first frame update
    void Start()
    {
        start = Time.time;   
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time > start + time) {
            Destroy(this.gameObject);
        }
    }
}
