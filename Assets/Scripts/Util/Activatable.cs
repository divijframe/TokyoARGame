using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// Base class for objects that need a specific activation timing, such 
/// as when you switch to and from a new scene. 
/// </summary>
public abstract class Activatable : MonoBehaviour {
	public abstract IEnumerator Activate();

	public abstract IEnumerator Deactivate();
}
