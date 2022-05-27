#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`2<System.UInt32,System.Boolean>
struct Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C;
// System.Func`2<System.Object,System.Single>
struct Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1;
// System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>
struct Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Mapbox.Examples.Voxels.VoxelData>
struct IEnumerable_1_tEE41F559C008A2DEFBB79D81D7F1478843F0EC0E;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Linq.IOrderedEnumerable`1<Mapbox.Examples.Voxels.VoxelData>
struct IOrderedEnumerable_1_t4709C10805BB8953A3F411DF075499511009AE0C;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1;
// Mapbox.Map.Map`1<Mapbox.Map.RasterTile>
struct Map_1_tC48A961A1B61785722D5907072B2D13475A89832;
// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile>
struct Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067;
// Tapestry.TapestryEvent`1<Tapestry.MapObject[]>
struct TapestryEvent_1_t4D22E2A25BFA349AA82448EAA1E6ED1F0F0EA79E;
// Tapestry.TapestryEvent`1<AvatarParameters>
struct TapestryEvent_1_t3F22C9100BCD4E38F8501C9080B3BAB2DB948300;
// Tapestry.TapestryEvent`1<System.Boolean>
struct TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850;
// Tapestry.TapestryEvent`1<UnityEngine.Camera>
struct TapestryEvent_1_tBD058C5E46788F6B736A1EF348487E1E1DDD9219;
// Tapestry.TapestryEvent`1<Tapestry.MapObject>
struct TapestryEvent_1_tA39DA7AE74A6472EDDF5E1FC65B7CFED561B29F0;
// Tapestry.TapestryEvent`1<Tapestry.MapObjectDataEntry>
struct TapestryEvent_1_tBADEE0DF5AC6BADCF0739E279E3B8BDF074A2C8F;
// Tapestry.TapestryEvent`1<PartnerLocationInfo>
struct TapestryEvent_1_tADB9EBCEBD31722AB455881FFD340D4C2C879407;
// Tapestry.TapestryEvent`1<System.String>
struct TapestryEvent_1_tF402F373318EDA852C20CC5745B08E543816A311;
// Tapestry.TapestryEvent`1<System.UInt32>
struct TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13;
// Tapestry.TapestryEvent`1<Mapbox.Utils.Vector2d>
struct TapestryEvent_1_t8973EDA9C5FABC4848D1E487A1CCD965B6940BB9;
// Tapestry.TapestryEvent`2<System.UInt32,System.Boolean>
struct TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8;
// Tapestry.TapestryEvent`2<System.UInt32,System.Int32>
struct TapestryEvent_2_t155ABE21D1C6C71CC53A970F58F83136B236CE8E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Mapbox.Examples.Voxels.VoxelData[]
struct VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Mapbox.Examples.ForwardGeocodeUserInput
struct ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Mapbox.Platform.IFileSource
struct IFileSource_t2DDCC31C6A4E31824E3A92156372D1AAF8ECA872;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// agora_gaming_rtc.OnAudioRouteChangedHandler
struct OnAudioRouteChangedHandler_t4BD60DBDBB6F662EC1DF18D4F3133732E357F381;
// agora_gaming_rtc.OnConnectionInterruptedHandler
struct OnConnectionInterruptedHandler_t549C857CC60BFA1136160E142CF47F92BED7162F;
// agora_gaming_rtc.OnConnectionLostHandler
struct OnConnectionLostHandler_t92CEE4F028F640789BC72CB323423950F0BB15C3;
// agora_gaming_rtc.OnRemoteAudioStateChangedHandler
struct OnRemoteAudioStateChangedHandler_tA45A3A5F380825BD753980209E082855D69ACB16;
// agora_gaming_rtc.OnRequestTokenHandler
struct OnRequestTokenHandler_tC6D98F8EC0ED51FFAB22D7FD7BC21E61586146A1;
// agora_gaming_rtc.OnSDKErrorHandler
struct OnSDKErrorHandler_t77B1F02A4EFD0FBE0AE9FF6A40867A8BE86235B1;
// agora_gaming_rtc.OnSDKWarningHandler
struct OnSDKWarningHandler_tCF7C48612B64A29E23CA1F06356205D8E9C17980;
// agora_gaming_rtc.OnUserMutedAudioHandler
struct OnUserMutedAudioHandler_t9C0595BC073C92A0CD8B501668542F80BD99784A;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// Tapestry.TapestryEvent
struct TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// agora_gaming_rtc.VideoFrame
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E;
// VoiceChatUser
struct VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mapbox.Examples.Voxels.VoxelData
struct VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310;
// Mapbox.Examples.Voxels.VoxelFetcher
struct VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D;
// Mapbox.Examples.Voxels.VoxelTile
struct VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD;
// agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler
struct OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7;
// VoiceChatManager/<>c
struct U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5;
// VoiceChatOptionsController/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t8E2D61C15337C14D74F98F598E87D0DC203E1B30;
// VoiceChatOptionsController/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7573B3D12503A5B7A089D6CE06939BFF0C6E3EAF;
// VoiceChatOptionsController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tA4995D21664650E5D59AAEEF578B385508B581BE;
// Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27
struct U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4;
// Doozy.Engine.Utils.ColorModels.XYZ/X
struct X_t00EF64F2DAB6A21298F848A1A19AC8728E014570;
// Doozy.Engine.Utils.ColorModels.XYZ/Y
struct Y_t3243C8209D852DBB7D65E68F6917291B25FB1AD8;
// Doozy.Engine.Utils.ColorModels.XYZ/Z
struct Z_tBE07B95DFAA0683CFBDA7BBAB3770248A3A6674F;

IL2CPP_EXTERN_C RuntimeClass* AUDIO_ROUTE_t0239A2602B73D783A33061F287BEE44C87D60341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRtcEngine_tAAB918008B7BD39030805371269AB0D499C5F647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9929123028EE1BE5AAB9742E2FD02D235596E9;
IL2CPP_EXTERN_C String_t* _stringLiteral4215C3BA68C613F4BA685E6BEF1496BCA58A7E39;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFBFF9B78C6C48A52D9BFE200566BFFD2B930E4;
IL2CPP_EXTERN_C String_t* _stringLiteral97C51E2571720201866BE83DD3F270A011C311F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB1F0D1CB130F96462F19A20945B2AB90A207E5A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD09B69CD9E43A876D0DAAAF0E97FF8E99EFAE0CC;
IL2CPP_EXTERN_C String_t* _stringLiteralD23D1718E834A1488FC3DC4BFF14FF9787B63840;
IL2CPP_EXTERN_C String_t* _stringLiteralFC45568541E45DF3E71B35A13A41D958D1020A95;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E;;
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke;
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>
struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____items_1)); }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* get__items_1() const { return ____items_1; }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1_StaticFields, ____emptyArray_5)); }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VoxelDataU5BU5D_t92BF9322DEB7CA697064E2FA69E4F599941CDBA1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Tapestry.TapestryEvent`2<System.UInt32,System.Boolean>
struct TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8  : public RuntimeObject
{
public:
	// System.Action`2<T1,T2> Tapestry.TapestryEvent`2::repeatUseDelagate
	Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C * ___repeatUseDelagate_0;
	// System.Action`2<T1,T2> Tapestry.TapestryEvent`2::singleUseDelagate
	Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C * ___singleUseDelagate_1;

public:
	inline static int32_t get_offset_of_repeatUseDelagate_0() { return static_cast<int32_t>(offsetof(TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8, ___repeatUseDelagate_0)); }
	inline Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C * get_repeatUseDelagate_0() const { return ___repeatUseDelagate_0; }
	inline Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C ** get_address_of_repeatUseDelagate_0() { return &___repeatUseDelagate_0; }
	inline void set_repeatUseDelagate_0(Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C * value)
	{
		___repeatUseDelagate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___repeatUseDelagate_0), (void*)value);
	}

	inline static int32_t get_offset_of_singleUseDelagate_1() { return static_cast<int32_t>(offsetof(TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8, ___singleUseDelagate_1)); }
	inline Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C * get_singleUseDelagate_1() const { return ___singleUseDelagate_1; }
	inline Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C ** get_address_of_singleUseDelagate_1() { return &___singleUseDelagate_1; }
	inline void set_singleUseDelagate_1(Action_2_tAEFAB2FA052AC1AB897D00FAFFBD1263E202623C * value)
	{
		___singleUseDelagate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleUseDelagate_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Tapestry.TapestryEventRegistry
struct TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A  : public RuntimeObject
{
public:

public:
};

struct TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields
{
public:
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnDataManagerLoaded
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnDataManagerLoaded_0;
	// Tapestry.TapestryEvent`1<Tapestry.MapObject> Tapestry.TapestryEventRegistry::OnMapObjectSpawned
	TapestryEvent_1_tA39DA7AE74A6472EDDF5E1FC65B7CFED561B29F0 * ___OnMapObjectSpawned_1;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnEnterAR
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnEnterAR_2;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnLeaveAR
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnLeaveAR_3;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnCenterPlayer
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnCenterPlayer_4;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnToggleMapMode
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnToggleMapMode_5;
	// Tapestry.TapestryEvent`1<UnityEngine.Camera> Tapestry.TapestryEventRegistry::OnTrackIn
	TapestryEvent_1_tBD058C5E46788F6B736A1EF348487E1E1DDD9219 * ___OnTrackIn_6;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnTrackOut
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnTrackOut_7;
	// Tapestry.TapestryEvent`1<System.Boolean> Tapestry.TapestryEventRegistry::OnCoinClicked
	TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * ___OnCoinClicked_8;
	// Tapestry.TapestryEvent`1<PartnerLocationInfo> Tapestry.TapestryEventRegistry::OnShowPartnerLocationInfo
	TapestryEvent_1_tADB9EBCEBD31722AB455881FFD340D4C2C879407 * ___OnShowPartnerLocationInfo_9;
	// Tapestry.TapestryEvent`1<AvatarParameters> Tapestry.TapestryEventRegistry::OnAvatarSelected
	TapestryEvent_1_t3F22C9100BCD4E38F8501C9080B3BAB2DB948300 * ___OnAvatarSelected_10;
	// Tapestry.TapestryEvent`1<System.Boolean> Tapestry.TapestryEventRegistry::OnSetAvatarState
	TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * ___OnSetAvatarState_11;
	// Tapestry.TapestryEvent`1<Mapbox.Utils.Vector2d> Tapestry.TapestryEventRegistry::OnGoTo
	TapestryEvent_1_t8973EDA9C5FABC4848D1E487A1CCD965B6940BB9 * ___OnGoTo_12;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnIntroductionComplete
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnIntroductionComplete_13;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnTutorialStarted
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnTutorialStarted_14;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnVirtualCharacterEnter
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnVirtualCharacterEnter_15;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnVirtualCharacterExit
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnVirtualCharacterExit_16;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnMinigameComplete
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnMinigameComplete_17;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnPartnerLocationEnter
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnPartnerLocationEnter_18;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnPartnerLocationExit
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnPartnerLocationExit_19;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnAssetContainerEnter
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnAssetContainerEnter_20;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnAssetContainerExit
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnAssetContainerExit_21;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnTutorialEnded
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnTutorialEnded_22;
	// Tapestry.TapestryEvent`1<Tapestry.MapObject[]> Tapestry.TapestryEventRegistry::OnTutorialObjectSpawned
	TapestryEvent_1_t4D22E2A25BFA349AA82448EAA1E6ED1F0F0EA79E * ___OnTutorialObjectSpawned_23;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnJoinVoiceChat
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnJoinVoiceChat_24;
	// Tapestry.TapestryEvent Tapestry.TapestryEventRegistry::OnLeaveVoiceChat
	TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * ___OnLeaveVoiceChat_25;
	// Tapestry.TapestryEvent`1<System.UInt32> Tapestry.TapestryEventRegistry::OnUserJoinedChannel
	TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 * ___OnUserJoinedChannel_26;
	// Tapestry.TapestryEvent`1<System.UInt32> Tapestry.TapestryEventRegistry::OnUserLeavesChannel
	TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 * ___OnUserLeavesChannel_27;
	// Tapestry.TapestryEvent`2<System.UInt32,System.Boolean> Tapestry.TapestryEventRegistry::OnUserMuteVoiceChat
	TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * ___OnUserMuteVoiceChat_28;
	// Tapestry.TapestryEvent`1<System.Boolean> Tapestry.TapestryEventRegistry::OnMuteVoiceChat
	TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * ___OnMuteVoiceChat_29;
	// Tapestry.TapestryEvent`2<System.UInt32,System.Int32> Tapestry.TapestryEventRegistry::OnVolumeIndication
	TapestryEvent_2_t155ABE21D1C6C71CC53A970F58F83136B236CE8E * ___OnVolumeIndication_30;
	// Tapestry.TapestryEvent`1<Tapestry.MapObjectDataEntry> Tapestry.TapestryEventRegistry::OnAssetContainerInfo
	TapestryEvent_1_tBADEE0DF5AC6BADCF0739E279E3B8BDF074A2C8F * ___OnAssetContainerInfo_31;
	// Tapestry.TapestryEvent`1<System.String> Tapestry.TapestryEventRegistry::OnEasterEggEnter
	TapestryEvent_1_tF402F373318EDA852C20CC5745B08E543816A311 * ___OnEasterEggEnter_32;

public:
	inline static int32_t get_offset_of_OnDataManagerLoaded_0() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnDataManagerLoaded_0)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnDataManagerLoaded_0() const { return ___OnDataManagerLoaded_0; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnDataManagerLoaded_0() { return &___OnDataManagerLoaded_0; }
	inline void set_OnDataManagerLoaded_0(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnDataManagerLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataManagerLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnMapObjectSpawned_1() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnMapObjectSpawned_1)); }
	inline TapestryEvent_1_tA39DA7AE74A6472EDDF5E1FC65B7CFED561B29F0 * get_OnMapObjectSpawned_1() const { return ___OnMapObjectSpawned_1; }
	inline TapestryEvent_1_tA39DA7AE74A6472EDDF5E1FC65B7CFED561B29F0 ** get_address_of_OnMapObjectSpawned_1() { return &___OnMapObjectSpawned_1; }
	inline void set_OnMapObjectSpawned_1(TapestryEvent_1_tA39DA7AE74A6472EDDF5E1FC65B7CFED561B29F0 * value)
	{
		___OnMapObjectSpawned_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMapObjectSpawned_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnEnterAR_2() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnEnterAR_2)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnEnterAR_2() const { return ___OnEnterAR_2; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnEnterAR_2() { return &___OnEnterAR_2; }
	inline void set_OnEnterAR_2(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnEnterAR_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEnterAR_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnLeaveAR_3() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnLeaveAR_3)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnLeaveAR_3() const { return ___OnLeaveAR_3; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnLeaveAR_3() { return &___OnLeaveAR_3; }
	inline void set_OnLeaveAR_3(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnLeaveAR_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLeaveAR_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnCenterPlayer_4() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnCenterPlayer_4)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnCenterPlayer_4() const { return ___OnCenterPlayer_4; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnCenterPlayer_4() { return &___OnCenterPlayer_4; }
	inline void set_OnCenterPlayer_4(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnCenterPlayer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCenterPlayer_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnToggleMapMode_5() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnToggleMapMode_5)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnToggleMapMode_5() const { return ___OnToggleMapMode_5; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnToggleMapMode_5() { return &___OnToggleMapMode_5; }
	inline void set_OnToggleMapMode_5(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnToggleMapMode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnToggleMapMode_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackIn_6() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnTrackIn_6)); }
	inline TapestryEvent_1_tBD058C5E46788F6B736A1EF348487E1E1DDD9219 * get_OnTrackIn_6() const { return ___OnTrackIn_6; }
	inline TapestryEvent_1_tBD058C5E46788F6B736A1EF348487E1E1DDD9219 ** get_address_of_OnTrackIn_6() { return &___OnTrackIn_6; }
	inline void set_OnTrackIn_6(TapestryEvent_1_tBD058C5E46788F6B736A1EF348487E1E1DDD9219 * value)
	{
		___OnTrackIn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackIn_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackOut_7() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnTrackOut_7)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnTrackOut_7() const { return ___OnTrackOut_7; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnTrackOut_7() { return &___OnTrackOut_7; }
	inline void set_OnTrackOut_7(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnTrackOut_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackOut_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnCoinClicked_8() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnCoinClicked_8)); }
	inline TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * get_OnCoinClicked_8() const { return ___OnCoinClicked_8; }
	inline TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 ** get_address_of_OnCoinClicked_8() { return &___OnCoinClicked_8; }
	inline void set_OnCoinClicked_8(TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * value)
	{
		___OnCoinClicked_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCoinClicked_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnShowPartnerLocationInfo_9() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnShowPartnerLocationInfo_9)); }
	inline TapestryEvent_1_tADB9EBCEBD31722AB455881FFD340D4C2C879407 * get_OnShowPartnerLocationInfo_9() const { return ___OnShowPartnerLocationInfo_9; }
	inline TapestryEvent_1_tADB9EBCEBD31722AB455881FFD340D4C2C879407 ** get_address_of_OnShowPartnerLocationInfo_9() { return &___OnShowPartnerLocationInfo_9; }
	inline void set_OnShowPartnerLocationInfo_9(TapestryEvent_1_tADB9EBCEBD31722AB455881FFD340D4C2C879407 * value)
	{
		___OnShowPartnerLocationInfo_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnShowPartnerLocationInfo_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnAvatarSelected_10() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnAvatarSelected_10)); }
	inline TapestryEvent_1_t3F22C9100BCD4E38F8501C9080B3BAB2DB948300 * get_OnAvatarSelected_10() const { return ___OnAvatarSelected_10; }
	inline TapestryEvent_1_t3F22C9100BCD4E38F8501C9080B3BAB2DB948300 ** get_address_of_OnAvatarSelected_10() { return &___OnAvatarSelected_10; }
	inline void set_OnAvatarSelected_10(TapestryEvent_1_t3F22C9100BCD4E38F8501C9080B3BAB2DB948300 * value)
	{
		___OnAvatarSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAvatarSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnSetAvatarState_11() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnSetAvatarState_11)); }
	inline TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * get_OnSetAvatarState_11() const { return ___OnSetAvatarState_11; }
	inline TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 ** get_address_of_OnSetAvatarState_11() { return &___OnSetAvatarState_11; }
	inline void set_OnSetAvatarState_11(TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * value)
	{
		___OnSetAvatarState_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSetAvatarState_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnGoTo_12() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnGoTo_12)); }
	inline TapestryEvent_1_t8973EDA9C5FABC4848D1E487A1CCD965B6940BB9 * get_OnGoTo_12() const { return ___OnGoTo_12; }
	inline TapestryEvent_1_t8973EDA9C5FABC4848D1E487A1CCD965B6940BB9 ** get_address_of_OnGoTo_12() { return &___OnGoTo_12; }
	inline void set_OnGoTo_12(TapestryEvent_1_t8973EDA9C5FABC4848D1E487A1CCD965B6940BB9 * value)
	{
		___OnGoTo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGoTo_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnIntroductionComplete_13() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnIntroductionComplete_13)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnIntroductionComplete_13() const { return ___OnIntroductionComplete_13; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnIntroductionComplete_13() { return &___OnIntroductionComplete_13; }
	inline void set_OnIntroductionComplete_13(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnIntroductionComplete_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnIntroductionComplete_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnTutorialStarted_14() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnTutorialStarted_14)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnTutorialStarted_14() const { return ___OnTutorialStarted_14; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnTutorialStarted_14() { return &___OnTutorialStarted_14; }
	inline void set_OnTutorialStarted_14(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnTutorialStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTutorialStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnVirtualCharacterEnter_15() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnVirtualCharacterEnter_15)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnVirtualCharacterEnter_15() const { return ___OnVirtualCharacterEnter_15; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnVirtualCharacterEnter_15() { return &___OnVirtualCharacterEnter_15; }
	inline void set_OnVirtualCharacterEnter_15(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnVirtualCharacterEnter_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVirtualCharacterEnter_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnVirtualCharacterExit_16() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnVirtualCharacterExit_16)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnVirtualCharacterExit_16() const { return ___OnVirtualCharacterExit_16; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnVirtualCharacterExit_16() { return &___OnVirtualCharacterExit_16; }
	inline void set_OnVirtualCharacterExit_16(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnVirtualCharacterExit_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVirtualCharacterExit_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnMinigameComplete_17() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnMinigameComplete_17)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnMinigameComplete_17() const { return ___OnMinigameComplete_17; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnMinigameComplete_17() { return &___OnMinigameComplete_17; }
	inline void set_OnMinigameComplete_17(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnMinigameComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMinigameComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnPartnerLocationEnter_18() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnPartnerLocationEnter_18)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnPartnerLocationEnter_18() const { return ___OnPartnerLocationEnter_18; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnPartnerLocationEnter_18() { return &___OnPartnerLocationEnter_18; }
	inline void set_OnPartnerLocationEnter_18(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnPartnerLocationEnter_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPartnerLocationEnter_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnPartnerLocationExit_19() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnPartnerLocationExit_19)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnPartnerLocationExit_19() const { return ___OnPartnerLocationExit_19; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnPartnerLocationExit_19() { return &___OnPartnerLocationExit_19; }
	inline void set_OnPartnerLocationExit_19(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnPartnerLocationExit_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPartnerLocationExit_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnAssetContainerEnter_20() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnAssetContainerEnter_20)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnAssetContainerEnter_20() const { return ___OnAssetContainerEnter_20; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnAssetContainerEnter_20() { return &___OnAssetContainerEnter_20; }
	inline void set_OnAssetContainerEnter_20(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnAssetContainerEnter_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAssetContainerEnter_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnAssetContainerExit_21() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnAssetContainerExit_21)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnAssetContainerExit_21() const { return ___OnAssetContainerExit_21; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnAssetContainerExit_21() { return &___OnAssetContainerExit_21; }
	inline void set_OnAssetContainerExit_21(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnAssetContainerExit_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAssetContainerExit_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnTutorialEnded_22() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnTutorialEnded_22)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnTutorialEnded_22() const { return ___OnTutorialEnded_22; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnTutorialEnded_22() { return &___OnTutorialEnded_22; }
	inline void set_OnTutorialEnded_22(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnTutorialEnded_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTutorialEnded_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnTutorialObjectSpawned_23() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnTutorialObjectSpawned_23)); }
	inline TapestryEvent_1_t4D22E2A25BFA349AA82448EAA1E6ED1F0F0EA79E * get_OnTutorialObjectSpawned_23() const { return ___OnTutorialObjectSpawned_23; }
	inline TapestryEvent_1_t4D22E2A25BFA349AA82448EAA1E6ED1F0F0EA79E ** get_address_of_OnTutorialObjectSpawned_23() { return &___OnTutorialObjectSpawned_23; }
	inline void set_OnTutorialObjectSpawned_23(TapestryEvent_1_t4D22E2A25BFA349AA82448EAA1E6ED1F0F0EA79E * value)
	{
		___OnTutorialObjectSpawned_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTutorialObjectSpawned_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnJoinVoiceChat_24() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnJoinVoiceChat_24)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnJoinVoiceChat_24() const { return ___OnJoinVoiceChat_24; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnJoinVoiceChat_24() { return &___OnJoinVoiceChat_24; }
	inline void set_OnJoinVoiceChat_24(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnJoinVoiceChat_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnJoinVoiceChat_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnLeaveVoiceChat_25() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnLeaveVoiceChat_25)); }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * get_OnLeaveVoiceChat_25() const { return ___OnLeaveVoiceChat_25; }
	inline TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 ** get_address_of_OnLeaveVoiceChat_25() { return &___OnLeaveVoiceChat_25; }
	inline void set_OnLeaveVoiceChat_25(TapestryEvent_tE0C3CD4CC49D32B183A6FD6877C59EDC98AC4D67 * value)
	{
		___OnLeaveVoiceChat_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLeaveVoiceChat_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserJoinedChannel_26() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnUserJoinedChannel_26)); }
	inline TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 * get_OnUserJoinedChannel_26() const { return ___OnUserJoinedChannel_26; }
	inline TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 ** get_address_of_OnUserJoinedChannel_26() { return &___OnUserJoinedChannel_26; }
	inline void set_OnUserJoinedChannel_26(TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 * value)
	{
		___OnUserJoinedChannel_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserJoinedChannel_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserLeavesChannel_27() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnUserLeavesChannel_27)); }
	inline TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 * get_OnUserLeavesChannel_27() const { return ___OnUserLeavesChannel_27; }
	inline TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 ** get_address_of_OnUserLeavesChannel_27() { return &___OnUserLeavesChannel_27; }
	inline void set_OnUserLeavesChannel_27(TapestryEvent_1_t35AC5A6751E4BBBA37D52A62BB6FE6DE23495C13 * value)
	{
		___OnUserLeavesChannel_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserLeavesChannel_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserMuteVoiceChat_28() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnUserMuteVoiceChat_28)); }
	inline TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * get_OnUserMuteVoiceChat_28() const { return ___OnUserMuteVoiceChat_28; }
	inline TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 ** get_address_of_OnUserMuteVoiceChat_28() { return &___OnUserMuteVoiceChat_28; }
	inline void set_OnUserMuteVoiceChat_28(TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * value)
	{
		___OnUserMuteVoiceChat_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserMuteVoiceChat_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnMuteVoiceChat_29() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnMuteVoiceChat_29)); }
	inline TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * get_OnMuteVoiceChat_29() const { return ___OnMuteVoiceChat_29; }
	inline TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 ** get_address_of_OnMuteVoiceChat_29() { return &___OnMuteVoiceChat_29; }
	inline void set_OnMuteVoiceChat_29(TapestryEvent_1_tA97F62B29771ADDF65976F285B6DB3E967686850 * value)
	{
		___OnMuteVoiceChat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMuteVoiceChat_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnVolumeIndication_30() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnVolumeIndication_30)); }
	inline TapestryEvent_2_t155ABE21D1C6C71CC53A970F58F83136B236CE8E * get_OnVolumeIndication_30() const { return ___OnVolumeIndication_30; }
	inline TapestryEvent_2_t155ABE21D1C6C71CC53A970F58F83136B236CE8E ** get_address_of_OnVolumeIndication_30() { return &___OnVolumeIndication_30; }
	inline void set_OnVolumeIndication_30(TapestryEvent_2_t155ABE21D1C6C71CC53A970F58F83136B236CE8E * value)
	{
		___OnVolumeIndication_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVolumeIndication_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnAssetContainerInfo_31() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnAssetContainerInfo_31)); }
	inline TapestryEvent_1_tBADEE0DF5AC6BADCF0739E279E3B8BDF074A2C8F * get_OnAssetContainerInfo_31() const { return ___OnAssetContainerInfo_31; }
	inline TapestryEvent_1_tBADEE0DF5AC6BADCF0739E279E3B8BDF074A2C8F ** get_address_of_OnAssetContainerInfo_31() { return &___OnAssetContainerInfo_31; }
	inline void set_OnAssetContainerInfo_31(TapestryEvent_1_tBADEE0DF5AC6BADCF0739E279E3B8BDF074A2C8F * value)
	{
		___OnAssetContainerInfo_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAssetContainerInfo_31), (void*)value);
	}

	inline static int32_t get_offset_of_OnEasterEggEnter_32() { return static_cast<int32_t>(offsetof(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields, ___OnEasterEggEnter_32)); }
	inline TapestryEvent_1_tF402F373318EDA852C20CC5745B08E543816A311 * get_OnEasterEggEnter_32() const { return ___OnEasterEggEnter_32; }
	inline TapestryEvent_1_tF402F373318EDA852C20CC5745B08E543816A311 ** get_address_of_OnEasterEggEnter_32() { return &___OnEasterEggEnter_32; }
	inline void set_OnEasterEggEnter_32(TapestryEvent_1_tF402F373318EDA852C20CC5745B08E543816A311 * value)
	{
		___OnEasterEggEnter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEasterEggEnter_32), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// VoiceChatManager/<>c
struct U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields
{
public:
	// VoiceChatManager/<>c VoiceChatManager/<>c::<>9
	U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * ___U3CU3E9_0;
	// agora_gaming_rtc.OnUserMutedAudioHandler VoiceChatManager/<>c::<>9__12_5
	OnUserMutedAudioHandler_t9C0595BC073C92A0CD8B501668542F80BD99784A * ___U3CU3E9__12_5_1;
	// agora_gaming_rtc.OnRemoteAudioStateChangedHandler VoiceChatManager/<>c::<>9__12_6
	OnRemoteAudioStateChangedHandler_tA45A3A5F380825BD753980209E082855D69ACB16 * ___U3CU3E9__12_6_2;
	// agora_gaming_rtc.OnSDKWarningHandler VoiceChatManager/<>c::<>9__12_7
	OnSDKWarningHandler_tCF7C48612B64A29E23CA1F06356205D8E9C17980 * ___U3CU3E9__12_7_3;
	// agora_gaming_rtc.OnSDKErrorHandler VoiceChatManager/<>c::<>9__12_8
	OnSDKErrorHandler_t77B1F02A4EFD0FBE0AE9FF6A40867A8BE86235B1 * ___U3CU3E9__12_8_4;
	// agora_gaming_rtc.OnAudioRouteChangedHandler VoiceChatManager/<>c::<>9__12_10
	OnAudioRouteChangedHandler_t4BD60DBDBB6F662EC1DF18D4F3133732E357F381 * ___U3CU3E9__12_10_5;
	// agora_gaming_rtc.OnRequestTokenHandler VoiceChatManager/<>c::<>9__12_11
	OnRequestTokenHandler_tC6D98F8EC0ED51FFAB22D7FD7BC21E61586146A1 * ___U3CU3E9__12_11_6;
	// agora_gaming_rtc.OnConnectionInterruptedHandler VoiceChatManager/<>c::<>9__12_12
	OnConnectionInterruptedHandler_t549C857CC60BFA1136160E142CF47F92BED7162F * ___U3CU3E9__12_12_7;
	// agora_gaming_rtc.OnConnectionLostHandler VoiceChatManager/<>c::<>9__12_13
	OnConnectionLostHandler_t92CEE4F028F640789BC72CB323423950F0BB15C3 * ___U3CU3E9__12_13_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_5_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_5_1)); }
	inline OnUserMutedAudioHandler_t9C0595BC073C92A0CD8B501668542F80BD99784A * get_U3CU3E9__12_5_1() const { return ___U3CU3E9__12_5_1; }
	inline OnUserMutedAudioHandler_t9C0595BC073C92A0CD8B501668542F80BD99784A ** get_address_of_U3CU3E9__12_5_1() { return &___U3CU3E9__12_5_1; }
	inline void set_U3CU3E9__12_5_1(OnUserMutedAudioHandler_t9C0595BC073C92A0CD8B501668542F80BD99784A * value)
	{
		___U3CU3E9__12_5_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_5_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_6_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_6_2)); }
	inline OnRemoteAudioStateChangedHandler_tA45A3A5F380825BD753980209E082855D69ACB16 * get_U3CU3E9__12_6_2() const { return ___U3CU3E9__12_6_2; }
	inline OnRemoteAudioStateChangedHandler_tA45A3A5F380825BD753980209E082855D69ACB16 ** get_address_of_U3CU3E9__12_6_2() { return &___U3CU3E9__12_6_2; }
	inline void set_U3CU3E9__12_6_2(OnRemoteAudioStateChangedHandler_tA45A3A5F380825BD753980209E082855D69ACB16 * value)
	{
		___U3CU3E9__12_6_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_6_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_7_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_7_3)); }
	inline OnSDKWarningHandler_tCF7C48612B64A29E23CA1F06356205D8E9C17980 * get_U3CU3E9__12_7_3() const { return ___U3CU3E9__12_7_3; }
	inline OnSDKWarningHandler_tCF7C48612B64A29E23CA1F06356205D8E9C17980 ** get_address_of_U3CU3E9__12_7_3() { return &___U3CU3E9__12_7_3; }
	inline void set_U3CU3E9__12_7_3(OnSDKWarningHandler_tCF7C48612B64A29E23CA1F06356205D8E9C17980 * value)
	{
		___U3CU3E9__12_7_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_7_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_8_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_8_4)); }
	inline OnSDKErrorHandler_t77B1F02A4EFD0FBE0AE9FF6A40867A8BE86235B1 * get_U3CU3E9__12_8_4() const { return ___U3CU3E9__12_8_4; }
	inline OnSDKErrorHandler_t77B1F02A4EFD0FBE0AE9FF6A40867A8BE86235B1 ** get_address_of_U3CU3E9__12_8_4() { return &___U3CU3E9__12_8_4; }
	inline void set_U3CU3E9__12_8_4(OnSDKErrorHandler_t77B1F02A4EFD0FBE0AE9FF6A40867A8BE86235B1 * value)
	{
		___U3CU3E9__12_8_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_8_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_10_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_10_5)); }
	inline OnAudioRouteChangedHandler_t4BD60DBDBB6F662EC1DF18D4F3133732E357F381 * get_U3CU3E9__12_10_5() const { return ___U3CU3E9__12_10_5; }
	inline OnAudioRouteChangedHandler_t4BD60DBDBB6F662EC1DF18D4F3133732E357F381 ** get_address_of_U3CU3E9__12_10_5() { return &___U3CU3E9__12_10_5; }
	inline void set_U3CU3E9__12_10_5(OnAudioRouteChangedHandler_t4BD60DBDBB6F662EC1DF18D4F3133732E357F381 * value)
	{
		___U3CU3E9__12_10_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_10_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_11_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_11_6)); }
	inline OnRequestTokenHandler_tC6D98F8EC0ED51FFAB22D7FD7BC21E61586146A1 * get_U3CU3E9__12_11_6() const { return ___U3CU3E9__12_11_6; }
	inline OnRequestTokenHandler_tC6D98F8EC0ED51FFAB22D7FD7BC21E61586146A1 ** get_address_of_U3CU3E9__12_11_6() { return &___U3CU3E9__12_11_6; }
	inline void set_U3CU3E9__12_11_6(OnRequestTokenHandler_tC6D98F8EC0ED51FFAB22D7FD7BC21E61586146A1 * value)
	{
		___U3CU3E9__12_11_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_11_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_12_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_12_7)); }
	inline OnConnectionInterruptedHandler_t549C857CC60BFA1136160E142CF47F92BED7162F * get_U3CU3E9__12_12_7() const { return ___U3CU3E9__12_12_7; }
	inline OnConnectionInterruptedHandler_t549C857CC60BFA1136160E142CF47F92BED7162F ** get_address_of_U3CU3E9__12_12_7() { return &___U3CU3E9__12_12_7; }
	inline void set_U3CU3E9__12_12_7(OnConnectionInterruptedHandler_t549C857CC60BFA1136160E142CF47F92BED7162F * value)
	{
		___U3CU3E9__12_12_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_12_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_13_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields, ___U3CU3E9__12_13_8)); }
	inline OnConnectionLostHandler_t92CEE4F028F640789BC72CB323423950F0BB15C3 * get_U3CU3E9__12_13_8() const { return ___U3CU3E9__12_13_8; }
	inline OnConnectionLostHandler_t92CEE4F028F640789BC72CB323423950F0BB15C3 ** get_address_of_U3CU3E9__12_13_8() { return &___U3CU3E9__12_13_8; }
	inline void set_U3CU3E9__12_13_8(OnConnectionLostHandler_t92CEE4F028F640789BC72CB323423950F0BB15C3 * value)
	{
		___U3CU3E9__12_13_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_13_8), (void*)value);
	}
};


// VoiceChatOptionsController/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t8E2D61C15337C14D74F98F598E87D0DC203E1B30  : public RuntimeObject
{
public:
	// System.UInt32 VoiceChatOptionsController/<>c__DisplayClass10_0::id
	uint32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t8E2D61C15337C14D74F98F598E87D0DC203E1B30, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}
};


// VoiceChatOptionsController/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7573B3D12503A5B7A089D6CE06939BFF0C6E3EAF  : public RuntimeObject
{
public:
	// System.UInt32 VoiceChatOptionsController/<>c__DisplayClass7_0::userID
	uint32_t ___userID_0;

public:
	inline static int32_t get_offset_of_userID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7573B3D12503A5B7A089D6CE06939BFF0C6E3EAF, ___userID_0)); }
	inline uint32_t get_userID_0() const { return ___userID_0; }
	inline uint32_t* get_address_of_userID_0() { return &___userID_0; }
	inline void set_userID_0(uint32_t value)
	{
		___userID_0 = value;
	}
};


// VoiceChatOptionsController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tA4995D21664650E5D59AAEEF578B385508B581BE  : public RuntimeObject
{
public:
	// System.UInt32 VoiceChatOptionsController/<>c__DisplayClass8_0::userID
	uint32_t ___userID_0;

public:
	inline static int32_t get_offset_of_userID_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tA4995D21664650E5D59AAEEF578B385508B581BE, ___userID_0)); }
	inline uint32_t get_userID_0() const { return ___userID_0; }
	inline uint32_t* get_address_of_userID_0() { return &___userID_0; }
	inline void set_userID_0(uint32_t value)
	{
		___userID_0 = value;
	}
};


// Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27
struct U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Mapbox.Examples.Voxels.VoxelTile Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<>4__this
	VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<distanceOrderedVoxels>5__2
	List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * ___U3CdistanceOrderedVoxelsU3E5__2_3;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CU3E4__this_2)); }
	inline VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceOrderedVoxelsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CdistanceOrderedVoxelsU3E5__2_3)); }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * get_U3CdistanceOrderedVoxelsU3E5__2_3() const { return ___U3CdistanceOrderedVoxelsU3E5__2_3; }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 ** get_address_of_U3CdistanceOrderedVoxelsU3E5__2_3() { return &___U3CdistanceOrderedVoxelsU3E5__2_3; }
	inline void set_U3CdistanceOrderedVoxelsU3E5__2_3(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * value)
	{
		___U3CdistanceOrderedVoxelsU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdistanceOrderedVoxelsU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// Doozy.Engine.Utils.ColorModels.XYZ/X
struct X_t00EF64F2DAB6A21298F848A1A19AC8728E014570  : public RuntimeObject
{
public:

public:
};


// Doozy.Engine.Utils.ColorModels.XYZ/Y
struct Y_t3243C8209D852DBB7D65E68F6917291B25FB1AD8  : public RuntimeObject
{
public:

public:
};


// Doozy.Engine.Utils.ColorModels.XYZ/Z
struct Z_tBE07B95DFAA0683CFBDA7BBAB3770248A3A6674F  : public RuntimeObject
{
public:

public:
};


// Mapbox.Unity.Constants/GUI/Styles
struct Styles_tC2114566EF266EDE02B1538CCED728740517B148  : public RuntimeObject
{
public:

public:
};

struct Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields
{
public:
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_NOTE_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_NOTE_STYLE_0;
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1;
	// UnityEngine.GUIStyle Mapbox.Unity.Constants/GUI/Styles::EDITOR_TEXTURE_THUMBNAIL_STYLE
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2;

public:
	inline static int32_t get_offset_of_EDITOR_NOTE_STYLE_0() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_NOTE_STYLE_0)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_NOTE_STYLE_0() const { return ___EDITOR_NOTE_STYLE_0; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_NOTE_STYLE_0() { return &___EDITOR_NOTE_STYLE_0; }
	inline void set_EDITOR_NOTE_STYLE_0(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_NOTE_STYLE_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_NOTE_STYLE_0), (void*)value);
	}

	inline static int32_t get_offset_of_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() const { return ___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1() { return &___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1; }
	inline void set_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1), (void*)value);
	}

	inline static int32_t get_offset_of_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() { return static_cast<int32_t>(offsetof(Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields, ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() const { return ___EDITOR_TEXTURE_THUMBNAIL_STYLE_2; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_EDITOR_TEXTURE_THUMBNAIL_STYLE_2() { return &___EDITOR_TEXTURE_THUMBNAIL_STYLE_2; }
	inline void set_EDITOR_TEXTURE_THUMBNAIL_STYLE_2(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___EDITOR_TEXTURE_THUMBNAIL_STYLE_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EDITOR_TEXTURE_THUMBNAIL_STYLE_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// agora_gaming_rtc.AUDIO_ROUTE
struct AUDIO_ROUTE_t0239A2602B73D783A33061F287BEE44C87D60341 
{
public:
	// System.Int32 agora_gaming_rtc.AUDIO_ROUTE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AUDIO_ROUTE_t0239A2602B73D783A33061F287BEE44C87D60341, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.ImagePosition
struct ImagePosition_t3DBA97C0793136D349135BC5E6814CFB2BE5A43A 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImagePosition_t3DBA97C0793136D349135BC5E6814CFB2BE5A43A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// agora_gaming_rtc.REMOTE_AUDIO_STATE
struct REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_AUDIO_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.REMOTE_AUDIO_STATE_REASON
struct REMOTE_AUDIO_STATE_REASON_t1AA2F2198070393988ECBF1069B70D7A0CC46CA0 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_AUDIO_STATE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_AUDIO_STATE_REASON_t1AA2F2198070393988ECBF1069B70D7A0CC46CA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// agora_gaming_rtc.VIDEO_FRAME_TYPE
struct VIDEO_FRAME_TYPE_tFA636AE8F0558764641AFC02F7EE081AE7BD98D2 
{
public:
	// System.Int32 agora_gaming_rtc.VIDEO_FRAME_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIDEO_FRAME_TYPE_tFA636AE8F0558764641AFC02F7EE081AE7BD98D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Examples.Voxels.VoxelData
struct VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Mapbox.Examples.Voxels.VoxelData::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelData::Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Prefab_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Prefab_1() { return static_cast<int32_t>(offsetof(VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310, ___Prefab_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Prefab_1() const { return ___Prefab_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Prefab_1() { return &___Prefab_1; }
	inline void set_Prefab_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Prefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_1), (void*)value);
	}
};


// Doozy.Engine.UI.Nodes.WaitNode/WaitType
struct WaitType_t6D50E15694CA109681B2F0A6EE6402ED9A98A5E8 
{
public:
	// System.Int32 Doozy.Engine.UI.Nodes.WaitNode/WaitType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WaitType_t6D50E15694CA109681B2F0A6EE6402ED9A98A5E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Unity.Constants/GUI/Colors
struct Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD  : public RuntimeObject
{
public:

public:
};

struct Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields
{
public:
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_TEXT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_TEXT_COLOR_0;
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_NOTE_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_NOTE_COLOR_1;
	// UnityEngine.Color Mapbox.Unity.Constants/GUI/Colors::EDITOR_FEATURE_DEFAULT_COLOR
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EDITOR_FEATURE_DEFAULT_COLOR_2;

public:
	inline static int32_t get_offset_of_EDITOR_TEXT_COLOR_0() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_TEXT_COLOR_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_TEXT_COLOR_0() const { return ___EDITOR_TEXT_COLOR_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_TEXT_COLOR_0() { return &___EDITOR_TEXT_COLOR_0; }
	inline void set_EDITOR_TEXT_COLOR_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_TEXT_COLOR_0 = value;
	}

	inline static int32_t get_offset_of_EDITOR_NOTE_COLOR_1() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_NOTE_COLOR_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_NOTE_COLOR_1() const { return ___EDITOR_NOTE_COLOR_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_NOTE_COLOR_1() { return &___EDITOR_NOTE_COLOR_1; }
	inline void set_EDITOR_NOTE_COLOR_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_NOTE_COLOR_1 = value;
	}

	inline static int32_t get_offset_of_EDITOR_FEATURE_DEFAULT_COLOR_2() { return static_cast<int32_t>(offsetof(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields, ___EDITOR_FEATURE_DEFAULT_COLOR_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EDITOR_FEATURE_DEFAULT_COLOR_2() const { return ___EDITOR_FEATURE_DEFAULT_COLOR_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EDITOR_FEATURE_DEFAULT_COLOR_2() { return &___EDITOR_FEATURE_DEFAULT_COLOR_2; }
	inline void set_EDITOR_FEATURE_DEFAULT_COLOR_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EDITOR_FEATURE_DEFAULT_COLOR_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// agora_gaming_rtc.VideoFrame
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E 
{
public:
	// agora_gaming_rtc.VIDEO_FRAME_TYPE agora_gaming_rtc.VideoFrame::type
	int32_t ___type_0;
	// System.Int32 agora_gaming_rtc.VideoFrame::width
	int32_t ___width_1;
	// System.Int32 agora_gaming_rtc.VideoFrame::height
	int32_t ___height_2;
	// System.Int32 agora_gaming_rtc.VideoFrame::yStride
	int32_t ___yStride_3;
	// System.Byte[] agora_gaming_rtc.VideoFrame::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_4;
	// System.Int32 agora_gaming_rtc.VideoFrame::rotation
	int32_t ___rotation_5;
	// System.Int64 agora_gaming_rtc.VideoFrame::renderTimeMs
	int64_t ___renderTimeMs_6;
	// System.Int32 agora_gaming_rtc.VideoFrame::avsync_type
	int32_t ___avsync_type_7;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_yStride_3() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___yStride_3)); }
	inline int32_t get_yStride_3() const { return ___yStride_3; }
	inline int32_t* get_address_of_yStride_3() { return &___yStride_3; }
	inline void set_yStride_3(int32_t value)
	{
		___yStride_3 = value;
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_4() const { return ___buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___rotation_5)); }
	inline int32_t get_rotation_5() const { return ___rotation_5; }
	inline int32_t* get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(int32_t value)
	{
		___rotation_5 = value;
	}

	inline static int32_t get_offset_of_renderTimeMs_6() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___renderTimeMs_6)); }
	inline int64_t get_renderTimeMs_6() const { return ___renderTimeMs_6; }
	inline int64_t* get_address_of_renderTimeMs_6() { return &___renderTimeMs_6; }
	inline void set_renderTimeMs_6(int64_t value)
	{
		___renderTimeMs_6 = value;
	}

	inline static int32_t get_offset_of_avsync_type_7() { return static_cast<int32_t>(offsetof(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E, ___avsync_type_7)); }
	inline int32_t get_avsync_type_7() const { return ___avsync_type_7; }
	inline int32_t* get_address_of_avsync_type_7() { return &___avsync_type_7; }
	inline void set_avsync_type_7(int32_t value)
	{
		___avsync_type_7 = value;
	}
};

// Native definition for P/Invoke marshalling of agora_gaming_rtc.VideoFrame
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___yStride_3;
	Il2CppSafeArray/*NONE*/* ___buffer_4;
	int32_t ___rotation_5;
	int64_t ___renderTimeMs_6;
	int32_t ___avsync_type_7;
};
// Native definition for COM marshalling of agora_gaming_rtc.VideoFrame
struct VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_com
{
	int32_t ___type_0;
	int32_t ___width_1;
	int32_t ___height_2;
	int32_t ___yStride_3;
	Il2CppSafeArray/*NONE*/* ___buffer_4;
	int32_t ___rotation_5;
	int64_t ___renderTimeMs_6;
	int32_t ___avsync_type_7;
};

// System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>
struct Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler
struct OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// VoiceChatUser
struct VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 VoiceChatUser::userID
	uint32_t ___userID_4;
	// UnityEngine.UI.Text VoiceChatUser::userIDText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___userIDText_5;
	// UnityEngine.UI.Image VoiceChatUser::userImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___userImage_6;
	// UnityEngine.GameObject VoiceChatUser::muteButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___muteButton_7;
	// UnityEngine.GameObject VoiceChatUser::unmuteButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___unmuteButton_8;
	// UnityEngine.GameObject VoiceChatUser::volumeIndicator
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___volumeIndicator_9;

public:
	inline static int32_t get_offset_of_userID_4() { return static_cast<int32_t>(offsetof(VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2, ___userID_4)); }
	inline uint32_t get_userID_4() const { return ___userID_4; }
	inline uint32_t* get_address_of_userID_4() { return &___userID_4; }
	inline void set_userID_4(uint32_t value)
	{
		___userID_4 = value;
	}

	inline static int32_t get_offset_of_userIDText_5() { return static_cast<int32_t>(offsetof(VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2, ___userIDText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_userIDText_5() const { return ___userIDText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_userIDText_5() { return &___userIDText_5; }
	inline void set_userIDText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___userIDText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userIDText_5), (void*)value);
	}

	inline static int32_t get_offset_of_userImage_6() { return static_cast<int32_t>(offsetof(VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2, ___userImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_userImage_6() const { return ___userImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_userImage_6() { return &___userImage_6; }
	inline void set_userImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___userImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_muteButton_7() { return static_cast<int32_t>(offsetof(VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2, ___muteButton_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_muteButton_7() const { return ___muteButton_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_muteButton_7() { return &___muteButton_7; }
	inline void set_muteButton_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___muteButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muteButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_unmuteButton_8() { return static_cast<int32_t>(offsetof(VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2, ___unmuteButton_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_unmuteButton_8() const { return ___unmuteButton_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_unmuteButton_8() { return &___unmuteButton_8; }
	inline void set_unmuteButton_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___unmuteButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unmuteButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_volumeIndicator_9() { return static_cast<int32_t>(offsetof(VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2, ___volumeIndicator_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_volumeIndicator_9() const { return ___volumeIndicator_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_volumeIndicator_9() { return &___volumeIndicator_9; }
	inline void set_volumeIndicator_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___volumeIndicator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeIndicator_9), (void*)value);
	}
};


// Mapbox.Examples.Voxels.VoxelTile
struct VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mapbox.Examples.ForwardGeocodeUserInput Mapbox.Examples.Voxels.VoxelTile::_geocodeInput
	ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * ____geocodeInput_4;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_zoom
	int32_t ____zoom_5;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_elevationMultiplier
	float ____elevationMultiplier_6;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelDepthPadding
	int32_t ____voxelDepthPadding_7;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_tileWidthInVoxels
	int32_t ____tileWidthInVoxels_8;
	// Mapbox.Examples.Voxels.VoxelFetcher Mapbox.Examples.Voxels.VoxelTile::_voxelFetcher
	VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * ____voxelFetcher_9;
	// UnityEngine.GameObject Mapbox.Examples.Voxels.VoxelTile::_camera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____camera_10;
	// System.Int32 Mapbox.Examples.Voxels.VoxelTile::_voxelBatchCount
	int32_t ____voxelBatchCount_11;
	// System.String Mapbox.Examples.Voxels.VoxelTile::_styleUrl
	String_t* ____styleUrl_12;
	// Mapbox.Map.Map`1<Mapbox.Map.RasterTile> Mapbox.Examples.Voxels.VoxelTile::_raster
	Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * ____raster_13;
	// Mapbox.Map.Map`1<Mapbox.Map.RawPngRasterTile> Mapbox.Examples.Voxels.VoxelTile::_elevation
	Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * ____elevation_14;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_rasterTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____rasterTexture_15;
	// UnityEngine.Texture2D Mapbox.Examples.Voxels.VoxelTile::_elevationTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ____elevationTexture_16;
	// Mapbox.Platform.IFileSource Mapbox.Examples.Voxels.VoxelTile::_fileSource
	RuntimeObject* ____fileSource_17;
	// System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData> Mapbox.Examples.Voxels.VoxelTile::_voxels
	List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * ____voxels_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mapbox.Examples.Voxels.VoxelTile::_instantiatedVoxels
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ____instantiatedVoxels_19;
	// System.Single Mapbox.Examples.Voxels.VoxelTile::_tileScale
	float ____tileScale_20;

public:
	inline static int32_t get_offset_of__geocodeInput_4() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____geocodeInput_4)); }
	inline ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * get__geocodeInput_4() const { return ____geocodeInput_4; }
	inline ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 ** get_address_of__geocodeInput_4() { return &____geocodeInput_4; }
	inline void set__geocodeInput_4(ForwardGeocodeUserInput_t10C9A318B7C61E1D0B36245E3C2C475A0D483D70 * value)
	{
		____geocodeInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geocodeInput_4), (void*)value);
	}

	inline static int32_t get_offset_of__zoom_5() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____zoom_5)); }
	inline int32_t get__zoom_5() const { return ____zoom_5; }
	inline int32_t* get_address_of__zoom_5() { return &____zoom_5; }
	inline void set__zoom_5(int32_t value)
	{
		____zoom_5 = value;
	}

	inline static int32_t get_offset_of__elevationMultiplier_6() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevationMultiplier_6)); }
	inline float get__elevationMultiplier_6() const { return ____elevationMultiplier_6; }
	inline float* get_address_of__elevationMultiplier_6() { return &____elevationMultiplier_6; }
	inline void set__elevationMultiplier_6(float value)
	{
		____elevationMultiplier_6 = value;
	}

	inline static int32_t get_offset_of__voxelDepthPadding_7() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelDepthPadding_7)); }
	inline int32_t get__voxelDepthPadding_7() const { return ____voxelDepthPadding_7; }
	inline int32_t* get_address_of__voxelDepthPadding_7() { return &____voxelDepthPadding_7; }
	inline void set__voxelDepthPadding_7(int32_t value)
	{
		____voxelDepthPadding_7 = value;
	}

	inline static int32_t get_offset_of__tileWidthInVoxels_8() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____tileWidthInVoxels_8)); }
	inline int32_t get__tileWidthInVoxels_8() const { return ____tileWidthInVoxels_8; }
	inline int32_t* get_address_of__tileWidthInVoxels_8() { return &____tileWidthInVoxels_8; }
	inline void set__tileWidthInVoxels_8(int32_t value)
	{
		____tileWidthInVoxels_8 = value;
	}

	inline static int32_t get_offset_of__voxelFetcher_9() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelFetcher_9)); }
	inline VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * get__voxelFetcher_9() const { return ____voxelFetcher_9; }
	inline VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D ** get_address_of__voxelFetcher_9() { return &____voxelFetcher_9; }
	inline void set__voxelFetcher_9(VoxelFetcher_t31CB60AE2A4EA3F4D722321C8BB87B3FE68FBE2D * value)
	{
		____voxelFetcher_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voxelFetcher_9), (void*)value);
	}

	inline static int32_t get_offset_of__camera_10() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____camera_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__camera_10() const { return ____camera_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__camera_10() { return &____camera_10; }
	inline void set__camera_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____camera_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_10), (void*)value);
	}

	inline static int32_t get_offset_of__voxelBatchCount_11() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxelBatchCount_11)); }
	inline int32_t get__voxelBatchCount_11() const { return ____voxelBatchCount_11; }
	inline int32_t* get_address_of__voxelBatchCount_11() { return &____voxelBatchCount_11; }
	inline void set__voxelBatchCount_11(int32_t value)
	{
		____voxelBatchCount_11 = value;
	}

	inline static int32_t get_offset_of__styleUrl_12() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____styleUrl_12)); }
	inline String_t* get__styleUrl_12() const { return ____styleUrl_12; }
	inline String_t** get_address_of__styleUrl_12() { return &____styleUrl_12; }
	inline void set__styleUrl_12(String_t* value)
	{
		____styleUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____styleUrl_12), (void*)value);
	}

	inline static int32_t get_offset_of__raster_13() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____raster_13)); }
	inline Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * get__raster_13() const { return ____raster_13; }
	inline Map_1_tC48A961A1B61785722D5907072B2D13475A89832 ** get_address_of__raster_13() { return &____raster_13; }
	inline void set__raster_13(Map_1_tC48A961A1B61785722D5907072B2D13475A89832 * value)
	{
		____raster_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raster_13), (void*)value);
	}

	inline static int32_t get_offset_of__elevation_14() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevation_14)); }
	inline Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * get__elevation_14() const { return ____elevation_14; }
	inline Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 ** get_address_of__elevation_14() { return &____elevation_14; }
	inline void set__elevation_14(Map_1_t11BF2AF4B8B14E81CF098228619FEF7891D6E067 * value)
	{
		____elevation_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevation_14), (void*)value);
	}

	inline static int32_t get_offset_of__rasterTexture_15() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____rasterTexture_15)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__rasterTexture_15() const { return ____rasterTexture_15; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__rasterTexture_15() { return &____rasterTexture_15; }
	inline void set__rasterTexture_15(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____rasterTexture_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rasterTexture_15), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTexture_16() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____elevationTexture_16)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get__elevationTexture_16() const { return ____elevationTexture_16; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of__elevationTexture_16() { return &____elevationTexture_16; }
	inline void set__elevationTexture_16(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		____elevationTexture_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTexture_16), (void*)value);
	}

	inline static int32_t get_offset_of__fileSource_17() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____fileSource_17)); }
	inline RuntimeObject* get__fileSource_17() const { return ____fileSource_17; }
	inline RuntimeObject** get_address_of__fileSource_17() { return &____fileSource_17; }
	inline void set__fileSource_17(RuntimeObject* value)
	{
		____fileSource_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_17), (void*)value);
	}

	inline static int32_t get_offset_of__voxels_18() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____voxels_18)); }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * get__voxels_18() const { return ____voxels_18; }
	inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 ** get_address_of__voxels_18() { return &____voxels_18; }
	inline void set__voxels_18(List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * value)
	{
		____voxels_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voxels_18), (void*)value);
	}

	inline static int32_t get_offset_of__instantiatedVoxels_19() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____instantiatedVoxels_19)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get__instantiatedVoxels_19() const { return ____instantiatedVoxels_19; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of__instantiatedVoxels_19() { return &____instantiatedVoxels_19; }
	inline void set__instantiatedVoxels_19(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		____instantiatedVoxels_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instantiatedVoxels_19), (void*)value);
	}

	inline static int32_t get_offset_of__tileScale_20() { return static_cast<int32_t>(offsetof(VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD, ____tileScale_20)); }
	inline float get__tileScale_20() const { return ____tileScale_20; }
	inline float* get_address_of__tileScale_20() { return &____tileScale_20; }
	inline void set__tileScale_20(float value)
	{
		____tileScale_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshal_pinvoke(const VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E& unmarshaled, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshal_pinvoke_back(const VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke& marshaled, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E& unmarshaled);
IL2CPP_EXTERN_C void VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshal_pinvoke_cleanup(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke& marshaled);

// System.Void Tapestry.TapestryEvent`2<System.UInt32,System.Boolean>::Invoke(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_gshared (TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * __this, uint32_t ___inParams10, bool ___inParams21, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared (Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m07E5F4A2FE5C2A651505F5DB0CF3ECE258F2B54D_gshared (RuntimeObject* ___source0, Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * ___keySelector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void VoiceChatManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDD9E4A29619E4F53F3AE4038381759683DE3460 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Tapestry.TapestryEvent`2<System.UInt32,System.Boolean>::Invoke(T1,T2)
inline void TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52 (TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * __this, uint32_t ___inParams10, bool ___inParams21, const RuntimeMethod* method)
{
	((  void (*) (TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 *, uint32_t, bool, const RuntimeMethod*))TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_gshared)(__this, ___inParams10, ___inParams21, method);
}
// System.String agora_gaming_rtc.IRtcEngine::GetErrorDescription(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IRtcEngine_GetErrorDescription_m0B845817DE219231EDBA925C4FFC9EE4278EB3AE (int32_t ___code0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Func`2<Mapbox.Examples.Voxels.VoxelData,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10 (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<Mapbox.Examples.Voxels.VoxelData,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D (RuntimeObject* ___source0, Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m07E5F4A2FE5C2A651505F5DB0CF3ECE258F2B54D_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Mapbox.Examples.Voxels.VoxelData>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>::get_Count()
inline int32_t List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mapbox.Examples.Voxels.VoxelData>::get_Item(System.Int32)
inline VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_inline (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * (*) (List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_imagePosition_mE650EF31D86572D41CAED2F20B098AE471AD04F4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7 (OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7 * __this, uint32_t ___uid0, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  ___videoFrame1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___videoFrame1' to native representation
	VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshaled_pinvoke ____videoFrame1_marshaled = {};
	VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshal_pinvoke(___videoFrame1, ____videoFrame1_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(___uid0, ____videoFrame1_marshaled);

	// Marshaling cleanup of parameter '___videoFrame1' native representation
	VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_marshal_pinvoke_cleanup(____videoFrame1_marshaled);

}
// System.Void agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler__ctor_m68A7BA9276DC486355FD374AAD8855510C3F36FB (OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler::Invoke(System.UInt32,agora_gaming_rtc.VideoFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler_Invoke_m830C98BA5017F4448C6C124ED31458BE7A5D951A (OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7 * __this, uint32_t ___uid0, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  ___videoFrame1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___uid0, ___videoFrame1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___videoFrame1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  >::Invoke(targetMethod, targetThis, ___uid0, ___videoFrame1);
					else
						GenericVirtActionInvoker2< uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  >::Invoke(targetMethod, targetThis, ___uid0, ___videoFrame1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___uid0, ___videoFrame1);
					else
						VirtActionInvoker2< uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___uid0, ___videoFrame1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint32_t, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___uid0, ___videoFrame1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler::BeginInvoke(System.UInt32,agora_gaming_rtc.VideoFrame,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRenderVideoFrameHandler_BeginInvoke_mC581F8C23DF3735154AF4D4D81BFD38F4C031E81 (OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7 * __this, uint32_t ___uid0, VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E  ___videoFrame1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___uid0);
	__d_args[1] = Box(VideoFrame_tC33A26E5DA4ED44EE1D469D54FEA56C62AA39A2E_il2cpp_TypeInfo_var, &___videoFrame1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void agora_gaming_rtc.VideoRawDataManager/OnRenderVideoFrameHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRenderVideoFrameHandler_EndInvoke_mAF19AEDC940E468CDC5D3EA0ABA7A3A4DCD51E46 (OnRenderVideoFrameHandler_tFF73ED0FBB68BFF4D05F751C8B6F1FC8443BCDE7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoiceChatManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m732F87B4FB52593827F276B9D05C435E43F8F2FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * L_0 = (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 *)il2cpp_codegen_object_new(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEDD9E4A29619E4F53F3AE4038381759683DE3460(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void VoiceChatManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDD9E4A29619E4F53F3AE4038381759683DE3460 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_5(System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_5_mD049878CC50A445571F0656D812F398C53D819DE (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, uint32_t ___uid0, bool ___muted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9929123028EE1BE5AAB9742E2FD02D235596E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"VoiceChatManager: User Muted uid: {uid}, muted: {muted}");
		uint32_t L_0 = ___uid0;
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = ___muted1;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2B9929123028EE1BE5AAB9742E2FD02D235596E9, L_2, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// TapestryEventRegistry.OnUserMuteVoiceChat.Invoke(uid, muted);
		IL2CPP_RUNTIME_CLASS_INIT(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var);
		TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * L_7 = ((TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields*)il2cpp_codegen_static_fields_for(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var))->get_OnUserMuteVoiceChat_28();
		uint32_t L_8 = ___uid0;
		bool L_9 = ___muted1;
		NullCheck(L_7);
		TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52(L_7, L_8, L_9, /*hidden argument*/TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_6(System.UInt32,agora_gaming_rtc.REMOTE_AUDIO_STATE,agora_gaming_rtc.REMOTE_AUDIO_STATE_REASON,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_6_mC045A93892690FF86837C0FEF57ABDF2FDBAAF24 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, uint32_t ___uid0, int32_t ___state1, int32_t ___reason2, int32_t ___elapsed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9929123028EE1BE5AAB9742E2FD02D235596E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD23D1718E834A1488FC3DC4BFF14FF9787B63840);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"VoiceChatManager: User uid: {uid} Audio State Changed: {state}");
		uint32_t L_0 = ___uid0;
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___state1;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD23D1718E834A1488FC3DC4BFF14FF9787B63840, L_2, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// if (state == REMOTE_AUDIO_STATE.REMOTE_AUDIO_STATE_STOPPED || state == REMOTE_AUDIO_STATE.REMOTE_AUDIO_STATE_FROZEN)
		int32_t L_7 = ___state1;
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_8 = ___state1;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0049;
		}
	}

IL_0022:
	{
		// Debug.Log($"VoiceChatManager: User Muted uid: {uid}, muted: {true}");
		uint32_t L_9 = ___uid0;
		uint32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_10);
		bool L_12 = ((bool)1);
		RuntimeObject * L_13 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2B9929123028EE1BE5AAB9742E2FD02D235596E9, L_11, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// TapestryEventRegistry.OnUserMuteVoiceChat.Invoke(uid, true);
		IL2CPP_RUNTIME_CLASS_INIT(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var);
		TapestryEvent_2_t5BF368A69A7D3680D9334084A100237667CCBFF8 * L_15 = ((TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_StaticFields*)il2cpp_codegen_static_fields_for(TapestryEventRegistry_t71B4453FF9E9C25ADDCA8E1318CBEA6D3FEBE53A_il2cpp_TypeInfo_var))->get_OnUserMuteVoiceChat_28();
		uint32_t L_16 = ___uid0;
		NullCheck(L_15);
		TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52(L_15, L_16, (bool)1, /*hidden argument*/TapestryEvent_2_Invoke_mF9A6B8FA714F5CE632F73FD89C4234EE61763D52_RuntimeMethod_var);
	}

IL_0049:
	{
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_7(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_7_m35FDA1ABFEB1C4B3B01F55CCDF1A63243E0ADBBA (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, int32_t ___warn0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtcEngine_tAAB918008B7BD39030805371269AB0D499C5F647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC45568541E45DF3E71B35A13A41D958D1020A95);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string description = IRtcEngine.GetErrorDescription(warn);
		int32_t L_0 = ___warn0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tAAB918008B7BD39030805371269AB0D499C5F647_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = IRtcEngine_GetErrorDescription_m0B845817DE219231EDBA925C4FFC9EE4278EB3AE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Debug.Log($"VoiceChatManager: Warning: {warn}, msg: {msg}, description: {description}");
		int32_t L_2 = ___warn0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = ___msg1;
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralFC45568541E45DF3E71B35A13A41D958D1020A95, L_4, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_8(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_8_m54D47B50849A50CB177B166E406830F6F1DAB893 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRtcEngine_tAAB918008B7BD39030805371269AB0D499C5F647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFBFF9B78C6C48A52D9BFE200566BFFD2B930E4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string description = IRtcEngine.GetErrorDescription(error);
		int32_t L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(IRtcEngine_tAAB918008B7BD39030805371269AB0D499C5F647_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = IRtcEngine_GetErrorDescription_m0B845817DE219231EDBA925C4FFC9EE4278EB3AE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Debug.Log($"VoiceChatManager: Error: {error}, msg: {msg}, description: {description}");
		int32_t L_2 = ___error0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = ___msg1;
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral7BFBFF9B78C6C48A52D9BFE200566BFFD2B930E4, L_4, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_10(agora_gaming_rtc.AUDIO_ROUTE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_10_m2136A035070DF6D9584A530EEA7DEF24FB634468 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, int32_t ___route0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AUDIO_ROUTE_t0239A2602B73D783A33061F287BEE44C87D60341_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD09B69CD9E43A876D0DAAAF0E97FF8E99EFAE0CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"VoiceChatManager: Audio Route Changed: {route}");
		int32_t L_0 = ___route0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(AUDIO_ROUTE_t0239A2602B73D783A33061F287BEE44C87D60341_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD09B69CD9E43A876D0DAAAF0E97FF8E99EFAE0CC, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_11_m2547AAE707A142EDD1FCA2D32626EDE00BB59816 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97C51E2571720201866BE83DD3F270A011C311F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("VoiceChatManager: Requesting Token");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral97C51E2571720201866BE83DD3F270A011C311F8, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_12_m21E07013796762094FBC32858B1EC47EC544F1AD (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1F0D1CB130F96462F19A20945B2AB90A207E5A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("VoiceChatManager: Connection Interrupted");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB1F0D1CB130F96462F19A20945B2AB90A207E5A0, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void VoiceChatManager/<>c::<Start>b__12_13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__12_13_m74C2C9B93E14B5C6BB3F30350AAD63BF4725AF46 (U3CU3Ec_t598B05A7C2605FAB97C88043C54749B0CED231B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4215C3BA68C613F4BA685E6BEF1496BCA58A7E39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("VoiceChatManager: Connection Lost");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral4215C3BA68C613F4BA685E6BEF1496BCA58A7E39, /*hidden argument*/NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoiceChatOptionsController/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mE664B75E3718D57E5C44F9D07D38A432758555A7 (U3CU3Ec__DisplayClass10_0_t8E2D61C15337C14D74F98F598E87D0DC203E1B30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoiceChatOptionsController/<>c__DisplayClass10_0::<SetUserMuted>b__0(VoiceChatUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CSetUserMutedU3Eb__0_m59C2CE7252CBBBB88D982FD164E94CC432161DEF (U3CU3Ec__DisplayClass10_0_t8E2D61C15337C14D74F98F598E87D0DC203E1B30 * __this, VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2 * ___x0, const RuntimeMethod* method)
{
	{
		// VoiceChatUser user = createdUsers.Find(x => x.userID == id);
		VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2 * L_0 = ___x0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_userID_4();
		uint32_t L_2 = __this->get_id_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoiceChatOptionsController/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mBC526EEB45E2608BD98B2322B078910B1201970B (U3CU3Ec__DisplayClass7_0_t7573B3D12503A5B7A089D6CE06939BFF0C6E3EAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoiceChatOptionsController/<>c__DisplayClass7_0::<RemoveUser>b__0(VoiceChatUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CRemoveUserU3Eb__0_m4987CAC6BEEAA2DBC9958914A5D6B5CFCA27F02E (U3CU3Ec__DisplayClass7_0_t7573B3D12503A5B7A089D6CE06939BFF0C6E3EAF * __this, VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2 * ___x0, const RuntimeMethod* method)
{
	{
		// VoiceChatUser user = createdUsers.Find(x => x.userID == userID);
		VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2 * L_0 = ___x0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_userID_4();
		uint32_t L_2 = __this->get_userID_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoiceChatOptionsController/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mD526742FB135EEBDAEAA4064FBDECAAC20F46165 (U3CU3Ec__DisplayClass8_0_tA4995D21664650E5D59AAEEF578B385508B581BE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoiceChatOptionsController/<>c__DisplayClass8_0::<CreateUniqueChannelUser>b__0(VoiceChatUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CCreateUniqueChannelUserU3Eb__0_m740579CF1CDE8A551DDBE36BD0DBEEDC472E5ED1 (U3CU3Ec__DisplayClass8_0_tA4995D21664650E5D59AAEEF578B385508B581BE * __this, VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2 * ___x0, const RuntimeMethod* method)
{
	{
		// VoiceChatUser user = createdUsers.Find(x => x.userID == userID);
		VoiceChatUser_tE68393AA2B3F57E11759B8572EB4D4A4FF170DA2 * L_0 = ___x0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->get_userID_4();
		uint32_t L_2 = __this->get_userID_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27__ctor_m0B8919E93FA333B95BDE8DD79D5B3A3CBA2F1443 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27_System_IDisposable_Dispose_m7CAC623BCD0EF90EF3DD2C2DC21210C2AFADE34C (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildRoutineU3Ed__27_MoveNext_m738E223B3783C8F138DACB123EDB8F55A48E8C8D (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00be;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var distanceOrderedVoxels = _voxels.OrderBy(x => (_camera.transform.position - x.Position).magnitude).ToList();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_4 = V_1;
		NullCheck(L_4);
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_5 = L_4->get__voxels_18();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_6 = V_1;
		Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 * L_7 = (Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7 *)il2cpp_codegen_object_new(Func_2_tA2E9E7B323D32D7402AD8AE1624AE6E7938FB1D7_il2cpp_TypeInfo_var);
		Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10(L_7, L_6, (intptr_t)((intptr_t)VoxelTile_U3CBuildRoutineU3Eb__27_0_m8BC543C8B0F7C0C1348B1261916A5824C7638A62_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCD478719723548C6E12D89305EE208EECF554A10_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D(L_5, L_7, /*hidden argument*/Enumerable_OrderBy_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mBF00C43ACF732C51807D2918F15796B12003004D_RuntimeMethod_var);
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_9;
		L_9 = Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728(L_8, /*hidden argument*/Enumerable_ToList_TisVoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310_m078E1276721A44D63CE6F05D94A43B9906E3F728_RuntimeMethod_var);
		__this->set_U3CdistanceOrderedVoxelsU3E5__2_3(L_9);
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_00d8;
	}

IL_004f:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		V_2 = 0;
		goto IL_00a5;
	}

IL_0053:
	{
		// var index = i + j;
		int32_t L_10 = __this->get_U3CiU3E5__3_4();
		int32_t L_11 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		// if (index < distanceOrderedVoxels.Count)
		int32_t L_12 = V_3;
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_13 = __this->get_U3CdistanceOrderedVoxelsU3E5__2_3();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline(L_13, /*hidden argument*/List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		if ((((int32_t)L_12) >= ((int32_t)L_14)))
		{
			goto IL_00a1;
		}
	}
	{
		// var voxel = distanceOrderedVoxels[index];
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_15 = __this->get_U3CdistanceOrderedVoxelsU3E5__2_3();
		int32_t L_16 = V_3;
		NullCheck(L_15);
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_17;
		L_17 = List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mD784C4B201AB3443B8E52973D5A141C37DCFC02E_RuntimeMethod_var);
		V_4 = L_17;
		// _instantiatedVoxels.Add(Instantiate(voxel.Prefab, voxel.Position, Quaternion.identity, transform) as GameObject);
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_18 = V_1;
		NullCheck(L_18);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = L_18->get__instantiatedVoxels_19();
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_20 = V_4;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Prefab_1();
		VoxelData_t4D945FB761EE47AEDABC639B33B2531221A7C310 * L_22 = V_4;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22->get_Position_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_25 = V_1;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_21, L_23, L_24, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		NullCheck(L_19);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_19, L_27, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_00a1:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a5:
	{
		// for (int j = 0; j < _voxelBatchCount; j++)
		int32_t L_29 = V_2;
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->get__voxelBatchCount_11();
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0053;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00be:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		int32_t L_32 = __this->get_U3CiU3E5__3_4();
		VoxelTile_t46B02B2723F1982E7981E2DF423FB56C0572A1AD * L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get__voxelBatchCount_11();
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_34)));
	}

IL_00d8:
	{
		// for (int i = 0; i < distanceOrderedVoxels.Count; i += _voxelBatchCount)
		int32_t L_35 = __this->get_U3CiU3E5__3_4();
		List_1_t89044EE35F3A71D030587E65F20551178DEAD0B1 * L_36 = __this->get_U3CdistanceOrderedVoxelsU3E5__2_3();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_inline(L_36, /*hidden argument*/List_1_get_Count_m88E0826830D6C42C874C280F965582D68A9D5392_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_004f;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildRoutineU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0DB9EC10F91D4D7D02C5AD56DF97AEDF2128A9FA (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_Reset_m04332478F50334727E80E32D39A2AF9C186EEA34_RuntimeMethod_var)));
	}
}
// System.Object Mapbox.Examples.Voxels.VoxelTile/<BuildRoutine>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildRoutineU3Ed__27_System_Collections_IEnumerator_get_Current_m634DD817D9163EE06846A5DA8C0D1E3B23BE77F3 (U3CBuildRoutineU3Ed__27_t837AA2A2137D3D611F565185638B48455AC639B4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Doozy.Engine.Utils.ColorModels.XYZ/X::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X__ctor_m3AC499BA96B7519D76A90BC1DE90E26FE712C10C (X_t00EF64F2DAB6A21298F848A1A19AC8728E014570 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Doozy.Engine.Utils.ColorModels.XYZ/Y::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Y__ctor_mE23F5E8E0529BD76494E0ABB8675086100595F65 (Y_t3243C8209D852DBB7D65E68F6917291B25FB1AD8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Doozy.Engine.Utils.ColorModels.XYZ/Z::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Z__ctor_m3939AE846F4E33F4DD844579BAC3BBEBE5D21402 (Z_tBE07B95DFAA0683CFBDA7BBAB3770248A3A6674F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Unity.Constants/GUI/Colors::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors__cctor_mC3C959146F9C4D1CA5B50F879B8CE77CE5CE49AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Color EDITOR_TEXT_COLOR = new Color(0.7f, 0.7f, 0.7f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_0), (0.699999988f), (0.699999988f), (0.699999988f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_TEXT_COLOR_0(L_0);
		// public static readonly Color EDITOR_NOTE_COLOR = new Color(1.0f, 0.8f, 0.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_1), (1.0f), (0.800000012f), (0.0f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_NOTE_COLOR_1(L_1);
		// public static readonly Color EDITOR_FEATURE_DEFAULT_COLOR = new Color(0.1764706f, 0.8509805f, 1.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.176470593f), (0.85098052f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->set_EDITOR_FEATURE_DEFAULT_COLOR_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Unity.Constants/GUI/Styles::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Styles__cctor_m0C8D2A1B018039E7B1145FAF284772F28526F9D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly GUIStyle EDITOR_NOTE_STYLE = new GUIStyle { wordWrap = true, normal = { textColor = Colors.EDITOR_NOTE_COLOR } };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_0, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = L_0;
		NullCheck(L_1);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_1, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = L_1;
		NullCheck(L_2);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_3;
		L_3 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->get_EDITOR_NOTE_COLOR_1();
		NullCheck(L_3);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_3, L_4, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_NOTE_STYLE_0(L_2);
		// public static readonly GUIStyle EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE = new GUIStyle { wordWrap = true, normal = { textColor = Colors.EDITOR_TEXT_COLOR } };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_5, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = L_5;
		NullCheck(L_6);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_6, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7 = L_6;
		NullCheck(L_7);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_8;
		L_8 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_7, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ((Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_StaticFields*)il2cpp_codegen_static_fields_for(Colors_tE3544B9054E419D78727F2B37F628F7F92C661AD_il2cpp_TypeInfo_var))->get_EDITOR_TEXT_COLOR_0();
		NullCheck(L_8);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_8, L_9, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_TEXTURE_STYLE_DESCRIPTION_STYLE_1(L_7);
		// public static readonly GUIStyle EDITOR_TEXTURE_THUMBNAIL_STYLE = new GUIStyle { imagePosition = ImagePosition.ImageOnly, wordWrap = true };
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_10, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = L_10;
		NullCheck(L_11);
		GUIStyle_set_imagePosition_mE650EF31D86572D41CAED2F20B098AE471AD04F4(L_11, 2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_12 = L_11;
		NullCheck(L_12);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_12, (bool)1, /*hidden argument*/NULL);
		((Styles_tC2114566EF266EDE02B1538CCED728740517B148_StaticFields*)il2cpp_codegen_static_fields_for(Styles_tC2114566EF266EDE02B1538CCED728740517B148_il2cpp_TypeInfo_var))->set_EDITOR_TEXTURE_THUMBNAIL_STYLE_2(L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
