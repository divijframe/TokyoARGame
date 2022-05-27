// Shader created with Shader Forge v1.38 
// Shader Forge (c) Freya Holmer - http://www.acegikmo.com/shaderforge/
// Note: Manually altering this data may prevent you from opening it in Shader Forge
/*SF_DATA;ver:1.38;sub:START;pass:START;ps:flbk:,iptp:0,cusa:False,bamd:0,cgin:,lico:1,lgpr:1,limd:0,spmd:1,trmd:0,grmd:0,uamb:True,mssp:True,bkdf:False,hqlp:False,rprd:False,enco:False,rmgx:True,imps:True,rpth:0,vtps:0,hqsc:True,nrmq:1,nrsp:0,vomd:0,spxs:False,tesm:0,olmd:1,culm:2,bsrc:3,bdst:7,dpts:2,wrdp:False,dith:0,atcv:False,rfrpo:True,rfrpn:Refraction,coma:15,ufog:False,aust:True,igpj:True,qofs:0,qpre:3,rntp:2,fgom:False,fgoc:False,fgod:False,fgor:False,fgmd:0,fgcr:0.5,fgcg:0.5,fgcb:0.5,fgca:1,fgde:0.01,fgrn:0,fgrf:300,stcl:False,atwp:False,stva:128,stmr:255,stmw:255,stcp:6,stps:0,stfa:0,stfz:0,ofsf:0,ofsu:0,f2p0:False,fnsp:False,fnfb:False,fsmp:False;n:type:ShaderForge.SFN_Final,id:3138,x:32719,y:32712,varname:node_3138,prsc:2|emission-7370-OUT,alpha-4464-OUT,refract-4165-OUT;n:type:ShaderForge.SFN_Color,id:7241,x:30158,y:31753,ptovrint:False,ptlb:Color,ptin:_Color,varname:node_7241,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,c1:0.8,c2:0.8,c3:0.8,c4:1;n:type:ShaderForge.SFN_ScreenPos,id:3310,x:28744,y:32105,varname:node_3310,prsc:2,sctp:0;n:type:ShaderForge.SFN_Multiply,id:3277,x:30426,y:32304,varname:node_3277,prsc:2|A-4690-OUT,B-4381-OUT;n:type:ShaderForge.SFN_Clamp01,id:7370,x:32553,y:32812,varname:node_7370,prsc:2|IN-3810-OUT;n:type:ShaderForge.SFN_ObjectPosition,id:565,x:28202,y:33686,varname:node_565,prsc:2;n:type:ShaderForge.SFN_TexCoord,id:6670,x:27956,y:32783,varname:node_6670,prsc:2,uv:0,uaff:False;n:type:ShaderForge.SFN_Multiply,id:84,x:31131,y:32400,varname:node_84,prsc:2|A-2581-OUT,B-4381-OUT;n:type:ShaderForge.SFN_OneMinus,id:5500,x:28575,y:33507,varname:node_5500,prsc:2|IN-5541-OUT;n:type:ShaderForge.SFN_Distance,id:5541,x:28391,y:33507,varname:node_5541,prsc:2|A-3878-OUT,B-443-Y;n:type:ShaderForge.SFN_FragmentPosition,id:443,x:28202,y:33554,varname:node_443,prsc:2;n:type:ShaderForge.SFN_Multiply,id:3040,x:28971,y:33507,varname:node_3040,prsc:2|A-7324-OUT,B-4965-OUT;n:type:ShaderForge.SFN_Vector1,id:4965,x:28971,y:33637,varname:node_4965,prsc:2,v1:0.1;n:type:ShaderForge.SFN_Tex2d,id:1790,x:30055,y:32367,varname:node_1790,prsc:2,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False|UVIN-2368-OUT,TEX-8163-TEX;n:type:ShaderForge.SFN_Vector3,id:3878,x:28202,y:33464,varname:node_3878,prsc:2,v1:0,v2:0,v3:0;n:type:ShaderForge.SFN_Add,id:7324,x:28764,y:33507,varname:node_7324,prsc:2|A-5500-OUT,B-5973-OUT;n:type:ShaderForge.SFN_Vector1,id:4692,x:28764,y:33637,varname:node_4692,prsc:2,v1:10;n:type:ShaderForge.SFN_Panner,id:5633,x:29701,y:32512,varname:node_5633,prsc:2,spu:-0.16,spv:-0.48|UVIN-8843-OUT;n:type:ShaderForge.SFN_Clamp01,id:4381,x:29186,y:33563,varname:node_4381,prsc:2|IN-3040-OUT;n:type:ShaderForge.SFN_Clamp01,id:2581,x:30945,y:32324,varname:node_2581,prsc:2|IN-1302-OUT;n:type:ShaderForge.SFN_Multiply,id:1302,x:30785,y:32324,varname:node_1302,prsc:2|A-7369-OUT,B-2621-OUT;n:type:ShaderForge.SFN_Subtract,id:7369,x:30594,y:32324,varname:node_7369,prsc:2|A-3277-OUT,B-2621-OUT;n:type:ShaderForge.SFN_Vector1,id:2621,x:30594,y:32448,varname:node_2621,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Vector1,id:3859,x:28764,y:33831,varname:node_3859,prsc:2,v1:2;n:type:ShaderForge.SFN_Add,id:6034,x:31854,y:32357,varname:node_6034,prsc:2|A-3448-OUT,B-6612-OUT;n:type:ShaderForge.SFN_Tex2d,id:1335,x:30071,y:32554,varname:node_1335,prsc:2,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False|UVIN-5633-UVOUT,TEX-8163-TEX;n:type:ShaderForge.SFN_Tex2dAsset,id:8163,x:29876,y:32512,ptovrint:False,ptlb:noise,ptin:_noise,varname:node_8163,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:28c7aad1372ff114b90d330f8a2dd938,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Add,id:4189,x:28764,y:33702,varname:node_4189,prsc:2|A-5500-OUT,B-8381-OUT;n:type:ShaderForge.SFN_Time,id:4673,x:27162,y:33145,varname:node_4673,prsc:2;n:type:ShaderForge.SFN_Multiply,id:2368,x:29701,y:32387,varname:node_2368,prsc:2|A-6670-UVOUT,B-5789-OUT;n:type:ShaderForge.SFN_Vector1,id:5825,x:29516,y:32443,varname:node_5825,prsc:2,v1:1.5;n:type:ShaderForge.SFN_Multiply,id:2035,x:28971,y:33702,varname:node_2035,prsc:2|A-4189-OUT,B-8145-OUT;n:type:ShaderForge.SFN_Vector1,id:8145,x:28971,y:33831,varname:node_8145,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Clamp01,id:8222,x:29186,y:33686,varname:node_8222,prsc:2|IN-2035-OUT;n:type:ShaderForge.SFN_Multiply,id:2358,x:28495,y:32853,varname:node_2358,prsc:2|A-6670-U,B-6370-OUT;n:type:ShaderForge.SFN_OneMinus,id:844,x:28660,y:32854,varname:node_844,prsc:2|IN-2358-OUT;n:type:ShaderForge.SFN_OneMinus,id:395,x:28310,y:32606,varname:node_395,prsc:2|IN-6670-U;n:type:ShaderForge.SFN_Multiply,id:3470,x:28495,y:32606,varname:node_3470,prsc:2|A-395-OUT,B-6370-OUT;n:type:ShaderForge.SFN_OneMinus,id:5368,x:28660,y:32606,varname:node_5368,prsc:2|IN-3470-OUT;n:type:ShaderForge.SFN_Clamp01,id:332,x:28829,y:32606,varname:node_332,prsc:2|IN-5368-OUT;n:type:ShaderForge.SFN_Clamp01,id:3115,x:28829,y:32854,varname:node_3115,prsc:2|IN-844-OUT;n:type:ShaderForge.SFN_Add,id:3448,x:31648,y:32524,varname:node_3448,prsc:2|A-3170-OUT,B-8397-OUT;n:type:ShaderForge.SFN_OneMinus,id:5832,x:28310,y:32725,varname:node_5832,prsc:2|IN-6670-V;n:type:ShaderForge.SFN_Multiply,id:4859,x:28495,y:32725,varname:node_4859,prsc:2|A-5832-OUT,B-3708-OUT;n:type:ShaderForge.SFN_Multiply,id:8479,x:28495,y:32979,varname:node_8479,prsc:2|A-6670-V,B-3708-OUT;n:type:ShaderForge.SFN_Clamp01,id:4299,x:28829,y:32725,varname:node_4299,prsc:2|IN-2901-OUT;n:type:ShaderForge.SFN_Clamp01,id:1736,x:28829,y:32979,varname:node_1736,prsc:2|IN-9437-OUT;n:type:ShaderForge.SFN_Add,id:5864,x:29077,y:32775,varname:node_5864,prsc:2|A-332-OUT,B-3115-OUT,C-1736-OUT;n:type:ShaderForge.SFN_OneMinus,id:2901,x:28660,y:32725,varname:node_2901,prsc:2|IN-4859-OUT;n:type:ShaderForge.SFN_OneMinus,id:9437,x:28660,y:32979,varname:node_9437,prsc:2|IN-8479-OUT;n:type:ShaderForge.SFN_Clamp01,id:8397,x:29243,y:32775,varname:node_8397,prsc:2|IN-5864-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:3708,x:28042,y:32956,varname:node_3708,prsc:2,a:48,b:36|IN-444-OUT;n:type:ShaderForge.SFN_Sin,id:6116,x:27501,y:33145,varname:node_6116,prsc:2|IN-5775-OUT;n:type:ShaderForge.SFN_Multiply,id:4860,x:27671,y:33145,varname:node_4860,prsc:2|A-6116-OUT,B-5053-OUT;n:type:ShaderForge.SFN_Add,id:444,x:27842,y:33145,varname:node_444,prsc:2|A-4860-OUT,B-5053-OUT;n:type:ShaderForge.SFN_Vector1,id:5053,x:27501,y:33278,varname:node_5053,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:5775,x:27332,y:33145,varname:node_5775,prsc:2|A-4673-T,B-6417-OUT;n:type:ShaderForge.SFN_Vector1,id:6417,x:27162,y:33273,varname:node_6417,prsc:2,v1:10;n:type:ShaderForge.SFN_Multiply,id:6370,x:28042,y:33104,varname:node_6370,prsc:2|A-3708-OUT,B-4124-OUT;n:type:ShaderForge.SFN_Vector1,id:4124,x:28042,y:33234,varname:node_4124,prsc:2,v1:2;n:type:ShaderForge.SFN_Lerp,id:9543,x:30967,y:32100,varname:node_9543,prsc:2|A-899-OUT,B-7241-RGB,T-4464-OUT;n:type:ShaderForge.SFN_Clamp01,id:3170,x:31295,y:32400,varname:node_3170,prsc:2|IN-84-OUT;n:type:ShaderForge.SFN_Vector1,id:1531,x:30375,y:32047,varname:node_1531,prsc:2,v1:1;n:type:ShaderForge.SFN_Clamp01,id:9865,x:30811,y:32151,varname:node_9865,prsc:2|IN-3277-OUT;n:type:ShaderForge.SFN_Add,id:4690,x:30256,y:32304,varname:node_4690,prsc:2|A-1335-RGB,B-8222-OUT;n:type:ShaderForge.SFN_Noise,id:8564,x:28910,y:32105,varname:node_8564,prsc:2|XY-6670-UVOUT;n:type:ShaderForge.SFN_Vector1,id:5244,x:28910,y:32238,varname:node_5244,prsc:2,v1:0.99;n:type:ShaderForge.SFN_Subtract,id:3649,x:29089,y:32105,varname:node_3649,prsc:2|A-8564-OUT,B-5244-OUT;n:type:ShaderForge.SFN_Clamp01,id:4822,x:29259,y:32105,varname:node_4822,prsc:2|IN-3649-OUT;n:type:ShaderForge.SFN_Multiply,id:3740,x:29433,y:32105,varname:node_3740,prsc:2|A-4822-OUT,B-6546-OUT;n:type:ShaderForge.SFN_Vector1,id:6546,x:29259,y:32236,varname:node_6546,prsc:2,v1:100;n:type:ShaderForge.SFN_Clamp01,id:9170,x:29595,y:32105,varname:node_9170,prsc:2|IN-3740-OUT;n:type:ShaderForge.SFN_Multiply,id:8843,x:29504,y:32512,varname:node_8843,prsc:2|A-6670-UVOUT,B-6204-OUT;n:type:ShaderForge.SFN_Vector2,id:6204,x:29317,y:32564,varname:node_6204,prsc:2,v1:2,v2:1;n:type:ShaderForge.SFN_Tex2d,id:3414,x:29487,y:31469,varname:node_3414,prsc:2,tex:0bba5d73cfe1eaf4a8a820462b7da2af,ntxv:0,isnm:False|UVIN-539-UVOUT,TEX-6869-TEX;n:type:ShaderForge.SFN_Panner,id:539,x:29244,y:31438,varname:node_539,prsc:2,spu:0.4,spv:0|UVIN-7521-OUT;n:type:ShaderForge.SFN_Slider,id:170,x:32017,y:32960,ptovrint:False,ptlb:opacity,ptin:_opacity,varname:node_170,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:0.5,max:1;n:type:ShaderForge.SFN_Add,id:5023,x:30199,y:31138,varname:node_5023,prsc:2|A-9662-OUT,B-5382-OUT;n:type:ShaderForge.SFN_Tex2dAsset,id:6869,x:29244,y:31604,ptovrint:False,ptlb:stripes,ptin:_stripes,varname:node_6869,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,tex:0bba5d73cfe1eaf4a8a820462b7da2af,ntxv:0,isnm:False;n:type:ShaderForge.SFN_Tex2d,id:7991,x:29487,y:31294,varname:node_7991,prsc:2,tex:0bba5d73cfe1eaf4a8a820462b7da2af,ntxv:0,isnm:False|UVIN-7171-UVOUT,TEX-6869-TEX;n:type:ShaderForge.SFN_Multiply,id:7785,x:29054,y:31179,varname:node_7785,prsc:2|A-2285-OUT,B-4003-OUT;n:type:ShaderForge.SFN_Vector2,id:4003,x:29054,y:31306,varname:node_4003,prsc:2,v1:1,v2:0.5;n:type:ShaderForge.SFN_Multiply,id:5382,x:29789,y:31270,varname:node_5382,prsc:2|A-7991-R,B-4642-OUT;n:type:ShaderForge.SFN_Vector1,id:4642,x:29789,y:31397,varname:node_4642,prsc:2,v1:0.66;n:type:ShaderForge.SFN_Panner,id:7171,x:29244,y:31226,varname:node_7171,prsc:2,spu:0.1,spv:0|UVIN-7785-OUT;n:type:ShaderForge.SFN_Clamp01,id:4464,x:32553,y:32971,varname:node_4464,prsc:2|IN-2898-OUT;n:type:ShaderForge.SFN_Add,id:5509,x:31460,y:33142,varname:node_5509,prsc:2|A-3414-R,B-4929-OUT;n:type:ShaderForge.SFN_Fresnel,id:4929,x:31267,y:33180,varname:node_4929,prsc:2|EXP-7565-OUT;n:type:ShaderForge.SFN_Vector1,id:7565,x:31086,y:33243,varname:node_7565,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Add,id:4024,x:32016,y:32605,varname:node_4024,prsc:2|A-3448-OUT,B-5023-OUT;n:type:ShaderForge.SFN_Multiply,id:7521,x:29054,y:31438,varname:node_7521,prsc:2|A-9659-OUT,B-3927-OUT;n:type:ShaderForge.SFN_Vector2,id:3927,x:29054,y:31574,varname:node_3927,prsc:2,v1:0.12,v2:60;n:type:ShaderForge.SFN_Add,id:9659,x:28856,y:31438,varname:node_9659,prsc:2|A-6670-UVOUT,B-1151-OUT;n:type:ShaderForge.SFN_Vector2,id:1151,x:28856,y:31574,varname:node_1151,prsc:2,v1:0,v2:0.25;n:type:ShaderForge.SFN_Add,id:2285,x:28851,y:31179,varname:node_2285,prsc:2|A-6670-UVOUT,B-1772-OUT;n:type:ShaderForge.SFN_Vector2,id:1772,x:28851,y:31306,varname:node_1772,prsc:2,v1:0,v2:0.15;n:type:ShaderForge.SFN_Multiply,id:2898,x:32368,y:32971,varname:node_2898,prsc:2|A-170-OUT,B-5192-OUT;n:type:ShaderForge.SFN_Clamp01,id:6612,x:29925,y:32105,varname:node_6612,prsc:2|IN-3279-OUT;n:type:ShaderForge.SFN_Multiply,id:3279,x:29768,y:32105,varname:node_3279,prsc:2|A-9170-OUT,B-4014-OUT;n:type:ShaderForge.SFN_Vector1,id:4014,x:29768,y:32226,varname:node_4014,prsc:2,v1:0.2;n:type:ShaderForge.SFN_Tex2d,id:1546,x:29472,y:31082,varname:node_1546,prsc:2,tex:0bba5d73cfe1eaf4a8a820462b7da2af,ntxv:0,isnm:False|UVIN-2743-UVOUT,TEX-6869-TEX;n:type:ShaderForge.SFN_Multiply,id:6057,x:29060,y:31773,varname:node_6057,prsc:2;n:type:ShaderForge.SFN_Multiply,id:959,x:31662,y:33095,varname:node_959,prsc:2|A-7019-OUT,B-4929-OUT;n:type:ShaderForge.SFN_Add,id:1862,x:28757,y:33309,varname:node_1862,prsc:2|A-5500-OUT,B-3734-OUT;n:type:ShaderForge.SFN_Vector1,id:1590,x:28757,y:33438,varname:node_1590,prsc:2,v1:30;n:type:ShaderForge.SFN_Clamp01,id:7019,x:29186,y:33309,varname:node_7019,prsc:2|IN-7095-OUT;n:type:ShaderForge.SFN_Multiply,id:7095,x:28971,y:33309,varname:node_7095,prsc:2|A-1862-OUT,B-6755-OUT;n:type:ShaderForge.SFN_Vector1,id:6755,x:28971,y:33438,varname:node_6755,prsc:2,v1:0.05;n:type:ShaderForge.SFN_Add,id:5192,x:31843,y:33063,varname:node_5192,prsc:2|A-5382-OUT,B-959-OUT;n:type:ShaderForge.SFN_Multiply,id:3810,x:32323,y:32725,varname:node_3810,prsc:2|A-6530-OUT,B-9543-OUT;n:type:ShaderForge.SFN_Multiply,id:5504,x:29074,y:30938,varname:node_5504,prsc:2|A-4990-OUT,B-2411-OUT;n:type:ShaderForge.SFN_Vector2,id:2411,x:29074,y:31065,varname:node_2411,prsc:2,v1:1,v2:0.5;n:type:ShaderForge.SFN_Panner,id:2743,x:29264,y:30985,varname:node_2743,prsc:2,spu:-0.1,spv:0|UVIN-5504-OUT;n:type:ShaderForge.SFN_Add,id:4990,x:28871,y:30938,varname:node_4990,prsc:2|A-6670-UVOUT,B-1135-OUT;n:type:ShaderForge.SFN_Vector2,id:1135,x:28871,y:31065,varname:node_1135,prsc:2,v1:0,v2:0.43;n:type:ShaderForge.SFN_Multiply,id:9662,x:29789,y:31082,varname:node_9662,prsc:2|A-1546-R,B-7722-OUT;n:type:ShaderForge.SFN_Vector1,id:7722,x:29789,y:31209,varname:node_7722,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Multiply,id:8120,x:30542,y:32657,varname:node_8120,prsc:2|A-1208-OUT,B-8335-OUT;n:type:ShaderForge.SFN_Vector1,id:8335,x:30542,y:32790,varname:node_8335,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Add,id:6530,x:32283,y:32436,varname:node_6530,prsc:2|A-2041-OUT,B-4024-OUT;n:type:ShaderForge.SFN_Fresnel,id:8289,x:31942,y:33732,varname:node_8289,prsc:2|EXP-9575-OUT;n:type:ShaderForge.SFN_Vector1,id:9575,x:31750,y:33766,varname:node_9575,prsc:2,v1:4;n:type:ShaderForge.SFN_Lerp,id:6043,x:32301,y:33339,varname:node_6043,prsc:2|A-5128-OUT,B-3180-OUT,T-1460-OUT;n:type:ShaderForge.SFN_Vector2,id:5128,x:32111,y:33339,varname:node_5128,prsc:2,v1:0,v2:0;n:type:ShaderForge.SFN_Multiply,id:3180,x:31942,y:33494,varname:node_3180,prsc:2|A-2134-OUT,B-6632-OUT;n:type:ShaderForge.SFN_ComponentMask,id:6632,x:31750,y:33583,varname:node_6632,prsc:2,cc1:0,cc2:1,cc3:-1,cc4:-1|IN-851-OUT;n:type:ShaderForge.SFN_Vector1,id:2134,x:31698,y:33442,varname:node_2134,prsc:2,v1:0.33;n:type:ShaderForge.SFN_Multiply,id:851,x:31563,y:33583,varname:node_851,prsc:2|A-1335-RGB,B-7019-OUT;n:type:ShaderForge.SFN_Multiply,id:4165,x:32497,y:33230,varname:node_4165,prsc:2|A-170-OUT,B-6043-OUT;n:type:ShaderForge.SFN_Subtract,id:1208,x:30343,y:32657,varname:node_1208,prsc:2|A-1790-R,B-2621-OUT;n:type:ShaderForge.SFN_Clamp01,id:7100,x:31118,y:32657,varname:node_7100,prsc:2|IN-5536-OUT;n:type:ShaderForge.SFN_Clamp01,id:8704,x:30727,y:32657,varname:node_8704,prsc:2|IN-8120-OUT;n:type:ShaderForge.SFN_Multiply,id:5536,x:30928,y:32657,varname:node_5536,prsc:2|A-8704-OUT,B-7019-OUT;n:type:ShaderForge.SFN_RgbToHsv,id:5160,x:30361,y:31753,varname:node_5160,prsc:2|IN-7241-RGB;n:type:ShaderForge.SFN_HsvToRgb,id:899,x:30776,y:31825,varname:node_899,prsc:2|H-6856-OUT,S-7502-OUT,V-1531-OUT;n:type:ShaderForge.SFN_Subtract,id:6856,x:30582,y:31800,varname:node_6856,prsc:2|A-5160-HOUT,B-8699-OUT;n:type:ShaderForge.SFN_Vector1,id:8699,x:30375,y:31890,varname:node_8699,prsc:2,v1:-0.1;n:type:ShaderForge.SFN_Vector1,id:7502,x:30375,y:31978,varname:node_7502,prsc:2,v1:0.5;n:type:ShaderForge.SFN_Lerp,id:2041,x:32165,y:32131,varname:node_2041,prsc:2|A-5177-OUT,B-7283-OUT,T-7100-OUT;n:type:ShaderForge.SFN_Vector1,id:432,x:31731,y:32170,varname:node_432,prsc:2,v1:0.1;n:type:ShaderForge.SFN_Multiply,id:5177,x:31731,y:32016,varname:node_5177,prsc:2|A-7241-RGB,B-432-OUT;n:type:ShaderForge.SFN_Vector1,id:7283,x:31731,y:32232,varname:node_7283,prsc:2,v1:1;n:type:ShaderForge.SFN_Multiply,id:1460,x:31929,y:33307,varname:node_1460,prsc:2|A-8289-OUT,B-9508-OUT;n:type:ShaderForge.SFN_Vector1,id:9508,x:31735,y:33360,varname:node_9508,prsc:2,v1:100;n:type:ShaderForge.SFN_HsvToRgb,id:9522,x:31689,y:31872,varname:node_9522,prsc:2|H-5699-OUT,S-1531-OUT,V-1531-OUT;n:type:ShaderForge.SFN_Subtract,id:5699,x:31472,y:31900,varname:node_5699,prsc:2|A-5160-HOUT,B-5694-OUT;n:type:ShaderForge.SFN_Vector1,id:5694,x:31294,y:31959,varname:node_5694,prsc:2,v1:0.6;n:type:ShaderForge.SFN_Vector2,id:5789,x:29373,y:32357,varname:node_5789,prsc:2,v1:1.5,v2:0.75;n:type:ShaderForge.SFN_Slider,id:8538,x:27700,y:33348,ptovrint:False,ptlb:node_8538,ptin:_node_8538,varname:node_8538,prsc:2,glob:False,taghide:False,taghdr:False,tagprd:False,tagnsco:False,tagnrm:False,min:0,cur:1,max:10;n:type:ShaderForge.SFN_Multiply,id:9780,x:28042,y:33310,varname:node_9780,prsc:2|A-8538-OUT,B-5241-OUT;n:type:ShaderForge.SFN_Vector1,id:5241,x:27857,y:33427,varname:node_5241,prsc:2,v1:0.1;n:type:ShaderForge.SFN_Clamp01,id:7449,x:28219,y:33310,varname:node_7449,prsc:2|IN-9780-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:3734,x:28398,y:33153,varname:node_3734,prsc:2,a:0,b:30|IN-7449-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:5973,x:28398,y:33291,varname:node_5973,prsc:2,a:0,b:10|IN-7449-OUT;n:type:ShaderForge.SFN_ConstantLerp,id:8381,x:28434,y:33664,varname:node_8381,prsc:2,a:0,b:2|IN-7449-OUT;proporder:7241-8163-170-6869-8538;pass:END;sub:END;*/

Shader "Shader Forge/BRB-RyansARWalls" {
    Properties {
        _Color ("Color", Color) = (0.8,0.8,0.8,1)
        _noise ("noise", 2D) = "white" {}
        _opacity ("opacity", Range(0, 1)) = 0.5
        _stripes ("stripes", 2D) = "white" {}
        _node_8538 ("node_8538", Range(0, 10)) = 1
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
            uniform sampler2D _GrabTexture;
            uniform float4 _Color;
            uniform sampler2D _noise; uniform float4 _noise_ST;
            uniform float _opacity;
            uniform sampler2D _stripes; uniform float4 _stripes_ST;
            uniform float _node_8538;
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
                float4 node_6418 = _Time;
                float2 node_5633 = ((i.uv0*float2(2,1))+node_6418.g*float2(-0.16,-0.48));
                float4 node_1335 = tex2D(_noise,TRANSFORM_TEX(node_5633, _noise));
                float node_5500 = (1.0 - distance(float3(0,0,0),i.posWorld.g));
                float node_7449 = saturate((_node_8538*0.1));
                float node_7019 = saturate(((node_5500+lerp(0,30,node_7449))*0.05));
                float2 sceneUVs = (i.projPos.xy / i.projPos.w) + (_opacity*lerp(float2(0,0),(0.33*(node_1335.rgb*node_7019).rg),(pow(1.0-max(0,dot(normalDirection, viewDirection)),4.0)*100.0)));
                float4 sceneColor = tex2D(_GrabTexture, sceneUVs);
////// Lighting:
////// Emissive:
                float node_7283 = 1.0;
                float2 node_2368 = (i.uv0*float2(1.5,0.75));
                float4 node_1790 = tex2D(_noise,TRANSFORM_TEX(node_2368, _noise));
                float node_2621 = 0.5;
                float node_4381 = saturate(((node_5500+lerp(0,10,node_7449))*0.1));
                float3 node_3277 = ((node_1335.rgb+saturate(((node_5500+lerp(0,2,node_7449))*0.5)))*node_4381);
                float4 node_4673 = _Time;
                float node_5053 = 0.5;
                float node_3708 = lerp(48,36,((sin((node_4673.g*10.0))*node_5053)+node_5053));
                float node_6370 = (node_3708*2.0);
                float3 node_3448 = (saturate((saturate(((node_3277-node_2621)*node_2621))*node_4381))+saturate((saturate((1.0 - ((1.0 - i.uv0.r)*node_6370)))+saturate((1.0 - (i.uv0.r*node_6370)))+saturate((1.0 - (i.uv0.g*node_3708))))));
                float2 node_2743 = (((i.uv0+float2(0,0.43))*float2(1,0.5))+node_6418.g*float2(-0.1,0));
                float4 node_1546 = tex2D(_stripes,TRANSFORM_TEX(node_2743, _stripes));
                float2 node_7171 = (((i.uv0+float2(0,0.15))*float2(1,0.5))+node_6418.g*float2(0.1,0));
                float4 node_7991 = tex2D(_stripes,TRANSFORM_TEX(node_7171, _stripes));
                float node_5382 = (node_7991.r*0.66);
                float4 node_5160_k = float4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
                float4 node_5160_p = lerp(float4(float4(_Color.rgb,0.0).zy, node_5160_k.wz), float4(float4(_Color.rgb,0.0).yz, node_5160_k.xy), step(float4(_Color.rgb,0.0).z, float4(_Color.rgb,0.0).y));
                float4 node_5160_q = lerp(float4(node_5160_p.xyw, float4(_Color.rgb,0.0).x), float4(float4(_Color.rgb,0.0).x, node_5160_p.yzx), step(node_5160_p.x, float4(_Color.rgb,0.0).x));
                float node_5160_d = node_5160_q.x - min(node_5160_q.w, node_5160_q.y);
                float node_5160_e = 1.0e-10;
                float3 node_5160 = float3(abs(node_5160_q.z + (node_5160_q.w - node_5160_q.y) / (6.0 * node_5160_d + node_5160_e)), node_5160_d / (node_5160_q.x + node_5160_e), node_5160_q.x);;
                float node_1531 = 1.0;
                float node_4929 = pow(1.0-max(0,dot(normalDirection, viewDirection)),0.5);
                float node_4464 = saturate((_opacity*(node_5382+(node_7019*node_4929))));
                float3 emissive = saturate(((lerp((_Color.rgb*0.1),float3(node_7283,node_7283,node_7283),saturate((saturate(((node_1790.r-node_2621)*0.5))*node_7019)))+(node_3448+((node_1546.r*0.5)+node_5382)))*lerp((lerp(float3(1,1,1),saturate(3.0*abs(1.0-2.0*frac((node_5160.r-(-0.1))+float3(0.0,-1.0/3.0,1.0/3.0)))-1),0.5)*node_1531),_Color.rgb,node_4464)));
                float3 finalColor = emissive;
                return fixed4(lerp(sceneColor.rgb, finalColor,node_4464),1);
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
