// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:2,bsrc:3,bdst:7,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|emission-7089-OUT,alpha-2162-OUT;n:type:ShaderForge.SFN_Color,id:7241,x:28764,y:32631,ptovrint:False,ptlb:Color,ptin:_Color,varname:node_7241,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.07843138,c2:0.3921569,c3:0.7843137,c4:1;n:type:ShaderForge.SFN_ViewPosition,id:4964,x:31532,y:33112,varname:node_4964,prsc:2;n:type:ShaderForge.SFN_Distance,id:9016,x:31719,y:33034,varname:node_9016,prsc:2|A-8268-XYZ,B-4964-XYZ;n:type:ShaderForge.SFN_FragmentPosition,id:8268,x:31532,y:32970,varname:node_8268,prsc:2;n:type:ShaderForge.SFN_Multiply,id:5732,x:32104,y:32697,varname:node_5732,prsc:2|A-2166-OUT,B-6015-OUT,C-76-OUT;n:type:ShaderForge.SFN_Fresnel,id:76,x:31732,y:32720,varname:node_76,prsc:2|EXP-5595-OUT;n:type:ShaderForge.SFN_Vector1,id:5595,x:31554,y:32754,varname:node_5595,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:7516,x:31905,y:33079,varname:node_7516,prsc:2|A-9016-OUT,B-8696-OUT;n:type:ShaderForge.SFN_Vector1,id:5985,x:31719,y:33172,varname:node_5985,prsc:2,v1:0.6;n:type:ShaderForge.SFN_Clamp01,id:2162,x:32537,y:32972,varname:node_2162,prsc:2|IN-8312-OUT;n:type:ShaderForge.SFN_OneMinus,id:113,x:31905,y:32720,varname:node_113,prsc:2|IN-76-OUT;n:type:ShaderForge.SFN_Clamp01,id:6015,x:31905,y:32909,varname:node_6015,prsc:2|IN-9016-OUT;n:type:ShaderForge.SFN_TexCoord,id:6939,x:29944,y:32841,varname:node_6939,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Time,id:8790,x:29150,y:33203,varname:node_8790,prsc:2;n:type:ShaderForge.SFN_Multiply,id:2318,x:30483,y:32911,varname:node_2318,prsc:2|A-6939-U,B-7268-OUT;n:type:ShaderForge.SFN_OneMinus,id:1432,x:30648,y:32912,varname:node_1432,prsc:2|IN-2318-OUT;n:type:ShaderForge.SFN_OneMinus,id:8933,x:30298,y:32664,varname:node_8933,prsc:2|IN-6939-U;n:type:ShaderForge.SFN_Multiply,id:4765,x:30483,y:32664,varname:node_4765,prsc:2|A-8933-OUT,B-7268-OUT;n:type:ShaderForge.SFN_OneMinus,id:7671,x:30648,y:32664,varname:node_7671,prsc:2|IN-4765-OUT;n:type:ShaderForge.SFN_Clamp01,id:2377,x:30817,y:32664,varname:node_2377,prsc:2|IN-7671-OUT;n:type:ShaderForge.SFN_Clamp01,id:4126,x:30817,y:32912,varname:node_4126,prsc:2|IN-1432-OUT;n:type:ShaderForge.SFN_OneMinus,id:7542,x:30298,y:32783,varname:node_7542,prsc:2|IN-6939-V;n:type:ShaderForge.SFN_Multiply,id:7303,x:30483,y:32783,varname:node_7303,prsc:2|A-7542-OUT,B-2409-OUT;n:type:ShaderForge.SFN_Multiply,id:7380,x:30483,y:33037,varname:node_7380,prsc:2|A-6939-V,B-2409-OUT;n:type:ShaderForge.SFN_Clamp01,id:2046,x:30817,y:32783,varname:node_2046,prsc:2|IN-8644-OUT;n:type:ShaderForge.SFN_Clamp01,id:32,x:30817,y:33037,varname:node_32,prsc:2|IN-1061-OUT;n:type:ShaderForge.SFN_Add,id:341,x:31065,y:32833,varname:node_341,prsc:2|A-2377-OUT,B-2046-OUT,C-4126-OUT,D-32-OUT;n:type:ShaderForge.SFN_OneMinus,id:8644,x:30648,y:32783,varname:node_8644,prsc:2|IN-7303-OUT;n:type:ShaderForge.SFN_OneMinus,id:1061,x:30648,y:33037,varname:node_1061,prsc:2|IN-7380-OUT;n:type:ShaderForge.SFN_Clamp01,id:3377,x:31251,y:32833,varname:node_3377,prsc:2|IN-341-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:7268,x:30030,y:33014,varname:node_7268,prsc:2,a:12,b:6|IN-9749-OUT;n:type:ShaderForge.SFN_Sin,id:6742,x:29489,y:33203,varname:node_6742,prsc:2|IN-9437-OUT;n:type:ShaderForge.SFN_Multiply,id:5058,x:29659,y:33203,varname:node_5058,prsc:2|A-6742-OUT,B-3485-OUT;n:type:ShaderForge.SFN_Add,id:9749,x:29830,y:33203,varname:node_9749,prsc:2|A-5058-OUT,B-3485-OUT;n:type:ShaderForge.SFN_Vector1,id:3485,x:29489,y:33336,varname:node_3485,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:9437,x:29320,y:33203,varname:node_9437,prsc:2|A-8790-T,B-4747-OUT;n:type:ShaderForge.SFN_Vector1,id:4747,x:29150,y:33331,varname:node_4747,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:2409,x:30030,y:33162,varname:node_2409,prsc:2|A-7268-OUT,B-2051-OUT;n:type:ShaderForge.SFN_Vector1,id:2051,x:30030,y:33292,varname:node_2051,prsc:2,v1:2;n:type:ShaderForge.SFN_Clamp01,id:7089,x:32550,y:32821,varname:node_7089,prsc:2|IN-3639-OUT;n:type:ShaderForge.SFN_Add,id:3639,x:32273,y:32675,varname:node_3639,prsc:2|A-3904-OUT,B-5732-OUT;n:type:ShaderForge.SFN_Add,id:8312,x:32365,y:33001,varname:node_8312,prsc:2|A-3377-OUT,B-7516-OUT;n:type:ShaderForge.SFN_Panner,id:7818,x:30828,y:32426,varname:node_7818,prsc:2,spu:-0.02,spv:-0.06|UVIN-8738-OUT;n:type:ShaderForge.SFN_Tex2d,id:3115,x:31138,y:32418,varname:node_1335,prsc:2,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False|UVIN-7818-UVOUT,TEX-9302-TEX;n:type:ShaderForge.SFN_Tex2dAsset,id:9302,x:30961,y:32502,ptovrint:False,ptlb:noise,ptin:_noise,varname:node_8163,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Multiply,id:8738,x:30631,y:32426,varname:node_8738,prsc:2|A-6939-UVOUT,B-1079-OUT;n:type:ShaderForge.SFN_Vector2,id:1079,x:30444,y:32478,varname:node_1079,prsc:2,v1:1.5,v2:1;n:type:ShaderForge.SFN_Add,id:3559,x:32087,y:33034,varname:node_3559,prsc:2|A-5982-OUT,B-7516-OUT;n:type:ShaderForge.SFN_Multiply,id:4853,x:31336,y:32476,varname:node_4853,prsc:2|A-3115-R,B-3604-OUT;n:type:ShaderForge.SFN_Vector1,id:3604,x:31163,y:32570,varname:node_3604,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:5982,x:31630,y:32590,varname:node_5982,prsc:2|A-9802-OUT,B-6923-OUT;n:type:ShaderForge.SFN_Vector1,id:6923,x:31455,y:32652,varname:node_6923,prsc:2,v1:100;n:type:ShaderForge.SFN_Subtract,id:9802,x:31558,y:32367,varname:node_9802,prsc:2|A-3115-R,B-9749-OUT;n:type:ShaderForge.SFN_Vector1,id:8913,x:31558,y:32495,varname:node_8913,prsc:2,v1:0.5;n:type:ShaderForge.SFN_HsvToRgb,id:2166,x:29608,y:32718,varname:node_2166,prsc:2|H-3395-OUT,S-8522-OUT,V-8522-OUT;n:type:ShaderForge.SFN_Vector1,id:8522,x:29608,y:32849,varname:node_8522,prsc:2,v1:1;n:type:ShaderForge.SFN_RgbToHsv,id:9344,x:28941,y:32631,varname:node_9344,prsc:2|IN-7241-RGB;n:type:ShaderForge.SFN_Add,id:9165,x:29171,y:32631,varname:node_9165,prsc:2|A-9344-HOUT,B-9633-OUT;n:type:ShaderForge.SFN_Vector1,id:9633,x:28764,y:32799,varname:node_9633,prsc:2,v1:0.1;n:type:ShaderForge.SFN_Lerp,id:3395,x:29392,y:32718,varname:node_3395,prsc:2|A-9165-OUT,B-8425-OUT,T-8974-OUT;n:type:ShaderForge.SFN_Add,id:8425,x:29171,y:32811,varname:node_8425,prsc:2|A-9344-HOUT,B-6667-OUT;n:type:ShaderForge.SFN_Negate,id:6667,x:28941,y:32799,varname:node_6667,prsc:2|IN-9633-OUT;n:type:ShaderForge.SFN_Sin,id:7940,x:29489,y:33014,varname:node_7940,prsc:2|IN-483-OUT;n:type:ShaderForge.SFN_Multiply,id:945,x:29659,y:33014,varname:node_945,prsc:2|A-7940-OUT,B-7846-OUT;n:type:ShaderForge.SFN_Add,id:8974,x:29830,y:33014,varname:node_8974,prsc:2|A-945-OUT,B-7846-OUT;n:type:ShaderForge.SFN_Vector1,id:7846,x:29489,y:33147,varname:node_7846,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:483,x:29320,y:33014,varname:node_483,prsc:2|A-8790-T,B-6138-OUT;n:type:ShaderForge.SFN_Vector1,id:6138,x:29123,y:33089,varname:node_6138,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:3904,x:31423,y:32815,varname:node_3904,prsc:2|A-3377-OUT,B-442-OUT;n:type:ShaderForge.SFN_Vector1,id:442,x:31379,y:32951,varname:node_442,prsc:2,v1:0.33;n:type:ShaderForge.SFN_Slider,id:6455,x:31034,y:33294,ptovrint:False,ptlb:node_6455,ptin:_node_6455,varname:node_6455,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:0,max:10;n:type:ShaderForge.SFN_Multiply,id:4208,x:31381,y:33283,varname:node_4208,prsc:2|A-6455-OUT,B-6583-OUT;n:type:ShaderForge.SFN_Vector1,id:6583,x:31180,y:33400,varname:node_6583,prsc:2,v1:10;n:type:ShaderForge.SFN_Clamp01,id:7954,x:31545,y:33283,varname:node_7954,prsc:2|IN-4208-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:8696,x:31739,y:33283,varname:node_8696,prsc:2,a:1,b:0.06|IN-7954-OUT;proporder:7241-9302-6455;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansARDoor" {
    Properties {
        _Color ("Color", Color) = (0.07843138,0.3921569,0.7843137,1)
        _noise ("noise", 2D) = "white" {}
        _node_6455 ("node_6455", Range(0, 10)) = 0
        [HideInInspector]_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
    }
    SubShader {
        Tags {
            "IgnoreProjector"="True"
            "Queue"="Transparent"
            "RenderType"="Transparent"
        }
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="ForwardBase"
            }
            Blend SrcAlpha OneMinusSrcAlpha
            Cull Off
            ZWrite Off
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_FORWARDBASE
            #include "UnityCG.cginc"
            #pragma multi_compile_fwdbase
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
            #pragma target 3.0
            uniform float4 _Color;
            uniform float _node_6455;
            struct VertexInput {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float2 texcoord0 : TEXCOORD0;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float2 uv0 : TEXCOORD0;
                float4 posWorld : TEXCOORD1;
                float3 normalDir : TEXCOORD2;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.uv0 = v.texcoord0;
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                o.pos = UnityObjectToClipPos( v.vertex );
                return o;
            }
            float4 frag(VertexOutput i, float facing : VFACE) : COLOR {
                float isFrontFace = ( facing >= 0 ? 1 : 0 );
                float faceSign = ( facing >= 0 ? 1 : -1 );
                i.normalDir = normalize(i.normalDir);
                i.normalDir *= faceSign;
                float3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
                float3 normalDirection = i.normalDir;
////// Lighting:
////// Emissive:
                float4 node_8790 = _Time;
                float node_3485 = 0.5;
                float node_9749 = ((sin((node_8790.g*0.5))*node_3485)+node_3485);
                float node_7268 = lerp(12,6,node_9749);
                float node_2409 = (node_7268*2.0);
                float node_3377 = saturate((saturate((1.0 - ((1.0 - i.uv0.r)*node_7268)))+saturate((1.0 - ((1.0 - i.uv0.g)*node_2409)))+saturate((1.0 - (i.uv0.r*node_7268)))+saturate((1.0 - (i.uv0.g*node_2409)))));
                float4 node_9344_k = float4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
                float4 node_9344_p = lerp(float4(float4(_Color.rgb,0.0).zy, node_9344_k.wz), float4(float4(_Color.rgb,0.0).yz, node_9344_k.xy), step(float4(_Color.rgb,0.0).z, float4(_Color.rgb,0.0).y));
                float4 node_9344_q = lerp(float4(node_9344_p.xyw, float4(_Color.rgb,0.0).x), float4(float4(_Color.rgb,0.0).x, node_9344_p.yzx), step(node_9344_p.x, float4(_Color.rgb,0.0).x));
                float node_9344_d = node_9344_q.x - min(node_9344_q.w, node_9344_q.y);
                float node_9344_e = 1.0e-10;
                float3 node_9344 = float3(abs(node_9344_q.z + (node_9344_q.w - node_9344_q.y) / (6.0 * node_9344_d + node_9344_e)), node_9344_d / (node_9344_q.x + node_9344_e), node_9344_q.x);;
                float node_9633 = 0.1;
                float node_7846 = 0.5;
                float node_8522 = 1.0;
                float node_9016 = distance(i.posWorld.rgb,_WorldSpaceCameraPos);
                float node_76 = pow(1.0-max(0,dot(normalDirection, viewDirection)),0.5);
                float3 emissive = saturate(((node_3377*0.33)+((lerp(float3(1,1,1),saturate(3.0*abs(1.0-2.0*frac(lerp((node_9344.r+node_9633),(node_9344.r+(-1*node_9633)),((sin((node_8790.g*0.5))*node_7846)+node_7846))+float3(0.0,-1.0/3.0,1.0/3.0)))-1),node_8522)*node_8522)*saturate(node_9016)*node_76)));
                float3 finalColor = emissive;
                float node_7516 = (node_9016*lerp(1,0.06,saturate((_node_6455*10.0))));
                return fixed4(finalColor,saturate((node_3377+node_7516)));
            }
            ENDCG
        }
        Pass {
            Name "ShadowCaster"
            Tags {
                "LightMode"="ShadowCaster"
            }
            Offset 1, 1
            Cull Off
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_SHADOWCASTER
            #include "UnityCG.cginc"
            #include "Lighting.cginc"
            #pragma fragmentoption ARB_precision_hint_fastest
            #pragma multi_compile_shadowcaster
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
            #pragma target 3.0
            struct VertexInput {
                float4 vertex : POSITION;
            };
            struct VertexOutput {
                V2F_SHADOW_CASTER;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.pos = UnityObjectToClipPos( v.vertex );
                TRANSFER_SHADOW_CASTER(o)
                return o;
            }
            float4 frag(VertexOutput i, float facing : VFACE) : COLOR {
                float isFrontFace = ( facing >= 0 ? 1 : 0 );
                float faceSign = ( facing >= 0 ? 1 : -1 );
                SHADOW_CASTER_FRAGMENT(i)
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
    CustomEditor "ShaderForgeMaterialInspector"
}
