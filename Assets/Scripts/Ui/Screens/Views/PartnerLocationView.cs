using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Tapestry
{
    public class PartnerLocationView : MonoBehaviour
    {
        public Text title;
        public Text welcomeTitle;
        public Text description;
        public ViewDealWidget dealWidget;

        public void SetViewInfo(PartnerLocationInfo partnerLocationInfo)
        {
            title.text = partnerLocationInfo.name;
            welcomeTitle.text = string.Format($"Welcome to {partnerLocationInfo.name}!");
            description.text = "Show QR code to the clerk for 50% off!";
            //description.text = partnerLocationInfo.description;
            if (partnerLocationInfo.deals[0].active)
            {
                dealWidget.gameObject.SetActive(true);
                dealWidget.SetValues(partnerLocationInfo);
            }
            else
            {
                dealWidget.gameObject.SetActive(false);
            }
        }

        // Referenced in Button View Hide Unity Event
        public void OnHide () {
            TapestryEventRegistry.OnPartnerLocationExit.Invoke();
        }

    }
}
