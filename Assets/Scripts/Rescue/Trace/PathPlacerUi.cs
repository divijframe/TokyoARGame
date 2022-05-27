using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UiDrawLine;
using UnityEngine.UI;

public class PathPlacerUi : MonoBehaviour {
    /// <summary>
    /// (andyp) This script is for use primarily in the editor. Not during runtime.
    /// Generate node positions along splines so they can be manually corrected by a designer since they don't always look pleasing to the eye.
    /// </summary>
    public float spacingFromStartNode = 150f;
    public float spacingBetweenNodes = 50f;
    public float nodeSphereScale = 10f;
    private float startRatioCached;
    private float lengthRatioCached;

    public CurveNodeContainer curveNodeContainer;

    public void RemoveAllNodes(){
        foreach(Transform objTrans in curveNodeContainer.nodeContainerList)
        {
            if(objTrans != null){
                DestroyImmediate(objTrans.gameObject);
            }
        }

        curveNodeContainer.nodeContainerList.Clear ();
    }

    public void GenerateNodes(){
        RemoveAllNodes ();

        Vector3[] points = CalculateEvenlySpacedPoints(curveNodeContainer.traceGuideLine);
        int nodeNum = 0;
        foreach (Vector3 p in points)
        {
            //GameObject obj = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            GameObject obj = new GameObject("Node" + nodeNum);
            nodeNum++;
            obj.AddComponent<RectTransform>();
            obj.AddComponent<Image>();
            obj.GetComponent<RectTransform> ().sizeDelta = new Vector2 (10, 10);
            obj.transform.SetParent (curveNodeContainer.nodeContainer.transform, false);
            obj.transform.localPosition = p;

            curveNodeContainer.nodeContainerList.Add (obj.transform);


            obj.transform.localScale = Vector3.one;// * spacing * .5f;
        }
    }

    private Vector3 GetEndOfLinePosition(UIMeshLine _uiMeshLine, float fillAmount){
        _uiMeshLine.lengthRatio = fillAmount;
        return _uiMeshLine.endOfLinePosition;
    }

    private Vector3 GetEndOfLinePosition(UIMeshLine _uiMeshLine){
        return _uiMeshLine.endOfLinePosition;
    }

    private Vector3 GetStartOfLinePosition(UIMeshLine _uiMeshLine){
        return _uiMeshLine.startOfLinePosition;
    }

    public Vector3[] CalculateEvenlySpacedPoints(UIMeshLine _uiMeshLine)
    {
        float timeStep = 0.001f;

        startRatioCached = _uiMeshLine.startRatio;
        lengthRatioCached = _uiMeshLine.lengthRatio;
        float currentTime = timeStep;
        _uiMeshLine.lengthRatio = currentTime;
        //GetStartOfLinePosition

        curveNodeContainer.startPosition.localPosition = GetStartOfLinePosition (_uiMeshLine);

        List<Vector3> evenlySpacedPoints = new List<Vector3>();

        //TODO!. (andyp) maybe exclude this one to leave out starting point.  Or make secondary start fill ratio value to control first node position
        //evenlySpacedPoints.Add(GetEndOfLinePosition(_uiMeshLine));
        Vector3 previousPoint = GetStartOfLinePosition(_uiMeshLine);
        float dstSinceLastEvenPoint = 0;

        int nodeIndex = 0;

        while (currentTime <= lengthRatioCached)
        {
            currentTime += timeStep;
            _uiMeshLine.lengthRatio = currentTime;
            Vector3 currentEndPoint = GetEndOfLinePosition (_uiMeshLine);
            Vector3 dstDifference = (currentEndPoint - previousPoint);
            dstSinceLastEvenPoint = dstDifference.magnitude;

            float spacing = nodeIndex == 0 ? spacingFromStartNode : spacingBetweenNodes;
            if (dstSinceLastEvenPoint >= spacing)
            {
                Debug.Log ("dstSinceLastEvenPoint: " + dstSinceLastEvenPoint + " : " + currentEndPoint + " : " + previousPoint);
                Vector3 newPoint = previousPoint + Vector3.ClampMagnitude(dstDifference, spacing);
                evenlySpacedPoints.Add(newPoint);
                previousPoint = newPoint;
                nodeIndex++;
            }
        }
        //Reset length to original value
        _uiMeshLine.lengthRatio = lengthRatioCached;
        return evenlySpacedPoints.ToArray();
    }
}
