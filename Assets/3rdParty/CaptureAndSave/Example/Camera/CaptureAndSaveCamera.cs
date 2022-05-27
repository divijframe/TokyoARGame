using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CaptureAndSaveCamera : MonoBehaviour {

#if UNITY_5_3_OR_NEWER

    [SerializeField]
    Camera cam;

    [SerializeField]
	Texture2D tex_watermark;

    [SerializeField]
    InputField input_width, input_height;

    [SerializeField]
    Toggle tog_watermark;

    [SerializeField]
    Text text_log;

	CaptureAndSave snapShot ;

	

	void Start()
	{
		snapShot = FindObjectOfType<CaptureAndSave>();

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
		if(text_log)
        {
            text_log.text = "Error : " + error;
        }
	}

	void OnSuccess(string msg)
	{
        if(text_log)
        {
            text_log.text = "Screenshot saved at :" + msg;
        }
	}


    // UI events
    public void OnSave()
    {
        int w = Screen.width;
        int h = Screen.height;
        int.TryParse(input_width.text, out w);
        int.TryParse(input_height.text, out h);

        if(w < 100 || h < 100)
        {
            OnError("Width or height is not correct.");
            return;
        }

        if (tog_watermark.isOn)
        {
            snapShot.CaptureAndSaveToAlbum(w, h, cam, ImageType.JPG, tex_watermark, WatermarkAlignment.BOTTOM_RIGHT);
        }
        else
        {
            snapShot.CaptureAndSaveToAlbum(w, h, cam, ImageType.JPG);
        }
            
    }

    public void OnBack()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(0);
    }

    
#endif
}
