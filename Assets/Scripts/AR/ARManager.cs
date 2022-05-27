using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

namespace Tapestry
{
    public class ARManager : MonoBehaviour
    {
        public static ARManager Instance = null;

        [SerializeField]
        GameObject ARRoot;
        [SerializeField]
        GameObject ARSessionOrigin;
        [SerializeField]
        ARSession ARSession;
        [SerializeField]
        PlayerParameters playerParameters;
        
        public Transform refPosition; // a reference to a position in which AR objects will move to when clicked
        public Camera ARCamera;
        public bool ARActive = false;
        
        private float clicktime;
        
        private void Awake()
        {
            Debug.Assert (Instance == null);
            Instance = this;
            Input.compass.enabled = true;
        }

        // Start is called before the first frame update
        void Start()
        {
            TapestryEventRegistry.OnEnterAR.SubscribeMethod(OnEnterAR, false);
            TapestryEventRegistry.OnLeaveAR.SubscribeMethod(OnLeaveAR, false);
        }

        void OnEnterAR()
        {
            ARActive = true;
            ARRoot.SetActive(true);
            ARSession.Reset();
            ARRoot.transform.position = playerParameters.avatarPos + new Vector3(0, 5, 0);
            ARRoot.transform.rotation = Quaternion.Euler(0, Input.compass.trueHeading, 0);
            ARRoot.transform.localScale = Vector3.one;
        }

        void OnLeaveAR()
        {
            ARActive = false;
            ARRoot.SetActive(false);
        }

        

        void Update()
        {
            if (!ARActive) return;

            #region focusing Object

            Ray ray = ARCamera.ScreenPointToRay(new Vector3(Screen.width/2, Screen.height/2));
            RaycastHit hit;
            int mask = 1 << 13;

            if (Physics.Raycast(ray, out hit, Mathf.Infinity, mask))
            {
                if (hit.transform.parent != null)
                {
                    ARGlassSquare glassSquare = hit.transform.parent.GetComponent<ARGlassSquare>();
                    if (glassSquare != null)
                    {
                        glassSquare.GetComponentInParent<ARMapObjectWidget>().SetOffersInfoState(false, glassSquare);
                        glassSquare.OnFocusAction();
                        
                    }
                }
            }

            #endregion


            #region Clicking Object

            bool click = false;


            if (Input.GetMouseButtonDown(0))
            {
                clicktime = Time.time;
            }
            if (Input.GetMouseButtonUp(0))
            {
                if (Time.time - clicktime < 0.25f)
                {
                    click = true;
                }
            }

            if (click)
            {
                ray = ARCamera.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out hit, Mathf.Infinity, mask))
                {
                    if (hit.transform.parent != null)
                    {
                        ARGlassSquare glassSquare = hit.transform.parent.GetComponent<ARGlassSquare>();
                        if (glassSquare != null)
                        {
                            glassSquare.GetComponentInParent<ARMapObjectWidget>().SetOffersInfoState(false, glassSquare);
                            glassSquare.OnClickAction();
                        }
                    }
                }
            }
            #endregion
            
        }
    }
}