// Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

// BRB modified Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)


// Simplified Additive Particle shader. Differences from regular Additive Particle one:
// - no Tint color
// - no AlphaTest
// - no ColorMask

Shader "BRB/Particles/Additive" {
	Properties {
		_MainTex ("Particle Texture", 2D) = "white" {}
		_InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
		[Toggle(NEVER_FOG)] _Fog("Never Fog", Int) = 0
		[Toggle(BRB_MAP)] _Map("Use on map", Int) = 0
	}

	Category {
		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane" }
		ColorMask RGB
		Cull Off Lighting Off ZWrite Off

		SubShader {
			Pass {
				Blend SrcAlpha One
				CGPROGRAM
#if !defined(SHADER_API_MOBILE) // && !defined(SHADER_API_METAL)
				#define SHADER_API_MOBILE// workaround to force fog to render on PC the same as it does on mobile device
#endif
				#pragma vertex vert
				#pragma fragment frag
				#pragma exclude_renderers d3d11_9x xboxone ps4 n3ds wiiu
				#pragma target 2.0
				#pragma multi_compile_particles
				// #pragma multi_compile __ FOG_BRB_HEIGHT FOG_BRB_COMPLEX
				#pragma shader_feature __ NEVER_FOG
				#pragma shader_feature __ BRB_MAP
				#define FOG_CUSTOM ( defined(FOG_BRB_HEIGHT) || defined(FOG_BRB_COMPLEX) )
				#pragma multi_compile __ FOG_LINEAR
		
				#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
				#include "Assets/CGincludes/UnityCG.cginc"
				//#include "Assets/Shaders/CustomFog.cginc"
				//#include "Assets/Shaders/CustomMap.cginc"

				sampler2D _MainTex;

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
#ifdef SOFTPARTICLES_ON
					float4 projPos : TEXCOORD1;
/*
	#ifdef BRB_MAP
					float4 clipPos : TEXCOORD2; // w contains fogCoord
					UNITY_FOG_COORDS(3)
	#else
*/
					UNITY_FOG_COORDS(2)
//	#endif
/*
#elif defined(BRB_MAP)
					float4 clipPos : TEXCOORD1; // w contains fogCoord
					UNITY_FOG_COORDS(2)
*/
#endif
					UNITY_VERTEX_OUTPUT_STEREO
				};

				float4 _MainTex_ST;

				v2f vert (appdata_t v) {
					v2f o;
					UNITY_SETUP_INSTANCE_ID(v);
					UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
					o.vertex = UnityObjectToClipPos(v.vertex);
#ifdef SOFTPARTICLES_ON
					o.projPos = ComputeScreenPos (o.vertex);
					COMPUTE_EYEDEPTH(o.projPos.z);
#endif
					o.color = v.color * 2.0f;
/*
#ifdef BRB_MAP
					o.clipPos = o.vertex;
#endif
*/

					o.texcoord = TRANSFORM_TEX(v.texcoord,_MainTex);
/*
#if USING_FOG && !defined(NEVER_FOG)
					float2 fade = screenFade(o.vertex); // can compute screen space based fade here, but we need actual fog computed in pixel shader (to support perfect fogging at clipping plane)
	#ifdef BRB_MAP
					o.clipPos.w = fade.y;
	#else
					o.color.rgb *= screenFadedFog(o.vertex, fade.y); // should compute fog in pixel shader to guarantee it fades at clipping plane
	#endif
#endif
*/
/*
					UNITY_TRANSFER_FOG(o, o.vertex);
#if defined(FOG_LINEAR) && defined(BRB_MAP)
					o.fogCoord.x *= unity_FogColor.a * (1.h - saturate(v.vertex.y * unity_AmbientGround.w));
#endif
*/
					return o;
				}

				UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
				float _InvFade;

				fixed4 frag (v2f i) : SV_Target	{
#ifdef SOFTPARTICLES_ON
					float sceneZ = LinearEyeDepth (SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)));
					float partZ = i.projPos.z;
					float fade = saturate (_InvFade * (sceneZ-partZ));
					i.color.a *= fade;
#endif
					half4 col = i.color * tex2D(_MainTex, i.texcoord);
/*
#ifdef BRB_MAP
	#if USING_FOG && !defined(NEVER_FOG)
					//col.rgb *= screenFadedFog(i.clipPos, i.clipPos.w);
					col.rgb *= saturate(i.vertex.y * i.fogCoord - 0.5h);
	#else
					//col.rgb *= fadeAtClip(i.clipPos, float4(i.clipPos.xz, 5, 5));
	#endif
#endif
*/
					col.a = saturate(col.a);
					return col;
				}
				ENDCG
			}
		}
	}

}
