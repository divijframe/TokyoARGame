using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PreviewAndSave : MonoBehaviour {

#if UNITY_5_3_OR_NEWER

    [SerializeField]
    Texture2D tex_watermark;

    [SerializeField]
    InputField input_x, input_y, input_width, input_height;

    [SerializeField]
    Toggle tog_watermark;

    [SerializeField]
    Text text_log;

    [SerializeField]
    Image img_preview;

    CaptureAndSave snapShot;
    Texture2D previewTex;


    void Start()
    {
        snapShot = FindObjectOfType<CaptureAndSave>();

        input_x.text = input_y.text = "0";
        input_width.text = Screen.width.ToString();
        input_height.text = Screen.height.ToString();
        img_preview.transform.parent.gameObject.SetActive(false);
    }

    void OnEnable()
    {
        CaptureAndSaveEventListener.onError += OnError;
        CaptureAndSaveEventListener.onSuccess += OnSuccess;
        CaptureAndSaveEventListener.onScreenShot += OnScreenshotReady;
    }

    void OnDisable()
    {
        CaptureAndSaveEventListener.onError -= OnError;
        CaptureAndSaveEventListener.onSuccess -= OnSuccess;
        CaptureAndSaveEventListener.onScreenShot -= OnScreenshotReady;
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

    void OnScreenshotReady(Texture2D tex)
    {
        previewTex = tex;
        if (img_preview)
        {
            img_preview.sprite = Sprite.Create(tex, new Rect(0,0,tex.width,tex.height), Vector2.zero);
            img_preview.SetNativeSize();
            img_preview.rectTransform.localScale *= 0.75f;
            img_preview.transform.parent.gameObject.SetActive(true);
        }
    }


    // UI events
    public void OnScreenshot()
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
            snapShot.GetScreenShot(x, y, w, h, ImageType.JPG, tex_watermark, WatermarkAlignment.TOP_RIGHT);
        }
        else
        {
            snapShot.GetScreenShot(x, y, w, h, ImageType.JPG);
        }

    }

    public void OnSave()
    {
        if(previewTex)
        {
            snapShot.SaveTextureToGallery(previewTex, ImageType.JPG);
            img_preview.transform.parent.gameObject.SetActive(false);
        }
    }

    public void OnCancel()
    {
        img_preview.transform.parent.gameObject.SetActive(false);
    }

    public void OnBack()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(0);
    }

    
#endif
}
