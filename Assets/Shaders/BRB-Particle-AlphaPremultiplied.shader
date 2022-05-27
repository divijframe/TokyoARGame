// BRB modified Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

Shader "BRB/Particles/Alpha Blended Premultiplied (unlit)" {
	Properties {
		_MainTex ("Particle Texture", 2D) = "white" {}
		_InvFade ("Soft Particles Factor", Range(0.01,3.0)) = 1.0
		[Toggle(NEVER_FOG)] _Fog("Never Fog", Int) = 0
		[Toggle(PARTICLE_ALPHA)] _Alpha("Particle Alpha Modulates Color", Int) = 0
		[Toggle(MAP)] _Map("3D Map (fades at clip)", Int) = 0
	}

	Category {
		Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" "PreviewType"="Plane" }
		ColorMask RGB
		Cull Off Lighting Off ZWrite Off


		SubShader {
			Pass {
				Blend One OneMinusSrcAlpha		
				CGPROGRAM
#if !defined(SHADER_API_MOBILE) // && !defined(SHADER_API_METAL)
				#define SHADER_API_MOBILE// workaround to force fog to render on PC the same as it does on mobile device
#endif
				#pragma vertex vert
				#pragma fragment frag
				#pragma exclude_renderers d3d11_9x xboxone ps4 n3ds wiiu
				#pragma target 2.0
				#pragma multi_compile_particles
				#pragma shader_feature __ NEVER_FOG
				#pragma shader_feature __ MAP
				#pragma shader_feature __ PARTICLE_ALPHA
				// #pragma multi_compile __ FOG_BRB_HEIGHT FOG_BRB_COMPLEX
				#define FOG_CUSTOM ( defined(FOG_BRB_HEIGHT) || defined(FOG_BRB_COMPLEX) )	
				#pragma multi_compile __ FOG_LINEAR
		
				#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
				#include "UnityCG.cginc"
				//#include "Assets/Shaders/CustomFog.cginc"
				//#include "CustomMap.cginc"

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
#ifdef SOFTPARTICLES_ON
					float4 projPos : TEXCOORD1;
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
					o.color = v.color;
#ifdef PARTICLE_ALPHA
					o.color.rgb *= v.color.a;
#endif
#ifdef MAP
					float4 clipPos = o.vertex;
	#ifdef NEVER_FOG
					o.color.a *= fadeAtClip(o.vertex, float4(clipPos.xz, 5, 100));
	#endif
#endif

					o.texcoord = TRANSFORM_TEX(v.texcoord,_MainTex);
#if USING_FOG && !defined(NEVER_FOG)
					float2 fade = screenFade(clipPos); // can compute screen space based fade here, but actual fog should be computed in pixel shader (to support perfect fogging at clipping plane)
					o.color.a *= screenFadedFog(clipPos, fade.y); // should compute fog in pixel shader to guarantee it fades at clipping plane
#endif
					return o;
				}

				UNITY_DECLARE_DEPTH_TEXTURE(_CameraDepthTexture);
				float _InvFade;

				fixed4 frag (v2f i) : SV_Target	{
					fixed4 col = tex2D(_MainTex, i.texcoord);
#ifdef SOFTPARTICLES_ON
					float sceneZ = LinearEyeDepth(SAMPLE_DEPTH_TEXTURE_PROJ(_CameraDepthTexture, UNITY_PROJ_COORD(i.projPos)));
					float partZ = i.projPos.z;
					float fade = saturate(_InvFade * (sceneZ - partZ));
					col.a *= fade;
#endif
					col.rgb *= i.color.rgb;
#if USING_FOG && !defined(NEVER_FOG)
					fixed3 fogcol = unity_FogColor.rgb * col.a; // premultiplied means area outside of alpha needs to fog to black
					col.rgb = lerp(fogcol, col.rgb, i.color.a);
#endif
					return col;
				}
				ENDCG
			}
		}
	}
}
