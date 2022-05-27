using System;
using Tapestry;
using UnityEngine;
using UnityEngine.UI;

public class MapDealWidget : DealWidget
{
    public GameObject textContainer;

    private const float maxAngle = 80.0f;
    private const float maxDistance = 165.0f;

    public override void Update()
    {
        base.Update();
        if (!Camera.main)
        {
            return;
        }
        Transform camT = Camera.main.transform;
        // Face camera direction by simply matching the roatation of the camera, don't use lookat
        transform.rotation = camT.rotation;

        if (activeDeal.active) {
            if (transform.rotation.eulerAngles.x >= maxAngle &&
                Vector3.Distance(camT.position, transform.position) >= maxDistance) {
                textContainer.SetActive(false);
            } else {
                textContainer.SetActive(true);
            }
        } else {
            textContainer.SetActive(false);
        }
    }

    public override void SetValues(PartnerLocationInfo data) {
        base.SetValues(data);
        dealTitle.text = "Hot Deal";
        Icon.sprite = Sprite.Create(data.logo, new Rect(0,0, data.logo.width, data.logo.height), Vector2.zero);
    }
}
