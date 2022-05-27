using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UiDrawLine;
using UnityEngine.UI;

public class CurveNodeContainer : MonoBehaviour {
    public List<Transform> nodeContainerList = new List<Transform> ();
    [HideInInspector]
    public List<RescueTraceNode> nodesList = new List<RescueTraceNode>();

    public Transform nodeContainer;

    public UIMeshLine traceGuideLine;

    public Transform startPosition;

    void Awake(){
        startPosition.gameObject.SetActive (false);
    }

    public void SpawnNodes(RescueTraceNode rescueTraceNodePrefab){
        foreach(Transform container in nodeContainerList){
            container.GetComponent<Image> ().enabled = false;
            RescueTraceNode node = Instantiate(rescueTraceNodePrefab);
            node.transform.SetParent(container.transform, false);
            node.transform.localPosition = Vector3.zero;
            nodesList.Add(node);
        }
    }
}
