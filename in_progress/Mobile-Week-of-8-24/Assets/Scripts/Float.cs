using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Float : MonoBehaviour
{
    [SerializeField]
    float rate;

    [SerializeField]
    float amplitude;

    [SerializeField]
    float startOffset = 0;

    [SerializeField]
    bool randomizeOffset = false;

    float startHeight;

    private void Start()
    {
        startHeight = transform.position.z;
        if (randomizeOffset) {
            startOffset *= Random.Range(-1.5f, 1.5f);
        }
    }


    // Update is called once per frame
    void Update(){
        transform.position = new Vector3(transform.position.x, transform.position.y, 
            (startHeight + amplitude * Mathf.Sin(rate * Time.time + startOffset)));
    }
}
