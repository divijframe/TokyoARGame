using UnityEngine;
using Doozy.Engine;
using UnityEngine.UI;

public class IntroductionScreen : ScreenBase
{
    public string correctPasswordNodeName = null;
    public string incorrectPasswordNodeName = null;
    public InputField passwordInputField;
    
    [SerializeField] private string demoPassword = "Massive";

    private void OnEnable()
    {
        Message.AddListener<GameEventMessage>(OnMessageListener);
    }

    private void OnDisable()
    {
        Message.RemoveListener<GameEventMessage>(OnMessageListener);
    }
    
    private void OnMessageListener (GameEventMessage message)
    {
        if (message == null)
        {
            return;
        }

        if (!GameEventIDs.INTRODUCTION_PASSWORD_OK_EVENT_ID.Equals(message.EventName)) return;
        
        Debug.Log("Received the '" + message.EventName + "' game event.");
        if (passwordInputField.text.ToLower().Equals(demoPassword.ToLower()))
        {
            graphController.GoToNodeByName(correctPasswordNodeName);
            Debug.Log("Correct!");
        }
        else
        {
            graphController.GoToNodeByName(incorrectPasswordNodeName);
            Debug.Log("Wrong!");
        }
    }
}
