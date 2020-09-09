using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetInteractiveShaderEffects : MonoBehaviour
{
    [SerializeField]
    RenderTexture rt;
        
    Transform target;

    void Awake()
    {
        Shader.SetGlobalTexture("_GlobalEffectRT", rt);
        Shader.SetGlobalFloat("_OrthographicCamSize", GetComponent<Camera>().orthographicSize);
    }

    private void Update()
    {
        if (!target)
        {
            if (GameObject.FindGameObjectWithTag("Ripples"))
                target = GameObject.FindGameObjectWithTag("Ripples").transform;
        }
        else
        {

            //transform.position = new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z); // orig
            transform.position = new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z-1);
            Shader.SetGlobalVector("_Position", transform.position);
        }
    }


}