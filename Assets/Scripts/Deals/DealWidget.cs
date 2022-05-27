using System;
using UnityEngine;
using UnityEngine.UI;

public class DealWidget : MonoBehaviour
{
    public Deal activeDeal;
    public Text dealTimer;
    public Text dealTitle;
    public Image Icon;

    public virtual void SetValues (PartnerLocationInfo data) {

        // Setting for first element for now since we dont have UI for more

        activeDeal = data.deals[0];
        dealTitle.text = data.deals[0].title;
    }

    public virtual void Update()
    {
        if (activeDeal.active)
        {
            TimeSpan t = TimeSpan.FromSeconds(activeDeal.timeRemaining);
            dealTimer.text = string.Format("{0:00}:{1:00}:{2:00}", t.Hours, t.Minutes, t.Seconds);
        }
    }
}
