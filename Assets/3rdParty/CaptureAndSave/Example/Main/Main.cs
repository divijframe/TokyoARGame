using UnityEngine;
using System.Collections;

public class Main : MonoBehaviour {


    public void OnScreenDemo()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(1);
    }

    public void OnCameraDemo()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(2);
    }

    public void OnPreviewDemo()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(3);
    }
}
