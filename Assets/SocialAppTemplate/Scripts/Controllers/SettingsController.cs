using UnityEngine;

namespace SocialApp
{
    public class SettingsController : MonoBehaviour
    {

        public void Logout()
        {
            //AppManager.NAVIGATION.RemoveListeners();
            PlayerPrefs.DeleteAll();
            //AppManager.VIEW_CONTROLLER.HideAllScreen();
            //AppManager.VIEW_CONTROLLER.ShowLogin();
            AppManager.DEVICE_CONTROLLER.StopOnlineChecker();
            AppManager.FIREBASE_CONTROLLER.RemoveDeviceTokens();
            AppManager.FIREBASE_CONTROLLER.RemovePushNotificationEvents();
            AppManager.LOGIN_CONTROLLER.OnSignOut();
            //AppManager.FIREBASE_CONTROLLER.LogOut();
            AppManager.USER_PROFILE.ClearUser();

            //Exit app since a clean restart is not setup yet
            #if UNITY_EDITOR
                UnityEditor.EditorApplication.isPlaying = false;
            #else
                Application.Quit();
            #endif
            
        }
    }
}
