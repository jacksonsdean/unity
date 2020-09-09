using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TextMaterialProps : MonoBehaviour
{
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
    }
}
