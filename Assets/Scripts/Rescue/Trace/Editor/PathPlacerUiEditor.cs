using UnityEngine;
using System.Collections;
using UnityEditor;

[CustomEditor(typeof(PathPlacerUi))]
public class ObjectBuilderEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        PathPlacerUi pathPlacerUi = (PathPlacerUi)target;
        if(GUILayout.Button("Regenerate All Nodes"))
        {
            pathPlacerUi.GenerateNodes();
        }

        if(GUILayout.Button("Remove All Nodes"))
        {
            pathPlacerUi.RemoveAllNodes();
        }
    }
}