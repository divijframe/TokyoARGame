using System;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;


namespace Tapestry
{
	public class LightAutoIntensity : MonoBehaviour {
		public static LightAutoIntensity Instance = null;

		private Gradient todDirectLightColor;
		[SerializeField]
		private Gradient todAmbientLightColor;
		private AnimationCurve timeToAngle;
		private AnimationCurve shadowFade;
		[SerializeField]
		private Gradient todFogColor;

		[SerializeField]
		private float screenspaceGradient_MaxScale = 1.666f;
		[SerializeField]
		private float screenspaceGradient_MinOffset = 0.333f;

		[Serializable]
		public class LightKit
		{
			public string mapTheme; // default colors based on initial Fantasy theme

			// colors will be assigned to stops in relevant gradient, each with 8 keys
			public Color DawnDirectLight = new Color(0.24f, 0.02f, 0.0f);
			public Color DawnAmbientLight = new Color(0.45f, 0.63f, 1.0f);
			public Color DawnFogColor = new Color(0.12f, 0.14f, 0.16f);
			public Color SunriseDirectLight = new Color(1.0f, 0.7f, 0.0f);
			public Color SunriseAmbientLight = new Color(0.1f, 0.27f, 0.6f);
			public Color SunriseFogColor = new Color(0.5f, 0.49f, 0.45f);
			public Color MorningDirectLight = new Color(0.6f, 0.58f, 0.28f);
			public Color MorningAmbientLight = new Color(0.4f, 0.42f, 0.72f); // morning and afternoon direct + ambeint should add perfectly to white, slightly blue-ish shadows
			public Color MorningFogColor = new Color(0.63f, 0.73f, 0.83f);
			public Color AfternoonDirectLight = new Color(0.6f, 0.58f, 0.28f);
			public Color AfternoonAmbientLight = new Color(0.4f, 0.42f, 0.72f);
			public Color AfternoonFogColor = new Color(0.63f, 0.73f, 0.83f);
			public Color SunsetDirectLight = new Color(1.0f, 0.625f, 0.0f);
			public Color SunsetAmbientLight = new Color(0.16f, 0.29f, 0.6f);
			public Color SunsetFogColor = new Color(0.56f, 0.53f, 0.5f);
			public Color TwilightDirectLight = new Color(0.2f, 0.0f, 0.0f);
			public Color TwilightAmbientLight = new Color(0.6f, 0.75f, 1.0f);
			public Color TwilightFogColor = new Color(0.16f, 0.12f, 0.16f);
			public Color NightDirectLight = new Color(0.3f, 0.35f, 0.5f);
			public Color NightAmbientLight = new Color(0.4f, 0.4f, 0.6f);
			public Color NightFogColor = new Color(0.03f, 0.04f, 0.08f);

			// fog parameters can be vectorized for tranistional lerp
			public float fogLinearStart = -75;
			public float fogLinearEnd = 1500;
			public float fogHeight = 1;
			public float fogComplexMinimum = 1;
		}
		public List<LightKit> LightKits = new List<LightKit>(); // new LightKit[BRBGlobals.MapThemes.GetValues(typeof(BRBGlobals.MapThemes)).Length];
		public bool useFog = true;
		[Range(-10000.0f, 10000.0f)]
		private float fogLinearStart = -75;
		[Range(-10000.0f, 10000.0f)]
		private float fogLinearEnd = 1500;
		[Range(0f, 1f)]
		private float fogHeight = 1;
		[Range(0f, 1f)]
		private float fogComplexMinimum = 1;
		[Range(0.0f, 1.0f)]
		public float increaseAmbientToDirectionalRatio = 0.0f;
		public bool desaturateAmbientAsRatioIncrease = true;
		[Range(0.0f, 1.0f)]
		public float shadowStrengthMultiplier = 1.0f; // instead of increasing ambient to directional ratio

		[Range(0.0f, 2.0f)]
		public float sunPeakIntensity = 1.0f; // 2.0f to be more physical 1.2f for traditional diffuse, 1.0f when using stepped toon ramps
		[Range(0.0f, 2.0f)]
		public float skyPeakIntensity = 1.0f;  // setting brighter than 1.0f to work better with PBR (if using skybox)
		[Range(0.0f, 10.0f)]
		public float equatorSaturation = 1.0f;
		[Range(0.0f, 1.0f)]
		public float equatorValue = 0.5f;
		public Color groundColor = new Color(0f, 0f, 0f);

		public float minPoint = -0.2f;
		public float currentTime = 12.0f;   // start at noon
		public float sunriseTime = 6.333f; // dawn 100%
		public float sunsetTime = 19.5f; // twilight 100%
		public float dayPercentage = 0.5f; // sunrise peaks halfway between dawn and day, so the defines how all stops are set between sunriseTime and sunsetTime
		public float timeOffset = 0.0f; // for debugging real-time (can remove later)
		public float sunMaxAngle = 60.0f;
		public float moonMaxAngle = -15.0f; // keep small for small shadows (opposite sign from sun for max variation)

		public enum FogTypeEnum
		{
			None,
			Linear,
			Height,
			Complex
		}

		private FogTypeEnum fogType = FogTypeEnum.Linear;
		private FogTypeEnum fogTypePrevious = FogTypeEnum.Linear;

		public float dayRotateSpeed = 0.5f;
		public float nightRotateSpeed = 1.0f;

		public bool isRealTime;  // uses real time of day
		public float lightColorUpdateFrequency = 1.0f; // update shadow-casting light color once every second
		public float lightDirectionUpdateFrequency = 60.0f; // update shadow-casting light direction once every minute

		//public Texture2D fogNoise; // experimented with adding fog noise as texture...didn't like result

		[HideInInspector]
		public bool isNight = false;
		public bool isInitialized = false;
		private bool triggerLights = false;
		private bool triggerInvoke = false;
		public float normalizedTime;

		//private BRBGlobals.MapThemes currentTheme; 
		private int ct = 0;

		public Light sunLight;
		//public Light moonLight; // repurposing as always present directional ambient term (without shadow)...call it "bounce"?
		//public Camera referenceCamera; // skybox's camera
		public Camera mapCamera; // map camera
		private CameraManager cameraManager; // map camera's manager

		private float shadowBias = 0.05f;
		private float shadowNormalBias = 0.25f; // 0.01 may be too small
		private float lightningFlashDelay = 0.0f;
		private float lightningMinDelay = 0.5f;
		private float lightningMaxDelay = 3.0f;
		float skySpeed = 1;

		public static LightAutoIntensity instance;

		private void OnEnable()
		{
			RenderSettings.sun = sunLight;
		}

		void Awake()
		{
			Instance = this;
		}

		void Start()
		{
			Shader.SetGlobalVector("_ScreenOffsets", new Vector4(screenspaceGradient_MaxScale, screenspaceGradient_MinOffset, 0.0f, 0.0f)); // offsets for screen space gradient
			/*
			if (mapCamera != null)
			{
				cameraManager = referenceCamera.GetComponent<CameraManager>();
			}
			*/
			RenderSettings.sun = sunLight;
			RenderSettings.ambientMode = UnityEngine.Rendering.AmbientMode.Trilight;
			RenderSettings.ambientIntensity = skyPeakIntensity + increaseAmbientToDirectionalRatio;
			RenderSettings.reflectionIntensity = 1f;
			//RenderSettings.skybox = null;
			instance = this;
			sunLight.intensity = sunPeakIntensity;
			sunLight.shadowBias = shadowBias;
			sunLight.shadowNormalBias = shadowNormalBias;
			//moonLight.intensity = 0.333f;
			//moonLight.shadows = LightShadows.None;
			InitializeGradientsAndCurves();
			triggerInvoke = true; // testing to see if updating shadow every frame is causing issues when isRealTime is set to false
			RenderSettings.fog = useFog;
			UpdateLightColor();
			UpdateLightDirection();
			if (isRealTime) { // shadow direction changes slowly in real-time, so let's not update every frame
				InvokeRepeating("UpdateLightColor", 0.03333f, lightColorUpdateFrequency);
				InvokeRepeating("UpdateLightDirection", 0.03333f, lightDirectionUpdateFrequency);
			}
			else
			{
				InvokeRepeating("UpdateLightColor", 0.03333f, 0.03333f); // 30fps
				InvokeRepeating("UpdateLightDirection", 0.03333f, 0.03333f); // 30fps
			}

			//StartCoroutine("RefreshProbe");
		}

		void UpdateCurrentTime()
		{
			float tRange = 1 - minPoint;
			float dot = Mathf.Clamp01((Vector3.Dot(transform.up, Vector3.up) - minPoint) / tRange);

			if (!isRealTime)
			{
				if (dot > 0)
				{
					currentTime += dayRotateSpeed * Time.deltaTime * skySpeed;
				}
				else
				{
					currentTime += nightRotateSpeed * Time.deltaTime * skySpeed;
				}

				if (currentTime > 24.0f)
				{
					currentTime -= 24.0f;
				}
			}
			else
			{
				System.DateTime CurrentDate = new System.DateTime();
				CurrentDate = System.DateTime.Now;
				currentTime = ((float)CurrentDate.Hour + (float)CurrentDate.Minute * 0.01667f) + timeOffset;
			}
			normalizedTime = currentTime / 24.0f;
			isNight = (currentTime < sunriseTime || currentTime > sunsetTime);

			if (isNight != triggerLights)
			{
				// make sure to only call update night lights twice per day
				triggerLights = isNight;
				//UpdateNightLights();
			}
		}

		void SetSunShadows()
		{
			return;  // distabled the following due to potential issues on some iOS devices
			if (sunLight.shadowStrength > 0)
			{
				/* this doesn't achieve the look I want because Unity's current soft shadow technique is seriously lacking
				sunLight.shadowResolution = isNight ? UnityEngine.Rendering.LightShadowResolution.Medium : UnityEngine.Rendering.LightShadowResolution.High;
				sunLight.shadows = isNight ? LightShadows.Soft : LightShadows.Hard;
				*/
				sunLight.shadows = LightShadows.Hard;
			}
			else
			{
				sunLight.shadows = LightShadows.None;
			}
		}

		void SetRandomLightning()
		{
			lightningFlashDelay = UnityEngine.Random.Range(lightningMinDelay, lightningMaxDelay);
			Debug.Log("Next lightning flash in " + lightningFlashDelay + " seconds.");
		}

		/*
		void UpdateNightLights() {
			foreach (NightLight nightLight in GameObject.FindObjectsOfType<NightLight>()) {
				nightLight.LightsOn = isNight;
				nightLight.SetVertexColorsDelayed();
			}
		}
		*/

		void UpdateFog()
		{
			fogTypePrevious = fogType;
			RenderSettings.fog = (fogType > 0) && useFog;
			RenderSettings.fogMode = FogMode.Linear;
	
			mapCamera.clearFlags = CameraClearFlags.SolidColor;
			mapCamera.backgroundColor = new Color(RenderSettings.fogColor.r, RenderSettings.fogColor.g, RenderSettings.fogColor.b, 1);
	
			/*
			if (fogType == FogTypeEnum.Height) 
			{
				Shader.DisableKeyword("FOG_BRB_COMPLEX");
				Shader.EnableKeyword("FOG_BRB_HEIGHT");
			} 
			else if (fogType == FogTypeEnum.Complex) 
			{
				Shader.DisableKeyword("FOG_BRB_HEIGHT");
				Shader.EnableKeyword("FOG_BRB_COMPLEX");
			} 
			else 
			{
				Shader.DisableKeyword("FOG_BRB_HEIGHT");
				Shader.DisableKeyword("FOG_BRB_COMPLEX");
			}
			*/

			// FOG_BRB_COMPLEX is now default
			//Shader.SetGlobalTexture("_FogNoiseTex", fogNoise); // experimented with adding global set texture instead of vertex sine function
		}

		void UpdateLightColor()
		{
			UpdateCurrentTime();
			sunLight.intensity = sunPeakIntensity;
			RenderSettings.ambientIntensity = skyPeakIntensity + increaseAmbientToDirectionalRatio;
			sunLight.shadowStrength = shadowFade.Evaluate(normalizedTime) * shadowStrengthMultiplier; //  todDirectLightColor.Evaluate(normalizedTime).a;
			sunLight.color = (1.0f - increaseAmbientToDirectionalRatio) * new Color(todDirectLightColor.Evaluate(normalizedTime).r, todDirectLightColor.Evaluate(normalizedTime).g, todDirectLightColor.Evaluate(normalizedTime).b, sunLight.color.a).gamma; // this allows us to use sun light's alpha for something else
			Color ambientSkyColor = todAmbientLightColor.Evaluate(normalizedTime).linear;
			Color ambientEquatorColor = todAmbientLightColor.Evaluate(normalizedTime);
			float ambientSkyAlpha = ambientSkyColor.a;
			if (desaturateAmbientAsRatioIncrease)
			{
				ambientSkyColor = ambientSkyColor * (1f - increaseAmbientToDirectionalRatio) + Color.white * increaseAmbientToDirectionalRatio;
			}
			ambientSkyColor = ambientSkyColor * RenderSettings.ambientIntensity; // scaled to better work with PBR
			ambientSkyColor.a = ambientSkyAlpha;
			RenderSettings.ambientSkyColor = new Color(ambientSkyColor.r, ambientSkyColor.g, ambientSkyColor.b, ambientSkyColor.a).gamma;
			Color nondirectionalLight = (sunLight.color.linear * sunLight.intensity + ambientSkyColor * RenderSettings.ambientIntensity).linear;
			Shader.SetGlobalVector("_NonDirectionalLight", new Vector4(nondirectionalLight.r, nondirectionalLight.g, nondirectionalLight.b, ambientSkyColor.a));
			//Debug.Log("BRB DEBUG: " + Shader.GetGlobalVector("_NonDirectionalLight"));
			float hue;
			float saturation;
			float value;
			Color.RGBToHSV(ambientEquatorColor.gamma, out hue, out saturation, out value);
			saturation *= equatorSaturation;
			ambientEquatorColor = Color.HSVToRGB(hue, saturation, value).linear;
			if (desaturateAmbientAsRatioIncrease)
			{
				ambientEquatorColor = ambientEquatorColor * (1f - increaseAmbientToDirectionalRatio) + Color.white * increaseAmbientToDirectionalRatio;
			}
			ambientEquatorColor *= RenderSettings.ambientIntensity * equatorValue;
			RenderSettings.ambientEquatorColor = new Color(ambientEquatorColor.r, ambientEquatorColor.g, ambientEquatorColor.b, 1 - fogComplexMinimum).gamma; //RenderSettings.ambientEquatorColor = new Color(ambientSkyColor.r * 0.5f, ambientSkyColor.g * 0.5f, ambientSkyColor.b * 0.5f, 1 - fogComplexMinimum).gamma; //RenderSettings.ambientEquatorColor = new Color ( nondirectionalLight.r, nondirectionalLight.g, nondirectionalLight.b, 1 - fogComplexMinimum ).gamma; // use with shader for clouds and "lit" particles
			RenderSettings.ambientGroundColor = new Color(groundColor.r, groundColor.g, groundColor.b, fogHeight /* fogComplexMinimum */);
			//moonLight.color = RenderSettings.ambientEquatorColor; // to give a constant directional boost to ambience
			RenderSettings.fogColor = todFogColor.Evaluate(normalizedTime).gamma;// * new Color(1, 1, 1, fogHeight)).gamma;

			if (Input.GetKeyDown(KeyCode.Q))
			{
				skySpeed *= 0.5f;
			}

			if (Input.GetKeyDown(KeyCode.E))
			{
				skySpeed *= 2f;
			}
		}

		void UpdateLightDirection()
		{
			SetSunShadows();

			float relativeTime = timeToAngle.Evaluate(normalizedTime);
			if (relativeTime > 180.0f)
			{
				relativeTime -= 360.0f;
			}

			//transform.rotation = Quaternion.Euler(isNight ? 15.0f : -30.0f, 0, relativeTime);
		}


		void Update()
		{
			/*
			if (currentTheme != HexGrid.GetTheme()) {
				ChangeTheme();
				return;
			}
			*/
			/* commenting this out since i'm now forcing invoke to be on regardless
			if (sunLight.shadowStrength == 0 || !isRealTime)
			{
				if (triggerInvoke)
				{
					triggerInvoke = false;
					CancelInvoke("UpdateLightColor");
					CancelInvoke("UpdateLightDirection");
				}
			}
			else if (!triggerInvoke)
			{
				if (isRealTime)
				{
					triggerInvoke = true;
					InvokeRepeating("UpdateLightColor", 0.0333f, lightColorUpdateFrequency);
					InvokeRepeating("UpdateLightDirection", 0.0333f, lightDirectionUpdateFrequency);
				}
			}
			if (!triggerInvoke)
			{
				UpdateLightColor();
				UpdateLightDirection();
			}
			*/

			if (!useFog)
			{
				return;
			}

			// Update fog ranges every frame so we can add camera height compensation to reduce fog when map is zoomed out
			// or if we want to blend between different fog states, but only update shader keyword IF state needs to change
			if (fogComplexMinimum >= 1 && fogType > FogTypeEnum.Height)
			{
				fogType = FogTypeEnum.Height; // enforcing this as an optimization since they are visually equivalent
			}
			else if (fogComplexMinimum < 1 && fogType <= FogTypeEnum.Height)
			{
				fogType = FogTypeEnum.Complex;
			}

			if (fogHeight >= 1 && fogType == FogTypeEnum.Height)
			{
				fogType = FogTypeEnum.Linear; // enforcing this as an optimization since they are visually equivalent
			}
			else if (fogHeight < 1 && fogType < FogTypeEnum.Height)
			{
				fogType = FogTypeEnum.Height;
			}

			if (fogType != fogTypePrevious)
			{
				UpdateFog();
			}
			//float cameraHeightFactor = Mathf.Clamp01((referenceCamera.transform.localPosition.y - 150.0f) / fogLinearEnd);
			RenderSettings.fogStartDistance = fogLinearStart; //RenderSettings.fogStartDistance = mapCamera.transform.localPosition.y - 50.0f + fogLinearStart; // + 0.725f * Mathf.Max(0.0f, mapCamera.farClipPlane - 800.0f); //RenderSettings.fogStartDistance = Mathf.Min(Mathf.Lerp(fogLinearStart, fogLinearEnd, cameraHeightFactor * 1.5f),  fogLinearEnd - 1f );
			RenderSettings.fogEndDistance = fogLinearEnd; //RenderSettings.fogEndDistance = fogLinearEnd; // we used to have variable fog, but end must now be set in CameraManager...updated to match the clipping plane
		}

		public void UseCurrentTheme()
		{
			if (!isInitialized)
			{
				return;
			}

			//currentTheme = HexGrid.GetTheme();
			//int ct = (int)currentTheme;
			ct = 0;

			// Debug.Log("Current Theme: " + ct);
			// Eventually we may want to blend to these new values over time
			todDirectLightColor = new Gradient()
			{
				colorKeys = new GradientColorKey[8]
				{
				new GradientColorKey(LightKits[ct].NightDirectLight.linear, todDirectLightColor.colorKeys[0].time),
				new GradientColorKey(LightKits[ct].DawnDirectLight.linear, todDirectLightColor.colorKeys[1].time),
				new GradientColorKey(LightKits[ct].SunriseDirectLight.linear, todDirectLightColor.colorKeys[2].time),
				new GradientColorKey(LightKits[ct].MorningDirectLight.linear, todDirectLightColor.colorKeys[3].time),
				new GradientColorKey(LightKits[ct].AfternoonDirectLight.linear, todDirectLightColor.colorKeys[4].time),
				new GradientColorKey(LightKits[ct].SunsetDirectLight.linear, todDirectLightColor.colorKeys[5].time),
				new GradientColorKey(LightKits[ct].TwilightDirectLight.linear, todDirectLightColor.colorKeys[6].time),
				new GradientColorKey(LightKits[ct].NightDirectLight.linear, todDirectLightColor.colorKeys[7].time),
				},

				alphaKeys = new GradientAlphaKey[2]
				{
				new GradientAlphaKey(1, 0),
				new GradientAlphaKey(1, 1)
				}
			};

			todAmbientLightColor = new Gradient()
			{
				colorKeys = new GradientColorKey[8]
				{
				new GradientColorKey(LightKits[ct].NightAmbientLight.linear, todAmbientLightColor.colorKeys[0].time),
				new GradientColorKey(LightKits[ct].DawnAmbientLight.linear, todAmbientLightColor.colorKeys[1].time),
				new GradientColorKey(LightKits[ct].SunriseAmbientLight.linear, todAmbientLightColor.colorKeys[2].time),
				new GradientColorKey(LightKits[ct].MorningAmbientLight.linear, todAmbientLightColor.colorKeys[3].time),
				new GradientColorKey(LightKits[ct].AfternoonAmbientLight.linear, todAmbientLightColor.colorKeys[4].time),
				new GradientColorKey(LightKits[ct].SunsetAmbientLight.linear, todAmbientLightColor.colorKeys[5].time),
				new GradientColorKey(LightKits[ct].TwilightAmbientLight.linear, todAmbientLightColor.colorKeys[6].time),
				new GradientColorKey(LightKits[ct].NightAmbientLight.linear, todAmbientLightColor.colorKeys[7].time),
				},

				alphaKeys = new GradientAlphaKey[8]
				{
				new GradientAlphaKey(LightKits[ct].NightAmbientLight.a, todAmbientLightColor.colorKeys[0].time),
				new GradientAlphaKey(LightKits[ct].DawnAmbientLight.a, todAmbientLightColor.colorKeys[1].time),
				new GradientAlphaKey(LightKits[ct].SunriseAmbientLight.a, todAmbientLightColor.colorKeys[2].time),
				new GradientAlphaKey(LightKits[ct].MorningAmbientLight.a, todAmbientLightColor.colorKeys[3].time),
				new GradientAlphaKey(LightKits[ct].AfternoonAmbientLight.a, todAmbientLightColor.colorKeys[4].time),
				new GradientAlphaKey(LightKits[ct].SunsetAmbientLight.a, todAmbientLightColor.colorKeys[5].time),
				new GradientAlphaKey(LightKits[ct].TwilightAmbientLight.a, todAmbientLightColor.colorKeys[6].time),
				new GradientAlphaKey(LightKits[ct].NightAmbientLight.a, todAmbientLightColor.colorKeys[7].time),
				}
			};

			todFogColor = new Gradient()
			{
				colorKeys = new GradientColorKey[8]
				{
				new GradientColorKey(LightKits[ct].NightFogColor.linear, todFogColor.colorKeys[0].time),
				new GradientColorKey(LightKits[ct].DawnFogColor.linear, todFogColor.colorKeys[1].time),
				new GradientColorKey(LightKits[ct].SunriseFogColor.linear, todFogColor.colorKeys[2].time),
				new GradientColorKey(LightKits[ct].MorningFogColor.linear, todFogColor.colorKeys[3].time),
				new GradientColorKey(LightKits[ct].AfternoonFogColor.linear, todFogColor.colorKeys[4].time),
				new GradientColorKey(LightKits[ct].SunsetFogColor.linear, todFogColor.colorKeys[5].time),
				new GradientColorKey(LightKits[ct].TwilightFogColor.linear, todFogColor.colorKeys[6].time),
				new GradientColorKey(LightKits[ct].NightFogColor.linear, todFogColor.colorKeys[7].time),
				},
				alphaKeys = new GradientAlphaKey[8]
				{
				new GradientAlphaKey(LightKits[ct].NightFogColor.a, todFogColor.colorKeys[0].time),
				new GradientAlphaKey(LightKits[ct].DawnFogColor.a, todFogColor.colorKeys[1].time),
				new GradientAlphaKey(LightKits[ct].SunriseFogColor.a, todFogColor.colorKeys[2].time),
				new GradientAlphaKey(LightKits[ct].MorningFogColor.a, todFogColor.colorKeys[3].time),
				new GradientAlphaKey(LightKits[ct].AfternoonFogColor.a, todFogColor.colorKeys[4].time),
				new GradientAlphaKey(LightKits[ct].SunsetFogColor.a, todFogColor.colorKeys[5].time),
				new GradientAlphaKey(LightKits[ct].TwilightFogColor.a, todFogColor.colorKeys[6].time),
				new GradientAlphaKey(LightKits[ct].NightFogColor.a, todFogColor.colorKeys[7].time),
				}
			};

			fogLinearStart = LightKits[ct].fogLinearStart;
			fogLinearEnd = LightKits[ct].fogLinearEnd;
			fogHeight = LightKits[ct].fogHeight;
			fogComplexMinimum = LightKits[ct].fogComplexMinimum;

			UpdateLightColor();
			UpdateLightDirection();

			if (!useFog)
			{
				return;
			}

			UpdateFog();
		}

		void ChangeTheme()
		{
			/* forcing invoke to stay on
			if (triggerInvoke)
			{
				triggerInvoke = false;
				CancelInvoke("UpdateLightColor");
				CancelInvoke("UpdateLightDirection");
			}
			*/
			UseCurrentTheme();
		}

		public void InitializeGradientsAndCurves()
		{
			float dawn = sunriseTime / 24.0f;
			float twilight = sunsetTime / 24.0f;
			float day = twilight - dawn;
			float middayPercentage = day * dayPercentage;
			float earlyLateTransitions = (day - middayPercentage) * 0.25f; // each transitional segment is a quarter of the remaining
			float sunrise = dawn + earlyLateTransitions;
			float morning = sunrise + earlyLateTransitions;
			float afternoon = morning + middayPercentage;
			float sunset = afternoon + earlyLateTransitions;
			float night = twilight + earlyLateTransitions * 0.5f;
			float predawn = dawn - earlyLateTransitions * 0.5f;
			float shadowKey = 0.0009765625f;

			timeToAngle = new AnimationCurve(
				new Keyframe(dawn - shadowKey, moonMaxAngle, 0, 0),
				new Keyframe(dawn + shadowKey, -sunMaxAngle, 0, 0),
				new Keyframe(twilight - shadowKey, sunMaxAngle, 0, 0),
				new Keyframe(twilight + shadowKey, -moonMaxAngle, 0, 0),
				new Keyframe(dawn - shadowKey + 1.0f, moonMaxAngle, 0, 0)
			);

			shadowFade = new AnimationCurve(
				new Keyframe(dawn - shadowKey * 2.0f, 1),
				new Keyframe(dawn - shadowKey, 0),
				new Keyframe(dawn + shadowKey, 0),
				new Keyframe(dawn + shadowKey * 2.0f, 1),
				new Keyframe(twilight - shadowKey * 2.0f, 1),
				new Keyframe(twilight - shadowKey, 0),
				new Keyframe(twilight + shadowKey, 0),
				new Keyframe(twilight + shadowKey * 2.0f, 1)
			);

			timeToAngle.preWrapMode = UnityEngine.WrapMode.Loop;
			timeToAngle.postWrapMode = UnityEngine.WrapMode.Loop;
			shadowFade.preWrapMode = UnityEngine.WrapMode.ClampForever;
			shadowFade.postWrapMode = UnityEngine.WrapMode.ClampForever;

			todDirectLightColor = new Gradient()
			{
				colorKeys = new GradientColorKey[8]
				{
				new GradientColorKey(LightKits[ct].NightDirectLight, predawn),
				new GradientColorKey(LightKits[ct].DawnDirectLight, dawn),
				new GradientColorKey(LightKits[ct].SunriseDirectLight, sunrise),
				new GradientColorKey(LightKits[ct].MorningDirectLight, morning),
				new GradientColorKey(LightKits[ct].AfternoonDirectLight, afternoon),
				new GradientColorKey(LightKits[ct].SunsetDirectLight, sunset),
				new GradientColorKey(LightKits[ct].TwilightDirectLight, twilight),
				new GradientColorKey(LightKits[ct].NightDirectLight, night),
				},

				alphaKeys = new GradientAlphaKey[2]
				{
				new GradientAlphaKey(1, 0),
				new GradientAlphaKey(1, 1)
				}
			};

			todAmbientLightColor = new Gradient()
			{
				colorKeys = new GradientColorKey[8]
				{
				new GradientColorKey(LightKits[ct].NightAmbientLight, predawn),
				new GradientColorKey(LightKits[ct].DawnAmbientLight, dawn),
				new GradientColorKey(LightKits[ct].SunriseAmbientLight, sunrise),
				new GradientColorKey(LightKits[ct].MorningAmbientLight, morning),
				new GradientColorKey(LightKits[ct].AfternoonAmbientLight, afternoon),
				new GradientColorKey(LightKits[ct].SunsetAmbientLight, sunset),
				new GradientColorKey(LightKits[ct].TwilightAmbientLight, twilight),
				new GradientColorKey(LightKits[ct].NightAmbientLight, night),
				},

				alphaKeys = new GradientAlphaKey[2]
				{
				new GradientAlphaKey(1, 0),
				new GradientAlphaKey(1, 1)
				}
			};

			todFogColor = new Gradient()
			{
				colorKeys = new GradientColorKey[8]
				{
				new GradientColorKey(LightKits[ct].NightFogColor.linear, predawn),
				new GradientColorKey(LightKits[ct].DawnFogColor.linear, dawn),
				new GradientColorKey(LightKits[ct].SunriseFogColor.linear, sunrise),
				new GradientColorKey(LightKits[ct].MorningFogColor.linear, morning),
				new GradientColorKey(LightKits[ct].AfternoonFogColor.linear, afternoon),
				new GradientColorKey(LightKits[ct].SunsetFogColor.linear, sunset),
				new GradientColorKey(LightKits[ct].TwilightFogColor.linear, twilight),
				new GradientColorKey(LightKits[ct].NightFogColor.linear, night),
				},

				alphaKeys = new GradientAlphaKey[2]
				{
				new GradientAlphaKey(1, 0),
				new GradientAlphaKey(1, 1)
				}
			};

			isInitialized = true;
			UseCurrentTheme();
		}

		private void OnValidate()
		{
			Shader.SetGlobalVector("_ScreenOffsets", new Vector4(screenspaceGradient_MaxScale, screenspaceGradient_MinOffset, 0.0f, 0.0f)); // offsets for screen space gradient
			RenderSettings.fog = useFog;
			if (isInitialized)
			{
				UseCurrentTheme();
			}
		}

		public void ToggleTimeOfDay()
		{
			isRealTime = !isRealTime;
		}
	}
}