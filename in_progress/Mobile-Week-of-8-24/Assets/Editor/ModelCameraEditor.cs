using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(ModelCamera))]
public class ModelCameraEditor : Editor
{
    public override void OnInspectorGUI() //2
    {
        // Call base class method
        base.DrawDefaultInspector();

        ModelCamera cam = (ModelCamera) target;

        if (GUILayout.Button("Take Photo")) //10
        {
            cam.TakePhoto();
        }
    }

}
