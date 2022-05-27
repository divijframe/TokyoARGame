using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Tapestry {

    public class ARPointerController : MonoBehaviour {

        public Transform pointersContainer;
        public ARPointer pointerPrefab;

        private void Start() {
            TapestryEventRegistry.OnTutorialObjectSpawned.SubscribeMethod(SpawnPointers, false);
        }

        private void SpawnPointers(MapObject[] mapObjects) {
            DestroyPreviewsPointers();

            foreach (MapObject mapObject in mapObjects) {
                ARPointer pointer = Instantiate(pointerPrefab, Vector3.zero, Quaternion.identity, pointersContainer);
                pointer.target = mapObject.transform;
            }
        }

        private void DestroyPreviewsPointers () {
            foreach (Transform child in pointersContainer) {
                Destroy(child.gameObject);
            }
        }
    }
}
