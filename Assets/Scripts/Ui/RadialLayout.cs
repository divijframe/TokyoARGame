/// Credit Danny Goodayle 
/// Sourced from - http://www.justapixel.co.uk/radial-layouts-nice-and-simple-in-unity3ds-ui-system/
/// Updated by ddreaper - removed dependency on a custom ScrollRect script. Now implements drag interfaces and standard Scroll Rect.

/*
Radial Layout Group by Just a Pixel (Danny Goodayle) - http://www.justapixel.co.uk
Copyright (c) 2015
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

namespace UnityEngine.UI.Extensions
{
  [AddComponentMenu("Layout/Extensions/Radial Layout")]
  public class RadialLayout : LayoutGroup
  {
    public float fDistance;
    [Range(-360f, 360f)]
    public float MinAngle, MaxAngle, StartAngle, StaticSpacing;
    public bool UseStaticSpacing = true;
    protected override void OnEnable() { base.OnEnable(); CalculateRadial(); }
    public override void SetLayoutHorizontal()
    {
    }
    public override void SetLayoutVertical()
    {
    }
    public override void CalculateLayoutInputVertical()
    {
      CalculateRadial();
    }
    public override void CalculateLayoutInputHorizontal()
    {
      CalculateRadial();
    }
    #if UNITY_EDITOR
    protected override void OnValidate()
    {
      base.OnValidate();
      CalculateRadial();
    }
    #endif
    void CalculateRadial()
    {


      int activeChildCount = 0;
      for(int i =0;i<transform.childCount;i++)
      {
        var child = transform.GetChild(i);
        if(child && child.gameObject.activeSelf)
        {
          activeChildCount++;
        }
      }


      m_Tracker.Clear();
      //if(transform.childCount == 0)
        //return;

      if(activeChildCount == 0)
        return;

      int childCount = 0;

      //Checks if any child has a layoutelement, if not adds to childCount.
      for(int i = 0; i < transform.childCount; i++)
      {
        RectTransform child = (RectTransform)transform.GetChild(i);
        LayoutElement childLayout = child.GetComponent<LayoutElement>();
        if(childLayout != null)
        {
          if(!childLayout.ignoreLayout) // if it has the layout element but Ignore Layout is false add to childCount.
          {
            childCount++;
          }
        }
        else
        {
          childCount++;
        }
      }

      float fOffsetAngle;

      float fAngle;

      if(UseStaticSpacing){
        fOffsetAngle = StaticSpacing;
        fAngle = StartAngle - (fOffsetAngle * (activeChildCount-1))/2;
      } else {
        fAngle = StartAngle - (MaxAngle - MinAngle)/2;
        fOffsetAngle = ((MaxAngle - MinAngle)) / (activeChildCount - 1);
      }

      for(int i = 0; i < childCount; i++)
      {
        RectTransform child = (RectTransform)transform.GetChild(i);

        if(child != null && child.gameObject.activeSelf)
        {
          //Adding the elements to the tracker stops the user from modifiying their positions via the editor.
          m_Tracker.Add(this, child,
            DrivenTransformProperties.Anchors |
            DrivenTransformProperties.AnchoredPosition |
            DrivenTransformProperties.Pivot);
          Vector3 vPos = new Vector3(Mathf.Cos(fAngle * Mathf.Deg2Rad), Mathf.Sin(fAngle * Mathf.Deg2Rad), 0);
          child.localPosition = vPos * fDistance;
          child.localRotation = Quaternion.Euler(0.0f, 0.0f, fAngle - 90f);
          //Force objects to be center aligned, this can be changed however I'd suggest you keep all of the objects with the same anchor points.
          child.anchorMin = child.anchorMax = child.pivot = new Vector2(0.5f, 0.5f);
          fAngle += fOffsetAngle;
        }
      }
    }
  }
}