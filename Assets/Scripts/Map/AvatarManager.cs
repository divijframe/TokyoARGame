using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Mapbox.Unity.Map;
using Mapbox.Unity.Location;

namespace Tapestry
{
    using Mapbox.Unity.Location;
    using Mapbox.Utils;
    using Mapbox.Unity.Map;

    public class AvatarManager : MonoBehaviour
    {
        [SerializeField]
        PlayerParameters playerParameters;
        [SerializeField]
        CameraParameters cameraParameters;
        [SerializeField]
        GameObject avatarElements;

        [SerializeField]
        Animator CharacterAnimator;

        [SerializeField]
        Transform avatarSpawnPoint;

        [SerializeField]
        GameObject activationRadius;

        [SerializeField]
        GameObject radialPointers;

        [SerializeField]
        float speed = 0.05f;
        [SerializeField]
        float rotationSpeed = 360.0f;
        [SerializeField]
        Camera mapCamera;
        [SerializeField]
        Camera ARCamera;

        ILocationProvider _locationProvider;
        Vector2d gpsLocation;
        bool followGPS = false;
        private bool enableInput = false;

        void LocationProvider_OnLocationUpdated(Location location)
        {
//            _locationProvider.OnLocationUpdated -= LocationProvider_OnLocationUpdated;
            gpsLocation = location.LatitudeLongitude;
            playerParameters.gpsPos = mapController.GeoToWorldPosition(gpsLocation);
            //Debug.Log("OnLocationUpdated " + location.LatitudeLongitude);
        }
        // Distance in Meters for interaction with character
        const float InteractionRadius = 50.0f;

        float clicktime;
        Plane mapPlane;
        GameObject cachedAvatar = null;
        AbstractMap mapController;
        private void Start()
        {
            // Default state
            playerParameters.followingGPS = false;
            followGPS = false;
            mapPlane = new Plane(Vector3.up, Vector2.zero);
            TapestryEventRegistry.OnAvatarSelected.SubscribeMethod(SpawnAvatar, false);
            TapestryEventRegistry.OnSetAvatarState.SubscribeMethod(SetAvatarState, false);
            TapestryEventRegistry.OnGoTo.SubscribeMethod(MoveAvatarToPosition, false);
            TapestryEventRegistry.OnTutorialStarted.SubscribeMethod(OnEnableAvatarInput, true);
            mapController = GameObject.FindObjectOfType<AbstractMap>();
            mapController.OnUpdated += MapUpdated;
            _locationProvider = LocationProviderFactory.Instance.DefaultLocationProvider;
            _locationProvider.OnLocationUpdated += LocationProvider_OnLocationUpdated; ;
        }

        private void SetAvatarState(bool isHidden)
        {
            avatarElements.SetActive(isHidden);
        }

        private void SpawnAvatar(AvatarParameters avatarReference)
        {
            Destroy(cachedAvatar);
            if (avatarSpawnPoint == null) {
                return;
            }
            GameObject avatar = Instantiate(avatarReference.prefabReference, avatarSpawnPoint.position, avatarSpawnPoint.rotation, avatarSpawnPoint);
            CharacterAnimator = avatar.GetComponent<Animator>(); // Only cuz I know it has an animator, Will fix when we get the Avatars
            cachedAvatar = avatar;
        }

        void MapUpdated()
        {
            transform.position = mapController.GeoToWorldPosition(playerParameters.avatarLatLng);
            playerParameters.avatarPos = transform.position;
            playerParameters.targetPos = transform.position;
        }

        private void MoveAvatarToPosition(Vector2d position) {
            playerParameters.followingGPS = false;
            followGPS = false;
            if (position.x == 0 && position.y == 0)
            {
                position = gpsLocation;
                playerParameters.followingGPS = true;
                followGPS = true;
            }
            mapController.UpdateMap(position);
            transform.position = mapController.GeoToWorldPosition(position);
            playerParameters.avatarPos = transform.position;
            playerParameters.targetPos = transform.position;
        }

        void CheckTap()
        {
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
                if (Input.touchCount > 0 && EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return;
                if (EventSystem.current.IsPointerOverGameObject()) return;
                if (IsPointerOverUIObject()) return;
                
                Ray ray;
                RaycastHit hit;
                bool ARActive = ARManager.Instance.ARActive;
                ray =  ARActive ? ARCamera.ScreenPointToRay(Input.mousePosition) : mapCamera.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out hit, Mathf.Infinity))
                {
                    // See if I hit the avatar, switch to following gps
                    if (hit.transform == transform)
                    {
                        //playerParameters.followingGPS = true;
                    }
                    else if (hit.transform.GetComponent<MapObject>() && !hit.collider.isTrigger)
                    {
                        MapObject mapObject = hit.transform.GetComponent<MapObject>();
                        float dist = (mapObject.transform.position - transform.position).magnitude;
                        bool canInteract = (dist <= InteractionRadius) && !cameraParameters.IsWorldMap;
                        mapObject.HandleTap(canInteract);

                    }
                    else if (hit.transform.GetComponent<DomeOfferElement>())
                    {
                        DomeOfferElement element = hit.transform.GetComponent<DomeOfferElement>();
                        element.ShowDomeOffer();
                    }
                    else if (cameraParameters && !cameraParameters.IsWorldMap && !ARActive && !followGPS)
                    {
                        Vector3 tarPos = new Vector3(hit.point.x, 0, hit.point.z);
                        playerParameters.targetPos = tarPos;
                    }
                }
                else if (cameraParameters && !cameraParameters.IsWorldMap && !ARActive && !followGPS)
                {
                    float enter = 0.0f;

                    if (mapPlane.Raycast(ray, out enter))
                    {
                        playerParameters.targetPos = ray.GetPoint(enter);
                    }
                }
            }

        }
        void Update()
        {
            if (!enableInput) {
                return;
            }

            CheckTap();

            // Check where to follow
            if (followGPS)
            {
                playerParameters.targetPos = playerParameters.gpsPos;
                Debug.Log("Follow gps = " + playerParameters.targetPos);
            }

            if (cameraParameters.IsWorldMap && activationRadius.activeSelf)
            {
                activationRadius.SetActive(false);
                radialPointers.SetActive(false);
            }
            else if (!cameraParameters.IsWorldMap && !activationRadius.activeSelf)
            {
                activationRadius.SetActive(true);
                radialPointers.SetActive(true);
            }
            var distance = Vector3.Distance(transform.position, playerParameters.targetPos);
            if (distance > 0.1f)
            {
                Vector3 lookDir = playerParameters.targetPos - transform.position;
                lookDir.y = 0;
                Quaternion targetFacing = Quaternion.LookRotation(lookDir);
                if (distance < 1.0f)
                {
                    transform.localRotation = targetFacing;
                }
                else
                {
                    transform.localRotation = Quaternion.RotateTowards(transform.localRotation, targetFacing, rotationSpeed * Time.deltaTime);
                }
                // Throttle down as you get close
                float speedDist = speed * Time.deltaTime * Mathf.Min(1.0f, distance / 2.0f);
                transform.Translate(Vector3.forward * speedDist);
                // Snap to 0 y
                if (transform.position.y != 0)
                {
                    transform.position = new Vector3(transform.position.x, 0, transform.position.z);
                }
                if (CharacterAnimator != null) {
                    CharacterAnimator.SetBool("IsWalking", true);
                }
            }
            else
            {
                transform.position = playerParameters.targetPos;
                if (CharacterAnimator != null) {
                    CharacterAnimator.SetBool("IsWalking", false);
                }
            }
            playerParameters.avatarPos = transform.position;
            if (mapController)
            {
                playerParameters.avatarLatLng = mapController.WorldToGeoPosition(transform.position);
            }
        }
        
        private bool IsPointerOverUIObject() {
            PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
            eventDataCurrentPosition.position = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
 
            List<RaycastResult> results = new List<RaycastResult>();
            EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
            return results.Count > 0;
        }

        private void OnEnableAvatarInput () {
            enableInput = true;
        }
    }
}