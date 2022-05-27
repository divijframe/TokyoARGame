using System;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class PartnerMapObject : MapObject
    {
        [SerializeField] private PartnerLocationVariants partnerLocationVariants;
        [SerializeField] private MapDealWidget _dealWidget;
        [SerializeField] private ARMapObjectWidget _arMapObjectWidget;
        [SerializeField] private Collider _collider;
        
        [SerializeField] private List<GameObject> _objects;

        public GameObject spinningThingA;
        public GameObject spinningThingB;
        private float spin_speed_default;

        void Start() {
            if (spinningThingA != null) {
                spin_speed_default = spinningThingA.GetComponent<Spinner>().rotation_speed_y;
            }
        }

        public override void HandleTap(bool inInteractionRange)
        {
            base.HandleTap(inInteractionRange);
            Debug.Log("Tapped on Partner " + inInteractionRange);

            // Move this to base class when the other MapObjects have ARMapObjectWidget
            if (ARManager.Instance.ARActive)
            {
                _arMapObjectWidget.Show(partnerLocationVariants.GetPartnerLocationInfo(DataEntry.id), ARManager.Instance.refPosition, ARManager.Instance.ARCamera,
                    delegate
                    {
                        SetObjectState(true);
                    });
                SetObjectState(false);
            }
        }
        
        public override void Initialize(MapObjectDataEntry entry)
        {
            base.Initialize(entry);
            SetProximityListeners();
            cameraParameters.AddWorldMapListener(SetWorldMapValueChangedListeners);
            
            TapestryEventRegistry.OnLeaveAR.SubscribeMethod(OnLeaveARListener, false);
        }

        private void OnLeaveARListener()
        {
            _arMapObjectWidget.Hide();
        }
        
        public override void SetProximityListeners()
        {
            proximityTrigger.SetProximityTriggers(OnPlayerEnter, OnPlayerExit);
        }
        
        public override void SetWorldMapValueChangedListeners(bool isWorldMap)
        {
            if (isWorldMap)
            {
                OnPlayerExit();
            }
            else
            {
                if (proximityTrigger.isPlayerInside)
                {
                    OnPlayerEnter();
                }
            }
        }

        private void OnPlayerExit()
        {
            SetProximityFXState(false);
            if (spinningThingA != null) {
                spinningThingA.GetComponent<Spinner>().rotation_speed_y = spin_speed_default;
            }
            if (spinningThingB != null) {
                spinningThingB.GetComponent<Spinner>().rotation_speed_y = spin_speed_default;
            }
        }
        
        private void OnPlayerEnter()
        {
            if (cameraParameters.IsWorldMap)
            {
                SetProximityFXState(false);
                return;
            }
            
            SetProximityFXState(true);
            if (spinningThingA != null) {
                spinningThingA.GetComponent<Spinner>().rotation_speed_y = spin_speed_default * 4;
            }
            if (spinningThingB != null) {
                spinningThingB.GetComponent<Spinner>().rotation_speed_y = spin_speed_default * 4;
            }
        }

        private void SetObjectState(bool state)
        {
            foreach (GameObject o in _objects)
            {
                o.SetActive(state);
            }

            _collider.enabled = state;
        }

        private void Awake()
        {
            _dealWidget.gameObject.SetActive(false);
            TapestryEventRegistry.OnShowPartnerLocationInfo.SubscribeMethod(ShowMapObjectDeal, true);
        }

        public void ShowMapObjectDeal(PartnerLocationInfo partnerLocationInfo)
        {
            if (partnerLocationInfo.id != DataEntry.id)
            {
                return;
            }
            _dealWidget.gameObject.SetActive(true);
            _dealWidget.SetValues(partnerLocationInfo);
        }
    }
}