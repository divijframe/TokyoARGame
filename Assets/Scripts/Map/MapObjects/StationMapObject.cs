using System;
using Tapestry;
using UnityEngine;
using UnityEngine.UI;
using Mapbox.Unity.Map;

namespace Tapestry
{
    namespace Tapestry
    {
        public class StationMapObject : MapObject
        {
            public GameObject textContainer;
            public Text titleJP;
            public Text titleEN;

            private AbstractMap mapController;

            public override void SetProximityListeners()
            {
                throw new NotImplementedException();
            }
            
            public override void SetWorldMapValueChangedListeners(bool isWorldMap)
            {
                throw new NotImplementedException();
            }

            public override void Start()
            {
                base.Start();
                mapController = GameObject.FindObjectOfType<AbstractMap>();
            }

            public override void Initialize(MapObjectDataEntry entry)
            {
                base.Initialize(entry);
                titleJP.text = entry.titleJP;
                titleEN.text = entry.titleEN;
            }

            // Do something when a map object is clicked on
            public override void HandleTap(bool inInteractionRange)
            {
                base.HandleTap(inInteractionRange);
                Debug.Log("Tapped on Container " + inInteractionRange);
            }

            void LateUpdate()
            {
                if (!Camera.main)
                {
                    return;
                }
                Transform camT = Camera.main.transform;
                // Face camera direction by simply matching the rotation of the camera, don't use lookat
                transform.rotation = camT.rotation;

                if (mapController.Zoom < 13f)
                {
                    textContainer.SetActive(false);
                }
                else
                {
                    textContainer.SetActive(true);
                }
            }
        }
    }
}