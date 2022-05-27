using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class CommunityRequestManager : MonoBehaviour
    {

        // Set Into CommunityRequest Button OnClick Action
        public void CommunityRequestAction()
        {
            PopupManager.Instance.ShowPopup(PopupIDs.REQUEST_SENT_POPUP_ID);
        }
    }
}
