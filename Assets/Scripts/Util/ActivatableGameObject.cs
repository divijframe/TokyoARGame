using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivatableGameObject : Activatable
{
	public override IEnumerator Activate()
	{
        gameObject.SetActive(true);
		yield break;
	}

	public override IEnumerator Deactivate()
	{
        gameObject.SetActive(false);
		yield break;
	}
}
