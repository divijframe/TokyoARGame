using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstantiateScreenHelper : MonoBehaviour
{
    [SerializeField]
    GameObject childToInstantiate;

    GameObject childInstance;

    [SerializeField]
    Transform targetParent;

    public void Show()
    {
        if (childInstance == null)
        {
            childInstance = Instantiate(childToInstantiate);
            if (targetParent != null)
            {
                childInstance.transform.SetParent(targetParent, false);
            }
        }
    }

    public void Hide()
    {
        if (childInstance != null)
        {
            GameObject.Destroy(childInstance);
        }
    }

    private void OnDisable()
    {
        Hide();
    }
}
