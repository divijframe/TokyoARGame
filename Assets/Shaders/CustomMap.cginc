// BRB custom map modifier (works with Unity's built-in fog - tested with linear - but only if shader has been setup to recreate it)

#ifndef CUSTOMMAP_CGINC_INCLUDED
#define CUSTOMMAP_CGINC_INCLUDED

void flattenAroundAvatar(inout float4 worldPos, in float2 avatarCoord, in float4 clipPos, in float4 centerCoord_distance_height) {
#ifndef BRB_SHADOW
	clipPos.z = UNITY_Z_0_FAR_FROM_CLIPSPACE(clipPos.z);
#endif
	const float feathering = 32.f;
	// float d = (distance(centerCoord_distance_height.xy, avatarCoord) - radius - centerCoord_distance_height.z + centerCoord_distance_height.w) / feathering; // perhaps make avatar radius feathering variable via global shader parameter?
	// fixed squash = saturate(d);
	fixed squash = saturate((clipPos.z - centerCoord_distance_height.w /* - centerCoord_distance_height.z */ ) / feathering) /* squash */ * 0.99h + 0.01h; // perhaps make near feathering variable via global shader parameter?
	fixed far_squash = 1.h - saturate((_ProjectionParams.z - clipPos.z - centerCoord_distance_height.z ) / 400.h); // perhaps make far feathering variable via global shader parameter?
	squash *= 1.h - far_squash * far_squash;
	worldPos.y *= max(0.001h, squash);
}

float fadeAtClip(in float4 clipPos, in float4 centerCoord_near_far) {
#ifndef BRB_SHADOW
	clipPos.z = UNITY_Z_0_FAR_FROM_CLIPSPACE(clipPos.z);
#endif
	const float radius = 16.f;
	const float feathering = 32.f;
	fixed2 fade = saturate(float2(clipPos.z - centerCoord_near_far.z, _WorldSpaceCameraPos.y - 300.h) / float2(feathering, 450.h)) * fixed2(0.99, 1) + fixed2(0.01, 0); // perhaps make near feathering variable via global shader parameter?
	// note that I hard coded a factor of 300 for when the camera should start dialing out the far fade...with 750 being the max far
	fixed far_fade = 1.h - saturate((_ProjectionParams.z - clipPos.z - centerCoord_near_far.w ) / 200.h); // perhaps make far feathering variable via global shader parameter?
	fade.x *= 1.h - far_fade * (1.h - fade.y);
	return fade.x;
}

float3 ShadeGradient(float4 normal) {
	float3 blend = saturate(float3(0, 0, 1) - normal.yyy * float3(-1, 1, 1));
	float3 color = unity_AmbientSky.rgb * blend.x;
	color += unity_AmbientGround.rgb * blend.y;
	color += unity_AmbientEquator.rgb * blend.z;
	return color;
}
#endif // CUSTOMFOG_CGINC_INCLUDED