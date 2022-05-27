// BRB modified Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

Shader "BRB/Toon/Cutout" {
	Properties {
		_MainTex ("Base (RGB) Trans (A)", 2D) = "white" {}
		_Ramp("Toon Ramp (RGB linear)", 2D) = "gray" {}
		_Cutoff("Alpha cutoff", Range(0,1)) = 0.5
		[Toggle(NEVER_FOG)] _Fog("Never Fog", Int) = 0
		[KeywordEnum(None,RampV)] _VertexR("Vertex RGB Mode (A = AO)", float) = 0
		[Toggle(TWOSIDED_LIGHTING)] _Lighting("Use Two Sided Lighting", Int) = 0
		[Enum(UnityEngine.Rendering.CullMode)] _Cull("Cull", float) = 0
		[Enum(UnityEngine.Rendering.CullMode)] _ShadowCull("Shadowcaster Cull", float) = 0
		[Toggle(DISABLE_SHADOWRECEIVE)] _DisableShadowReceive("Disable Received Shadows", Int) = 0
		[Toggle(ENABLE_RIM)] _Rim("Enable Rim Light", Int) = 0
		//RIM LIGHT
		_RimColor("Rim Color", Color) = (0.8,0.8,0.8,0.6)
		_RimMin("Rim Min", Range(-1,1)) = 0.5
		_RimMax("Rim Max", Range(-1,1)) = 1.0
		//Stencil / Outline
		[HideInInspector] _Stencil("Stencil ID", Float) = 0
		[HideInInspector] _ZFail("ZFail", float) = 0
	}

	SubShader {
		//Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"} // TransparentCutout is slower on mobile
		Tags {"Queue"="Alphatest" "IgnoreProjector"="True" "RenderType"="TransparentCutout"} // But TransparentCutout does a better job of drawcall batching
		LOD 125
		// BRB vertex calculated lighting, pixel fetched base, ramp, and shadow
		Pass{
			Name "FORWARDALPHA"
			Tags{ "LightMode" = "ForwardBase" }
			Cull [_Cull]
			Stencil{
				Ref[_Stencil]
				Comp Always
				Pass Replace
				ZFail[_ZFail]
			}
			Blend SrcAlpha OneMinusSrcAlpha, One One
			//Blend One Zero, One One
			ZTest LEqual
			CGPROGRAM
#ifndef SHADER_API_MOBILE
			#define SHADER_API_MOBILE // workaround to force fog to render on PC the same as it does on mobile device
#endif
			#pragma vertex vert
			#pragma fragment frag
			#pragma target 2.0
			#include "HLSLSupport.cginc"
			#include "UnityCG.cginc"
			#include "Lighting.cginc"

			#pragma multi_compile_fwdbase nolightmap nodirlightmap nodynlightmap noambient novertexlight 
			#pragma exclude_renderers d3d11_9x xboxone ps4 n3ds wiiu
			#include "AutoLight.cginc"
			#pragma shader_feature __ _VERTEXR_WRAP
			#pragma shader_feature __ NEVER_FOG
			#pragma shader_feature __ TWOSIDED_LIGHTING
			#pragma shader_feature __ ENABLE_RIM
			#pragma shader_feature __ DISABLE_SHADOWRECEIVE
			#pragma multi_compile __ GOLD_TRANSITION
			// #pragma multi_compile __ FOG_BRB_HEIGHT FOG_BRB_COMPLEX
			#define FOG_CUSTOM ( defined(FOG_BRB_HEIGHT) || defined(FOG_BRB_COMPLEX) )		
			#pragma multi_compile_fog
			#define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))
			#pragma multi_compile_instancing
			//#include "Assets/Shaders/CustomFog.cginc"

			float4 _MainTex_ST;

			struct appdata {
				float4 vertex : POSITION;
				float3 normal : NORMAL;
				float2 texcoord : TEXCOORD0;
				fixed4 color : COLOR;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};

			struct v2f {
				float4 pos : SV_POSITION;
#if defined(_VERTEXR_EMISSIVE) || defined(ENABLE_RIM)
				fixed4 color : COLOR;
#endif
				float2 uv_MainTex : TEXCOORD0;
				fixed4 vlight : TEXCOORD1;
#if defined(USING_DIRECTIONAL_LIGHT) && !defined(ENABLE_HEXSHADE)
				float4 normal : NORMAL;
#endif
#if USING_FOG && !defined(NEVER_FOG)
	#if defined(USING_DIRECTIONAL_LIGHT) && defined(SHADOWS_SCREEN)
				SHADOW_COORDS(2)
				UNITY_FOG_COORDS(3)
		#ifdef ENABLE_HEXSHADE
				float4 world : TEXCOORD4;
		#endif
	#else
				UNITY_FOG_COORDS(2)
		#ifdef ENABLE_HEXSHADE
				float4 world : TEXCOORD3;
		#endif
	#endif
#elif defined(ENABLE_HEXSHADE)
	#if defined(USING_DIRECTIONAL_LIGHT) && defined(SHADOWS_SCREEN)
				SHADOW_COORDS(2)
				float4 world : TEXCOORD3;
	#else
				float4 world : TEXCOORD2;
	#endif
#elif defined(USING_DIRECTIONAL_LIGHT) && defined(SHADOWS_SCREEN)
				SHADOW_COORDS(2)
#endif
				UNITY_VERTEX_OUTPUT_STEREO
			};

			fixed4 _RimColor;
			fixed _RimMin;
			fixed _RimMax;
			float4 _RimDir;
			float4 PlayerPos;

			v2f vert(appdata v) {
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_OUTPUT(v2f, o);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

				o.uv_MainTex = TRANSFORM_TEX(v.texcoord, _MainTex);
				o.pos = UnityObjectToClipPos(v.vertex);
#ifdef _VERTEXR_EMISSIVE
				o.color = v.color;
#endif

				float3 worldN = UnityObjectToWorldNormal(v.normal);
#if defined(TWOSIDED_LIGHTING) || defined(ENABLE_RIM) || defined(GOLD_TRANSITION)
				float3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
				float3 viewDir = normalize(_WorldSpaceCameraPos.xyz - worldPos);
				float vdn = dot(viewDir, worldN);
#endif
#ifdef TWOSIDED_LIGHTING
				worldN *= vdn < 0 ? -1 : 1;
#endif
				o.vlight = float4(ShadeSH9(float4(worldN, 1.0)) * v.color.a, v.color.r);
#ifdef ENABLE_RIM
				half rim = 1.0f - saturate(vdn);
				rim = smoothstep(_RimMin, _RimMax, rim);
				o.vlight = float4(ShadeSH9(float4(worldN, 1.0)) * v.color.a, v.color.r);
				half3 rimLight = (_RimColor.rgb * rim) * _RimColor.a * v.color.a;
				o.vlight.rgb += rimLight;
				o.color.rgb = rimLight * v.color.b;
#endif
#ifdef USING_DIRECTIONAL_LIGHT
	#ifndef ENABLE_HEXSHADE
				o.normal = float4(worldN, dot(normalize(_WorldSpaceLightPos0), worldN) * 0.5h + 0.5h);
	#endif
	#ifdef SHADOWS_SCREEN
				TRANSFER_SHADOW(o);
	#endif
#endif

#if USING_FOG && !defined(NEVER_FOG)
				// The UNITY_TRANSFER_FOG function assumes fog is calculated in pixel shader on PC and vertex shader on Mobile
				// I couldn't see that modifying o.fogCoord prior to sending it TO the pixel shader was doing the wrong thing
				// on target device (hence why I'm now enforcing the mobile API)
				float4 clipPos = o.pos;
				clipPos = UNITY_Z_0_FAR_FROM_CLIPSPACE(clipPos);
				o.fogCoord = clipPos.z;
	#if FOG_CUSTOM
		#ifdef ENABLE_HEXSHADE
			#ifdef FOG_BRB_COMPLEX
				customTransferComplexFogWithWorld(o.fogCoord, v.vertex, o.world.xyz);
			#else
				customTransferFogWithWorld(o.fogCoord, v.vertex, o.world.xyz);
			#endif
		#else
			#ifdef FOG_BRB_COMPLEX
				customTransferComplexFog(o.fogCoord, v.vertex);
			#else
				customTransferFog(o.fogCoord, v.vertex);
			#endif
		#endif
	#elif defined(ENABLE_HEXSHADE)
				o.world.xyz = mul(unity_ObjectToWorld, v.vertex).xyz;
	#endif
				UNITY_CALC_FOG_FACTOR_RAW(o.fogCoord); o.fogCoord = unityFogFactor;
	#ifdef GOLD_TRANSITION
				float dist = distance(PlayerPos.xy, worldPos.xz);
				half lerp = max(0.0h, PlayerPos.z - 0.25h);
				o.fogCoord = saturate(dist > PlayerPos.w ? o.fogCoord : o.fogCoord * saturate(vdn + lerp));
	#else
				o.fogCoord = saturate(o.fogCoord);
	#endif
#elif defined(ENABLE_HEXSHADE)
				o.world.xyz = mul(unity_ObjectToWorld, v.vertex).xyz;
#endif
#ifdef ENABLE_HEXSHADE
				o.world.xz -= _HexMask.xy; // get world position value from HexGrid script
				o.world.w = length(float3(o.world.x, 0, o.world.z));
#endif
				return o;
			}

			sampler2D _MainTex;
			sampler2D _Ramp;
			fixed _Cutoff;

			fixed4 frag(v2f IN) : SV_Target{
				fixed4 col;
				fixed4 tex = tex2D(_MainTex, IN.uv_MainTex.xy);
				clip(tex.a - _Cutoff);
#ifdef ENABLE_HEXSHADE
				applyHexMask(IN.world, tex);
#endif
				col.rgb = IN.vlight.rgb;
#ifdef USING_DIRECTIONAL_LIGHT
	#ifdef ENABLE_HEXSHADE
				float3 directionalLight = _LightColor0.rgb; // if toon shading ground, no need to use ramp...assume ldn always equals 1
	#else
				fixed4 ramp = tex2D(_Ramp, fixed2(IN.normal.w, IN.vlight.a));
				float3 directionalLight = ramp.rgb *_LightColor0.rgb;
	#endif
	#ifdef SHADOWS_SCREEN
		#ifdef DISABLE_SHADOWRECEIVE
				fixed shadow = 1.0f;
		#else
				fixed shadow = SHADOW_ATTENUATION(IN);
		#endif
		#ifndef ENABLE_HEXSHADE
				shadow = 1.0f - (1.0f - shadow) * ramp.a;
		#endif
		#ifdef DISABLE_SHADOWRECEIVE
				col.rgb += directionalLight;
		#else
				col.rgb += directionalLight *shadow;
		#endif
	#endif
#endif
				col.rgb *= tex.rgb;
				col.a = tex.a;
#ifdef ENABLE_RIM
				col.rgb += IN.color.rgb;
#elif defined(_VERTEXR_EMISSIVE)
				col.rgb += IN.color.rgb * tex.a; // apply vertex emission color masked by base alpha
#endif
#if USING_FOG && !defined(NEVER_FOG)
				UNITY_APPLY_FOG(IN.fogCoord, col);
#endif
				return col;
			}

			ENDCG
		}
	}
	Fallback "BRB/Transparent/Cutout/VertexLit/Diffuse"
}
