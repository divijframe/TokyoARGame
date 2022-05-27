Shader "BRB/Transparent/Cutout/NondirectionallyLit/TexColor" {
	Properties{
		_MainTex("Base (RGB) Trans (A)", 2D) = "white" {}
		_Cutoff("Alpha cutoff", Range(0,1)) = 0.5
		[Toggle(NEVER_FOG)] _Fog("Never Fog", Int) = 0
		[Toggle(MULT_VERTEX)] _Vertex("Modulate texture color by Vertex Colors", Int) = 0
		[Enum(UnityEngine.Rendering.CullMode)] _Cull("Cull", float) = 2
		[Enum(UnityEngine.Rendering.CullMode)] _ShadowCull("Shadowcaster Cull", float) = 2
	}
	SubShader{
		Tags{
			"Queue" = "Transparent"
			"IgnoreProjector" = "True"
			"RenderType" = "Transparent" // TransparentCutout is slower on mobile
		}
		LOD	100
		Lighting Off
		Blend SrcAlpha OneMinusSrcAlpha
		ZWrite Off
		Cull [_Cull]

		Pass{
			Name "FORWARD"
			CGPROGRAM
#ifndef SHADER_API_MOBILE
			#define SHADER_API_MOBILE// workaround to force fog to render on PC the same as it does on mobile device
#endif
			#pragma vertex vert
			#pragma fragment frag
			#pragma shader_feature __ NEVER_FOG
			#pragma shader_feature __ MULT_VERTEX
			#pragma multi_compile __ FOG_BRB_HEIGHT FOG_BRB_COMPLEX
			#define FOG_CUSTOM ( defined(FOG_BRB_HEIGHT) || defined(FOG_BRB_COMPLEX) )
			#pragma multi_compile_fog
			#pragma target 2.0
			#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))

			#include "UnityCG.cginc"

			#include "Assets/Shaders/CustomFog.cginc"

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float _Cutoff;

			struct appdata_t {
				float4 vertex : POSITION;
				fixed4 color : COLOR;
				float2 uv : TEXCOORD0;
			};

			struct v2f {
				float4 vertex : SV_POSITION;
				float2 uv : TEXCOORD0;
				fixed4 color : COLOR;
#if USING_FOG && !defined(NEVER_FOG)
				UNITY_FOG_COORDS(1)
#endif
				UNITY_VERTEX_OUTPUT_STEREO
			};

			v2f vert(appdata_t v) {
				v2f o;
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
#ifdef MULT_VERTEX
				o.color = v.color * fixed4(unity_AmbientEquator.rgb, 1);
#else
				o.color = fixed4(unity_AmbientEquator.rgb, 1);
#endif
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.vertex = UnityObjectToClipPos(v.vertex);
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

			fixed4 frag(v2f i) : SV_Target{
				fixed4 c = tex2D(_MainTex, i.uv);
//				clip(c.a - _Cutoff); // TransparentCutout is slower on mobile, but necessary in shadow pass
				c *= i.color;
#if USING_FOG && !defined(NEVER_FOG)
				UNITY_APPLY_FOG(i.fogCoord, c);
#endif
				return c;
			}
			ENDCG
		}

		// Pass to render object as a shadow caster
		Pass{
			Name "Caster"
			Tags{ "LightMode" = "ShadowCaster" }

			ZWrite On ZTest LEqual Cull [_ShadowCull]

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 2.0
			#pragma multi_compile_shadowcaster
			#pragma multi_compile_instancing // allow instanced shadow pass for most of the shaders
			#include "UnityCG.cginc"

			struct v2f {
				V2F_SHADOW_CASTER;
				float2	uv : TEXCOORD1;
				UNITY_VERTEX_OUTPUT_STEREO
			};

			uniform float4 _MainTex_ST;

			v2f vert(appdata_base v) {
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				TRANSFER_SHADOW_CASTER_NORMALOFFSET(o)
				o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
				return o;
			}

			uniform sampler2D _MainTex;
			uniform fixed _Cutoff;

			float4 frag(v2f i) : SV_Target {
				fixed4 texcol = tex2D(_MainTex, i.uv);
				clip(texcol.a - _Cutoff);

				SHADOW_CASTER_FRAGMENT(i)
			}
			ENDCG
		}
	}
	Fallback Off
}
