// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:2,bsrc:3,bdst:7,dpts:2,wrdp:True,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:False,igpj:True,qofs:1090,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:2,stmr:255,stmw:255,stcp:5,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|emission-7850-OUT,alpha-183-OUT,refract-7442-OUT;n:type:ShaderForge.SFN_Color,id:1265,x:30150,y:31754,ptovrint:False,ptlb:Color,ptin:_Color,varname:node_7241,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.8,c2:0.8,c3:0.8,c4:1;n:type:ShaderForge.SFN_Clamp01,id:7850,x:32545,y:32813,varname:node_7850,prsc:2|IN-2494-OUT;n:type:ShaderForge.SFN_TexCoord,id:2703,x:27948,y:32784,varname:node_2703,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_OneMinus,id:5065,x:28567,y:33508,varname:node_5065,prsc:2|IN-7581-OUT;n:type:ShaderForge.SFN_Distance,id:7581,x:28383,y:33508,varname:node_7581,prsc:2|A-7327-OUT,B-5870-Y;n:type:ShaderForge.SFN_FragmentPosition,id:5870,x:28194,y:33555,varname:node_5870,prsc:2;n:type:ShaderForge.SFN_Multiply,id:6160,x:29069,y:33505,varname:node_6160,prsc:2|A-3651-OUT,B-5686-OUT;n:type:ShaderForge.SFN_Vector1,id:5686,x:29069,y:33635,varname:node_5686,prsc:2,v1:0.2;n:type:ShaderForge.SFN_Vector3,id:7327,x:28194,y:33465,varname:node_7327,prsc:2,v1:0,v2:0,v3:0;n:type:ShaderForge.SFN_Add,id:3651,x:28862,y:33505,varname:node_3651,prsc:2|A-5065-OUT,B-6398-OUT;n:type:ShaderForge.SFN_Panner,id:3407,x:29693,y:32513,varname:node_3407,prsc:2,spu:-0.16,spv:-0.48|UVIN-5996-OUT;n:type:ShaderForge.SFN_Clamp01,id:7605,x:29284,y:33561,varname:node_7605,prsc:2|IN-6160-OUT;n:type:ShaderForge.SFN_Vector1,id:2924,x:30144,y:32714,varname:node_2924,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Tex2d,id:9469,x:30063,y:32555,varname:node_1335,prsc:2,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False|UVIN-3407-UVOUT,TEX-4323-TEX;n:type:ShaderForge.SFN_Tex2dAsset,id:4323,x:29868,y:32513,ptovrint:False,ptlb:noise,ptin:_noise,varname:node_8163,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Add,id:8369,x:28862,y:33700,varname:node_8369,prsc:2|A-5065-OUT,B-6398-OUT;n:type:ShaderForge.SFN_Vector1,id:6799,x:29349,y:32572,varname:node_6799,prsc:2,v1:4;n:type:ShaderForge.SFN_Multiply,id:2156,x:29069,y:33700,varname:node_2156,prsc:2|A-8369-OUT,B-1552-OUT;n:type:ShaderForge.SFN_Vector1,id:1552,x:29069,y:33829,varname:node_1552,prsc:2,v1:0.1;n:type:ShaderForge.SFN_Clamp01,id:598,x:29284,y:33684,varname:node_598,prsc:2|IN-2156-OUT;n:type:ShaderForge.SFN_Lerp,id:2494,x:30959,y:32101,varname:node_2494,prsc:2|A-3243-OUT,B-1265-RGB,T-183-OUT;n:type:ShaderForge.SFN_Vector1,id:166,x:30367,y:32048,varname:node_166,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:5996,x:29513,y:32513,varname:node_5996,prsc:2|A-2703-UVOUT,B-6799-OUT;n:type:ShaderForge.SFN_Slider,id:7296,x:31991,y:32939,ptovrint:False,ptlb:opacity,ptin:_opacity,varname:node_170,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:0.5,max:1;n:type:ShaderForge.SFN_Clamp01,id:183,x:32545,y:32972,varname:node_183,prsc:2|IN-1088-OUT;n:type:ShaderForge.SFN_Multiply,id:1088,x:32379,y:32972,varname:node_1088,prsc:2|A-7296-OUT,B-6940-OUT,C-1265-A;n:type:ShaderForge.SFN_Multiply,id:218,x:32311,y:32738,varname:node_218,prsc:2|A-2494-OUT,B-7296-OUT;n:type:ShaderForge.SFN_Multiply,id:1975,x:31378,y:33146,varname:node_1975,prsc:2|A-9611-OUT,B-5713-OUT;n:type:ShaderForge.SFN_Vector1,id:5713,x:31378,y:33275,varname:node_5713,prsc:2,v1:10;n:type:ShaderForge.SFN_Fresnel,id:842,x:30514,y:33365,varname:node_842,prsc:2|EXP-3501-OUT;n:type:ShaderForge.SFN_Lerp,id:9598,x:31920,y:33471,varname:node_9598,prsc:2|A-7309-OUT,B-5973-OUT,T-3353-OUT;n:type:ShaderForge.SFN_Vector2,id:7309,x:31758,y:33428,varname:node_7309,prsc:2,v1:0,v2:0;n:type:ShaderForge.SFN_Multiply,id:5973,x:31645,y:33635,varname:node_5973,prsc:2|A-1716-OUT,B-3849-OUT;n:type:ShaderForge.SFN_ComponentMask,id:3849,x:31453,y:33724,varname:node_3849,prsc:2,cc1:0,cc2:1,cc3:-1,cc4:-1|IN-9469-RGB;n:type:ShaderForge.SFN_Multiply,id:7442,x:32529,y:33217,varname:node_7442,prsc:2|A-7296-OUT,B-2616-OUT;n:type:ShaderForge.SFN_Subtract,id:5249,x:30335,y:32658,varname:node_5249,prsc:2|A-9469-R,B-2924-OUT;n:type:ShaderForge.SFN_Clamp01,id:8679,x:30498,y:32658,varname:node_8679,prsc:2|IN-5249-OUT;n:type:ShaderForge.SFN_RgbToHsv,id:840,x:30353,y:31754,varname:node_840,prsc:2|IN-1265-RGB;n:type:ShaderForge.SFN_HsvToRgb,id:3243,x:30768,y:31826,varname:node_3243,prsc:2|H-591-OUT,S-8642-OUT,V-166-OUT;n:type:ShaderForge.SFN_Subtract,id:591,x:30574,y:31801,varname:node_591,prsc:2|A-840-HOUT,B-5961-OUT;n:type:ShaderForge.SFN_Vector1,id:5961,x:30367,y:31891,varname:node_5961,prsc:2,v1:-0.25;n:type:ShaderForge.SFN_Vector1,id:8642,x:30367,y:31979,varname:node_8642,prsc:2,v1:1;n:type:ShaderForge.SFN_Multiply,id:9117,x:30725,y:33438,varname:node_9117,prsc:2|A-842-OUT,B-4602-OUT;n:type:ShaderForge.SFN_Vector1,id:4602,x:30725,y:33568,varname:node_4602,prsc:2,v1:10;n:type:ShaderForge.SFN_Slider,id:6543,x:27692,y:33349,ptovrint:False,ptlb:glow,ptin:_glow,varname:node_8538,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:1,max:10;n:type:ShaderForge.SFN_Multiply,id:9970,x:28034,y:33311,varname:node_9970,prsc:2|A-6543-OUT,B-2973-OUT;n:type:ShaderForge.SFN_Vector1,id:2973,x:27849,y:33428,varname:node_2973,prsc:2,v1:0.1;n:type:ShaderForge.SFN_Clamp01,id:4690,x:28211,y:33311,varname:node_4690,prsc:2|IN-9970-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:6398,x:28618,y:33659,varname:node_6398,prsc:2,a:0,b:20|IN-4690-OUT;n:type:ShaderForge.SFN_Add,id:6511,x:30977,y:33264,varname:node_6511,prsc:2|A-598-OUT,B-9117-OUT;n:type:ShaderForge.SFN_Multiply,id:9611,x:31161,y:33146,varname:node_9611,prsc:2|A-8679-OUT,B-6511-OUT;n:type:ShaderForge.SFN_Add,id:970,x:31724,y:33029,varname:node_970,prsc:2|A-1975-OUT,B-7605-OUT,C-8394-OUT;n:type:ShaderForge.SFN_Multiply,id:8394,x:30725,y:33227,varname:node_8394,prsc:2|A-842-OUT,B-8819-OUT;n:type:ShaderForge.SFN_Vector1,id:8819,x:30725,y:33365,varname:node_8819,prsc:2,v1:4;n:type:ShaderForge.SFN_Fresnel,id:5112,x:30699,y:33632,varname:node_5112,prsc:2|EXP-2028-OUT;n:type:ShaderForge.SFN_Vector1,id:2028,x:30522,y:33673,varname:node_2028,prsc:2,v1:0.66;n:type:ShaderForge.SFN_Slider,id:1716,x:31296,y:33628,ptovrint:False,ptlb:distortion,ptin:_distortion,varname:node_1716,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:0.1,max:1;n:type:ShaderForge.SFN_ConstantLerp,id:3501,x:30288,y:33327,varname:node_3501,prsc:2,a:10,b:0|IN-2345-OUT;n:type:ShaderForge.SFN_Clamp01,id:2345,x:30120,y:33327,varname:node_2345,prsc:2|IN-4690-OUT;n:type:ShaderForge.SFN_Vector1,id:3361,x:32096,y:32679,varname:node_3361,prsc:2,v1:1;n:type:ShaderForge.SFN_ViewPosition,id:3216,x:28192,y:33770,varname:node_3216,prsc:2;n:type:ShaderForge.SFN_Distance,id:9195,x:28403,y:33695,varname:node_9195,prsc:2|A-5870-XYZ,B-3216-XYZ;n:type:ShaderForge.SFN_Clamp01,id:4315,x:29670,y:33009,varname:node_4315,prsc:2|IN-8412-OUT;n:type:ShaderForge.SFN_Add,id:5765,x:31465,y:32927,varname:node_5765,prsc:2|A-1590-OUT,B-1975-OUT;n:type:ShaderForge.SFN_OneMinus,id:1319,x:28964,y:32982,varname:node_1319,prsc:2|IN-9195-OUT;n:type:ShaderForge.SFN_Add,id:5795,x:29148,y:32982,varname:node_5795,prsc:2|A-1319-OUT,B-3256-OUT;n:type:ShaderForge.SFN_Subtract,id:2761,x:28964,y:33141,varname:node_2761,prsc:2|A-3256-OUT,B-4689-OUT;n:type:ShaderForge.SFN_Vector1,id:4689,x:28786,y:33185,varname:node_4689,prsc:2,v1:1;n:type:ShaderForge.SFN_Multiply,id:8412,x:29503,y:33009,varname:node_8412,prsc:2|A-1965-OUT,B-5649-OUT;n:type:ShaderForge.SFN_Subtract,id:5861,x:29148,y:33113,varname:node_5861,prsc:2|A-9195-OUT,B-2761-OUT;n:type:ShaderForge.SFN_Clamp01,id:1965,x:29307,y:32982,varname:node_1965,prsc:2|IN-5795-OUT;n:type:ShaderForge.SFN_Clamp01,id:5649,x:29307,y:33113,varname:node_5649,prsc:2|IN-5861-OUT;n:type:ShaderForge.SFN_Multiply,id:3353,x:31645,y:33503,varname:node_3353,prsc:2|A-5649-OUT,B-5112-OUT;n:type:ShaderForge.SFN_Vector1,id:2264,x:31499,y:33423,varname:node_2264,prsc:2,v1:0.33;n:type:ShaderForge.SFN_Multiply,id:3247,x:31567,y:33287,varname:node_3247,prsc:2|A-5112-OUT,B-2264-OUT;n:type:ShaderForge.SFN_Sign,id:5884,x:29284,y:33936,varname:node_5884,prsc:2|IN-5870-Y;n:type:ShaderForge.SFN_Multiply,id:9990,x:31914,y:33029,varname:node_9990,prsc:2|A-970-OUT,B-6561-OUT;n:type:ShaderForge.SFN_FaceSign,id:9854,x:29820,y:32873,varname:node_9854,prsc:2,fstp:0;n:type:ShaderForge.SFN_Multiply,id:1590,x:29986,y:32985,varname:node_1590,prsc:2|A-9854-VFACE,B-4315-OUT;n:type:ShaderForge.SFN_Multiply,id:3882,x:32081,y:33421,varname:node_3882,prsc:2|A-9598-OUT,B-6561-OUT;n:type:ShaderForge.SFN_Clamp01,id:6561,x:29475,y:33936,varname:node_6561,prsc:2|IN-5884-OUT;n:type:ShaderForge.SFN_Distance,id:1274,x:28648,y:33337,varname:node_1274,prsc:2|A-6073-OUT,B-5870-Y;n:type:ShaderForge.SFN_Vector3,id:4337,x:28074,y:33178,varname:node_4337,prsc:2,v1:0,v2:7,v3:0;n:type:ShaderForge.SFN_Multiply,id:6940,x:32199,y:33100,varname:node_6940,prsc:2|A-9990-OUT,B-7639-OUT;n:type:ShaderForge.SFN_Clamp01,id:7639,x:31989,y:33231,varname:node_7639,prsc:2|IN-3202-OUT;n:type:ShaderForge.SFN_Multiply,id:3202,x:29531,y:33279,varname:node_3202,prsc:2|A-475-OUT,B-3996-OUT;n:type:ShaderForge.SFN_Vector1,id:3996,x:29531,y:33418,varname:node_3996,prsc:2,v1:0.02;n:type:ShaderForge.SFN_Multiply,id:2616,x:32311,y:33326,varname:node_2616,prsc:2|A-7639-OUT,B-3882-OUT;n:type:ShaderForge.SFN_Append,id:8473,x:28316,y:33127,varname:node_8473,prsc:2|A-1644-OUT,B-6073-OUT;n:type:ShaderForge.SFN_Append,id:7505,x:28479,y:33220,varname:node_7505,prsc:2|A-8473-OUT,B-1644-OUT;n:type:ShaderForge.SFN_Vector1,id:1644,x:28035,y:33031,varname:node_1644,prsc:2,v1:0;n:type:ShaderForge.SFN_ValueProperty,id:9902,x:29175,y:33431,ptovrint:False,ptlb:gap,ptin:_gap,varname:node_9902,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0;n:type:ShaderForge.SFN_Subtract,id:475,x:29175,y:33278,varname:node_475,prsc:2|A-1274-OUT,B-9902-OUT;n:type:ShaderForge.SFN_Vector1,id:3256,x:28671,y:32934,varname:node_3256,prsc:2,v1:40;n:type:ShaderForge.SFN_ValueProperty,id:6073,x:27928,y:33178,ptovrint:False,ptlb:height,ptin:_height,varname:node_6073,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0;proporder:1265-4323-7296-6543-1716-9902-6073;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansARWallsPopup" {
    Properties {
        _Color ("Color", Color) = (0.8,0.8,0.8,1)
        _noise ("noise", 2D) = "white" {}
        _opacity ("opacity", Range(0, 1)) = 0.5
        _glow ("glow", Range(0, 10)) = 1
        _distortion ("distortion", Range(0, 1)) = 0.1
        _gap ("gap", Float ) = 0
        _height ("height", Float ) = 0
        [HideInInspector]_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
    }
    SubShader {
        Tags {
            "IgnoreProjector"="True"
            "Queue"="Transparent+1090"
            "RenderType"="Transparent"
        }
        GrabPass{ }
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="ForwardBase"
            }
            Blend SrcAlpha OneMinusSrcAlpha
            Cull Off
            
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_FORWARDBASE
            #include "UnityCG.cginc"
            #pragma multi_compile_fwdbase
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
            #pragma target 3.0
            uniform sampler2D _GrabTexture;
            uniform float4 _Color;
            uniform sampler2D _noise; uniform float4 _noise_ST;
            uniform float _opacity;
            uniform float _glow;
            uniform float _distortion;
            uniform float _gap;
            uniform float _height;
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
                float4 projPos : TEXCOORD3;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.uv0 = v.texcoord0;
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                o.pos = UnityObjectToClipPos( v.vertex );
                o.projPos = ComputeScreenPos (o.pos);
                COMPUTE_EYEDEPTH(o.projPos.z);
                return o;
            }
            float4 frag(VertexOutput i, float facing : VFACE) : COLOR {
                float isFrontFace = ( facing >= 0 ? 1 : 0 );
                float faceSign = ( facing >= 0 ? 1 : -1 );
                i.normalDir = normalize(i.normalDir);
                i.normalDir *= faceSign;
                float3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
                float3 normalDirection = i.normalDir;
                float node_7639 = saturate(((distance(_height,i.posWorld.g)-_gap)*0.02));
                float4 node_9599 = _Time;
                float2 node_3407 = ((i.uv0*4.0)+node_9599.g*float2(-0.16,-0.48));
                float4 node_1335 = tex2D(_noise,TRANSFORM_TEX(node_3407, _noise));
                float node_9195 = distance(i.posWorld.rgb,_WorldSpaceCameraPos);
                float node_3256 = 40.0;
                float node_5649 = saturate((node_9195-(node_3256-1.0)));
                float node_5112 = pow(1.0-max(0,dot(normalDirection, viewDirection)),0.66);
                float node_6561 = saturate(sign(i.posWorld.g));
                float2 sceneUVs = (i.projPos.xy / i.projPos.w) + (_opacity*(node_7639*(lerp(float2(0,0),(_distortion*node_1335.rgb.rg),(node_5649*node_5112))*node_6561)));
#if SHADER_API_GLES2 || SHADER_API_GLES3 || SHADER_API_GLCORE
				// editor
                float4 sceneColor = tex2D(_GrabTexture, sceneUVs);
#else
				// device
				float2 sceneUVsFlipped = float2(sceneUVs.x, 1 - sceneUVs.y);
				float4 sceneColor = tex2D(_GrabTexture, sceneUVsFlipped);
#endif
////// Lighting:
////// Emissive:
                float4 node_840_k = float4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
                float4 node_840_p = lerp(float4(float4(_Color.rgb,0.0).zy, node_840_k.wz), float4(float4(_Color.rgb,0.0).yz, node_840_k.xy), step(float4(_Color.rgb,0.0).z, float4(_Color.rgb,0.0).y));
                float4 node_840_q = lerp(float4(node_840_p.xyw, float4(_Color.rgb,0.0).x), float4(float4(_Color.rgb,0.0).x, node_840_p.yzx), step(node_840_p.x, float4(_Color.rgb,0.0).x));
                float node_840_d = node_840_q.x - min(node_840_q.w, node_840_q.y);
                float node_840_e = 1.0e-10;
                float3 node_840 = float3(abs(node_840_q.z + (node_840_q.w - node_840_q.y) / (6.0 * node_840_d + node_840_e)), node_840_d / (node_840_q.x + node_840_e), node_840_q.x);;
                float node_5065 = (1.0 - distance(float3(0,0,0),i.posWorld.g));
                float node_4690 = saturate((_glow*0.1));
                float node_6398 = lerp(0,20,node_4690);
                float node_842 = pow(1.0-max(0,dot(normalDirection, viewDirection)),lerp(10,0,saturate(node_4690)));
                float node_1975 = ((saturate((node_1335.r-0.5))*(saturate(((node_5065+node_6398)*0.1))+(node_842*10.0)))*10.0);
                float node_183 = saturate((_opacity*(((node_1975+saturate(((node_5065+node_6398)*0.2))+(node_842*4.0))*node_6561)*node_7639)*_Color.a));
                float3 node_2494 = lerp((lerp(float3(1,1,1),saturate(3.0*abs(1.0-2.0*frac((node_840.r-(-0.25))+float3(0.0,-1.0/3.0,1.0/3.0)))-1),1.0)*0.5),_Color.rgb,node_183);
                float3 emissive = saturate(node_2494);
                float3 finalColor = emissive;
                return fixed4(lerp(sceneColor.rgb, finalColor,node_183),1);
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
