using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class CommunityInviteManager : MonoBehaviour
    {

        // Set Into CommunityInvite Button OnClick Action
        public void CommunityInviteAction()
        {
            PopupManager.Instance.ShowPopup(PopupIDs.INVITATION_SENT_POPUP_ID);
        }
    }
}

