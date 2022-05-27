using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Mapbox.Unity.MeshGeneration.Data;
using Mapbox.Unity.Map;

namespace Tapestry
{
    public class CameraManager : MonoBehaviour
    {
        [SerializeField]
        CameraParameters cameraParameters;
        
        // What the camera is looking at
        [SerializeField]
        GameObject target;

        // Blocks interaction when tweening in or out
        [SerializeField]
        GameObject clickBlocker;
        
        // The GPS position on the map
        [SerializeField]
        GameObject targetGPS;

		[SerializeField]
        float _zoomSpeed = 10f;

        [SerializeField]
        float _maxCameraY = 200f;
        [SerializeField]
        float _minCameraY = 30f;

        [SerializeField]
        float camPitchClose = 30f;
        [SerializeField]
        float camPitchMed = 40f;
        [SerializeField]
        float camPitchFar = 89f;

        float camUpOffset = 0.0f;

        [SerializeField]
        Vector3 camPoleOffset = new Vector3(0, 0.0f, 0);

        float startYaw = 0;
        float startTether = 0;

        bool rayCastTerrain = false;

        Camera gameCamera = null;
        Camera auxCamera = null;
        
        [SerializeField]
        Camera trackCamera = null;

        Plane mapPlane;

        UnityTile currentTile = null;

        bool playerMapMode = true;
        const float YAW_SPEED = 100.0f;

        const float DRIFT_THRESH = 100f;
        const float CREATE_VISIBILITY_THRESH = 100f;

        const float TETHER_CLOSE = 24.0f;
        const float TETHER_FAR = 100.0f;

        const float TETHER_CLOSE_WORLD = 50.0f;
        const float TETHER_WORLD_DEFAULT = 100.0f;
        const float TETHER_FAR_WORLD = 150.0f;

        const float PITCH_WORLD_MAP = 89.0f;
        public bool ZoomedOut()
        {
            return cameraParameters.tether > 60.0f;
        }

        const float maxMapZoom = 18.0f;
        const float minMapZoom = 3.0f;
        const float yawThreshold = 2.5f;
        const float zoomThreshold = 25.0f;
        const float panThreshold = 5.0f;

        AbstractMap mapController;
        Vector3 lastPosition = Vector3.zero;
        bool hasStartedDragging = false;
        static bool wasDragging = false;
        public static bool WasDragging { get { return wasDragging; } }
        Vector3 touchOrigin = Vector3.zero;
        Vector3 mouseOrigin = Vector3.zero;
        float touchYaw = 0;

        Vector2 startTouch0, startTouch1;
        Vector3 startPan0, startPan1;

        bool hadMultipleTouches = false;

        // Where the current cam target is
        Vector3 camTargetPos;
        Vector3 lastUpdatePos;

        private Vector3 CameraPosition;
        private Quaternion CameraRotation;


        //Camera tween properties
        Vector3 camPosStart;
        Vector3 camPosEnd;

        Quaternion camRotStart;
        Quaternion camRotEnd;

        float camFovStart;
        float camFovEnd;

        //Curves for smoothing lerps
        [SerializeField]
        AnimationCurve easeCurve1;

        [SerializeField]
        AnimationCurve easeCurve2;

        enum MoveState
        {
            Waiting,
            Pan,
            Rotate,
            Scale
        }
        MoveState _movestate = MoveState.Waiting;

        enum TrackingState
        {
            Idle,
            TrackingIn,
            TrackedIn,
            TrackingOut
        }
        TrackingState trackingState = TrackingState.Idle;

        [SerializeField]
        float trackedInDistFromPOI = 50f;
        [SerializeField]
        float trackedInHeight = 25f;

        float trackDuration = 1.0f;
        [SerializeField]
        float trackDurationDefault = 1.0f;

        Vector3 trackedInPos, trackedOutPos, trackTargetPos;
        float trackHeight, trackDist;
        float trackingTime;
        Quaternion trackRot;
        Quaternion trackedOutRot;
        bool atZoomLimit = false;
		public float trackPercentage;

        void OnEnable()
        {
            RequestTrackOut();
        }

        private void Awake()
        {
		}

        // Use this for initialization
        void Start()
        {
            trackDuration = trackDurationDefault;
            clickBlocker.SetActive(false);
            mapPlane = new Plane(Vector3.up, Vector2.zero);
            gameCamera = GetComponent<Camera>();
            Debug.Assert(mapPlane.normal.magnitude >= 1);
			cameraParameters.tether = cameraParameters.defaultTether;
            cameraParameters.targetMapOffset = Vector3.zero;
            // Is map zoomed out
            cameraParameters.IsWorldMap = false;

            AdjustCameraPitch();
            RecenterYaw(true);
            TapestryEventRegistry.OnEnterAR.SubscribeMethod(OnEnterAR, false);
            TapestryEventRegistry.OnLeaveAR.SubscribeMethod(OnLeaveAR, false);
            TapestryEventRegistry.OnCenterPlayer.SubscribeMethod(CenterPlayer, false);
            TapestryEventRegistry.OnToggleMapMode.SubscribeMethod(ToggleCamMode, false);
            TapestryEventRegistry.OnTrackIn.SubscribeMethod(RequestTrackIn, false);
            TapestryEventRegistry.OnTrackOut.SubscribeMethod(ForceTrackOut, false);
            mapController = GameObject.FindObjectOfType<AbstractMap>();
        }

        void OnEnterAR()
        {
            CenterPlayer();
            gameCamera.enabled = false;
        }

        void OnLeaveAR()
        {
            gameCamera.enabled = true;
        }

        void HandleSingleTouch()
        {
            if (Input.GetMouseButton(0) && !EventSystem.current.IsPointerOverGameObject())
            {
                Vector3 inputPosition = Vector3.zero;
                float enter = 0.0f;

                if (playerMapMode)
                {
                    inputPosition = Input.mousePosition;
                    if (!hasStartedDragging)
                    {
                        hasStartedDragging = true;
                        startYaw = cameraParameters.yaw;
                        touchOrigin = inputPosition;
                        Vector3 mouseVector = inputPosition - new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0);
                        touchYaw = Mathf.Atan2(mouseVector.y, mouseVector.x) * Mathf.Rad2Deg;
                        //Debug.Log("StartDrag");
                        //Debug.Log(touchOrigin);
                    }

                    if (cameraParameters.trackingPlayer)
                    {
                        Vector3 mouseVector = inputPosition - new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0);
                        float newYaw = Mathf.Atan2(mouseVector.y, mouseVector.x) * Mathf.Rad2Deg;
                        cameraParameters.yaw = startYaw - (newYaw - touchYaw);
                    }
                }
                else  // single tap drag - PANNING!
                {
                    Ray cameraToMap = gameCamera.ScreenPointToRay(Input.mousePosition);

                    RaycastHit hit;
                    // Use ground collision (just check with terrain layer
                    if (rayCastTerrain && Physics.Raycast(cameraToMap, out hit, 1000.0f)) 
                    {
                        if (hit.collider.gameObject != null)
                        {
                            UnityTile tile = hit.collider.gameObject.GetComponent<UnityTile>();
                            if (tile != null)
                                currentTile = tile;
                        }
                        inputPosition = hit.point;
                        inputPosition.y = 0;
                    }
                    else if (mapPlane.Raycast(cameraToMap, out enter))
                    {
                        inputPosition = cameraToMap.GetPoint(enter);
                    }
                    else
                    {
                        Debug.Log("MISS");
                    }

                    if (!hasStartedDragging)
                    {
                        hasStartedDragging = true;
                        startYaw = cameraParameters.yaw;
                        touchOrigin = inputPosition;
                        mouseOrigin = Input.mousePosition;
                    }

                    if (Vector3.Distance(Input.mousePosition, mouseOrigin) > 0.5f / Screen.dpi)
                    {
                        wasDragging = true;
                        cameraParameters.targetMapOffset += inputPosition - touchOrigin;
                    }

                    /*
                    // If I have dragged somewhat far, stop tracking
                    if (hasStartedDragging && Vector3.Distance(Input.mousePosition, mouseOrigin) > 2.0f / Screen.dpi)
                    {
                        cameraParameters.trackingPlayer = false;
                    }
                    */
                }
            }
            else
            {
                if (hasStartedDragging)
                {
                    hasStartedDragging = false;
                }

                wasDragging = false;
                touchOrigin = Vector3.zero;
            }
        }

        // Check if user taps on the map
        // Returns true if the user has just clicked on the map otherwise, the hit was processed
        public bool CheckClickOnMap(Vector3 screenPos, out Vector3 hitPos, bool processTap = true)
        {
            hitPos = Vector3.zero;
            if (!EventSystem.current.IsPointerOverGameObject())
            {
                Ray ray;
                RaycastHit hit;
                // First check if it hit the player game object
                ray = Camera.main.ScreenPointToRay(screenPos);
                if (Physics.Raycast(ray, out hit, Mathf.Infinity))
                {
                    if (hit.collider.gameObject != null)
                    {
                        if(processTap)
                        {
                            //if (hit.collider.gameObject.GetComponent<MapObject>() != null)
                            //{
                            //    if (hit.collider.gameObject.GetComponent<MapObject>().HandleTap())
                            //        return false;
                            //}
                        }
                        // should only be the terrain.  check for other object types before this
                        hitPos = hit.point;
                        return true;
                    }
                }
            }

            return false;
        }

        //Translate a given point to a map point
        public void CheckPosOnMap(Vector3 screenPos, out Vector3 hitPos)
        {
            hitPos = Vector3.zero;
            RaycastHit hit;
            if (Camera.main != null)
            {
                Ray ray = Camera.main.ScreenPointToRay(screenPos);
                if (Physics.Raycast(ray, out hit, Mathf.Infinity))
                {
                    hitPos = hit.point;
                }
            }
        }

        void AdjustCameraPitch()
        {
            if (playerMapMode)
            {

                float tratio = cameraParameters.tether / cameraParameters.defaultTether; // (cameraParameters.tether - cameraParameters.defaultTether * 0.25f) / cameraParameters.defaultTether;
                if (cameraParameters.tether < cameraParameters.defaultTether)
                {
                    cameraParameters.pitch = Mathf.Clamp(camPitchClose + tratio * (camPitchMed - camPitchClose), camPitchClose, camPitchMed);
                }
                else
                {
                    tratio = (cameraParameters.tether - cameraParameters.defaultTether) / (_maxCameraY - cameraParameters.defaultTether);
                    cameraParameters.pitch = Mathf.Clamp(camPitchMed + tratio * (camPitchFar - camPitchMed), camPitchMed, camPitchFar);
                }
                float clipAdd = Mathf.Pow(Mathf.Max(gameCamera.transform.position.y / 250.0f, 1.0f) - 1.0f, 2.0f) + Mathf.Max(gameCamera.transform.position.y - 250.0f, 0.0f); // stays 800m until mid pitch, then rapidly increases
                gameCamera.farClipPlane = 800.0f + clipAdd;
                //RenderSettings.fogEndDistance = gameCamera.farClipPlane; // we used to have variable fog, but now it must be by the clipping plane
            }
            else
            {
                cameraParameters.pitch = PITCH_WORLD_MAP;
            }
        }

        void HandleKeyboard()
        {
            //Debug, only for use in editor
            if (Input.GetKeyDown(KeyCode.LeftArrow))
            {
                cameraParameters.yaw += 10.0f;
            }

            if (Input.GetKeyDown(KeyCode.RightArrow))
            {
                cameraParameters.yaw -= 10.0f;
            }

            if (Input.GetKeyDown(KeyCode.T))
            {
                ToggleCamMode();
            }

            if (Input.GetKeyDown(KeyCode.C))
            {
                RecalcCenter();
            }
            // Handle tether adjustment
            float oldTether = cameraParameters.tether;
            float adjustTether = Input.GetAxis("Mouse ScrollWheel") * _zoomSpeed * 10.0f;
            float requestedTether = cameraParameters.tether - adjustTether;
            // Clamp the distance to min/max Y
            if (mapController && mapController.Zoom < maxMapZoom || requestedTether > _maxCameraY)
            {
                cameraParameters.tether = _maxCameraY;
                float newMapZoom = Mathf.Clamp(mapController.Zoom + (adjustTether * 0.01f), minMapZoom, maxMapZoom);
                mapController.UpdateMap(newMapZoom);
                if (!cameraParameters.IsWorldMap)
                {
                    cameraParameters.IsWorldMap = true;
                    cameraParameters.recenterYaw = true;
                    playerMapMode = false;
                }
            }
            else
            {
                if (cameraParameters.IsWorldMap)
                {
                    cameraParameters.IsWorldMap = false;
                    playerMapMode = true;
                    RecenterCamera();
                }
                cameraParameters.tether = Mathf.Clamp(requestedTether, _minCameraY, _maxCameraY);
            }
            // See if I can transition to the world map
            UpdateWorldMapCheck();
            AdjustCameraPitch();
        }

        //Independent Check to handle visibility of 10K View button
        public void UpdateWorldMapCheck(bool onlyCheckButton = false)
        {
            if ((!atZoomLimit || onlyCheckButton) && cameraParameters.tether >= _maxCameraY)
            {
                atZoomLimit = true;
            }
            if ((atZoomLimit || onlyCheckButton) && cameraParameters.tether < _maxCameraY)
            {
                atZoomLimit = false;
            }
        }

        void HandleMultipleTouch()
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            float zoomFactor = 0.0f;

            if (touchZero.phase == TouchPhase.Began || touchOne.phase == TouchPhase.Began)
            {
                float enter = 0.0f;
                startYaw = cameraParameters.yaw;
                startTouch0 = touchZero.position;
                startTouch1 = touchOne.position;

                Ray cameraToMap = gameCamera.ScreenPointToRay(touchZero.position);
                if (mapPlane.Raycast(cameraToMap, out enter))
                {
                    startPan0 = cameraToMap.GetPoint(enter);
                }

                cameraToMap = gameCamera.ScreenPointToRay(touchOne.position);
                if (mapPlane.Raycast(cameraToMap, out enter))
                {
                    startPan1 = cameraToMap.GetPoint(enter);
                }

                startTether = cameraParameters.tether;
            }
            else if (touchZero.phase == TouchPhase.Ended || touchOne.phase == TouchPhase.Ended)
            {
            }
            else
            {
                // Find the position in the previous frame of each touch.
                Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
                Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

                Vector2 vecPrev = startTouch0 - startTouch1;
                float ang1 = Mathf.Atan2(-vecPrev.y, vecPrev.x);
                Vector2 vecNew = touchZero.position - touchOne.position;
                float ang2 = Mathf.Atan2(-vecNew.y, vecNew.x);

                // Find the magnitude of the vector (the distance) between the touches in each frame.
                Vector3 prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos);
                Vector3 touchDeltaMag = (touchZero.position - touchOne.position);

                float newYaw = startYaw + (ang2 - ang1) * Mathf.Rad2Deg;
                float zoomMag = Mathf.Abs(touchDeltaMag.magnitude - prevTouchDeltaMag.magnitude);

                float enter = 0.0f;
                Vector3 touchZeroMap = Vector3.zero;
                Vector3 touchOneMap = Vector3.zero;

                Ray cameraToMap = gameCamera.ScreenPointToRay(touchZero.position);
                RaycastHit hit;
                // Use ground collision (just check with terrain layer
                if (rayCastTerrain && Physics.Raycast(cameraToMap, out hit, 1000.0f))
                {
                    touchZeroMap = hit.point;
                    touchZeroMap.y = 0;
                }
                else if (mapPlane.Raycast(cameraToMap, out enter))
                {
                    touchZeroMap = cameraToMap.GetPoint(enter);
                }

                cameraToMap = gameCamera.ScreenPointToRay(touchOne.position);

                // Use ground collision (just check with terrain layer
                if (rayCastTerrain && Physics.Raycast(cameraToMap, out hit, 1000.0f))
                {
                    touchOneMap = hit.point;
                    touchOneMap.y = 0;
                }
                else if (mapPlane.Raycast(cameraToMap, out enter))
                {
                    touchOneMap = cameraToMap.GetPoint(enter);
                }

                Vector3 panMag = ((touchOneMap - startPan1) + (touchZeroMap - startPan0))*0.5f;
                panMag.y = 0;
                if (Vector3.Dot((touchOne.position - touchOnePrevPos),(touchZero.position - touchZeroPrevPos)) < 0.707f)
                {
                    panMag = Vector3.zero;
                }

                switch (_movestate)
                {
                    case MoveState.Rotate:
                        cameraParameters.yaw = newYaw;
                        goto case MoveState.Scale; //Zoom should be allowed during both rotation and scale

                    case MoveState.Scale:
                        // Find the difference in the distances between each frame.
                        zoomFactor = 0.05f * (touchDeltaMag.magnitude - prevTouchDeltaMag.magnitude);
                        float oldTether = cameraParameters.tether;

                        float adjustTether = zoomFactor * _zoomSpeed;
                        float requestedTether = cameraParameters.tether - adjustTether;
                        // Clamp the distance to min/max Y
                        if (mapController && mapController.Zoom < maxMapZoom || requestedTether > _maxCameraY)
                        {
                            cameraParameters.tether = _maxCameraY;
                            float newMapZoom = Mathf.Clamp(mapController.Zoom + (adjustTether * 0.01f), minMapZoom, maxMapZoom);
                            mapController.UpdateMap(newMapZoom);
                            if (!cameraParameters.IsWorldMap)
                            {
                                cameraParameters.IsWorldMap = true;
                                cameraParameters.recenterYaw = true;
                                playerMapMode = false;
                            }
                        }
                        else
                        {
                            cameraParameters.tether = Mathf.Clamp(requestedTether, _minCameraY, _maxCameraY);
                            if (cameraParameters.IsWorldMap)
                            {
                                cameraParameters.IsWorldMap = false;
                                playerMapMode = true;
                                RecenterCamera();
                            }
                        }

                        // Clamp the distance to min/max Y
                        UpdateWorldMapCheck();
                        AdjustCameraPitch();
                        break;

                    case MoveState.Pan:
                        if (!playerMapMode)
                        {
//                            cameraParameters.targetMapOffset += panMag;
//                            cameraParameters.trackingPlayer = false;
                        }
                        goto case MoveState.Rotate; //pan should be allowed during both rotation and scale
                    default:
                        //Prioritizes locking rotation first
                        if (Mathf.Abs(newYaw - startYaw) > yawThreshold)
                        {
                            _movestate = MoveState.Rotate;
                        }
                        else if (zoomMag > zoomThreshold)
                        {
                            _movestate = MoveState.Scale;
                        }
                        //                        else if (playerMapMode && panMag.magnitude > panThreshold)
                        //                          _movestate = MoveState.Pan;
                        break;
                }
            }
        }

        // Recenter the map to 0
        public void RecenterYaw(bool forceRecenter = false)
        {
            if(forceRecenter)
            {
                cameraParameters.yaw += 15;
            }
            cameraParameters.recenterYaw = true;
        }

        void LateUpdate()
        {
            if (ARManager.Instance.ARActive) { return; }

            switch (trackingState)
            {
                // Interpolate along a parabola in
                case TrackingState.TrackingIn:
                    {   
                        clickBlocker.SetActive(true);
                        trackingTime += Time.deltaTime;
                        trackingTime = Mathf.Min(trackingTime, trackDuration);

                        var normalizedTime = easeCurve1.Evaluate(trackingTime / trackDuration);
					    trackPercentage = normalizedTime;

                        trackCamera.transform.position = Vector3.Lerp(camPosStart, camPosEnd, normalizedTime);
                        trackCamera.transform.rotation = Quaternion.Lerp(camRotStart, camRotEnd, normalizedTime);
                        trackCamera.fieldOfView = Mathf.Lerp(camFovStart, camFovEnd, normalizedTime);

                        if (trackingTime >= trackDuration)
                        {
                            trackingState = TrackingState.TrackedIn;

                            //Force values to end target
                            trackCamera.transform.position = camPosEnd;
                            trackCamera.transform.rotation = camRotEnd;
                            trackCamera.fieldOfView = camFovEnd;
                            clickBlocker.SetActive(false);
                        }

                        // Hiding the Avatar half way into track in
                        if (trackingTime >= trackDuration / 2)
                        {
                            TapestryEventRegistry.OnSetAvatarState.Invoke(false);

                        }
                        return;
                    }
                // Interpolate along a parabola out
                case TrackingState.TrackingOut:
                    {
                        TapestryEventRegistry.OnSetAvatarState.Invoke(true);
                        clickBlocker.SetActive(true);
                        trackingTime += Time.deltaTime;
                        trackingTime = Mathf.Min(trackingTime, trackDuration);

                        var normalizedTime = easeCurve1.Evaluate(trackingTime / trackDuration);
						trackPercentage = 1.0f - normalizedTime;

						//Inverted start/end properties to reverse animation back to map standard view
                        trackCamera.transform.position = Vector3.Lerp(camPosEnd, camPosStart, normalizedTime);
                        trackCamera.transform.rotation = Quaternion.Lerp(camRotEnd, camRotStart, normalizedTime);
                        trackCamera.fieldOfView = Mathf.Lerp(camFovEnd, camFovStart, normalizedTime);

                        if (trackingTime >= trackDuration)
                        {
                            trackingState = TrackingState.Idle;

                            //Force values to original target
                            trackCamera.transform.position = camPosStart;
                            trackCamera.transform.rotation = camRotStart;
                            trackCamera.fieldOfView = camFovStart;
                            trackDuration = trackDurationDefault;
                            clickBlocker.SetActive(false);
                            ResetGameCamera();
                        }
                        return;
                    }
                // Do nothing
                case TrackingState.TrackedIn:
                    return;
                // Allow normal camera control
                case TrackingState.Idle:
                default:
                    break;
            }

            if (cameraParameters.recenterYaw)
            {
                cameraParameters.yaw = Mathf.SmoothStep(cameraParameters.yaw, 0, Time.deltaTime * 10.0f);
                if (Mathf.Abs(cameraParameters.yaw) < 0.01f)
                {
                    cameraParameters.yaw = 0;
                    cameraParameters.recenterYaw = false;
                }
            }

            if (cameraParameters.recenterCam)
            {
                cameraParameters.targetMapOffset = Vector3.MoveTowards(cameraParameters.targetMapOffset, Vector3.zero, Time.deltaTime * cameraParameters.recenterSpeed);
                if (cameraParameters.targetMapOffset.magnitude < 0.01f)
                {
                    cameraParameters.targetMapOffset = Vector3.zero;
                    cameraParameters.recenterCam = false;
                    cameraParameters.trackingPlayer = true;
                }
            }

            if (cameraParameters.trackingPlayer)
            {
                if (cameraParameters.trackingGPS)
                {
                    camTargetPos = targetGPS.transform.position;
                }
                else
                {
                    camTargetPos = target.transform.position;
                }
            }

            float adjustedTether = cameraParameters.tether;
            Vector3 camPos = camTargetPos - cameraParameters.targetMapOffset + camPoleOffset;
            //float adjustedTether = cameraParameters.tether > 200.0f ? cameraParameters.tether - 180.0f : cameraParameters.tether;
			float horizDist = adjustedTether * Mathf.Cos(cameraParameters.pitch * Mathf.Deg2Rad);
            Vector3 camPole = new Vector3(horizDist * Mathf.Sin(cameraParameters.yaw * Mathf.Deg2Rad), adjustedTether * Mathf.Sin(cameraParameters.pitch * Mathf.Deg2Rad), -horizDist * Mathf.Cos(cameraParameters.yaw * Mathf.Deg2Rad));
            camPos += camPole;
            transform.localEulerAngles = new Vector3(cameraParameters.pitch, -cameraParameters.yaw, 0);

            Vector3 camForward = transform.forward;
            camForward.y = 0;
            camForward.Normalize();
			//Debug.Log("BRB " + camUpOffset * adjustedTether + " (" + adjustedTether + " vs " + cameraParameters.tether + ")");
			transform.localPosition = transform.localPosition = camPos + (camForward * camUpOffset * adjustedTether);

            if (Input.touchSupported)
            {
                if (Input.touchCount == 1)
                {
                    Touch touchZero = Input.GetTouch(0);
                    if (touchZero.phase == TouchPhase.Began)
                    {
                        _movestate = MoveState.Pan;
                    }

                    //2 checks here because if a finger drops out from a 2 finger touch, we don't want to pan
                    if (_movestate == MoveState.Pan && !hadMultipleTouches && !EventSystem.current.IsPointerOverGameObject(touchZero.fingerId))
                    {
                        HandleSingleTouch();
                    }
                    else
                    {
                        hasStartedDragging = false;
                    }
                }
                else if (Input.touchCount >= 2)
                {
                    //W/o this, if you put down two fingers and didn't lock into a 
                    //rotate or scale action, lifting the second finger would cause a jump.
                    hadMultipleTouches = true;
                    HandleMultipleTouch();
                }
                else
                {
                    HandleSingleTouch();
                    _movestate = MoveState.Waiting;
                    hadMultipleTouches = false;
                }
            }
            else
            {
                HandleSingleTouch();
            }

            HandleKeyboard();

            // Clamps the angle
            if (cameraParameters.yaw > 360.0f)
            {
                cameraParameters.yaw -= 360.0f;
            }
            else if (cameraParameters.yaw < -360.0f)
            {
                cameraParameters.yaw += 360.0f;
            }

        }

        Vector3 InterpolateAlongParabola(float normalizedTime)
        {
            // Only consider the first half of the parabola
            normalizedTime /= 2f;
            float height = trackHeight * (4f * (normalizedTime * normalizedTime - normalizedTime) + 1);
            Vector3 newPos = new Vector3(2f * normalizedTime * trackDist, height, 0f);
            Vector3 rotatedPos = trackRot * newPos;
            newPos = trackedOutPos + rotatedPos;
            newPos.y = height;
            return newPos;
        }

        Vector3 InterpolateAlongLine(float normalizedTime)
        {
            float height = (1 - normalizedTime) * trackHeight;
            Vector3 newPos = new Vector3(normalizedTime * trackDist, height, 0f);
            Vector3 rotatedPos = trackRot * newPos;
            newPos = trackedOutPos + rotatedPos;
            newPos.y = height;
            return newPos;
        }

        public void RecenterCamera()
        {
            cameraParameters.trackingGPS = false;
            if (cameraParameters.targetMapOffset.magnitude >= DRIFT_THRESH)
            {
                cameraParameters.targetMapOffset = Vector3.zero;
                cameraParameters.recenterCam = false;
                cameraParameters.trackingPlayer = true;
            }
            else
            {
                cameraParameters.recenterSpeed = 500.0f;
                cameraParameters.recenterCam = true;
                _movestate = MoveState.Waiting;
            }
            if (!playerMapMode)
            {
                cameraParameters.pitch = PITCH_WORLD_MAP;
            }
            else
            {
                AdjustCameraPitch();
            }
        }

        void CenterPlayer()
        {
            cameraParameters.tether = cameraParameters.defaultTether;
            cameraParameters.targetMapOffset = Vector3.zero;
            // Is map zoomed out
            cameraParameters.IsWorldMap = false;
            mapController.UpdateMap(maxMapZoom);
            playerMapMode = true;
        }

        public void RecenterGps()
        {
            RecenterCamera();
        }

        public void RecalcCenter()
        {
            cameraParameters.targetMapOffset += target.transform.position - camTargetPos;
            camTargetPos = target.transform.position;
            RecenterCamera();
        }

        public void ToggleCamMode()
        {
            // JL removed the ability swap modes
            
            if (!cameraParameters.IsWorldMap)
            {
                playerMapMode = !playerMapMode;
                RecenterCamera();
            }
            
        }

        public Vector3 GetScreenPosition(Vector3 worldPos)
        {
            return gameCamera.WorldToViewportPoint(worldPos);           
        }

        public bool RequestTrackIn()
        {
            if (trackingState == TrackingState.Idle)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public void RequestTrackIn(Camera endCamera)
        {
            if (endCamera == null) {
                return;
            }

            if (trackingState == TrackingState.Idle)
            {
                camPosStart = transform.position;
                camPosEnd = endCamera.transform.position;

                camRotStart = transform.rotation;
                camRotEnd = endCamera.transform.rotation;

                camFovStart = gameCamera.fieldOfView;
                camFovEnd = endCamera.fieldOfView;

                trackingTime = 0f;
                trackingState = TrackingState.TrackingIn;
                
                SetTrackCameraValues();
                ActivateTrackCamera();
            }
        }

        public bool RequestTrackIn(Vector3 pos)
        {
            //Vector3 pos = refCamera.transform.position;

            if(trackingState == TrackingState.Idle)
            {
                trackTargetPos = pos;
                Vector3 camPosGround = transform.position;
                camPosGround.y = pos.y;
                Vector3 dirPOIToCam = (camPosGround - pos).normalized;
                trackedInPos = pos + dirPOIToCam * trackedInDistFromPOI;
                trackedInPos.y += trackedInHeight;
                trackedOutPos = transform.position;

                float theta = Mathf.Atan2(-dirPOIToCam.z, -dirPOIToCam.x) * Mathf.Rad2Deg;
                trackRot = Quaternion.Euler(0f, -theta, 0f);
                trackedOutRot = transform.rotation;

                trackHeight = trackedOutPos.y - trackedInPos.y;
                trackDist = (camPosGround - trackedInPos).magnitude;
                trackingTime = 0f;
                trackingState = TrackingState.TrackingIn;

                return true;
            }
            else
            {
                return false;
            }
        }

        public void RequestTrackOut()
        {
            if (trackingState == TrackingState.TrackedIn)
            {
                trackingTime = 0f;
                trackingState = TrackingState.TrackingOut;
            }
        }

        private void ForceTrackOut()
        {
            if (trackingState == TrackingState.TrackedIn)
            {
                trackingTime = 0f;
                trackingState = TrackingState.TrackingOut;
            } 
            else if (trackingState == TrackingState.TrackingIn)
            {
                camPosEnd = transform.position;
                camRotEnd = transform.rotation;
                camFovEnd = gameCamera.fieldOfView;

                trackingState = TrackingState.TrackingOut;
            }
        }

        private void ActivateTrackCamera()
        {
            gameCamera.enabled = false;
            trackCamera.enabled = true;
        }

        private void SetTrackCameraValues()
        {
            trackCamera.transform.position = gameCamera.transform.position;
            trackCamera.transform.rotation = gameCamera.transform.rotation;
            trackCamera.fieldOfView = gameCamera.fieldOfView;
        }

        private void ResetGameCamera()
        {
            gameCamera.enabled = true;
            trackCamera.enabled = false;
        }

        public bool GetIsTrackedIn()
        {
            return trackingState == TrackingState.TrackedIn;
        }
    }
}