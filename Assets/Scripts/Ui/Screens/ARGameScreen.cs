using System;
using System.Collections;
using System.Collections.Generic;
using Doozy.Engine.Nody;
using Doozy.Engine.UI;
using JfranMora.Inspector;
using Tapestry;
using UnityEngine;

public class ARGameScreen : ScreenBase
{
    public void OnCompleteGameClick()
    {
        PopupManager.Instance.ShowARPopups();
    }
}
