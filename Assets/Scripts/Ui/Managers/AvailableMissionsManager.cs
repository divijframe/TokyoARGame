using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class AvailableMissionsManager : MonoBehaviour
    {

        // Set Into AvailableMission Button OnClick Action
        public void MissionAcceptedAction()
        {
            PopupManager.Instance.ShowPopup(PopupIDs.MISSION_ACCEPTED_POPUP_ID, delegate
            {
                UIManager.Instance.GoToCurrentMissions();
            });
        }
    }
}

