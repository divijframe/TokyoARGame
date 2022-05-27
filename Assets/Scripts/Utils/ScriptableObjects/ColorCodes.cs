using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tapestry {
    [CreateAssetMenu(fileName = "ColorCodes", menuName = "ScriptableObjects/ColorCodes", order = 1)]
    public class ColorCodes : ScriptableObject {

        public List<MapObjectColor> mapObjectsColor;


    }
}
