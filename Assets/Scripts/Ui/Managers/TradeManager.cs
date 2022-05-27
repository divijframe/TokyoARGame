using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class TradeManager : MonoBehaviour
    {
        // Set Into Accept Trade Button OnClick Action
        public void AcceptTradeAction()
        {
            PopupManager.Instance.ShowPopup(PopupIDs.TRADE_ACCEPTED_POPUP_ID);
        }
    }
}
