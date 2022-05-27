using UnityEngine;
using UnityEngine.UI;

public class SliderValueText : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The text shown will be formatted using this string.  {0} is replaced with the actual value")]
    private string formatText = "{0}";

    private Text textObj;

    private void Start()
    {
        textObj = GetComponent<Text>();

        Slider slider = GetComponentInParent<Slider>();
        slider.onValueChanged.AddListener(HandleValueChanged);
        HandleValueChanged(slider.value);
    }

    private void HandleValueChanged(float value)
    {
        textObj.text = value.ToString("F3");//string.Format(formatText, value);
    }
}