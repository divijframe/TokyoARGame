using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DooberFactory : MonoBehaviour {
  public AnimationCurve easeCurve;

  public GameObject dooberContainer;
	public GameObject bean1DooberPrefab;
  public GameObject bean1SpawnEffectPrefab;
  public GameObject bean2DooberPrefab;
  public GameObject bean3DooberPrefab;
  public GameObject bean4DooberPrefab;
  public GameObject bean5DooberPrefab;

  public GameObject bean2SpawnEffectPrefab;//Optional. not used currently
  float maxDooberLife = 1.0f;
  float trailLife = 0.5f;
  float tweenDur = 0.7f;

  public enum DooberType {
    BLUE,
    YELLOW,
    PURPLE,
    RED,
    GREEN
  };

  public void FireDoober(Vector3 origin, Vector3 destination, float duration, DooberType dooberType){
    //FIXME!!! (andyp) Find where "duration" is actually coming from and if it varies ever.
    //Override "duration"
    duration = tweenDur;
    GameObject doober = (GameObject)Instantiate(SelectDoober(dooberType));
    doober.transform.SetParent(dooberContainer.transform, false);
    doober.transform.position = origin;
    doober.transform.localScale = Vector3.one;

    GameObject spawnEffect = Instantiate(SelectSpawnEffect(dooberType));
    spawnEffect.transform.SetParent(dooberContainer.transform, false);
    spawnEffect.transform.position = origin;

    //Make sure the doober's particle will be alive long enough to make it (maybe?)
    ParticleSystem ps = doober.GetComponent<ParticleSystem>();
    if(ps != null){
      ps.startLifetime = duration;
    }

    //Set trail lifetime.
    TrailRenderer dooberTrail = doober.GetComponent<TrailRenderer>();
    if (dooberTrail != null) {
      dooberTrail.time = trailLife;
      dooberTrail.Clear();
      dooberTrail.enabled = true;
      //TODO. Set trail width to account for canvas scaling of device.
      //TODO. dooberTrail.startWidth = dooberTrail.startWidth * //CANVAS SCALE
      //TODO. dooberTrail.endWidth = dooberTrail.startWidth * //CANVAS SCALE
    }

    Vector3[] path = GetPath(origin, destination);
    LeanTween.move(doober, new LTBezierPath(path), duration).setEase(easeCurve)
      .setOnComplete(()=>{
        OnTweenComplete(doober, spawnEffect);
      });
  }

  private void OnTweenComplete(GameObject obj, GameObject spawnEffect){
    //TODO. (andyp) trigger sparkle and number jump animation.
    Destroy(spawnEffect);
    // TODO. Add end particle hit.
    //Hide doober graphic.
    Image dooberImage = obj.GetComponent<Image>();
    if (dooberImage != null) {
      dooberImage.enabled = false;
    }
    // Wait for trail to finish animating then destroy whole object.
    Destroy(obj, maxDooberLife);
  }

  Vector3[] GetPath(Vector3 start, Vector3 end) {
    //FIXME!! (andyp) This must be changed to use local position within dooberContainer instead of world positions due to device scaling.
    Vector3 mid = Vector3.Lerp(start, end, 0.5f);
    //mid.x /= 4.0f;
    float dist = Vector3.Distance(start, end);
    mid.x += Random.Range(-dist/2, dist/2);
    //Add a little variation on the y
    mid.y += Random.Range(-dist/2, dist/2);

    return new Vector3[]{start, mid, mid, end};
  }

  void PlaceObject(Vector3 position, object obj){
    (obj as GameObject).transform.position = position;
  }

  GameObject SelectDoober(DooberType dooberType){
    GameObject obj = null;
    switch(dooberType) {
      default:
      case DooberType.BLUE:
        obj = bean1DooberPrefab;
        break;
      case DooberType.YELLOW:
        obj = bean2DooberPrefab;
        break;
      case DooberType.PURPLE:
        obj = bean3DooberPrefab;
        break;
      case DooberType.RED:
        obj = bean4DooberPrefab;
        break;
      case DooberType.GREEN:
        obj = bean5DooberPrefab;
        break;
    }
    return obj;
  }

  GameObject SelectSpawnEffect(DooberType dooberType){
    GameObject obj = null;
    switch(dooberType) {
      default:
      case DooberType.BLUE:
        obj = bean1SpawnEffectPrefab;
        break;
      case DooberType.YELLOW:
        obj = bean2SpawnEffectPrefab;
        break;
    }
    return obj;
  }

  public void FireMultiple(Vector3 origin, Vector3 destination, float totalDuration, DooberType dooberType, int numToFire){

    if(numToFire == 0){
      return;
    }

    StartCoroutine(FireRoutine(origin, destination, totalDuration, dooberType, numToFire));
  }

  IEnumerator FireRoutine(Vector3 origin, Vector3 destination, float totalDuration, DooberType dooberType, int numtoFire) {
    //Split up total duration by the amount of doobers to fire
    float waitLen = totalDuration/(float)numtoFire;
    for(int i = 0; i < numtoFire; ++i){
      FireDoober(origin, destination, totalDuration, dooberType);
      yield return new WaitForSeconds(waitLen);
    }
  }
}
