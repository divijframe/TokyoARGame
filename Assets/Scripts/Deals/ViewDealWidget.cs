using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry
{
    public class ViewDealWidget : DealWidget
    {

        public override void Update()
        {
            base.Update();
        }

        public override void SetValues(PartnerLocationInfo data) {
            base.SetValues(data);
            Texture2D texture = data.deals[0].icon;
            Icon.sprite = Sprite.Create(texture, new Rect(0,0, texture.width, texture.height), Vector2.zero);
            
        }

        public void OnBuyButtonClick() {
            PopupManager.Instance.ShowPopup(PopupIDs.PURCHASE_SUCCESSFUL_PREFAB_ID);
        }
    }


}
