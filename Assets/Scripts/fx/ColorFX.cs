//
// ColorFX.cs
// script authored by Ryan VanMeter
// This script will change the particle effect color to match the gem color
//

using UnityEngine;
using System.Collections;

// somehow change this GemColor from another script
public enum GemType
{
    Regular,
    Greater,
    Ultimate,
    Green,
    Red,
    White,
    Black,
    Transparent
}

// this sets the color of particles
public class ColorFX : MonoBehaviour {

    private ParticleSystem[] wandParticleArray;
    private Color particleStartColor;
    private GemType gemSelectedDefault;

    void Awake () {
      gemSelectedDefault = GemType.Transparent;
      AssignStartColor(gemSelectedDefault);
    }

    // gemSelected will be passed in from RescueManager.cs
    public void AssignStartColor (GemType gemSelected) {
        // Associate a color with each gemType
        if (gemSelected == GemType.Regular) {
            particleStartColor = new Color (0.4f,0.8f,1.0f,1.0f);
        } else if (gemSelected == GemType.Greater) {
            particleStartColor = new Color (1.0f,0.8f,0.4f,1.0f);
        } else if (gemSelected == GemType.Ultimate) {
            particleStartColor = new Color (1.0f,0.4f,1.0f,1.0f);
        } else if (gemSelected == GemType.Green) {
            particleStartColor = Color.green;
        } else if (gemSelected == GemType.Red) {
            particleStartColor = Color.red;
        } else if (gemSelected == GemType.White) {
            particleStartColor = Color.white;
        } else if (gemSelected == GemType.Black) {
            particleStartColor = Color.black;
        } else if (gemSelected == GemType.Transparent) {
            particleStartColor = new Color (1.0f,0.0f,1.0f,1.0f);
        }

        // TODO Store these components in an array so we don't have to loop through all children every time
        wandParticleArray = GetComponentsInChildren<ParticleSystem>(includeInactive:true);
        foreach (ParticleSystem wandParticle in wandParticleArray) {
            var main = wandParticle.main;
            main.startColor = particleStartColor;
        }
    }
}