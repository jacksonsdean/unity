using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cloud : MonoBehaviour
{
    public static readonly bool COLOR_CHANGE_ENABLED = false;
    [SerializeField]
    Gradient colorGradient;

    [SerializeField]
    Vector2 sunsetRange;
    [SerializeField]
    Vector2 sunriseRange;

    [SerializeField]
    bool update = false;
    [SerializeField]
    float updateInterval = 1.0f;
    MeshRenderer mr;

    public float t =0;


    Color defaultColor;
    // Start is called before the first frame update
    void Start(){
        if (!COLOR_CHANGE_ENABLED) return;
        mr = GetComponent<MeshRenderer>();
        defaultColor = mr.material.GetColor("_BaseColor");

        CheckColorChange();

        if (update) 
            InvokeRepeating("CheckColorChange", updateInterval, updateInterval);
    }


    void CheckColorChange() {
        bool colorChange = false;
        float percent = 0;
        t = Sun.TimeOfDay;

        if (Sun.TimeOfDay >= sunriseRange.x && Sun.TimeOfDay <= sunriseRange.y)
        {
            percent = (Sun.TimeOfDay - sunriseRange.x) / (sunriseRange.y - sunriseRange.x);
            colorChange = true;
        }
        else if (Sun.TimeOfDay >= sunsetRange.x && Sun.TimeOfDay <= sunsetRange.y)
        {
            percent = (Sun.TimeOfDay - sunsetRange.x) / (sunsetRange.y - sunsetRange.x);
            colorChange = true;
        }

        int id = Shader.PropertyToID("_BaseColor");
        if (colorChange) mr.material.DOColor(colorGradient.Evaluate(percent),id, 1.0f);
        else mr.material.DOColor(defaultColor, id, 1.0f); 


    }
   
}
