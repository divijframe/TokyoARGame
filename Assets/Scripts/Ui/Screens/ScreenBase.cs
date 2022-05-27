using System.Collections;
using System.Collections.Generic;
using Doozy.Engine.Nody;
using Doozy.Engine.UI;
using UnityEngine;

public class ScreenBase : MonoBehaviour
{
    public UICanvas uiCanvas;
    public GraphController graphController;

    public List<UIView> viewsInCanvas;
    
    public virtual void Show ()
    {
        uiCanvas.gameObject.SetActive(true);
        graphController.GoToNodeByName("Start");
    }
    
    public virtual void Hide ()
    {
        uiCanvas.gameObject.SetActive(false);
    }

    public virtual void ShowViews()
    {
        foreach (UIView view in viewsInCanvas)
        {
            view.Show();
        }
    }
    
    public virtual void HideViews()
    {
        foreach (UIView view in viewsInCanvas)
        {
            view.Hide();
        }
    }
    
    // Add a selectable View to Show/Hide
}
