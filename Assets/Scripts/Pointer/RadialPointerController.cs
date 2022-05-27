using JfranMora.Inspector;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry {
    public class RadialPointerController : MonoBehaviour {

        public ColorCodes colorCodes;

        public Transform pointersContainer;
        public RadialPointer pointerPrefab;

        private List<RadialPointer> pointersCache = new List<RadialPointer>();

        private void Start() {
            TapestryEventRegistry.OnMapObjectSpawned.SubscribeMethod(SpawnPointer, false);
        }

        private void SpawnPointer (MapObject mapObject) {

            if (mapObject.DataEntry.type == MapObjectType.Friend || 
                mapObject.DataEntry.type == MapObjectType.MediaDome || 
                mapObject.DataEntry.type == MapObjectType.EasterEgg)
            {
                // Avoiding pointers for this MapObjects
                return;
            }
            
            RadialPointer pointer = pointersCache.Find(x => x != null && x.gameObject.activeInHierarchy == false);

            if (pointer == null) {
                pointer = Instantiate(pointerPrefab, Vector3.zero, Quaternion.identity, pointersContainer);
                pointersCache.Add(pointer);
            } else {
                pointer.gameObject.SetActive(true);
            }
            
            Color mapObjectColor = colorCodes.mapObjectsColor.Find(x => x.mapObjectType == mapObject.DataEntry.type).color;

            pointer.SetPointer(mapObject.transform, mapObjectColor);
        }

    }
}
