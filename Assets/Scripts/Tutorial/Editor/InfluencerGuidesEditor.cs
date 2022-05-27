using UnityEditor;
using UnityEngine;


[CustomEditor(typeof(InfluencerGuides))]
public class InfluencerGuidesEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        InfluencerGuides influencerGuides = (InfluencerGuides)target;
        
        if (GUILayout.Button("Reset All Guides"))
        {
            influencerGuides.ResetAllGuides();
        }
    }
}
