using System;
using JfranMora.Inspector;
using UnityEngine;

namespace Tapestry
{
    public abstract class MapObject : MonoBehaviour
    {
        public CameraParameters cameraParameters;
        
        [SerializeField] private Camera _refCamera;
        [SerializeField] private GameObject selectFX;
        [SerializeField] private GameObject infoContainer;
        
        [SerializeField] private MapObjectDataEntry dataEntry;

        public GameObject proximityFX;
        
        public MapObjectDataEntry DataEntry { get { return dataEntry; } }
        public ProximityTrigger proximityTrigger;

        // Set The Enter/Exit Action callbacks
        public abstract void SetProximityListeners();

        // Set The Actions if the isWorldMap Value changes
        public abstract void SetWorldMapValueChangedListeners(bool isWorldMap);
        
        public virtual void Start()
        {
            TapestryEventRegistry.OnTrackIn.SubscribeMethod(delegate
            {
                SetInfoContainerState(false);
            },false);
            TapestryEventRegistry.OnTrackOut.SubscribeMethod(delegate
            {
                SetInfoContainerState(true);
            },false);
        }

        public virtual void Initialize(MapObjectDataEntry entry)
        {
            dataEntry = entry;
            SetProximityFXState(false);
        }

        // Do something when a map object is clicked on
        public virtual void HandleTap(bool inInteractionRange)
        {
            switch (DataEntry.type)
            {
                case MapObjectType.Invalid:
                    break;
                case MapObjectType.Coin:
                case MapObjectType.Station:
                case MapObjectType.Friend:
                case MapObjectType.MediaDome:
                case MapObjectType.EasterEgg:
                    break;
                case MapObjectType.Character:
                    PlaySelectFX();
                    PopupManager.Instance.OnObjectTap(DataEntry, inInteractionRange);
                    if (!ARManager.Instance.ARActive)
                    {
                        SetLookAt();
                        TapestryEventRegistry.OnTrackIn.Invoke(_refCamera);
                    }
                    break;
                case MapObjectType.AssetContainer:
                    PlaySelectFX();
                    UIManager.Instance.ShowAssetContainer();
                    TapestryEventRegistry.OnAssetContainerInfo.Invoke(dataEntry);
                    //PopupManager.Instance.OnObjectTap(DataEntry, inInteractionRange);
                    break;
                case MapObjectType.PartnerLocation:
                    if (!ARManager.Instance.ARActive) {
                        SetLookAt();
                        PlaySelectFX();
                        TapestryEventRegistry.OnTrackIn.Invoke(_refCamera);
                        PopupManager.Instance.OnObjectTap(DataEntry, inInteractionRange);
                    }
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        private void SetInfoContainerState(bool state)
        {
            if (infoContainer != null)
            {
                infoContainer.SetActive(state);
            }
        }
        
        protected void SetProximityFXState(bool state)
        {
            if (proximityFX != null)
            {
                proximityFX.SetActive(state);
            }
        }
        
        private void SetLookAt()
        {
            Transform camT = Camera.main.transform;
            transform.LookAt(new Vector3(camT.position.x, transform.position.y, camT.position.z));
        }
        
        private void PlaySelectFX() {
            if(selectFX != null)
                selectFX.SetActive(true);
        }
    }
}