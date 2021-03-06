﻿using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TextMaterialProps : MonoBehaviour
{

    public float fontWeight = 1.0f;
    private float _fontWeight = 0;


    public float faceDilation = 0.01f;
    private float _faceDilation = 0;

    TextMeshProUGUI tmp;

    Material mat;

    // Start is called before the first frame update
    void Start()
    {
        tmp = GetComponent<TextMeshProUGUI>();
        mat = tmp.fontMaterial;

    }

    // Update is called once per frame
    void Update(){
        if (faceDilation != _faceDilation) {
            mat.SetFloat(ShaderUtilities.ID_FaceDilate, faceDilation);
            _faceDilation = mat.GetFloat(ShaderUtilities.ID_FaceDilate);
            faceDilation = _faceDilation;

        }

        if (fontWeight != _fontWeight)
        {
            mat.SetFloat(ShaderUtilities.ID_WeightNormal, fontWeight);
            _fontWeight = mat.GetFloat(ShaderUtilities.ID_WeightNormal);
            fontWeight = _fontWeight;

        }
    }
}
