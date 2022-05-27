using UnityEngine;

namespace Tapestry
{
    public class PurchaseDealManager : MonoBehaviour
    {

        // Set Into CommunityRequest Button OnClick Action
        public void PurchaseDealAction()
        {
            PopupManager.Instance.ShowPopup(PopupIDs.PURCHASE_SUCCESSFUL_PREFAB_ID);
        }
    }
}
