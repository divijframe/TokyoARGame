using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Tapestry
{
    public class AvatarRenderTextureManager : MonoBehaviour
    {

        public Transform avatarSpawnPoint;
        private GameObject cachedAvatar = null;
        
        private void Start()
        {
            TapestryEventRegistry.OnAvatarSelected.SubscribeMethod(SpawnAvatar, false);
        }
        
        private void SpawnAvatar(AvatarParameters avatarReference)
        {
            Destroy(cachedAvatar);
            if (avatarSpawnPoint == null) {
                return;
            }
            GameObject avatar = Instantiate(avatarReference.prefabReference, avatarSpawnPoint.position, avatarSpawnPoint.rotation, avatarSpawnPoint);
            avatar.layer = LayerMask.NameToLayer("AvatarRender");
            foreach (Transform child in avatar.transform)
            {
                child.gameObject.layer = LayerMask.NameToLayer("AvatarRender");
            }
            cachedAvatar = avatar;
        }
    }
}
