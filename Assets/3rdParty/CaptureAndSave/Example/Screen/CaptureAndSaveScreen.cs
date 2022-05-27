using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CaptureAndSaveScreen : MonoBehaviour {

#if UNITY_5_3_OR_NEWER

    [SerializeField]
    Texture2D tex_watermark;

    [SerializeField]
    InputField input_x, input_y, input_width, input_height;

    [SerializeField]
    Toggle tog_watermark;

    [SerializeField]
    Text text_log;

    CaptureAndSave snapShot;


    void Start()
    {
        snapShot = FindObjectOfType<CaptureAndSave>();

        input_x.text = input_y.text = "0";
        input_width.text = Screen.width.ToString();
        input_height.text = Screen.height.ToString();
    }

    void OnEnable()
    {
        CaptureAndSaveEventListener.onError += OnError;
        CaptureAndSaveEventListener.onSuccess += OnSuccess;
    }

    void OnDisable()
    {
        CaptureAndSaveEventListener.onError -= OnError;
        CaptureAndSaveEventListener.onSuccess -= OnSuccess;
    }

    void OnError(string error)
    {
        if (text_log)
        {
            text_log.text = "Error : " + error;
        }
    }

    void OnSuccess(string msg)
    {
        if (text_log)
        {
            text_log.text = "Screenshot saved at :" + msg;
        }
    }


    // UI events
    public void OnSave()
    {
        int x = 0, y = 0;
        int w = Screen.width;
        int h = Screen.height;
        int.TryParse(input_x.text, out x);
        int.TryParse(input_y.text, out y);
        int.TryParse(input_width.text, out w);
        int.TryParse(input_height.text, out h);

        if ((x > Screen.width || y > Screen.height) || (w < 100 || h < 100))
        {
            OnError("x, y, width or height is not correct.");
            return;
        }

        if (tog_watermark.isOn)
        {
            snapShot.CaptureAndSaveToAlbum(x, y, w, h, ImageType.JPG, tex_watermark, WatermarkAlignment.BOTTOM_RIGHT);
        }
        else
        {
            snapShot.CaptureAndSaveToAlbum(x, y, w, h, ImageType.JPG);
        }

    }

    public void OnSaveFullScreenshot()
    {
        snapShot.CaptureAndSaveToAlbum(ImageType.JPG);
    }

    public void OnBack()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(0);
    }

    
#endif
}
