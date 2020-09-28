using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


[CustomEditor(typeof(ObjectPath))]
public class ObjectPathEditor : Editor
{
    public override void OnInspectorGUI() //2
    {
        // Call base class method
        base.DrawDefaultInspector();

        ObjectPath path = (ObjectPath)target;

        if (GUILayout.Button("Build Path")) //10
        {
            path.BuildPath();
        }
    }
}
