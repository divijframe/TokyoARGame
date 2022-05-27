// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:0,bsrc:0,bdst:0,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|emission-9213-OUT;n:type:ShaderForge.SFN_Color,id:7241,x:31850,y:33163,ptovrint:False,ptlb:Color,ptin:_Color,varname:node_7241,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.596,c2:0.8383999,c3:1,c4:1;n:type:ShaderForge.SFN_TexCoord,id:7798,x:30686,y:32884,varname:node_7798,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Tex2d,id:9126,x:31384,y:32779,varname:node_9126,prsc:2,tex:714362635acb13c42b272b5e70138751,ntxv:0,isnm:False|UVIN-5491-UVOUT,TEX-6169-TEX;n:type:ShaderForge.SFN_Tex2dAsset,id:6169,x:31211,y:32905,ptovrint:False,ptlb:MainTex,ptin:_MainTex,varname:node_6169,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:714362635acb13c42b272b5e70138751,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Clamp01,id:9213,x:32531,y:32810,varname:node_9213,prsc:2|IN-5972-OUT;n:type:ShaderForge.SFN_Tex2d,id:1152,x:31384,y:32969,varname:node_1152,prsc:2,tex:714362635acb13c42b272b5e70138751,ntxv:0,isnm:False|UVIN-6180-UVOUT,TEX-6169-TEX;n:type:ShaderForge.SFN_Panner,id:6180,x:30953,y:32971,varname:node_6180,prsc:2,spu:-0.2,spv:-0.08|UVIN-7798-UVOUT;n:type:ShaderForge.SFN_Panner,id:5491,x:30953,y:32787,varname:node_5491,prsc:2,spu:0.04,spv:0.12|UVIN-7798-UVOUT;n:type:ShaderForge.SFN_Vector1,id:1884,x:31409,y:33140,varname:node_1884,prsc:2,v1:8;n:type:ShaderForge.SFN_Multiply,id:4397,x:31649,y:32856,varname:node_4397,prsc:2|A-9126-RGB,B-1152-RGB,C-1884-OUT;n:type:ShaderForge.SFN_VertexColor,id:2894,x:31850,y:33004,varname:node_2894,prsc:2;n:type:ShaderForge.SFN_Multiply,id:5972,x:32308,y:32846,varname:node_5972,prsc:2|A-9056-OUT,B-2894-A,C-295-OUT;n:type:ShaderForge.SFN_Clamp01,id:9056,x:32091,y:32866,varname:node_9056,prsc:2|IN-49-OUT;n:type:ShaderForge.SFN_Multiply,id:49,x:31850,y:32866,varname:node_49,prsc:2|A-4397-OUT,B-2894-A,C-7241-RGB;n:type:ShaderForge.SFN_ScreenPos,id:5700,x:31059,y:32539,varname:node_5700,prsc:2,sctp:0;n:type:ShaderForge.SFN_Distance,id:1231,x:31233,y:32619,varname:node_1231,prsc:2|A-5700-UVOUT,B-80-OUT;n:type:ShaderForge.SFN_Vector2,id:80,x:31059,y:32685,varname:node_80,prsc:2,v1:0,v2:0;n:type:ShaderForge.SFN_OneMinus,id:7427,x:31424,y:32619,varname:node_7427,prsc:2|IN-1231-OUT;n:type:ShaderForge.SFN_Clamp01,id:295,x:31836,y:32624,varname:node_295,prsc:2|IN-8406-OUT;n:type:ShaderForge.SFN_Multiply,id:8406,x:31609,y:32624,varname:node_8406,prsc:2|A-7427-OUT,B-7427-OUT,C-7427-OUT;proporder:7241-6169;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansCaustics" {
    Properties {
        _Color ("Color", Color) = (0.596,0.8383999,1,1)
        _MainTex ("MainTex", 2D) = "white" {}
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
            Blend One One
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
            uniform sampler2D _MainTex; uniform float4 _MainTex_ST;
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
            float4 frag(VertexOutput i) : COLOR {
                float2 sceneUVs = (i.projPos.xy / i.projPos.w);
////// Lighting:
////// Emissive:
                float4 node_5812 = _Time;
                float2 node_5491 = (i.uv0+node_5812.g*float2(0.04,0.12));
                float4 node_9126 = tex2D(_MainTex,TRANSFORM_TEX(node_5491, _MainTex));
                float2 node_6180 = (i.uv0+node_5812.g*float2(-0.2,-0.08));
                float4 node_1152 = tex2D(_MainTex,TRANSFORM_TEX(node_6180, _MainTex));
                float node_7427 = (1.0 - distance((sceneUVs * 2 - 1).rg,float2(0,0)));
                float3 emissive = saturate((saturate(((node_9126.rgb*node_1152.rgb*8.0)*i.vertexColor.a*_Color.rgb))*i.vertexColor.a*saturate((node_7427*node_7427*node_7427))));
                float3 finalColor = emissive;
                return fixed4(finalColor,1);
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
    CustomEditor "ShaderForgeMaterialInspector"
}
