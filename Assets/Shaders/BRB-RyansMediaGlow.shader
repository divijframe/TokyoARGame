// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:2,spmd:0,trmd:1,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:0,bsrc:0,bdst:7,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|diff-4227-OUT,spec-8435-OUT,gloss-8435-OUT,normal-9502-OUT,emission-1645-OUT,alpha-8148-OUT,refract-9239-OUT;n:type:ShaderForge.SFN_Clamp01,id:1645,x:32555,y:32814,varname:node_1645,prsc:2|IN-9628-OUT;n:type:ShaderForge.SFN_Time,id:6113,x:28454,y:31901,varname:node_6113,prsc:2;n:type:ShaderForge.SFN_Multiply,id:7948,x:28753,y:32477,varname:node_7948,prsc:2|A-6113-T,B-8750-OUT;n:type:ShaderForge.SFN_Vector1,id:8130,x:28282,y:32429,varname:node_8130,prsc:2,v1:1.2;n:type:ShaderForge.SFN_Sin,id:6360,x:28942,y:32479,varname:node_6360,prsc:2|IN-7948-OUT;n:type:ShaderForge.SFN_ScreenPos,id:1426,x:29374,y:31973,varname:node_1426,prsc:2,sctp:0;n:type:ShaderForge.SFN_Color,id:5085,x:31022,y:32501,ptovrint:False,ptlb:Color,ptin:_Color,varname:node_3696,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:1,c2:0.68,c3:0.2,c4:1;n:type:ShaderForge.SFN_Color,id:1111,x:31022,y:32663,ptovrint:False,ptlb:Color2,ptin:_Color2,varname:node_3006,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:1,c2:0.2,c3:1,c4:1;n:type:ShaderForge.SFN_Vector3,id:1491,x:31303,y:32214,varname:node_1491,prsc:2,v1:1,v2:1,v3:1;n:type:ShaderForge.SFN_Lerp,id:6281,x:31518,y:32286,varname:node_6281,prsc:2|A-1491-OUT,B-5085-RGB,T-8524-OUT;n:type:ShaderForge.SFN_Lerp,id:169,x:31727,y:32365,varname:node_169,prsc:2|A-6281-OUT,B-1111-RGB,T-6345-OUT;n:type:ShaderForge.SFN_Cos,id:2975,x:28942,y:32657,varname:node_2975,prsc:2|IN-7948-OUT;n:type:ShaderForge.SFN_Distance,id:1134,x:30123,y:32159,varname:node_1134,prsc:2|A-1426-UVOUT,B-7588-OUT;n:type:ShaderForge.SFN_Append,id:7588,x:29911,y:32333,varname:node_7588,prsc:2|A-6887-OUT,B-7537-OUT;n:type:ShaderForge.SFN_Vector1,id:7537,x:29736,y:32427,varname:node_7537,prsc:2,v1:0;n:type:ShaderForge.SFN_Append,id:4116,x:29911,y:32453,varname:node_4116,prsc:2|A-7537-OUT,B-8320-OUT;n:type:ShaderForge.SFN_Distance,id:6042,x:30123,y:32333,varname:node_6042,prsc:2|A-1426-UVOUT,B-4116-OUT;n:type:ShaderForge.SFN_Clamp01,id:8524,x:30842,y:32166,varname:node_8524,prsc:2|IN-8560-OUT;n:type:ShaderForge.SFN_Clamp01,id:6345,x:30842,y:32288,varname:node_6345,prsc:2|IN-7797-OUT;n:type:ShaderForge.SFN_Multiply,id:8560,x:30649,y:32147,varname:node_8560,prsc:2|A-4952-OUT,B-1365-OUT;n:type:ShaderForge.SFN_Vector1,id:1365,x:29493,y:32268,varname:node_1365,prsc:2,v1:0.66;n:type:ShaderForge.SFN_Multiply,id:7797,x:30649,y:32288,varname:node_7797,prsc:2|A-980-OUT,B-1365-OUT;n:type:ShaderForge.SFN_OneMinus,id:198,x:30294,y:32159,varname:node_198,prsc:2|IN-1134-OUT;n:type:ShaderForge.SFN_OneMinus,id:35,x:30294,y:32333,varname:node_35,prsc:2|IN-6042-OUT;n:type:ShaderForge.SFN_Add,id:4952,x:30490,y:32147,varname:node_4952,prsc:2|A-198-OUT,B-8715-OUT;n:type:ShaderForge.SFN_Add,id:980,x:30490,y:32288,varname:node_980,prsc:2|A-35-OUT,B-8491-OUT;n:type:ShaderForge.SFN_Multiply,id:8205,x:28758,y:32183,varname:node_8205,prsc:2|A-6113-T,B-5517-OUT;n:type:ShaderForge.SFN_Vector1,id:4616,x:28282,y:32257,varname:node_4616,prsc:2,v1:1.5;n:type:ShaderForge.SFN_Sin,id:7085,x:28953,y:32123,varname:node_7085,prsc:2|IN-8205-OUT;n:type:ShaderForge.SFN_Cos,id:4134,x:28953,y:32308,varname:node_4134,prsc:2|IN-8205-OUT;n:type:ShaderForge.SFN_RemapRange,id:8715,x:29148,y:32123,varname:node_8715,prsc:2,frmn:-1,frmx:1,tomn:-0.5,tomx:1.5|IN-7085-OUT;n:type:ShaderForge.SFN_RemapRange,id:8491,x:29148,y:32308,varname:node_8491,prsc:2,frmn:-1,frmx:1,tomn:-0.5,tomx:1.5|IN-4134-OUT;n:type:ShaderForge.SFN_RemapRange,id:6887,x:29148,y:32657,varname:node_6887,prsc:2,frmn:-1,frmx:1,tomn:-0.8,tomx:0.8|IN-2975-OUT;n:type:ShaderForge.SFN_RemapRange,id:8320,x:29148,y:32479,varname:node_8320,prsc:2,frmn:-1,frmx:1,tomn:-0.8,tomx:0.8|IN-6360-OUT;n:type:ShaderForge.SFN_NormalVector,id:3299,x:29707,y:31479,prsc:2,pt:False;n:type:ShaderForge.SFN_ComponentMask,id:1351,x:29956,y:31427,varname:node_1351,prsc:2,cc1:0,cc2:-1,cc3:-1,cc4:-1|IN-3299-OUT;n:type:ShaderForge.SFN_ComponentMask,id:722,x:29956,y:31581,varname:node_722,prsc:2,cc1:2,cc2:-1,cc3:-1,cc4:-1|IN-3299-OUT;n:type:ShaderForge.SFN_Negate,id:944,x:30133,y:31471,varname:node_944,prsc:2|IN-1351-OUT;n:type:ShaderForge.SFN_Lerp,id:8845,x:30339,y:31430,varname:node_8845,prsc:2|A-1351-OUT,B-944-OUT,T-3402-OUT;n:type:ShaderForge.SFN_Lerp,id:8153,x:30339,y:31591,varname:node_8153,prsc:2|A-722-OUT,B-4921-OUT,T-6275-OUT;n:type:ShaderForge.SFN_Negate,id:4921,x:30133,y:31621,varname:node_4921,prsc:2|IN-722-OUT;n:type:ShaderForge.SFN_Add,id:9628,x:32319,y:32455,varname:node_9628,prsc:2|A-4541-OUT,B-9847-OUT;n:type:ShaderForge.SFN_Add,id:5826,x:30793,y:31538,varname:node_5826,prsc:2|A-5918-OUT,B-6321-OUT;n:type:ShaderForge.SFN_Clamp01,id:5918,x:30528,y:31430,varname:node_5918,prsc:2|IN-8845-OUT;n:type:ShaderForge.SFN_Clamp01,id:6321,x:30528,y:31581,varname:node_6321,prsc:2|IN-8153-OUT;n:type:ShaderForge.SFN_ValueProperty,id:6729,x:28070,y:32209,ptovrint:False,ptlb:speed_multiplier,ptin:_speed_multiplier,varname:node_6729,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,v1:1;n:type:ShaderForge.SFN_ConstantClamp,id:4541,x:31003,y:31598,varname:node_4541,prsc:2,min:0,max:0.66|IN-5826-OUT;n:type:ShaderForge.SFN_Multiply,id:3521,x:28761,y:31804,varname:node_3521,prsc:2|A-6113-T,B-7834-OUT;n:type:ShaderForge.SFN_Vector1,id:7997,x:28282,y:32105,varname:node_7997,prsc:2,v1:0.7;n:type:ShaderForge.SFN_Sin,id:3343,x:28956,y:31744,varname:node_3343,prsc:2|IN-3521-OUT;n:type:ShaderForge.SFN_Cos,id:8470,x:28956,y:31929,varname:node_8470,prsc:2|IN-3521-OUT;n:type:ShaderForge.SFN_RemapRange,id:3402,x:29151,y:31744,varname:node_3402,prsc:2,frmn:-1,frmx:1,tomn:0,tomx:1|IN-3343-OUT;n:type:ShaderForge.SFN_RemapRange,id:6275,x:29151,y:31929,varname:node_6275,prsc:2,frmn:-1,frmx:1,tomn:0,tomx:1|IN-8470-OUT;n:type:ShaderForge.SFN_Multiply,id:7834,x:28454,y:32050,varname:node_7834,prsc:2|A-6729-OUT,B-7997-OUT;n:type:ShaderForge.SFN_Multiply,id:5517,x:28454,y:32213,varname:node_5517,prsc:2|A-6729-OUT,B-4616-OUT;n:type:ShaderForge.SFN_Multiply,id:8750,x:28454,y:32385,varname:node_8750,prsc:2|A-6729-OUT,B-8130-OUT;n:type:ShaderForge.SFN_Vector1,id:8435,x:32189,y:32762,varname:node_8435,prsc:2,v1:1;n:type:ShaderForge.SFN_Vector3,id:9502,x:32081,y:32840,varname:node_9502,prsc:2,v1:0.5,v2:0.5,v3:1;n:type:ShaderForge.SFN_Vector1,id:4227,x:32484,y:32603,varname:node_4227,prsc:2,v1:0;n:type:ShaderForge.SFN_Fresnel,id:8148,x:32085,y:33423,varname:node_8148,prsc:2|EXP-7040-OUT;n:type:ShaderForge.SFN_Vector1,id:7040,x:31893,y:33457,varname:node_7040,prsc:2,v1:1.8;n:type:ShaderForge.SFN_Lerp,id:9239,x:32529,y:33034,varname:node_9239,prsc:2|A-8069-OUT,B-2274-OUT,T-8148-OUT;n:type:ShaderForge.SFN_Vector2,id:8069,x:32254,y:33030,varname:node_8069,prsc:2,v1:0,v2:0;n:type:ShaderForge.SFN_Multiply,id:2274,x:32085,y:33185,varname:node_2274,prsc:2|A-4241-OUT,B-5136-OUT;n:type:ShaderForge.SFN_ComponentMask,id:5136,x:31893,y:33274,varname:node_5136,prsc:2,cc1:0,cc2:1,cc3:-1,cc4:-1|IN-1043-XYZ;n:type:ShaderForge.SFN_Slider,id:4241,x:31671,y:33173,ptovrint:False,ptlb:refraction_multiplier,ptin:_refraction_multiplier,varname:node_4241,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:0,max:1;n:type:ShaderForge.SFN_Transform,id:1043,x:31720,y:33274,varname:node_1043,prsc:2,tffrom:0,tfto:3|IN-3299-OUT;n:type:ShaderForge.SFN_Clamp01,id:9847,x:32131,y:32483,varname:node_9847,prsc:2|IN-169-OUT;n:type:ShaderForge.SFN_Append,id:1101,x:29711,y:31989,varname:node_1101,prsc:2|A-1426-U,B-1426-V;n:type:ShaderForge.SFN_Negate,id:3371,x:29551,y:32016,varname:node_3371,prsc:2|IN-1426-V;n:type:ShaderForge.SFN_OneMinus,id:1690,x:29551,y:32131,varname:node_1690,prsc:2|IN-1426-V;proporder:5085-1111-6729-4241;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansMediaGlow" {
    Properties {
        _Color ("Color", Color) = (1,0.68,0.2,1)
        _Color2 ("Color2", Color) = (1,0.2,1,1)
        _speed_multiplier ("speed_multiplier", Float ) = 1
        _refraction_multiplier ("refraction_multiplier", Range(0, 1)) = 0
        [HideInInspector]_Cutoff ("Alpha cutoff", Range(0,1)) = 0.5
    }
    SubShader {
        Tags {
            "IgnoreProjector"="True"
            "Queue"="Transparent"
            "RenderType"="Transparent"
        }
        GrabPass{ }
        Pass {
            Name "FORWARD"
            Tags {
                "LightMode"="ForwardBase"
            }
            Blend One OneMinusSrcAlpha
            ZWrite Off
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_FORWARDBASE
            #include "UnityCG.cginc"
            #pragma multi_compile_fwdbase
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
            #pragma target 3.0
            uniform float4 _LightColor0;
            uniform sampler2D _GrabTexture;
            uniform float4 _Color;
            uniform float4 _Color2;
            uniform float _speed_multiplier;
            uniform float _refraction_multiplier;
            struct VertexInput {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float4 posWorld : TEXCOORD0;
                float3 normalDir : TEXCOORD1;
                float3 tangentDir : TEXCOORD2;
                float3 bitangentDir : TEXCOORD3;
                float4 projPos : TEXCOORD4;
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                o.tangentDir = normalize( mul( unity_ObjectToWorld, float4( v.tangent.xyz, 0.0 ) ).xyz );
                o.bitangentDir = normalize(cross(o.normalDir, o.tangentDir) * v.tangent.w);
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                float3 lightColor = _LightColor0.rgb;
                o.pos = UnityObjectToClipPos( v.vertex );
                o.projPos = ComputeScreenPos (o.pos);
                COMPUTE_EYEDEPTH(o.projPos.z);
                return o;
            }
            float4 frag(VertexOutput i) : COLOR {
                i.normalDir = normalize(i.normalDir);
                float3x3 tangentTransform = float3x3( i.tangentDir, i.bitangentDir, i.normalDir);
                float3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
                float3 normalLocal = float3(0.5,0.5,1);
                float3 normalDirection = normalize(mul( normalLocal, tangentTransform )); // Perturbed normals
                float node_8148 = pow(1.0-max(0,dot(normalDirection, viewDirection)),1.8);
                float2 sceneUVs = (i.projPos.xy / i.projPos.w) + lerp(float2(0,0),(_refraction_multiplier*mul( UNITY_MATRIX_V, float4(i.normalDir,0) ).xyz.rgb.rg),node_8148);
#if SHADER_API_GLES2 || SHADER_API_GLES3 || SHADER_API_GLCORE
				// editor
                float4 sceneColor = tex2D(_GrabTexture, sceneUVs);
#else
				// device
				float2 sceneUVsFlipped = float2(sceneUVs.x, 1 - sceneUVs.y);
				float4 sceneColor = tex2D(_GrabTexture, sceneUVsFlipped);
#endif
                float3 lightDirection = normalize(_WorldSpaceLightPos0.xyz);
                float3 lightColor = _LightColor0.rgb;
////// Lighting:
                float attenuation = 1;
                float3 attenColor = attenuation * _LightColor0.xyz;
///////// Gloss:
                float node_8435 = 1.0;
                float gloss = node_8435;
                float specPow = exp2( gloss * 10.0 + 1.0 );
////// Specular:
                float NdotL = saturate(dot( normalDirection, lightDirection ));
                float3 specularColor = float3(node_8435,node_8435,node_8435);
                float3 directSpecular = attenColor * pow(max(0,dot(reflect(-lightDirection, normalDirection),viewDirection)),specPow)*specularColor;
                float3 specular = directSpecular;
/////// Diffuse:
                NdotL = max(0.0,dot( normalDirection, lightDirection ));
                float3 directDiffuse = max( 0.0, NdotL) * attenColor;
                float3 indirectDiffuse = float3(0,0,0);
                indirectDiffuse += UNITY_LIGHTMODEL_AMBIENT.rgb; // Ambient Light
                float node_4227 = 0.0;
                float3 diffuseColor = float3(node_4227,node_4227,node_4227);
                float3 diffuse = (directDiffuse + indirectDiffuse) * diffuseColor;
////// Emissive:
                float node_1351 = i.normalDir.r;
                float4 node_6113 = _Time;
                float node_3521 = (node_6113.g*(_speed_multiplier*0.7));
                float node_722 = i.normalDir.b;
                float node_7948 = (node_6113.g*(_speed_multiplier*1.2));
                float node_7537 = 0.0;
                float node_8205 = (node_6113.g*(_speed_multiplier*1.5));
                float node_1365 = 0.66;
                float3 emissive = saturate((clamp((saturate(lerp(node_1351,(-1*node_1351),(sin(node_3521)*0.5+0.5)))+saturate(lerp(node_722,(-1*node_722),(cos(node_3521)*0.5+0.5)))),0,0.66)+saturate(lerp(lerp(float3(1,1,1),_Color.rgb,saturate((((1.0 - distance((sceneUVs * 2 - 1).rg,float2((cos(node_7948)*0.8+0.0),node_7537)))+(sin(node_8205)*1.0+0.5))*node_1365))),_Color2.rgb,saturate((((1.0 - distance((sceneUVs * 2 - 1).rg,float2(node_7537,(sin(node_7948)*0.8+0.0))))+(cos(node_8205)*1.0+0.5))*node_1365))))));
/// Final Color:
                float3 finalColor = diffuse * node_8148 + specular + emissive;
                return fixed4(lerp(sceneColor.rgb, finalColor,node_8148),1);
            }
            ENDCG
        }
        Pass {
            Name "FORWARD_DELTA"
            Tags {
                "LightMode"="ForwardAdd"
            }
            Blend One One
            ZWrite Off
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #define UNITY_PASS_FORWARDADD
            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #pragma multi_compile_fwdadd
            #pragma only_renderers d3d9 d3d11 glcore gles gles3 metal d3d11_9x 
            #pragma target 3.0
            uniform float4 _LightColor0;
            uniform sampler2D _GrabTexture;
            uniform float4 _Color;
            uniform float4 _Color2;
            uniform float _speed_multiplier;
            uniform float _refraction_multiplier;
            struct VertexInput {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float4 tangent : TANGENT;
            };
            struct VertexOutput {
                float4 pos : SV_POSITION;
                float4 posWorld : TEXCOORD0;
                float3 normalDir : TEXCOORD1;
                float3 tangentDir : TEXCOORD2;
                float3 bitangentDir : TEXCOORD3;
                float4 projPos : TEXCOORD4;
                LIGHTING_COORDS(5,6)
            };
            VertexOutput vert (VertexInput v) {
                VertexOutput o = (VertexOutput)0;
                o.normalDir = UnityObjectToWorldNormal(v.normal);
                o.tangentDir = normalize( mul( unity_ObjectToWorld, float4( v.tangent.xyz, 0.0 ) ).xyz );
                o.bitangentDir = normalize(cross(o.normalDir, o.tangentDir) * v.tangent.w);
                o.posWorld = mul(unity_ObjectToWorld, v.vertex);
                float3 lightColor = _LightColor0.rgb;
                o.pos = UnityObjectToClipPos( v.vertex );
                o.projPos = ComputeScreenPos (o.pos);
                COMPUTE_EYEDEPTH(o.projPos.z);
                TRANSFER_VERTEX_TO_FRAGMENT(o)
                return o;
            }
            float4 frag(VertexOutput i) : COLOR {
                i.normalDir = normalize(i.normalDir);
                float3x3 tangentTransform = float3x3( i.tangentDir, i.bitangentDir, i.normalDir);
                float3 viewDirection = normalize(_WorldSpaceCameraPos.xyz - i.posWorld.xyz);
                float3 normalLocal = float3(0.5,0.5,1);
                float3 normalDirection = normalize(mul( normalLocal, tangentTransform )); // Perturbed normals
                float node_8148 = pow(1.0-max(0,dot(normalDirection, viewDirection)),1.8);
                float2 sceneUVs = (i.projPos.xy / i.projPos.w) + lerp(float2(0,0),(_refraction_multiplier*mul( UNITY_MATRIX_V, float4(i.normalDir,0) ).xyz.rgb.rg),node_8148);
#if SHADER_API_GLES2 || SHADER_API_GLES3 || SHADER_API_GLCORE
				// editor
				float4 sceneColor = tex2D(_GrabTexture, sceneUVs);
#else
				// device
				float2 sceneUVsFlipped = float2(sceneUVs.x, 1 - sceneUVs.y);
				float4 sceneColor = tex2D(_GrabTexture, sceneUVsFlipped);
#endif
                float3 lightDirection = normalize(lerp(_WorldSpaceLightPos0.xyz, _WorldSpaceLightPos0.xyz - i.posWorld.xyz,_WorldSpaceLightPos0.w));
                float3 lightColor = _LightColor0.rgb;
////// Lighting:
                float attenuation = LIGHT_ATTENUATION(i);
                float3 attenColor = attenuation * _LightColor0.xyz;
///////// Gloss:
                float node_8435 = 1.0;
                float gloss = node_8435;
                float specPow = exp2( gloss * 10.0 + 1.0 );
////// Specular:
                float NdotL = saturate(dot( normalDirection, lightDirection ));
                float3 specularColor = float3(node_8435,node_8435,node_8435);
                float3 directSpecular = attenColor * pow(max(0,dot(reflect(-lightDirection, normalDirection),viewDirection)),specPow)*specularColor;
                float3 specular = directSpecular;
/////// Diffuse:
                NdotL = max(0.0,dot( normalDirection, lightDirection ));
                float3 directDiffuse = max( 0.0, NdotL) * attenColor;
                float node_4227 = 0.0;
                float3 diffuseColor = float3(node_4227,node_4227,node_4227);
                float3 diffuse = directDiffuse * diffuseColor;
/// Final Color:
                float3 finalColor = diffuse * node_8148 + specular;
                return fixed4(finalColor,0);
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
    CustomEditor "ShaderForgeMaterialInspector"
}
