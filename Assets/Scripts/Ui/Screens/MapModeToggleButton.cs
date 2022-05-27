using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{

    public class MapModeToggleButton : MonoBehaviour
    {
        public void ToggleMapMode()
        {
            TapestryEventRegistry.OnToggleMapMode.Invoke();
        }
    }
}