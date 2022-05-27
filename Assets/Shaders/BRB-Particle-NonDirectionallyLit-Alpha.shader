Shader "BRB/Particles/NonDirectionallyLit/Alpha Blended" {
Properties {
	_MainTex ("Particle Texture", 2D) = ""
	[Toggle(NEVER_FOG)] _Fog("Never Fog", Int) = 0
}
Category {
	Tags {
		"Queue" = "Transparent"
		"IgnoreProjector" = "True"
		"RenderType" = "Transparent"
		"PreviewType" = "Plane"
		}
	Blend SrcAlpha OneMinusSrcAlpha
	Cull Off
	Lighting Off
	ZWrite Off

	SubShader{
		Pass{
			CGPROGRAM
#ifndef SHADER_API_MOBILE
			#define SHADER_API_MOBILE// workaround to force fog to render on PC the same as it does on mobile device
#endif
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 2.0
			#pragma multi_compile_particles
			#pragma shader_feature __ NEVER_FOG
			#pragma multi_compile __ FOG_BRB_HEIGHT FOG_BRB_COMPLEX
			#define FOG_CUSTOM ( defined(FOG_BRB_HEIGHT) || defined(FOG_BRB_COMPLEX) )	
			#pragma multi_compile_fog
			#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
			#include "UnityCG.cginc"
			#include "Assets/Shaders/CustomFog.cginc"

			sampler2D _MainTex;
			fixed4 _TintColor;

			struct appdata_t {
				float4 vertex : POSITION;
				fixed4 color : COLOR;
				float2 texcoord : TEXCOORD0;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};

			struct v2f {
				float4 vertex : SV_POSITION;
				fixed4 color : COLOR;
				float2 texcoord : TEXCOORD0;
#if USING_FOG && !defined(NEVER_FOG)
				UNITY_FOG_COORDS(1)
#endif
				UNITY_VERTEX_OUTPUT_STEREO
			};

			float4 _MainTex_ST;

			v2f vert(appdata_t v) {
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.color = v.color * float4(unity_AmbientEquator.rgb,1);
				o.texcoord = TRANSFORM_TEX(v.texcoord,_MainTex);
#if USING_FOG && !defined(NEVER_FOG)
				float4 clipPos = o.vertex;
				clipPos = UNITY_Z_0_FAR_FROM_CLIPSPACE(clipPos);
				o.fogCoord = clipPos.z;
	#if FOG_CUSTOM
		#ifdef FOG_BRB_COMPLEX
				customTransferComplexFog(o.fogCoord, v.vertex);
		#else
				customTransferFog(o.fogCoord, v.vertex);
		#endif
	#endif
				UNITY_CALC_FOG_FACTOR_RAW(o.fogCoord); o.fogCoord = saturate(unityFogFactor);
#endif
				return o;
			}

			fixed4 frag(v2f i) : SV_Target {
				fixed4 c = tex2D(_MainTex, i.texcoord) * i.color;
#if USING_FOG && !defined(NEVER_FOG)
				UNITY_APPLY_FOG(i.fogCoord, c);
#endif
				return c;
			}
			ENDCG
		}
	}
}
}