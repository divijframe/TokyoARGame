// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:2,bsrc:0,bdst:0,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:False,igpj:False,qofs:1080,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:True,atwp:True,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|emission-5535-OUT,alpha-4428-OUT;n:type:ShaderForge.SFN_Tex2d,id:7012,x:31781,y:32722,ptovrint:False,ptlb:MainTex,ptin:_MainTex,varname:node_7012,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Clamp01,id:5535,x:32548,y:32812,varname:node_5535,prsc:2|IN-1128-OUT;n:type:ShaderForge.SFN_Multiply,id:9401,x:31977,y:32739,varname:node_9401,prsc:2|A-7012-RGB,B-9164-RGB;n:type:ShaderForge.SFN_VertexColor,id:9164,x:31781,y:32892,varname:node_9164,prsc:2;n:type:ShaderForge.SFN_Multiply,id:4428,x:31977,y:32904,varname:node_4428,prsc:2|A-7012-A,B-9164-A;n:type:ShaderForge.SFN_Multiply,id:9703,x:32197,y:32695,varname:node_9703,prsc:2|A-3388-OUT,B-7083-OUT;n:type:ShaderForge.SFN_Multiply,id:7083,x:32030,y:32588,varname:node_7083,prsc:2|A-9401-OUT,B-4428-OUT;n:type:ShaderForge.SFN_Color,id:4333,x:31141,y:31983,ptovrint:False,ptlb:Color,ptin:_Color,varname:_Color_copy,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:1,c2:0.2,c3:1,c4:1;n:type:ShaderForge.SFN_Color,id:210,x:31141,y:32145,ptovrint:False,ptlb:Color2,ptin:_Color2,varname:node_3006,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.2,c2:0.5733333,c3:1,c4:1;n:type:ShaderForge.SFN_ScreenPos,id:1629,x:29493,y:31455,varname:node_1629,prsc:2,sctp:0;n:type:ShaderForge.SFN_Vector1,id:3199,x:29989,y:32086,varname:node_3199,prsc:2,v1:0.66;n:type:ShaderForge.SFN_Distance,id:22,x:30049,y:32207,varname:node_22,prsc:2|A-1629-UVOUT,B-986-OUT;n:type:ShaderForge.SFN_Vector2,id:986,x:29802,y:32225,varname:node_986,prsc:2,v1:-0.8,v2:-0.8;n:type:ShaderForge.SFN_Distance,id:4827,x:30049,y:32334,varname:node_4827,prsc:2|A-1629-UVOUT,B-6166-OUT;n:type:ShaderForge.SFN_Vector2,id:6166,x:29802,y:32352,varname:node_6166,prsc:2,v1:0.8,v2:0.8;n:type:ShaderForge.SFN_OneMinus,id:3166,x:30224,y:32207,varname:node_3166,prsc:2|IN-22-OUT;n:type:ShaderForge.SFN_OneMinus,id:597,x:30224,y:32334,varname:node_597,prsc:2|IN-4827-OUT;n:type:ShaderForge.SFN_Add,id:5296,x:30411,y:32207,varname:node_5296,prsc:2|A-3166-OUT,B-3199-OUT;n:type:ShaderForge.SFN_Add,id:6102,x:30411,y:32334,varname:node_6102,prsc:2|A-597-OUT,B-3199-OUT;n:type:ShaderForge.SFN_Multiply,id:8486,x:30607,y:32207,varname:node_8486,prsc:2|A-5296-OUT,B-3199-OUT;n:type:ShaderForge.SFN_Multiply,id:2203,x:30607,y:32334,varname:node_2203,prsc:2|A-6102-OUT,B-3199-OUT;n:type:ShaderForge.SFN_Clamp01,id:3258,x:30791,y:32207,varname:node_3258,prsc:2|IN-8486-OUT;n:type:ShaderForge.SFN_Clamp01,id:3159,x:30791,y:32334,varname:node_3159,prsc:2|IN-2203-OUT;n:type:ShaderForge.SFN_Lerp,id:9705,x:31603,y:32292,varname:node_9705,prsc:2|A-9270-OUT,B-4333-RGB,T-3258-OUT;n:type:ShaderForge.SFN_Lerp,id:3388,x:31781,y:32391,varname:node_3388,prsc:2|A-9705-OUT,B-210-RGB,T-3159-OUT;n:type:ShaderForge.SFN_Vector3,id:9270,x:31363,y:32363,varname:node_9270,prsc:2,v1:0,v2:0,v3:0;n:type:ShaderForge.SFN_Multiply,id:1128,x:32374,y:32823,varname:node_1128,prsc:2|A-9703-OUT,B-3746-OUT;n:type:ShaderForge.SFN_OneMinus,id:3746,x:32197,y:32839,varname:node_3746,prsc:2|IN-1629-V;proporder:7012-4333-210;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansPlayerRadius" {
    Properties {
        _MainTex ("MainTex", 2D) = "white" {}
        _Color ("Color", Color) = (1,0.2,1,1)
        _Color2 ("Color2", Color) = (0.2,0.5733333,1,1)
        [HideInInspector]_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
        _Stencil ("Stencil ID", Float) = 0
        _StencilReadMask ("Stencil Read Mask", Float) = 255
        _StencilWriteMask ("Stencil Write Mask", Float) = 255
        _StencilComp ("Stencil Comparison", Float) = 8
        _StencilOp ("Stencil Operation", Float) = 0
        _StencilOpFail ("Stencil Fail Operation", Float) = 0
        _StencilOpZFail ("Stencil Z-Fail Operation", Float) = 0
    }
    SubShader {
        Tags {
            "Queue"="Transparent+1080"
            "RenderType"="Transparent"
        }
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="ForwardBase"
            }
            Blend One One
            Cull Off
            ZWrite Off
            
            Stencil {
                Ref [_Stencil]
                ReadMask [_StencilReadMask]
                WriteMask [_StencilWriteMask]
                Comp [_StencilComp]
                Pass [_StencilOp]
                Fail [_StencilOpFail]
                ZFail [_StencilOpZFail]
            }
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_FORWARDBASE
            #include "UnityCG.cginc"
            #pragma multi_compile_fwdbase_fullshadows
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
            #pragma target 3.0
            uniform sampler2D _MainTex; uniform float4 _MainTex_ST;
            uniform float4 _Color;
            uniform float4 _Color2;
            struct VertexInput {
                float4 vertex : POSITION;
                float2 texcoord0 : TEXCOORD0;
                float4 vertexColor : COLOR;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float2 uv0 : TEXCOORD0;
                float4 vertexColor : COLOR;
                float4 projPos : TEXCOORD1;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.uv0 = v.texcoord0;
                o.vertexColor = v.vertexColor;
                o.pos = UnityObjectToClipPos( v.vertex );
                o.projPos = ComputeScreenPos (o.pos);
                COMPUTE_EYEDEPTH(o.projPos.z);
                return o;
            }
            float4 frag(VertexOutput i, float facing : VFACE) : COLOR {
                float isFrontFace = ( facing >= 0 ? 1 : 0 );
                float faceSign = ( facing >= 0 ? 1 : -1 );
                float2 sceneUVs = (i.projPos.xy / i.projPos.w);
////// Lighting:
////// Emissive:
                float node_3199 = 0.66;
                float4 _MainTex_var = tex2D(_MainTex,TRANSFORM_TEX(i.uv0, _MainTex));
                float node_4428 = (_MainTex_var.a*i.vertexColor.a);
                float3 node_7083 = ((_MainTex_var.rgb*i.vertexColor.rgb)*node_4428);
                float3 node_9703 = (lerp(lerp(float3(0,0,0),_Color.rgb,saturate((((1.0 - distance((sceneUVs * 2 - 1).rg,float2(-0.8,-0.8)))+node_3199)*node_3199))),_Color2.rgb,saturate((((1.0 - distance((sceneUVs * 2 - 1).rg,float2(0.8,0.8)))+node_3199)*node_3199)))*node_7083);
                float3 emissive = saturate((node_9703*(1.0 - (sceneUVs * 2 - 1).g)));
                float3 finalColor = emissive;
                return fixed4(finalColor,node_4428);
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
