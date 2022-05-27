using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class CameraTrackOut : MonoBehaviour
    {
        public void OnTrackOut()
        {
            TapestryEventRegistry.OnTrackOut.Invoke();
        }
    }
}

