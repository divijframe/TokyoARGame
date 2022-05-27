using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RewardToastItem : MonoBehaviour {
    [SerializeField]
    Animator animator;
    [SerializeField]
    Text labelText;
    [SerializeField]
    Text amountText;
    [SerializeField]
    Image iconImage;

    public void SetData(string itemName, int amount, Sprite sprite){
        labelText.text = itemName;
        amountText.text = "+" + amount.ToString();
        iconImage.sprite = sprite;
    }

    public void SetIcon(Sprite sprite){
        iconImage.sprite = sprite;
    }

    public void SetText(string itemName, int amount){
        labelText.text = itemName;
        amountText.text = "+" + amount.ToString();
    }

    public void DestorySelf(){
        Destroy (gameObject);
    }
}
