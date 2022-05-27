// BRB custom fog modifier (works with Unity's built-in fog - tested with linear - but only if shader has been setup to recreate it)

#ifndef CUSTOMFOG_CGINC_INCLUDED
#define CUSTOMFOG_CGINC_INCLUDED

void computeTransferFog(inout float fogCoord, in float4 vertexPos, out float2 mapCoord, out float3 worldPos) {
	worldPos = mul(unity_ObjectToWorld, vertexPos).xyz;
	float3 fogPosMod = worldPos * half3(0.00125, 0.1, 0.00366); // factors for fog variation
	mapCoord = fogPosMod.xz;
	half height = 1.0h - saturate( fogPosMod.y );
	height *= height;
	fogCoord *= unity_FogColor.a * (1.h - height) + height;
}

void customTransferFog(inout float fogCoord, in float4 vertexPos) {
	float2 mapCoord;
	float3 worldPos;
	computeTransferFog(fogCoord, vertexPos, mapCoord, worldPos);
}

void customTransferFogWithWorld(inout float fogCoord, in float4 vertexPos, out float3 worldPos) {
	float2 mapCoord;
	computeTransferFog(fogCoord, vertexPos, mapCoord, worldPos);
}

// sampler2D _FogNoiseTex;

void computeComplexFog(inout float fogCoord, in float2 mapCoord) {
	mapCoord += _Time.xx * float2(3,2);
	half2 sineCoord = sin( UNITY_TWO_PI * frac(mapCoord * float2(0.333,0.333)) );
	fogCoord *= (sineCoord.x * sineCoord.y) * unity_AmbientEquator.a + unity_AmbientGround.a; // ground alpha is 1 - equator alpha
/* tex2Dlod fetched result appears too stepped when it moves
	//mapCoord += _Time.yy * float2(0.133, 0.166);
	//mapCoord = mapCoord * 0.125f;
	//fogCoord *= tex2Dlod(_FogNoiseTex, float4(mapCoord, 0, 0)).r;
*/
}

void customTransferComplexFog(inout float fogCoord, in float4 vertexPos) {
	float2 mapCoord;
	float3 worldPos;
	computeTransferFog(fogCoord, vertexPos, mapCoord, worldPos);
	computeComplexFog(fogCoord, mapCoord);
}

void customTransferComplexFogWithWorld(inout float fogCoord, in float4 vertexPos, out float3 worldPos) {
	float2 mapCoord;
	computeTransferFog(fogCoord, vertexPos, mapCoord, worldPos);
	computeComplexFog(fogCoord, mapCoord);
}

half4 _ScreenOffsets;

float2 screenFade(in float4 clipPos) {
	clipPos.y /= clipPos.w; // value calculates between -1 and 1
#if UNITY_UV_STARTS_AT_TOP
	clipPos.y = -clipPos.y;
#endif
	float3 fade = float3(clipPos.yy, UNITY_MATRIX_IT_MV[2].y) * float3(0.5, 0.5, 0.5) + float3(0.5, 0.5, 0);
	fade.yz = float2(1, 1.5) + float2(-fade.y, fade.z);
	return fade.xx * float2(_ScreenOffsets.x, fade.z) - float2(_ScreenOffsets.y, 0);
}

float2 screenFadePixel(in float4 clipPos) {
	float3 fade = float3(clipPos.yy,UNITY_MATRIX_IT_MV[2].y) * (float3(_ScreenParams.ww, -0.5) - float3(1,1,0)); // fade.x value calculates to between 0 and 1
#if SHADER_API_METAL
	fade.xz = float2(1, 1.5) + float2(-fade.x, fade.z);
#else
	fade.yz = float2(1, 1.5) + float2(-fade.y, fade.z);
#endif
	return fade.xx * float2(_ScreenOffsets.x, fade.z) - float2(_ScreenOffsets.y, 0);
}

float2 screenFadeSurf(in float4 clipPos) {
	clipPos.y /= clipPos.w; // value calculates in between 0 and 1
	float3 fade = float3(clipPos.yy, UNITY_MATRIX_IT_MV[2].y) * float3(1, 1, 0.5);
//#if SHADER_API_METAL // apparently surface shaders already handle this flip
//	fade.xz = float2(1, 1.5) + float2(-fade.x, fade.z);
//#else
	fade.yz = float2(1, 1.5) + float2(-fade.y, fade.z);
//#endif
	return fade.xx * float2(_ScreenOffsets.x, fade.z) - float2(_ScreenOffsets.y, 0);
}


float screenHeightFade(/* in float4 clipPos, */ in float worldY) {
	//float fade = screenFade(clipPos);
	half height = 1.0h - saturate(worldY * 0.1h);
	//height *= height;
	height = unity_FogColor.a * (1.h - height) + height;
	//fade = lerp(fade * height, fade, height);
	return height;
}

float2 screenHeightFadePixel(in float4 clipPos, in float height) {
	float3 fade = float3(clipPos.yy, UNITY_MATRIX_IT_MV[2].y) * (float3(_ScreenParams.ww, -0.5) - float3(1, 1, 0)); // fade.x value calculates to between 0 and 1
#if SHADER_API_METAL
	fade.xz = float2(1, 1.5) + float2(-fade.x, fade.z);
#else
	fade.yz = float2(1, 1.5) + float2(-fade.y, fade.z);
#endif
	return fade.xx * float2(_ScreenOffsets.x, fade.z * height) - float2(_ScreenOffsets.y, 0);
}

float screenFadedFog(in float4 clipPos, in float screenFade) {
	clipPos = UNITY_Z_0_FAR_FROM_CLIPSPACE(clipPos);
	half fogCoord = clipPos.z;

	UNITY_CALC_FOG_FACTOR_RAW(fogCoord); fogCoord = unityFogFactor;

	half2 satCoord = saturate(half2(fogCoord, screenFade));
	half2 oneMinus = 1.h - satCoord;
	//satCoord.x = 1.h - oneMinus.x * oneMinus.x;

	return oneMinus.y + satCoord.x * satCoord.y; // lerp(1.h, satCoord.x, satCoord.y);
}
#endif // CUSTOMFOG_CGINC_INCLUDED