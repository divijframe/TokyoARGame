Shader "BRB/Transparent/Cutout/Cloud" {
	Properties{
		_MainTex("Base (RGB) Trans (A)", 2D) = "white" {}
		_Cutoff("Alpha cutoff", Range(0,1)) = 0.5
		[Toggle(NEVER_FOG)] _Fog("Never Fog", Int) = 0
		[HideInInspector][Toggle(MULT_VERTEX)] _Vertex("Modulate texture color by Vertex Colors", Int) = 1
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

		UsePass "BRB/Transparent/Cutout/NondirectionallyLit/TexColor/FORWARD"
	}
}
