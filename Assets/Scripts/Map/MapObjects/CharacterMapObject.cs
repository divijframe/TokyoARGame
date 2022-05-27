using UnityEngine;

namespace Tapestry
{
    public class CharacterMapObject : MapObject
    {
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
            Debug.Log("Tapped on Character " + inInteractionRange);
        }
        
        public override void Initialize(MapObjectDataEntry entry)
        {
            base.Initialize(entry);
            SetProximityListeners();
            cameraParameters.AddWorldMapListener(SetWorldMapValueChangedListeners);
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
    }
}