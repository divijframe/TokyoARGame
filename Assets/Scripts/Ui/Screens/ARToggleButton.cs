using BRB_ARGeo;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{

    public class ARToggleButton : MonoBehaviour
    {
        bool isActiveAR = false;

        public void ToggleAR()
        {
            isActiveAR = !isActiveAR;
            if (isActiveAR)
            {
                TapestryEventRegistry.OnEnterAR.Invoke();
            }
            else
            {
                TapestryEventRegistry.OnLeaveAR.Invoke();
            }
        }

        public void ToggleRescueScreenAr()
        {
            RescueManager.Instance.ToggleARMode();
        }
    }
}