using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{

    public class MapRecenterButton : MonoBehaviour
    {
        public void RecenterMap()
        {
            TapestryEventRegistry.OnCenterPlayer.Invoke();
        }
    }
}