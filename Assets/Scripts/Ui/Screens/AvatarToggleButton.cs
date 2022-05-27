using UnityEngine;

namespace Tapestry
{
    public class AvatarToggleButton : MonoBehaviour
    {
        bool isAvatarActive = true;

        public void ToggleAvatar()
        {
            isAvatarActive = !isAvatarActive;
            TapestryEventRegistry.OnSetAvatarState.Invoke(isAvatarActive);
        }
    }
}
