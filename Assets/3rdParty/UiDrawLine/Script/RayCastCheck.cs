using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System;

namespace UiDrawLine{
    public class RayCastCheck : MonoBehaviour, IPointerEnterHandler,IPointerExitHandler {

        public void OnPointerEnter(PointerEventData eventData)
        {
            GetComponent<CanvasRenderer>().SetColor(Color.red);
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            GetComponent<CanvasRenderer>().SetColor(Color.blue);
        }

    }
}
