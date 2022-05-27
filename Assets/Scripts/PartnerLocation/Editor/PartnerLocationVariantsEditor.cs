using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(PartnerLocationVariants))]
public class PartnerLocationVariantsEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        PartnerLocationVariants variants = (PartnerLocationVariants)target;
        
        if (GUILayout.Button("Reset All Deals"))
        {
            variants.ResetAllDeals();
        }
        
        if (GUILayout.Button("Start All Deals"))
        {
            variants.StartAllDeals();
        }

    }
}
