// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:0,bsrc:0,bdst:1,dpts:2,wrdp:False,dith:3,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:False,igpj:False,qofs:1080,qpre:3,rntp:1,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:True,atwp:True,stva:2,stmr:255,stmw:255,stcp:4,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|emission-589-OUT;n:type:ShaderForge.SFN_Color,id:7241,x:31738,y:32885,ptovrint:False,ptlb:Color,ptin:_Color,varname:node_7241,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.07843138,c2:0.3921569,c3:0.7843137,c4:1;n:type:ShaderForge.SFN_Distance,id:4498,x:31477,y:33146,varname:node_4498,prsc:2|A-4582-XYZ,B-3912-XYZ;n:type:ShaderForge.SFN_FragmentPosition,id:4582,x:31288,y:33084,varname:node_4582,prsc:2;n:type:ShaderForge.SFN_ViewPosition,id:3912,x:31288,y:33217,varname:node_3912,prsc:2;n:type:ShaderForge.SFN_Multiply,id:3692,x:31666,y:33146,varname:node_3692,prsc:2|A-4498-OUT,B-4579-OUT;n:type:ShaderForge.SFN_ValueProperty,id:5710,x:31872,y:33246,ptovrint:False,ptlb:distance,ptin:_distance,varname:node_7815,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:0.2;n:type:ShaderForge.SFN_Subtract,id:2206,x:31872,y:33109,varname:node_2206,prsc:2|A-3692-OUT,B-5710-OUT;n:type:ShaderForge.SFN_Fresnel,id:7531,x:31285,y:32704,varname:node_7531,prsc:2|EXP-3497-OUT;n:type:ShaderForge.SFN_Multiply,id:2521,x:31966,y:32714,varname:node_2521,prsc:2|A-9870-OUT,B-7241-RGB;n:type:ShaderForge.SFN_Vector1,id:3497,x:31285,y:32832,varname:node_3497,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Vector1,id:4579,x:31666,y:33274,varname:node_4579,prsc:2,v1:0.04;n:type:ShaderForge.SFN_Multiply,id:4826,x:31545,y:32700,varname:node_4826,prsc:2|A-7531-OUT,B-8595-OUT;n:type:ShaderForge.SFN_Vector1,id:8595,x:31545,y:32832,varname:node_8595,prsc:2,v1:4;n:type:ShaderForge.SFN_Clamp01,id:9870,x:31738,y:32714,varname:node_9870,prsc:2|IN-4826-OUT;n:type:ShaderForge.SFN_Clamp01,id:589,x:32520,y:32812,varname:node_589,prsc:2|IN-4130-OUT;n:type:ShaderForge.SFN_SceneColor,id:5714,x:31349,y:32298,varname:node_5714,prsc:2;n:type:ShaderForge.SFN_RgbToHsv,id:3428,x:31519,y:32298,varname:node_3428,prsc:2|IN-5714-RGB;n:type:ShaderForge.SFN_HsvToRgb,id:2748,x:31909,y:32299,varname:node_2748,prsc:2|H-3428-HOUT,S-1894-OUT,V-3428-VOUT;n:type:ShaderForge.SFN_Multiply,id:1894,x:31729,y:32358,varname:node_1894,prsc:2|A-3428-SOUT,B-8873-OUT;n:type:ShaderForge.SFN_Clamp,id:2698,x:32111,y:33120,varname:node_2698,prsc:2|IN-2206-OUT,MIN-7241-A,MAX-5236-OUT;n:type:ShaderForge.SFN_Vector1,id:5236,x:32111,y:33246,varname:node_5236,prsc:2,v1:1;n:type:ShaderForge.SFN_Slider,id:8873,x:31362,y:32488,ptovrint:False,ptlb:saturation,ptin:_saturation,varname:node_8873,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:1,max:1;n:type:ShaderForge.SFN_Lerp,id:4130,x:32324,y:32812,varname:node_4130,prsc:2|A-2748-OUT,B-2521-OUT,T-2698-OUT;n:type:ShaderForge.SFN_ScreenPos,id:2967,x:30812,y:32233,varname:node_2967,prsc:2,sctp:2;n:type:ShaderForge.SFN_Negate,id:472,x:30983,y:32342,varname:node_472,prsc:2|IN-2967-V;n:type:ShaderForge.SFN_Append,id:9616,x:31097,y:32150,varname:node_9616,prsc:2|A-2967-U,B-9284-OUT;n:type:ShaderForge.SFN_OneMinus,id:9284,x:30996,y:32485,varname:node_9284,prsc:2|IN-2967-V;proporder:7241-5710-8873;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansARWallsPopupMask" {
    Properties {
        _Color ("Color", Color) = (0.07843138,0.3921569,0.7843137,1)
        _distance ("distance", Float ) = 0.2
        _saturation ("saturation", Range(0, 1)) = 1
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
            "RenderType"="Opaque"
        }
        GrabPass{ }
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="ForwardBase"
            }
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
            uniform sampler2D _GrabTexture;
            uniform float4 _Color;
            uniform float _distance;
            uniform float _saturation;
            struct VertexInput {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float4 posWorld : TEXCOORD0;
                float3 normalDir : TEXCOORD1;
                float4 projPos : TEXCOORD2;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                o.pos = UnityObjectToClipPos( v.vertex );
                o.projPos = ComputeScreenPos (o.pos);
                COMPUTE_EYEDEPTH(o.projPos.z);
                return o;
            }
            float4 frag(VertexOutput i) : COLOR {
                i.normalDir = normalize(i.normalDir);
                float3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
                float3 normalDirection = i.normalDir;
                float2 sceneUVs = (i.projPos.xy / i.projPos.w);
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
                float4 node_5714 = sceneColor;
                float4 node_3428_k = float4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
                float4 node_3428_p = lerp(float4(float4(node_5714.rgb,0.0).zy, node_3428_k.wz), float4(float4(node_5714.rgb,0.0).yz, node_3428_k.xy), step(float4(node_5714.rgb,0.0).z, float4(node_5714.rgb,0.0).y));
                float4 node_3428_q = lerp(float4(node_3428_p.xyw, float4(node_5714.rgb,0.0).x), float4(float4(node_5714.rgb,0.0).x, node_3428_p.yzx), step(node_3428_p.x, float4(node_5714.rgb,0.0).x));
                float node_3428_d = node_3428_q.x - min(node_3428_q.w, node_3428_q.y);
                float node_3428_e = 1.0e-10;
                float3 node_3428 = float3(abs(node_3428_q.z + (node_3428_q.w - node_3428_q.y) / (6.0 * node_3428_d + node_3428_e)), node_3428_d / (node_3428_q.x + node_3428_e), node_3428_q.x);;
                float3 emissive = saturate(lerp((lerp(float3(1,1,1),saturate(3.0*abs(1.0-2.0*frac(node_3428.r+float3(0.0,-1.0/3.0,1.0/3.0)))-1),(node_3428.g*_saturation))*node_3428.b),(saturate((pow(1.0-max(0,dot(normalDirection, viewDirection)),0.5)*4.0))*_Color.rgb),clamp(((distance(i.posWorld.rgb,_WorldSpaceCameraPos)*0.04)-_distance),_Color.a,1.0)));
                float3 finalColor = emissive;
                return fixed4(finalColor,1);
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
    CustomEditor "ShaderForgeMaterialInspector"
}
