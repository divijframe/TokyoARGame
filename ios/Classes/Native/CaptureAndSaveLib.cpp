#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CaptureAndSave
struct CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB;
// CaptureAndSaveEventListener
struct CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CaptureAndSave/<GetScreenPixels>c__Iterator1
struct U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1;
// CaptureAndSave/<SaveToAlbum>c__Iterator0
struct U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC;
// CaptureAndSaveEventListener/OnError
struct OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE;
// CaptureAndSaveEventListener/OnScreenShot
struct OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C;
// CaptureAndSaveEventListener/OnSuccess
struct OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA;

IL2CPP_EXTERN_C RuntimeClass* CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A8EE65754F788BF47D4F8E1CEEBE7E19515A093;
IL2CPP_EXTERN_C String_t* _stringLiteral0DD538ABDD49CD8FB58D931653241472B03BBA7E;
IL2CPP_EXTERN_C String_t* _stringLiteral126ADC8BF06A49ABFFF099E5707C5F52C28D3357;
IL2CPP_EXTERN_C String_t* _stringLiteral1CDCC27185EE0C6FDBFF3067012515E0C2EBC3DB;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3546314B245A532DA02D88063D24DAD7121927;
IL2CPP_EXTERN_C String_t* _stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2;
IL2CPP_EXTERN_C String_t* _stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4;
IL2CPP_EXTERN_C String_t* _stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED;
IL2CPP_EXTERN_C String_t* _stringLiteral8B76690551B8F032A5B1376B6898AF93394734F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA1772B17FB84B1A2F8D28E7E42A183E7554CB4F7;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetScreenPixelsU3Ec__Iterator1_Reset_m5B48FCC6D15ADF82561F1AABE8484DDD6E9096F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSaveToAlbumU3Ec__Iterator0_Reset_mD7B6C1DC19B38334CE7A9AB03A3C61EA3EA02AF0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB4A2A8C314F5E44A136F81DD504B05BF497FFAE1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// CaptureAndSaveEventListener
struct CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03  : public RuntimeObject
{
public:

public:
};

struct CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields
{
public:
	// CaptureAndSaveEventListener/OnError CaptureAndSaveEventListener::onErrorInvoker
	OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___onErrorInvoker_0;
	// CaptureAndSaveEventListener/OnSuccess CaptureAndSaveEventListener::onSuccessInvoker
	OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___onSuccessInvoker_1;
	// CaptureAndSaveEventListener/OnScreenShot CaptureAndSaveEventListener::onScreenShotInvoker
	OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___onScreenShotInvoker_2;

public:
	inline static int32_t get_offset_of_onErrorInvoker_0() { return static_cast<int32_t>(offsetof(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields, ___onErrorInvoker_0)); }
	inline OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * get_onErrorInvoker_0() const { return ___onErrorInvoker_0; }
	inline OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE ** get_address_of_onErrorInvoker_0() { return &___onErrorInvoker_0; }
	inline void set_onErrorInvoker_0(OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * value)
	{
		___onErrorInvoker_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onErrorInvoker_0), (void*)value);
	}

	inline static int32_t get_offset_of_onSuccessInvoker_1() { return static_cast<int32_t>(offsetof(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields, ___onSuccessInvoker_1)); }
	inline OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * get_onSuccessInvoker_1() const { return ___onSuccessInvoker_1; }
	inline OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA ** get_address_of_onSuccessInvoker_1() { return &___onSuccessInvoker_1; }
	inline void set_onSuccessInvoker_1(OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * value)
	{
		___onSuccessInvoker_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSuccessInvoker_1), (void*)value);
	}

	inline static int32_t get_offset_of_onScreenShotInvoker_2() { return static_cast<int32_t>(offsetof(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields, ___onScreenShotInvoker_2)); }
	inline OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * get_onScreenShotInvoker_2() const { return ___onScreenShotInvoker_2; }
	inline OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C ** get_address_of_onScreenShotInvoker_2() { return &___onScreenShotInvoker_2; }
	inline void set_onScreenShotInvoker_2(OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * value)
	{
		___onScreenShotInvoker_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onScreenShotInvoker_2), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ImageType
struct ImageType_tD954A7698623C9B5F8EE06E92F61AAAE0D8D155D 
{
public:
	// System.Int32 ImageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageType_tD954A7698623C9B5F8EE06E92F61AAAE0D8D155D, ___value___2)); }
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

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SendMessageOptions
struct SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t89E16D7B4FAECAF721478B06E56214F97438C61B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WatermarkAlignment
struct WatermarkAlignment_t7CB5AB2967953D3E8EC3E3EDD645B445DCF85A30 
{
public:
	// System.Int32 WatermarkAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WatermarkAlignment_t7CB5AB2967953D3E8EC3E3EDD645B445DCF85A30, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Environment/SpecialFolder
struct SpecialFolder_t6103ABF21BDF31D4FF825E2761E4616153810B76 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialFolder_t6103ABF21BDF31D4FF825E2761E4616153810B76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
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


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// CaptureAndSave/<GetScreenPixels>c__Iterator1
struct U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1  : public RuntimeObject
{
public:
	// ImageType CaptureAndSave/<GetScreenPixels>c__Iterator1::imgType
	int32_t ___imgType_0;
	// UnityEngine.TextureFormat CaptureAndSave/<GetScreenPixels>c__Iterator1::<tFormat>__0
	int32_t ___U3CtFormatU3E__0_1;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::width
	int32_t ___width_2;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::height
	int32_t ___height_3;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::x
	int32_t ___x_4;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::y
	int32_t ___y_5;
	// UnityEngine.Texture2D CaptureAndSave/<GetScreenPixels>c__Iterator1::watermark
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark_6;
	// UnityEngine.Texture2D CaptureAndSave/<GetScreenPixels>c__Iterator1::<temp>__1
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CtempU3E__1_7;
	// WatermarkAlignment CaptureAndSave/<GetScreenPixels>c__Iterator1::align
	int32_t ___align_8;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::$PC
	int32_t ___U24PC_9;
	// System.Object CaptureAndSave/<GetScreenPixels>c__Iterator1::$current
	RuntimeObject * ___U24current_10;
	// ImageType CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>imgType
	int32_t ___U3CU24U3EimgType_11;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>width
	int32_t ___U3CU24U3Ewidth_12;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>height
	int32_t ___U3CU24U3Eheight_13;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>x
	int32_t ___U3CU24U3Ex_14;
	// System.Int32 CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>y
	int32_t ___U3CU24U3Ey_15;
	// UnityEngine.Texture2D CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>watermark
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CU24U3Ewatermark_16;
	// WatermarkAlignment CaptureAndSave/<GetScreenPixels>c__Iterator1::<$>align
	int32_t ___U3CU24U3Ealign_17;
	// CaptureAndSave CaptureAndSave/<GetScreenPixels>c__Iterator1::<>f__this
	CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * ___U3CU3Ef__this_18;

public:
	inline static int32_t get_offset_of_imgType_0() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___imgType_0)); }
	inline int32_t get_imgType_0() const { return ___imgType_0; }
	inline int32_t* get_address_of_imgType_0() { return &___imgType_0; }
	inline void set_imgType_0(int32_t value)
	{
		___imgType_0 = value;
	}

	inline static int32_t get_offset_of_U3CtFormatU3E__0_1() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CtFormatU3E__0_1)); }
	inline int32_t get_U3CtFormatU3E__0_1() const { return ___U3CtFormatU3E__0_1; }
	inline int32_t* get_address_of_U3CtFormatU3E__0_1() { return &___U3CtFormatU3E__0_1; }
	inline void set_U3CtFormatU3E__0_1(int32_t value)
	{
		___U3CtFormatU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___x_4)); }
	inline int32_t get_x_4() const { return ___x_4; }
	inline int32_t* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(int32_t value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___y_5)); }
	inline int32_t get_y_5() const { return ___y_5; }
	inline int32_t* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(int32_t value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_watermark_6() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___watermark_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_watermark_6() const { return ___watermark_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_watermark_6() { return &___watermark_6; }
	inline void set_watermark_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___watermark_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watermark_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtempU3E__1_7() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CtempU3E__1_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CtempU3E__1_7() const { return ___U3CtempU3E__1_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CtempU3E__1_7() { return &___U3CtempU3E__1_7; }
	inline void set_U3CtempU3E__1_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CtempU3E__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtempU3E__1_7), (void*)value);
	}

	inline static int32_t get_offset_of_align_8() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___align_8)); }
	inline int32_t get_align_8() const { return ___align_8; }
	inline int32_t* get_address_of_align_8() { return &___align_8; }
	inline void set_align_8(int32_t value)
	{
		___align_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU24U3EimgType_11() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3EimgType_11)); }
	inline int32_t get_U3CU24U3EimgType_11() const { return ___U3CU24U3EimgType_11; }
	inline int32_t* get_address_of_U3CU24U3EimgType_11() { return &___U3CU24U3EimgType_11; }
	inline void set_U3CU24U3EimgType_11(int32_t value)
	{
		___U3CU24U3EimgType_11 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ewidth_12() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3Ewidth_12)); }
	inline int32_t get_U3CU24U3Ewidth_12() const { return ___U3CU24U3Ewidth_12; }
	inline int32_t* get_address_of_U3CU24U3Ewidth_12() { return &___U3CU24U3Ewidth_12; }
	inline void set_U3CU24U3Ewidth_12(int32_t value)
	{
		___U3CU24U3Ewidth_12 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Eheight_13() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3Eheight_13)); }
	inline int32_t get_U3CU24U3Eheight_13() const { return ___U3CU24U3Eheight_13; }
	inline int32_t* get_address_of_U3CU24U3Eheight_13() { return &___U3CU24U3Eheight_13; }
	inline void set_U3CU24U3Eheight_13(int32_t value)
	{
		___U3CU24U3Eheight_13 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ex_14() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3Ex_14)); }
	inline int32_t get_U3CU24U3Ex_14() const { return ___U3CU24U3Ex_14; }
	inline int32_t* get_address_of_U3CU24U3Ex_14() { return &___U3CU24U3Ex_14; }
	inline void set_U3CU24U3Ex_14(int32_t value)
	{
		___U3CU24U3Ex_14 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ey_15() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3Ey_15)); }
	inline int32_t get_U3CU24U3Ey_15() const { return ___U3CU24U3Ey_15; }
	inline int32_t* get_address_of_U3CU24U3Ey_15() { return &___U3CU24U3Ey_15; }
	inline void set_U3CU24U3Ey_15(int32_t value)
	{
		___U3CU24U3Ey_15 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ewatermark_16() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3Ewatermark_16)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CU24U3Ewatermark_16() const { return ___U3CU24U3Ewatermark_16; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CU24U3Ewatermark_16() { return &___U3CU24U3Ewatermark_16; }
	inline void set_U3CU24U3Ewatermark_16(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CU24U3Ewatermark_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU24U3Ewatermark_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ealign_17() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU24U3Ealign_17)); }
	inline int32_t get_U3CU24U3Ealign_17() const { return ___U3CU24U3Ealign_17; }
	inline int32_t* get_address_of_U3CU24U3Ealign_17() { return &___U3CU24U3Ealign_17; }
	inline void set_U3CU24U3Ealign_17(int32_t value)
	{
		___U3CU24U3Ealign_17 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_18() { return static_cast<int32_t>(offsetof(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1, ___U3CU3Ef__this_18)); }
	inline CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * get_U3CU3Ef__this_18() const { return ___U3CU3Ef__this_18; }
	inline CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB ** get_address_of_U3CU3Ef__this_18() { return &___U3CU3Ef__this_18; }
	inline void set_U3CU3Ef__this_18(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * value)
	{
		___U3CU3Ef__this_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__this_18), (void*)value);
	}
};


// CaptureAndSave/<SaveToAlbum>c__Iterator0
struct U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC  : public RuntimeObject
{
public:
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::x
	int32_t ___x_0;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::y
	int32_t ___y_1;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::width
	int32_t ___width_2;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::height
	int32_t ___height_3;
	// ImageType CaptureAndSave/<SaveToAlbum>c__Iterator0::imgType
	int32_t ___imgType_4;
	// UnityEngine.Texture2D CaptureAndSave/<SaveToAlbum>c__Iterator0::<t>__0
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CtU3E__0_5;
	// System.String CaptureAndSave/<SaveToAlbum>c__Iterator0::path
	String_t* ___path_6;
	// System.Boolean CaptureAndSave/<SaveToAlbum>c__Iterator0::saveToGallery
	bool ___saveToGallery_7;
	// UnityEngine.Texture2D CaptureAndSave/<SaveToAlbum>c__Iterator0::watermark
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark_8;
	// WatermarkAlignment CaptureAndSave/<SaveToAlbum>c__Iterator0::align
	int32_t ___align_9;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::$PC
	int32_t ___U24PC_10;
	// System.Object CaptureAndSave/<SaveToAlbum>c__Iterator0::$current
	RuntimeObject * ___U24current_11;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>x
	int32_t ___U3CU24U3Ex_12;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>y
	int32_t ___U3CU24U3Ey_13;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>width
	int32_t ___U3CU24U3Ewidth_14;
	// System.Int32 CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>height
	int32_t ___U3CU24U3Eheight_15;
	// ImageType CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>imgType
	int32_t ___U3CU24U3EimgType_16;
	// System.String CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>path
	String_t* ___U3CU24U3Epath_17;
	// System.Boolean CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>saveToGallery
	bool ___U3CU24U3EsaveToGallery_18;
	// UnityEngine.Texture2D CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>watermark
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CU24U3Ewatermark_19;
	// WatermarkAlignment CaptureAndSave/<SaveToAlbum>c__Iterator0::<$>align
	int32_t ___U3CU24U3Ealign_20;
	// CaptureAndSave CaptureAndSave/<SaveToAlbum>c__Iterator0::<>f__this
	CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * ___U3CU3Ef__this_21;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_imgType_4() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___imgType_4)); }
	inline int32_t get_imgType_4() const { return ___imgType_4; }
	inline int32_t* get_address_of_imgType_4() { return &___imgType_4; }
	inline void set_imgType_4(int32_t value)
	{
		___imgType_4 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E__0_5() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CtU3E__0_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CtU3E__0_5() const { return ___U3CtU3E__0_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CtU3E__0_5() { return &___U3CtU3E__0_5; }
	inline void set_U3CtU3E__0_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CtU3E__0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3E__0_5), (void*)value);
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_6), (void*)value);
	}

	inline static int32_t get_offset_of_saveToGallery_7() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___saveToGallery_7)); }
	inline bool get_saveToGallery_7() const { return ___saveToGallery_7; }
	inline bool* get_address_of_saveToGallery_7() { return &___saveToGallery_7; }
	inline void set_saveToGallery_7(bool value)
	{
		___saveToGallery_7 = value;
	}

	inline static int32_t get_offset_of_watermark_8() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___watermark_8)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_watermark_8() const { return ___watermark_8; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_watermark_8() { return &___watermark_8; }
	inline void set_watermark_8(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___watermark_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watermark_8), (void*)value);
	}

	inline static int32_t get_offset_of_align_9() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___align_9)); }
	inline int32_t get_align_9() const { return ___align_9; }
	inline int32_t* get_address_of_align_9() { return &___align_9; }
	inline void set_align_9(int32_t value)
	{
		___align_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}

	inline static int32_t get_offset_of_U24current_11() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U24current_11)); }
	inline RuntimeObject * get_U24current_11() const { return ___U24current_11; }
	inline RuntimeObject ** get_address_of_U24current_11() { return &___U24current_11; }
	inline void set_U24current_11(RuntimeObject * value)
	{
		___U24current_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24current_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ex_12() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Ex_12)); }
	inline int32_t get_U3CU24U3Ex_12() const { return ___U3CU24U3Ex_12; }
	inline int32_t* get_address_of_U3CU24U3Ex_12() { return &___U3CU24U3Ex_12; }
	inline void set_U3CU24U3Ex_12(int32_t value)
	{
		___U3CU24U3Ex_12 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ey_13() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Ey_13)); }
	inline int32_t get_U3CU24U3Ey_13() const { return ___U3CU24U3Ey_13; }
	inline int32_t* get_address_of_U3CU24U3Ey_13() { return &___U3CU24U3Ey_13; }
	inline void set_U3CU24U3Ey_13(int32_t value)
	{
		___U3CU24U3Ey_13 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ewidth_14() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Ewidth_14)); }
	inline int32_t get_U3CU24U3Ewidth_14() const { return ___U3CU24U3Ewidth_14; }
	inline int32_t* get_address_of_U3CU24U3Ewidth_14() { return &___U3CU24U3Ewidth_14; }
	inline void set_U3CU24U3Ewidth_14(int32_t value)
	{
		___U3CU24U3Ewidth_14 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Eheight_15() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Eheight_15)); }
	inline int32_t get_U3CU24U3Eheight_15() const { return ___U3CU24U3Eheight_15; }
	inline int32_t* get_address_of_U3CU24U3Eheight_15() { return &___U3CU24U3Eheight_15; }
	inline void set_U3CU24U3Eheight_15(int32_t value)
	{
		___U3CU24U3Eheight_15 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3EimgType_16() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3EimgType_16)); }
	inline int32_t get_U3CU24U3EimgType_16() const { return ___U3CU24U3EimgType_16; }
	inline int32_t* get_address_of_U3CU24U3EimgType_16() { return &___U3CU24U3EimgType_16; }
	inline void set_U3CU24U3EimgType_16(int32_t value)
	{
		___U3CU24U3EimgType_16 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Epath_17() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Epath_17)); }
	inline String_t* get_U3CU24U3Epath_17() const { return ___U3CU24U3Epath_17; }
	inline String_t** get_address_of_U3CU24U3Epath_17() { return &___U3CU24U3Epath_17; }
	inline void set_U3CU24U3Epath_17(String_t* value)
	{
		___U3CU24U3Epath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU24U3Epath_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsaveToGallery_18() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3EsaveToGallery_18)); }
	inline bool get_U3CU24U3EsaveToGallery_18() const { return ___U3CU24U3EsaveToGallery_18; }
	inline bool* get_address_of_U3CU24U3EsaveToGallery_18() { return &___U3CU24U3EsaveToGallery_18; }
	inline void set_U3CU24U3EsaveToGallery_18(bool value)
	{
		___U3CU24U3EsaveToGallery_18 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ewatermark_19() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Ewatermark_19)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CU24U3Ewatermark_19() const { return ___U3CU24U3Ewatermark_19; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CU24U3Ewatermark_19() { return &___U3CU24U3Ewatermark_19; }
	inline void set_U3CU24U3Ewatermark_19(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CU24U3Ewatermark_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU24U3Ewatermark_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ealign_20() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU24U3Ealign_20)); }
	inline int32_t get_U3CU24U3Ealign_20() const { return ___U3CU24U3Ealign_20; }
	inline int32_t* get_address_of_U3CU24U3Ealign_20() { return &___U3CU24U3Ealign_20; }
	inline void set_U3CU24U3Ealign_20(int32_t value)
	{
		___U3CU24U3Ealign_20 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_21() { return static_cast<int32_t>(offsetof(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC, ___U3CU3Ef__this_21)); }
	inline CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * get_U3CU3Ef__this_21() const { return ___U3CU3Ef__this_21; }
	inline CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB ** get_address_of_U3CU3Ef__this_21() { return &___U3CU3Ef__this_21; }
	inline void set_U3CU3Ef__this_21(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * value)
	{
		___U3CU3Ef__this_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__this_21), (void*)value);
	}
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


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// CaptureAndSaveEventListener/OnError
struct OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE  : public MulticastDelegate_t
{
public:

public:
};


// CaptureAndSaveEventListener/OnScreenShot
struct OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C  : public MulticastDelegate_t
{
public:

public:
};


// CaptureAndSaveEventListener/OnSuccess
struct OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CaptureAndSave
struct CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String CaptureAndSave::FILENAME_PREFIX
	String_t* ___FILENAME_PREFIX_4;
	// System.String CaptureAndSave::ALBUM_NAME
	String_t* ___ALBUM_NAME_5;
	// System.String CaptureAndSave::androidImagePath
	String_t* ___androidImagePath_6;
	// System.String CaptureAndSave::absAlbumPath
	String_t* ___absAlbumPath_7;
	// UnityEngine.Texture2D CaptureAndSave::tex
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex_8;

public:
	inline static int32_t get_offset_of_FILENAME_PREFIX_4() { return static_cast<int32_t>(offsetof(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB, ___FILENAME_PREFIX_4)); }
	inline String_t* get_FILENAME_PREFIX_4() const { return ___FILENAME_PREFIX_4; }
	inline String_t** get_address_of_FILENAME_PREFIX_4() { return &___FILENAME_PREFIX_4; }
	inline void set_FILENAME_PREFIX_4(String_t* value)
	{
		___FILENAME_PREFIX_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FILENAME_PREFIX_4), (void*)value);
	}

	inline static int32_t get_offset_of_ALBUM_NAME_5() { return static_cast<int32_t>(offsetof(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB, ___ALBUM_NAME_5)); }
	inline String_t* get_ALBUM_NAME_5() const { return ___ALBUM_NAME_5; }
	inline String_t** get_address_of_ALBUM_NAME_5() { return &___ALBUM_NAME_5; }
	inline void set_ALBUM_NAME_5(String_t* value)
	{
		___ALBUM_NAME_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALBUM_NAME_5), (void*)value);
	}

	inline static int32_t get_offset_of_androidImagePath_6() { return static_cast<int32_t>(offsetof(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB, ___androidImagePath_6)); }
	inline String_t* get_androidImagePath_6() const { return ___androidImagePath_6; }
	inline String_t** get_address_of_androidImagePath_6() { return &___androidImagePath_6; }
	inline void set_androidImagePath_6(String_t* value)
	{
		___androidImagePath_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___androidImagePath_6), (void*)value);
	}

	inline static int32_t get_offset_of_absAlbumPath_7() { return static_cast<int32_t>(offsetof(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB, ___absAlbumPath_7)); }
	inline String_t* get_absAlbumPath_7() const { return ___absAlbumPath_7; }
	inline String_t** get_address_of_absAlbumPath_7() { return &___absAlbumPath_7; }
	inline void set_absAlbumPath_7(String_t* value)
	{
		___absAlbumPath_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___absAlbumPath_7), (void*)value);
	}

	inline static int32_t get_offset_of_tex_8() { return static_cast<int32_t>(offsetof(CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB, ___tex_8)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_tex_8() const { return ___tex_8; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_tex_8() { return &___tex_8; }
	inline void set_tex_8(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___tex_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tex_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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



// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D CaptureAndSave::GetScreenShot(System.Int32,System.Int32,UnityEngine.Camera,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetScreenShot_m7D43AF7A4391F1EA65F6705B2BB2FE3FDC07E2C0 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, const RuntimeMethod* method);
// System.Void CaptureAndSave::SaveTexture(UnityEngine.Texture2D,System.String,ImageType,System.Boolean,System.Boolean,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, String_t* ___path1, int32_t ___imgType2, bool ___destroy3, bool ___saveToGallery4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener/OnError::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * __this, String_t* ___err0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Collections.IEnumerator CaptureAndSave::SaveToAlbum(System.Int32,System.Int32,System.Int32,System.Int32,System.String,ImageType,System.Boolean,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___path4, int32_t ___imgType5, bool ___saveToGallery6, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark7, int32_t ___align8, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Texture2D CaptureAndSave::AddWatermark(UnityEngine.Texture2D,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_AddWatermark_m6DE43361C72C40E024F31CC16C20D87C68EC85D8 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___background0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___align2, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.String CaptureAndSave::GetFullPath(System.String,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CaptureAndSave_GetFullPath_m8044177F4CAD2A6B77B5593A52B9F14616B789B7 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, int32_t ___imgType1, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70 (const RuntimeMethod* method);
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void CaptureAndSave::MoveImageToCameraRoll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_MoveImageToCameraRoll_m5AFD09AAF121FE55A86CEAEF7D266AEF9A42009C (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_mD49CCADA51268480B585733DD7C6540CCCC6EF5C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, int32_t ___options2, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener/OnSuccess::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void CaptureAndSave/<SaveToAlbum>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveToAlbumU3Ec__Iterator0__ctor_m61B320E59017621E0C6F518C42449967CFD87BF0 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Int64 System.DateTime::ToFileTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_ToFileTime_mF5AE8D0291727D395D3FEF4F32109437B361345E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String CaptureAndSave::GetFileName(ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CaptureAndSave_GetFileName_m86A765CCAF56F04E787478C85DE2231DFDB22612 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___imgType0, const RuntimeMethod* method);
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59 (int32_t ___folder0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void CaptureAndSave/<GetScreenPixels>c__Iterator1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScreenPixelsU3Ec__Iterator1__ctor_m3DDCCE2D879CE726110B4D27E53A6464029CA697 (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D CaptureAndSave::GetScreenShotFromCamera(System.Int32,System.Int32,UnityEngine.Camera,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetScreenShotFromCamera_m68C9DBA993BAFC50135598BD4679B0F2B57AC900 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark4, int32_t ___align5, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener/OnScreenShot::Invoke(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenShot_Invoke_m0B8805B39A792E4ACF293603D7F5C48682605AD1 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, const RuntimeMethod* method);
// System.Collections.IEnumerator CaptureAndSave::GetScreenPixels(System.Int32,System.Int32,System.Int32,System.Int32,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureAndSave_GetScreenPixels_m71379C69579D627602D0BC7725DF3085E56C720F (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method);
// System.Void CallNative::CopyImageToCameraRoll(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallNative_CopyImageToCameraRoll_m2718497CC9DEE71572E0C1EE596594FB44513AAE (String_t* ___path0, String_t* ___albumName1, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m0405411AE250222E046657B870C15D9B18D3573C (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method);
// System.Void CallNative::CopyVideoToCameraRoll(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallNative_CopyVideoToCameraRoll_m198CD369B765C851D9C68E9EDD875DF4DFBD8E6A (String_t* ___path0, String_t* ___albumName1, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.Void CallNative::MoveImageToCameraRoll(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallNative_MoveImageToCameraRoll_mA4E72C58A2889DB90855B90FF14432F77529DACC (String_t* ___path0, String_t* ___albumName1, const RuntimeMethod* method);
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_m3227B2C31F5BEBEDFC4E49209D32F67E14A11CE2 (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method);
// System.Void CallNative::MoveVideoToCameraRoll(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallNative_MoveVideoToCameraRoll_mA0576DBC6AF7BEB59F777EA47F1526B5DFB2E16B (String_t* ___path0, String_t* ___albumName1, const RuntimeMethod* method);
// UnityEngine.Texture2D CaptureAndSave::CombineTexture(UnityEngine.Texture2D,UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_CombineTexture_mEFC797A2CCC70EAC61EBD59FCDE58983E2BD4183 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___background0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___startX2, int32_t ___startY3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener::AddHandler_onError(CaptureAndSaveEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_AddHandler_onError_m9A098A2FD2840A757DEB22D50236641A45B2DDE0 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener::RemoveHandler_onError(CaptureAndSaveEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_RemoveHandler_onError_m317FDF30CE35A66972EA4D052EA9A2852CB0D0EF (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener::AddHandler_onSuccess(CaptureAndSaveEventListener/OnSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_AddHandler_onSuccess_m729B7E4B5DCF78805F9C94A7E26CF3C70CFD061D (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener::RemoveHandler_onSuccess(CaptureAndSaveEventListener/OnSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_RemoveHandler_onSuccess_mA3062AE3B9F231E6DA056B9BB4EAF6CAC9008DD4 (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener::AddHandler_onScreenShot(CaptureAndSaveEventListener/OnScreenShot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_AddHandler_onScreenShot_m97C5B68AF13A6EF9CB2E209C7F2BDB0BD89C9381 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___value0, const RuntimeMethod* method);
// System.Void CaptureAndSaveEventListener::RemoveHandler_onScreenShot(CaptureAndSaveEventListener/OnScreenShot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_RemoveHandler_onScreenShot_mF09F4CA0A547D31D233FBD0F75CD7D30962FAEA3 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D CaptureAndSave::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetPixels_mA824039556E59CFD92DFB5AC832FAD64A576264A (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const RuntimeMethod* method);
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
// System.Void CaptureAndSave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave__ctor_m5067D09C40F5B2D0A437B4C96CE3C49C4957F2AD (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DD538ABDD49CD8FB58D931653241472B03BBA7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CDCC27185EE0C6FDBFF3067012515E0C2EBC3DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_FILENAME_PREFIX_4(_stringLiteral0DD538ABDD49CD8FB58D931653241472B03BBA7E);
		__this->set_ALBUM_NAME_5(_stringLiteral1CDCC27185EE0C6FDBFF3067012515E0C2EBC3DB);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_androidImagePath_6(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_absAlbumPath_7(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::SetAlbumPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SetAlbumPath_mEAFAD870BEC8E0D783527114B4BC16EA8DFEEF48 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___albumPath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___albumPath0;
		__this->set_absAlbumPath_7(L_0);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(System.Int32,System.Int32,UnityEngine.Camera,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveToAlbum_m4AAAB1A44356AA9D32DFB6D6660B6FF96C1BA8B7 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___targetWidth0;
		int32_t L_1 = ___targetHeight1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera2;
		int32_t L_3 = ___imgType3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = CaptureAndSave_GetScreenShot_m7D43AF7A4391F1EA65F6705B2BB2FE3FDC07E2C0(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_6 = ___imgType3;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)1, (bool)1, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(System.Int32,System.Int32,UnityEngine.Camera,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveToAlbum_m79D67DFDF91769D81F75BBBF341E82CF1C8BD564 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark4, int32_t ___align5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___targetWidth0;
		int32_t L_1 = ___targetHeight1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera2;
		int32_t L_3 = ___imgType3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = CaptureAndSave_GetScreenShot_m7D43AF7A4391F1EA65F6705B2BB2FE3FDC07E2C0(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_6 = ___imgType3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___watermark4;
		int32_t L_8 = ___align5;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)1, (bool)1, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.Int32,System.Int32,UnityEngine.Camera,System.String,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveAtPath_mAF6FE0F3B2EB0DA3903C815E5C7B891B587C3423 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, String_t* ___path3, int32_t ___imgType4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetWidth0;
		int32_t L_1 = ___targetHeight1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera2;
		int32_t L_3 = ___imgType4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = CaptureAndSave_GetScreenShot_m7D43AF7A4391F1EA65F6705B2BB2FE3FDC07E2C0(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___path3;
		int32_t L_6 = ___imgType4;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)1, (bool)0, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.Int32,System.Int32,UnityEngine.Camera,System.String,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveAtPath_m74432ACBEDD4CC623186B4AB754E0CA9369C7155 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, String_t* ___path3, int32_t ___imgType4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetWidth0;
		int32_t L_1 = ___targetHeight1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera2;
		int32_t L_3 = ___imgType4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = CaptureAndSave_GetScreenShot_m7D43AF7A4391F1EA65F6705B2BB2FE3FDC07E2C0(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___path3;
		int32_t L_6 = ___imgType4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___watermark5;
		int32_t L_8 = ___align6;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)1, (bool)0, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.String,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveAtPath_m1E4E50EE9F7C14D7FD5B7FA426E8EEF04E408B7F (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, int32_t ___imgType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		String_t* L_6 = ___path0;
		int32_t L_7 = ___imgType1;
		RuntimeObject* L_8;
		L_8 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, 0, 0, L_4, L_5, L_6, L_7, (bool)0, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.String,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveAtPath_mDBCB716AFED8E45576B08E81BC4A96CCF7FD96D1 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, int32_t ___imgType1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark2, int32_t ___align3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		String_t* L_6 = ___path0;
		int32_t L_7 = ___imgType1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___watermark2;
		int32_t L_9 = ___align3;
		RuntimeObject* L_10;
		L_10 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, 0, 0, L_4, L_5, L_6, L_7, (bool)0, L_8, L_9, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.Int32,System.Int32,System.Int32,System.Int32,System.String,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveAtPath_mC3FC884F37CC6D1D92258CDC575F0D060EC76979 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___path4, int32_t ___imgType5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}

IL_0026:
	{
		int32_t L_4 = ___x0;
		int32_t L_5 = ___y1;
		int32_t L_6 = ___width2;
		int32_t L_7 = ___height3;
		String_t* L_8 = ___path4;
		int32_t L_9 = ___imgType5;
		RuntimeObject* L_10;
		L_10 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.Int32,System.Int32,System.Int32,System.Int32,System.String,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveAtPath_mD1C89F21CB1C44C8F2DE9713B2F6CDFA586D1520 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___path4, int32_t ___imgType5, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark6, int32_t ___align7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}

IL_0026:
	{
		int32_t L_4 = ___x0;
		int32_t L_5 = ___y1;
		int32_t L_6 = ___width2;
		int32_t L_7 = ___height3;
		String_t* L_8 = ___path4;
		int32_t L_9 = ___imgType5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ___watermark6;
		int32_t L_11 = ___align7;
		RuntimeObject* L_12;
		L_12 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, L_4, L_5, L_6, L_7, L_8, L_9, (bool)0, L_10, L_11, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::SaveTextureAtPath(UnityEngine.Texture2D,System.String,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SaveTextureAtPath_mD84F25ED255C38B53773AF610BAF00C7F224730C (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, String_t* ___path1, int32_t ___imgType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___tex2D0;
		String_t* L_5 = ___path1;
		int32_t L_6 = ___imgType2;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)0, (bool)0, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::SaveTextureAtPath(UnityEngine.Texture2D,System.String,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SaveTextureAtPath_mC10C84D0230895DD92C2BF96E250CA8D056B04E4 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, String_t* ___path1, int32_t ___imgType2, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark3, int32_t ___align4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral45380233CC6CEAAF0EA77C89F3737595C829C450, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___tex2D0;
		String_t* L_5 = ___path1;
		int32_t L_6 = ___imgType2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___watermark3;
		int32_t L_8 = ___align4;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)0, (bool)0, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::SaveTextureToGallery(UnityEngine.Texture2D,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SaveTextureToGallery_mEFB7674C42048F67AE9A1AA371E4A534E952F2C6 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, int32_t ___imgType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A8EE65754F788BF47D4F8E1CEEBE7E19515A093);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex2D0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral0A8EE65754F788BF47D4F8E1CEEBE7E19515A093, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}

IL_0026:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___tex2D0;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_6 = ___imgType1;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)0, (bool)1, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::SaveTextureToGallery(UnityEngine.Texture2D,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SaveTextureToGallery_m211627831D723C03D691D9DA0ACE2B83057CEA94 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, int32_t ___imgType1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark2, int32_t ___align3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A8EE65754F788BF47D4F8E1CEEBE7E19515A093);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___tex2D0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_2 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_3 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_3);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_3, _stringLiteral0A8EE65754F788BF47D4F8E1CEEBE7E19515A093, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}

IL_0026:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___tex2D0;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_6 = ___imgType1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___watermark2;
		int32_t L_8 = ___align3;
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(__this, L_4, L_5, L_6, (bool)0, (bool)1, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveToAlbum_m5AC6AECBFEBE2F32FE5915D2D736222194E59DCD (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___imgType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_3 = ___imgType0;
		RuntimeObject* L_4;
		L_4 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, 0, 0, L_0, L_1, L_2, L_3, (bool)1, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveToAlbum_m53D9C8E5AC997E27D21D1B77BB0FAF3B06570DC2 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___imgType0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___align2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_3 = ___imgType0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___watermark1;
		int32_t L_5 = ___align2;
		RuntimeObject* L_6;
		L_6 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, 0, 0, L_0, L_1, L_2, L_3, (bool)1, L_4, L_5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveToAlbum_m650AE2D3BF85453DD9AD38538B39DDDA87BAAF80 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___width2;
		int32_t L_3 = ___height3;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_5 = ___imgType4;
		RuntimeObject* L_6;
		L_6 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(System.Int32,System.Int32,System.Int32,System.Int32,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CaptureAndSaveToAlbum_m551F6B19A9FAEC923A905383EB62F08F5F61B27E (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___width2;
		int32_t L_3 = ___height3;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_5 = ___imgType4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___watermark5;
		int32_t L_7 = ___align6;
		RuntimeObject* L_8;
		L_8 = CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9(__this, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1, L_6, L_7, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::SaveTexture(UnityEngine.Texture2D,System.String,ImageType,System.Boolean,System.Boolean,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, String_t* ___path1, int32_t ___imgType2, bool ___destroy3, bool ___saveToGallery4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___watermark5;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_1;
			L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_003a;
			}
		}

IL_000f:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___tex2D0;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___watermark5;
			int32_t L_4 = ___align6;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5;
			L_5 = CaptureAndSave_AddWatermark_m6DE43361C72C40E024F31CC16C20D87C68EC85D8(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			int32_t L_6 = ___imgType2;
			if ((!(((uint32_t)L_6) == ((uint32_t)1))))
			{
				goto IL_002e;
			}
		}

IL_0022:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
			L_8 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_7, /*hidden argument*/NULL);
			V_0 = L_8;
			goto IL_0035;
		}

IL_002e:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
			L_10 = ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F(L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_0035:
		{
			goto IL_0054;
		}

IL_003a:
		{
			int32_t L_11 = ___imgType2;
			if ((!(((uint32_t)L_11) == ((uint32_t)1))))
			{
				goto IL_004d;
			}
		}

IL_0041:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = ___tex2D0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
			L_13 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_12, /*hidden argument*/NULL);
			V_0 = L_13;
			goto IL_0054;
		}

IL_004d:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = ___tex2D0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
			L_15 = ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F(L_14, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_0054:
		{
			String_t* L_16 = ___path1;
			int32_t L_17 = ___imgType2;
			String_t* L_18;
			L_18 = CaptureAndSave_GetFullPath_m8044177F4CAD2A6B77B5593A52B9F14616B789B7(__this, L_16, L_17, /*hidden argument*/NULL);
			V_2 = L_18;
			String_t* L_19 = V_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_0;
			File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_19, L_20, /*hidden argument*/NULL);
			bool L_21 = ___destroy3;
			if (!L_21)
			{
				goto IL_0074;
			}
		}

IL_006b:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = ___tex2D0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_22, /*hidden argument*/NULL);
			___tex2D0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		}

IL_0074:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_24;
			L_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0085;
			}
		}

IL_007f:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
		}

IL_0085:
		{
			V_1 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_26;
			L_26 = Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9(/*hidden argument*/NULL);
			bool L_27 = ___saveToGallery4;
			if (!L_27)
			{
				goto IL_00b2;
			}
		}

IL_009b:
		{
			int32_t L_28;
			L_28 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
			if ((!(((uint32_t)L_28) == ((uint32_t)8))))
			{
				goto IL_00b2;
			}
		}

IL_00a6:
		{
			String_t* L_29 = V_2;
			CaptureAndSave_MoveImageToCameraRoll_m5AFD09AAF121FE55A86CEAEF7D266AEF9A42009C(__this, L_29, /*hidden argument*/NULL);
			goto IL_0106;
		}

IL_00b2:
		{
			bool L_30 = ___saveToGallery4;
			if (!L_30)
			{
				goto IL_00f1;
			}
		}

IL_00b9:
		{
			int32_t L_31;
			L_31 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
			if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_00f1;
			}
		}

IL_00c5:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
			L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			String_t* L_33 = V_2;
			NullCheck(L_32);
			GameObject_SendMessage_mD49CCADA51268480B585733DD7C6540CCCC6EF5C(L_32, _stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4, L_33, 1, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_34 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_34)
			{
				goto IL_00ec;
			}
		}

IL_00e1:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_35 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			String_t* L_36 = V_2;
			NullCheck(L_35);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_35, L_36, /*hidden argument*/NULL);
		}

IL_00ec:
		{
			goto IL_0106;
		}

IL_00f1:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_37 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_37)
			{
				goto IL_0106;
			}
		}

IL_00fb:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_38 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			String_t* L_39 = V_2;
			NullCheck(L_38);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_38, L_39, /*hidden argument*/NULL);
		}

IL_0106:
		{
			goto IL_012b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010b;
		}
		throw e;
	}

CATCH_010b:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_40 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_40)
			{
				goto IL_0126;
			}
		}

IL_0116:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_41 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_42 = V_3;
			NullCheck(L_42);
			String_t* L_43;
			L_43 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_42);
			NullCheck(L_41);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_41, L_43, /*hidden argument*/NULL);
		}

IL_0126:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_012b;
		}
	} // end catch (depth: 1)

IL_012b:
	{
		return;
	}
}
// System.Collections.IEnumerator CaptureAndSave::SaveToAlbum(System.Int32,System.Int32,System.Int32,System.Int32,System.String,ImageType,System.Boolean,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureAndSave_SaveToAlbum_mA277EB358ACB7A06966D06D5FADE055DD06AD4B9 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___path4, int32_t ___imgType5, bool ___saveToGallery6, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark7, int32_t ___align8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * V_0 = NULL;
	{
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_0 = (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC *)il2cpp_codegen_object_new(U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC_il2cpp_TypeInfo_var);
		U3CSaveToAlbumU3Ec__Iterator0__ctor_m61B320E59017621E0C6F518C42449967CFD87BF0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_1 = V_0;
		int32_t L_2 = ___x0;
		NullCheck(L_1);
		L_1->set_x_0(L_2);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_3 = V_0;
		int32_t L_4 = ___y1;
		NullCheck(L_3);
		L_3->set_y_1(L_4);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_5 = V_0;
		int32_t L_6 = ___width2;
		NullCheck(L_5);
		L_5->set_width_2(L_6);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_7 = V_0;
		int32_t L_8 = ___height3;
		NullCheck(L_7);
		L_7->set_height_3(L_8);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_9 = V_0;
		int32_t L_10 = ___imgType5;
		NullCheck(L_9);
		L_9->set_imgType_4(L_10);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_11 = V_0;
		String_t* L_12 = ___path4;
		NullCheck(L_11);
		L_11->set_path_6(L_12);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_13 = V_0;
		bool L_14 = ___saveToGallery6;
		NullCheck(L_13);
		L_13->set_saveToGallery_7(L_14);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_15 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___watermark7;
		NullCheck(L_15);
		L_15->set_watermark_8(L_16);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_17 = V_0;
		int32_t L_18 = ___align8;
		NullCheck(L_17);
		L_17->set_align_9(L_18);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_19 = V_0;
		int32_t L_20 = ___x0;
		NullCheck(L_19);
		L_19->set_U3CU24U3Ex_12(L_20);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_21 = V_0;
		int32_t L_22 = ___y1;
		NullCheck(L_21);
		L_21->set_U3CU24U3Ey_13(L_22);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_23 = V_0;
		int32_t L_24 = ___width2;
		NullCheck(L_23);
		L_23->set_U3CU24U3Ewidth_14(L_24);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_25 = V_0;
		int32_t L_26 = ___height3;
		NullCheck(L_25);
		L_25->set_U3CU24U3Eheight_15(L_26);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_27 = V_0;
		int32_t L_28 = ___imgType5;
		NullCheck(L_27);
		L_27->set_U3CU24U3EimgType_16(L_28);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_29 = V_0;
		String_t* L_30 = ___path4;
		NullCheck(L_29);
		L_29->set_U3CU24U3Epath_17(L_30);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_31 = V_0;
		bool L_32 = ___saveToGallery6;
		NullCheck(L_31);
		L_31->set_U3CU24U3EsaveToGallery_18(L_32);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_33 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = ___watermark7;
		NullCheck(L_33);
		L_33->set_U3CU24U3Ewatermark_19(L_34);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_35 = V_0;
		int32_t L_36 = ___align8;
		NullCheck(L_35);
		L_35->set_U3CU24U3Ealign_20(L_36);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_37 = V_0;
		NullCheck(L_37);
		L_37->set_U3CU3Ef__this_21(__this);
		U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * L_38 = V_0;
		return L_38;
	}
}
// System.String CaptureAndSave::GetFileName(ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CaptureAndSave_GetFileName_m86A765CCAF56F04E787478C85DE2231DFDB22612 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___imgType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		String_t* L_1 = __this->get_FILENAME_PREFIX_4();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_3;
		goto IL_0032;
	}

IL_0021:
	{
		String_t* L_4 = __this->get_FILENAME_PREFIX_4();
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0032:
	{
		int32_t L_6 = ___imgType0;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8;
		L_8 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_1 = L_8;
		int64_t L_9;
		L_9 = DateTime_ToFileTime_mF5AE8D0291727D395D3FEF4F32109437B361345E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		int64_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_7, L_11, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0080;
	}

IL_005b:
	{
		int32_t L_13 = ___imgType0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_15;
		L_15 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_2 = L_15;
		int64_t L_16;
		L_16 = DateTime_ToFileTime_mF5AE8D0291727D395D3FEF4F32109437B361345E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
		int64_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_14, L_18, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0080:
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.String CaptureAndSave::GetFullPath(System.String,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CaptureAndSave_GetFullPath_m8044177F4CAD2A6B77B5593A52B9F14616B789B7 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, int32_t ___imgType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___path0;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_3 = ___imgType1;
		String_t* L_4;
		L_4 = CaptureAndSave_GetFileName_m86A765CCAF56F04E787478C85DE2231DFDB22612(__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = __this->get_absAlbumPath_7();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_7;
		L_7 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_8;
		L_8 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_9;
		L_9 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)13))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_10;
		L_10 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11;
		L_11 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)7))))
		{
			goto IL_00ac;
		}
	}

IL_005c:
	{
		String_t* L_12 = __this->get_ALBUM_NAME_5();
		bool L_13;
		L_13 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_14;
		L_14 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
		String_t* L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00ac;
	}

IL_007f:
	{
		String_t* L_17;
		L_17 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
		String_t* L_18 = __this->get_ALBUM_NAME_5();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_22 = V_2;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_23;
		L_23 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_22, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		String_t* L_24 = V_2;
		String_t* L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
	}

IL_00ac:
	{
		int32_t L_27;
		L_27 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)8))))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_28;
		L_28 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
	}

IL_00c3:
	{
		int32_t L_31;
		L_31 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00fd;
		}
	}
	{
		String_t* L_32 = __this->get_androidImagePath_6();
		bool L_33;
		L_33 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_34;
		L_34 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_34, L_35, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_00fd;
	}

IL_00f0:
	{
		String_t* L_37 = __this->get_androidImagePath_6();
		String_t* L_38 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_37, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
	}

IL_00fd:
	{
		goto IL_012b;
	}

IL_0102:
	{
		String_t* L_40 = __this->get_absAlbumPath_7();
		bool L_41;
		L_41 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_011e;
		}
	}
	{
		String_t* L_42 = __this->get_absAlbumPath_7();
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_43;
		L_43 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_42, /*hidden argument*/NULL);
	}

IL_011e:
	{
		String_t* L_44 = __this->get_absAlbumPath_7();
		String_t* L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_44, L_45, /*hidden argument*/NULL);
		V_0 = L_46;
	}

IL_012b:
	{
		String_t* L_47 = V_0;
		return L_47;
	}
}
// UnityEngine.Texture2D CaptureAndSave::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetPixels_mA824039556E59CFD92DFB5AC832FAD64A576264A (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		int32_t L_0 = ___imgType4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		V_0 = 5;
		goto IL_0011;
	}

IL_000f:
	{
		V_0 = 3;
	}

IL_0011:
	{
		int32_t L_1 = ___width2;
		int32_t L_2 = ___height3;
		int32_t L_3 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_4, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = V_1;
		int32_t L_6 = ___x0;
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_8 = ___height3;
		int32_t L_9 = ___y1;
		int32_t L_10 = ___width2;
		int32_t L_11 = ___height3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_12), ((float)((float)L_6)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)), (int32_t)L_9)))), ((float)((float)L_10)), ((float)((float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_5, L_12, 0, 0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = V_1;
		NullCheck(L_13);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_13, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = V_1;
		return L_14;
	}
}
// System.Collections.IEnumerator CaptureAndSave::GetScreenPixels(System.Int32,System.Int32,System.Int32,System.Int32,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureAndSave_GetScreenPixels_m71379C69579D627602D0BC7725DF3085E56C720F (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * V_0 = NULL;
	{
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_0 = (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 *)il2cpp_codegen_object_new(U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1_il2cpp_TypeInfo_var);
		U3CGetScreenPixelsU3Ec__Iterator1__ctor_m3DDCCE2D879CE726110B4D27E53A6464029CA697(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_1 = V_0;
		int32_t L_2 = ___imgType4;
		NullCheck(L_1);
		L_1->set_imgType_0(L_2);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_3 = V_0;
		int32_t L_4 = ___width2;
		NullCheck(L_3);
		L_3->set_width_2(L_4);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_5 = V_0;
		int32_t L_6 = ___height3;
		NullCheck(L_5);
		L_5->set_height_3(L_6);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_7 = V_0;
		int32_t L_8 = ___x0;
		NullCheck(L_7);
		L_7->set_x_4(L_8);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_9 = V_0;
		int32_t L_10 = ___y1;
		NullCheck(L_9);
		L_9->set_y_5(L_10);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_11 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = ___watermark5;
		NullCheck(L_11);
		L_11->set_watermark_6(L_12);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_13 = V_0;
		int32_t L_14 = ___align6;
		NullCheck(L_13);
		L_13->set_align_8(L_14);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_15 = V_0;
		int32_t L_16 = ___imgType4;
		NullCheck(L_15);
		L_15->set_U3CU24U3EimgType_11(L_16);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_17 = V_0;
		int32_t L_18 = ___width2;
		NullCheck(L_17);
		L_17->set_U3CU24U3Ewidth_12(L_18);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_19 = V_0;
		int32_t L_20 = ___height3;
		NullCheck(L_19);
		L_19->set_U3CU24U3Eheight_13(L_20);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_21 = V_0;
		int32_t L_22 = ___x0;
		NullCheck(L_21);
		L_21->set_U3CU24U3Ex_14(L_22);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_23 = V_0;
		int32_t L_24 = ___y1;
		NullCheck(L_23);
		L_23->set_U3CU24U3Ey_15(L_24);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_25 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = ___watermark5;
		NullCheck(L_25);
		L_25->set_U3CU24U3Ewatermark_16(L_26);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_27 = V_0;
		int32_t L_28 = ___align6;
		NullCheck(L_27);
		L_27->set_U3CU24U3Ealign_17(L_28);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_29 = V_0;
		NullCheck(L_29);
		L_29->set_U3CU3Ef__this_18(__this);
		U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * L_30 = V_0;
		return L_30;
	}
}
// UnityEngine.Texture2D CaptureAndSave::GetScreenShot(System.Int32,System.Int32,UnityEngine.Camera,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetScreenShot_m7D43AF7A4391F1EA65F6705B2BB2FE3FDC07E2C0 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetWidth0;
		int32_t L_1 = ___targetHeight1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera2;
		int32_t L_3 = ___imgType3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4;
		L_4 = CaptureAndSave_GetScreenShotFromCamera_m68C9DBA993BAFC50135598BD4679B0F2B57AC900(__this, L_0, L_1, L_2, L_3, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Texture2D CaptureAndSave::GetScreenShot(System.Int32,System.Int32,UnityEngine.Camera,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetScreenShot_mDF2AD8BCCB26A11865261B6B8960B67E4D387519 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark4, int32_t ___align5, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetWidth0;
		int32_t L_1 = ___targetHeight1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera2;
		int32_t L_3 = ___imgType3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___watermark4;
		int32_t L_5 = ___align5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6;
		L_6 = CaptureAndSave_GetScreenShotFromCamera_m68C9DBA993BAFC50135598BD4679B0F2B57AC900(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Texture2D CaptureAndSave::GetScreenShotFromCamera(System.Int32,System.Int32,UnityEngine.Camera,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_GetScreenShotFromCamera_m68C9DBA993BAFC50135598BD4679B0F2B57AC900 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, int32_t ___imgType3, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark4, int32_t ___align5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_4 = NULL;
	int32_t V_5 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_6 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_7 = NULL;
	{
		int32_t L_0 = ___targetWidth0;
		V_0 = L_0;
		int32_t L_1 = ___targetHeight1;
		V_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF(L_4, L_2, L_3, ((int32_t)24), /*hidden argument*/NULL);
		V_2 = L_4;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		V_3 = L_5;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = ___camera2;
		NullCheck(L_6);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7;
		L_7 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = ___camera2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = V_2;
		NullCheck(L_8);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___imgType3;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		V_5 = 5;
		goto IL_0036;
	}

IL_0033:
	{
		V_5 = 3;
	}

IL_0036:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_14, L_11, L_12, L_13, (bool)0, /*hidden argument*/NULL);
		V_6 = L_14;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = ___camera2;
		NullCheck(L_15);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_15, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_16, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = V_6;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_20), (0.0f), (0.0f), ((float)((float)L_18)), ((float)((float)L_19)), /*hidden argument*/NULL);
		NullCheck(L_17);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_17, L_20, 0, 0, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = V_6;
		NullCheck(L_21);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_21, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22 = ___camera2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = V_4;
		NullCheck(L_22);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_22, L_23, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_3;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_24, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = ___watermark4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00a8;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = V_6;
		V_7 = L_27;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_6;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_29 = ___watermark4;
		int32_t L_30 = ___align5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31;
		L_31 = CaptureAndSave_AddWatermark_m6DE43361C72C40E024F31CC16C20D87C68EC85D8(__this, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
		V_7 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_00a8:
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_33 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onScreenShotInvoker_2();
		if (!L_33)
		{
			goto IL_00be;
		}
	}
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_34 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onScreenShotInvoker_2();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = V_6;
		NullCheck(L_34);
		OnScreenShot_Invoke_m0B8805B39A792E4ACF293603D7F5C48682605AD1(L_34, L_35, /*hidden argument*/NULL);
	}

IL_00be:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_6;
		return L_36;
	}
}
// System.Void CaptureAndSave::GetScreenShot(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_GetScreenShot_mF470802BD88CBD33728D11041496F757FC8F08E2 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width2;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___height3;
		if (L_1)
		{
			goto IL_000e;
		}
	}

IL_000d:
	{
		return;
	}

IL_000e:
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		int32_t L_4 = ___width2;
		int32_t L_5 = ___height3;
		int32_t L_6 = ___imgType4;
		RuntimeObject* L_7;
		L_7 = CaptureAndSave_GetScreenPixels_m71379C69579D627602D0BC7725DF3085E56C720F(__this, L_2, L_3, L_4, L_5, L_6, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::GetScreenShot(System.Int32,System.Int32,System.Int32,System.Int32,ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_GetScreenShot_m6B3323B029720218A3FC6F73296103C378C73401 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark5, int32_t ___align6, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width2;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___height3;
		if (L_1)
		{
			goto IL_000e;
		}
	}

IL_000d:
	{
		return;
	}

IL_000e:
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		int32_t L_4 = ___width2;
		int32_t L_5 = ___height3;
		int32_t L_6 = ___imgType4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___watermark5;
		int32_t L_8 = ___align6;
		RuntimeObject* L_9;
		L_9 = CaptureAndSave_GetScreenPixels_m71379C69579D627602D0BC7725DF3085E56C720F(__this, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::GetFullScreenShot(ImageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_GetFullScreenShot_mEC283B8AB3DE0426981DF5FE3850625C579DDD77 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___imgType0, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_2 = ___imgType0;
		RuntimeObject* L_3;
		L_3 = CaptureAndSave_GetScreenPixels_m71379C69579D627602D0BC7725DF3085E56C720F(__this, 0, 0, L_0, L_1, L_2, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::GetFullScreenShot(ImageType,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_GetFullScreenShot_mCD3F5B2B05AA7EB05E23B655E3430CFE9F4D88FA (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, int32_t ___imgType0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___align2, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_2 = ___imgType0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___watermark1;
		int32_t L_4 = ___align2;
		RuntimeObject* L_5;
		L_5 = CaptureAndSave_GetScreenPixels_m71379C69579D627602D0BC7725DF3085E56C720F(__this, 0, 0, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSave::CopyImageToCameraRoll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CopyImageToCameraRoll_m064BE3AFBFCCE38FA1FACC21A791BCEB134214EA (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3546314B245A532DA02D88063D24DAD7121927);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___path0;
		String_t* L_2 = __this->get_ALBUM_NAME_5();
		CallNative_CopyImageToCameraRoll_m2718497CC9DEE71572E0C1EE596594FB44513AAE(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0179;
	}

IL_001c:
	{
		int32_t L_3;
		L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a0;
		}
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_4 = __this->get_androidImagePath_6();
			String_t* L_5 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_6;
			L_6 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_5, /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_4, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			String_t* L_8 = ___path0;
			String_t* L_9 = V_0;
			File_Copy_m0405411AE250222E046657B870C15D9B18D3573C(L_8, L_9, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
			L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			String_t* L_11 = V_0;
			NullCheck(L_10);
			GameObject_SendMessage_mD49CCADA51268480B585733DD7C6540CCCC6EF5C(L_10, _stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4, L_11, 1, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_12 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_12)
			{
				goto IL_006c;
			}
		}

IL_005d:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_13 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_13);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_13, _stringLiteral6B3546314B245A532DA02D88063D24DAD7121927, /*hidden argument*/NULL);
		}

IL_006c:
		{
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_14 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_14)
			{
				goto IL_0096;
			}
		}

IL_007c:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_15 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
			String_t* L_18;
			L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B76690551B8F032A5B1376B6898AF93394734F7)), L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_15, L_18, /*hidden argument*/NULL);
		}

IL_0096:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_009b;
		}
	} // end catch (depth: 1)

IL_009b:
	{
		goto IL_0179;
	}

IL_00a0:
	{
		int32_t L_19;
		L_19 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_19) == ((int32_t)2)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_20;
		L_20 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_21;
		L_21 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)13))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_22;
		L_22 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_23;
		L_23 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)7))))
		{
			goto IL_0179;
		}
	}

IL_00d7:
	{
		String_t* L_24 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_24;
		String_t* L_25 = __this->get_ALBUM_NAME_5();
		bool L_26;
		L_26 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_27;
		L_27 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
		V_2 = L_27;
		goto IL_011f;
	}

IL_00fa:
	{
		String_t* L_28;
		L_28 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
		String_t* L_29 = __this->get_ALBUM_NAME_5();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_33 = V_2;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_34;
		L_34 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_33, /*hidden argument*/NULL);
	}

IL_011f:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_35 = ___path0;
			String_t* L_36 = V_2;
			String_t* L_37 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_38;
			L_38 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_37, /*hidden argument*/NULL);
			String_t* L_39;
			L_39 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_36, L_38, /*hidden argument*/NULL);
			File_Copy_m0405411AE250222E046657B870C15D9B18D3573C(L_35, L_39, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_40 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_40)
			{
				goto IL_014a;
			}
		}

IL_013b:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_41 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_41);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_41, _stringLiteral6B3546314B245A532DA02D88063D24DAD7121927, /*hidden argument*/NULL);
		}

IL_014a:
		{
			goto IL_0179;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014f;
		}
		throw e;
	}

CATCH_014f:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_42 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_42)
			{
				goto IL_0174;
			}
		}

IL_015a:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_43 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_44 = V_3;
			NullCheck(L_44);
			String_t* L_45;
			L_45 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_44);
			String_t* L_46;
			L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B76690551B8F032A5B1376B6898AF93394734F7)), L_45, /*hidden argument*/NULL);
			NullCheck(L_43);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_43, L_46, /*hidden argument*/NULL);
		}

IL_0174:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0179;
		}
	} // end catch (depth: 1)

IL_0179:
	{
		return;
	}
}
// System.Void CaptureAndSave::CopyVideoToCameraRoll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_CopyVideoToCameraRoll_mD548D98131E2E0370DDB4FB1B650E8BE0C2E78E0 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___path0;
		String_t* L_2 = __this->get_ALBUM_NAME_5();
		CallNative_CopyVideoToCameraRoll_m198CD369B765C851D9C68E9EDD875DF4DFBD8E6A(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0181;
	}

IL_001c:
	{
		int32_t L_3;
		L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00c5;
		}
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_4 = __this->get_androidImagePath_6();
			V_0 = L_4;
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_6;
			L_6 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_5, /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_6, _stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2, /*hidden argument*/NULL);
			V_0 = L_7;
			String_t* L_8 = V_0;
			bool L_9;
			L_9 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0052;
			}
		}

IL_004b:
		{
			String_t* L_10 = V_0;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_11;
			L_11 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_10, /*hidden argument*/NULL);
		}

IL_0052:
		{
			String_t* L_12 = V_0;
			String_t* L_13 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_14;
			L_14 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_13, /*hidden argument*/NULL);
			String_t* L_15;
			L_15 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_12, L_14, /*hidden argument*/NULL);
			V_0 = L_15;
			String_t* L_16 = ___path0;
			String_t* L_17 = V_0;
			File_Copy_m0405411AE250222E046657B870C15D9B18D3573C(L_16, L_17, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
			L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			String_t* L_19 = V_0;
			NullCheck(L_18);
			GameObject_SendMessage_mD49CCADA51268480B585733DD7C6540CCCC6EF5C(L_18, _stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4, L_19, 1, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_20 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_20)
			{
				goto IL_0091;
			}
		}

IL_0082:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_21 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_21);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_21, _stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED, /*hidden argument*/NULL);
		}

IL_0091:
		{
			goto IL_00c0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_22 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_22)
			{
				goto IL_00bb;
			}
		}

IL_00a1:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_23 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_24 = V_1;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_24);
			String_t* L_26;
			L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral126ADC8BF06A49ABFFF099E5707C5F52C28D3357)), L_25, /*hidden argument*/NULL);
			NullCheck(L_23);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_23, L_26, /*hidden argument*/NULL);
		}

IL_00bb:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	} // end catch (depth: 1)

IL_00c0:
	{
		goto IL_0181;
	}

IL_00c5:
	{
		int32_t L_27;
		L_27 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_28;
		L_28 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_29;
		L_29 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)13))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_30;
		L_30 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_31;
		L_31 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)7))))
		{
			goto IL_0181;
		}
	}

IL_00fc:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_32;
			L_32 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
			V_2 = L_32;
			String_t* L_33 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_34;
			L_34 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_33, /*hidden argument*/NULL);
			String_t* L_35;
			L_35 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_34, _stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2, /*hidden argument*/NULL);
			V_2 = L_35;
			String_t* L_36 = V_2;
			bool L_37;
			L_37 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_36, /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_0127;
			}
		}

IL_0120:
		{
			String_t* L_38 = V_2;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_39;
			L_39 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_38, /*hidden argument*/NULL);
		}

IL_0127:
		{
			String_t* L_40 = ___path0;
			String_t* L_41 = V_2;
			String_t* L_42 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_43;
			L_43 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_42, /*hidden argument*/NULL);
			String_t* L_44;
			L_44 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_41, L_43, /*hidden argument*/NULL);
			File_Copy_m0405411AE250222E046657B870C15D9B18D3573C(L_40, L_44, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_45 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_45)
			{
				goto IL_0152;
			}
		}

IL_0143:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_46 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_46);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_46, _stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED, /*hidden argument*/NULL);
		}

IL_0152:
		{
			goto IL_0181;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0157;
		}
		throw e;
	}

CATCH_0157:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_47 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_47)
			{
				goto IL_017c;
			}
		}

IL_0162:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_48 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_49 = V_3;
			NullCheck(L_49);
			String_t* L_50;
			L_50 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_49);
			String_t* L_51;
			L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral126ADC8BF06A49ABFFF099E5707C5F52C28D3357)), L_50, /*hidden argument*/NULL);
			NullCheck(L_48);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_48, L_51, /*hidden argument*/NULL);
		}

IL_017c:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0181;
		}
	} // end catch (depth: 1)

IL_0181:
	{
		return;
	}
}
// System.Void CaptureAndSave::MoveImageToCameraRoll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_MoveImageToCameraRoll_m5AFD09AAF121FE55A86CEAEF7D266AEF9A42009C (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3546314B245A532DA02D88063D24DAD7121927);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___path0;
		String_t* L_2 = __this->get_ALBUM_NAME_5();
		CallNative_MoveImageToCameraRoll_mA4E72C58A2889DB90855B90FF14432F77529DACC(L_1, L_2, /*hidden argument*/NULL);
		goto IL_017b;
	}

IL_001c:
	{
		int32_t L_3;
		L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a0;
		}
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_4 = __this->get_androidImagePath_6();
			String_t* L_5 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_6;
			L_6 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_5, /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_4, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			String_t* L_8 = ___path0;
			String_t* L_9 = V_0;
			File_Move_m3227B2C31F5BEBEDFC4E49209D32F67E14A11CE2(L_8, L_9, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
			L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			String_t* L_11 = V_0;
			NullCheck(L_10);
			GameObject_SendMessage_mD49CCADA51268480B585733DD7C6540CCCC6EF5C(L_10, _stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4, L_11, 1, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_12 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_12)
			{
				goto IL_006c;
			}
		}

IL_005d:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_13 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_13);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_13, _stringLiteral6B3546314B245A532DA02D88063D24DAD7121927, /*hidden argument*/NULL);
		}

IL_006c:
		{
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_14 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_14)
			{
				goto IL_0096;
			}
		}

IL_007c:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_15 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
			String_t* L_18;
			L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B76690551B8F032A5B1376B6898AF93394734F7)), L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_15, L_18, /*hidden argument*/NULL);
		}

IL_0096:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_009b;
		}
	} // end catch (depth: 1)

IL_009b:
	{
		goto IL_017b;
	}

IL_00a0:
	{
		int32_t L_19;
		L_19 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_19) == ((int32_t)2)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_20;
		L_20 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_21;
		L_21 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)13))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_22;
		L_22 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_23;
		L_23 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)7))))
		{
			goto IL_017b;
		}
	}

IL_00d7:
	{
		String_t* L_24 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_24;
		String_t* L_25 = __this->get_ALBUM_NAME_5();
		bool L_26;
		L_26 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_27;
		L_27 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
		V_2 = L_27;
		goto IL_011f;
	}

IL_00fa:
	{
		String_t* L_28;
		L_28 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
		String_t* L_29 = __this->get_ALBUM_NAME_5();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_33 = V_2;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_34;
		L_34 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_33, /*hidden argument*/NULL);
	}

IL_011f:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_35 = V_2;
			String_t* L_36 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_37;
			L_37 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_36, /*hidden argument*/NULL);
			String_t* L_38;
			L_38 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_35, L_37, /*hidden argument*/NULL);
			V_2 = L_38;
			String_t* L_39 = ___path0;
			String_t* L_40 = V_2;
			File_Move_m3227B2C31F5BEBEDFC4E49209D32F67E14A11CE2(L_39, L_40, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_41 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_41)
			{
				goto IL_014c;
			}
		}

IL_013d:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_42 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_42);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_42, _stringLiteral6B3546314B245A532DA02D88063D24DAD7121927, /*hidden argument*/NULL);
		}

IL_014c:
		{
			goto IL_017b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0151;
		}
		throw e;
	}

CATCH_0151:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_43 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_43)
			{
				goto IL_0176;
			}
		}

IL_015c:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_44 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_45 = V_3;
			NullCheck(L_45);
			String_t* L_46;
			L_46 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_45);
			String_t* L_47;
			L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B76690551B8F032A5B1376B6898AF93394734F7)), L_46, /*hidden argument*/NULL);
			NullCheck(L_44);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_44, L_47, /*hidden argument*/NULL);
		}

IL_0176:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_017b;
		}
	} // end catch (depth: 1)

IL_017b:
	{
		return;
	}
}
// System.Void CaptureAndSave::MoveVideoToCameraRoll(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_MoveVideoToCameraRoll_m7B333FDC278CC062202905C436310B245FD240BC (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___path0;
		String_t* L_2 = __this->get_ALBUM_NAME_5();
		CallNative_MoveVideoToCameraRoll_mA0576DBC6AF7BEB59F777EA47F1526B5DFB2E16B(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0181;
	}

IL_001c:
	{
		int32_t L_3;
		L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00c5;
		}
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_4 = __this->get_androidImagePath_6();
			V_0 = L_4;
			String_t* L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_6;
			L_6 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_5, /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_6, _stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2, /*hidden argument*/NULL);
			V_0 = L_7;
			String_t* L_8 = V_0;
			bool L_9;
			L_9 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0052;
			}
		}

IL_004b:
		{
			String_t* L_10 = V_0;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_11;
			L_11 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_10, /*hidden argument*/NULL);
		}

IL_0052:
		{
			String_t* L_12 = V_0;
			String_t* L_13 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_14;
			L_14 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_13, /*hidden argument*/NULL);
			String_t* L_15;
			L_15 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_12, L_14, /*hidden argument*/NULL);
			V_0 = L_15;
			String_t* L_16 = ___path0;
			String_t* L_17 = V_0;
			File_Move_m3227B2C31F5BEBEDFC4E49209D32F67E14A11CE2(L_16, L_17, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
			L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			String_t* L_19 = V_0;
			NullCheck(L_18);
			GameObject_SendMessage_mD49CCADA51268480B585733DD7C6540CCCC6EF5C(L_18, _stringLiteral808D5071FC84904D3B0811065E44DE265AE56EF4, L_19, 1, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_20 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_20)
			{
				goto IL_0091;
			}
		}

IL_0082:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_21 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_21);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_21, _stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED, /*hidden argument*/NULL);
		}

IL_0091:
		{
			goto IL_00c0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_22 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_22)
			{
				goto IL_00bb;
			}
		}

IL_00a1:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_23 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_24 = V_1;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_24);
			String_t* L_26;
			L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral126ADC8BF06A49ABFFF099E5707C5F52C28D3357)), L_25, /*hidden argument*/NULL);
			NullCheck(L_23);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_23, L_26, /*hidden argument*/NULL);
		}

IL_00bb:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	} // end catch (depth: 1)

IL_00c0:
	{
		goto IL_0181;
	}

IL_00c5:
	{
		int32_t L_27;
		L_27 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_28;
		L_28 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_29;
		L_29 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)13))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_30;
		L_30 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_31;
		L_31 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)7))))
		{
			goto IL_0181;
		}
	}

IL_00fc:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_32;
			L_32 = Environment_GetFolderPath_m45AFDC70D0EE6BD322FED550D466D7E0094DBC59(((int32_t)39), /*hidden argument*/NULL);
			V_2 = L_32;
			String_t* L_33 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_34;
			L_34 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_33, /*hidden argument*/NULL);
			String_t* L_35;
			L_35 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_34, _stringLiteral71CE73491B2FEFB69519B9022F900C0ABC0223D2, /*hidden argument*/NULL);
			V_2 = L_35;
			String_t* L_36 = V_2;
			bool L_37;
			L_37 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_36, /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_0127;
			}
		}

IL_0120:
		{
			String_t* L_38 = V_2;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_39;
			L_39 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_38, /*hidden argument*/NULL);
		}

IL_0127:
		{
			String_t* L_40 = ___path0;
			String_t* L_41 = V_2;
			String_t* L_42 = ___path0;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_43;
			L_43 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_42, /*hidden argument*/NULL);
			String_t* L_44;
			L_44 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_41, L_43, /*hidden argument*/NULL);
			File_Move_m3227B2C31F5BEBEDFC4E49209D32F67E14A11CE2(L_40, L_44, /*hidden argument*/NULL);
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_45 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			if (!L_45)
			{
				goto IL_0152;
			}
		}

IL_0143:
		{
			OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_46 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
			NullCheck(L_46);
			OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_46, _stringLiteral8379AC7EB4BD044E6298CAECCC3FAF8AF39EE0ED, /*hidden argument*/NULL);
		}

IL_0152:
		{
			goto IL_0181;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0157;
		}
		throw e;
	}

CATCH_0157:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_47 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			if (!L_47)
			{
				goto IL_017c;
			}
		}

IL_0162:
		{
			OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_48 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))))->get_onErrorInvoker_0();
			Exception_t * L_49 = V_3;
			NullCheck(L_49);
			String_t* L_50;
			L_50 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_49);
			String_t* L_51;
			L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral126ADC8BF06A49ABFFF099E5707C5F52C28D3357)), L_50, /*hidden argument*/NULL);
			NullCheck(L_48);
			OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_48, L_51, /*hidden argument*/NULL);
		}

IL_017c:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0181;
		}
	} // end catch (depth: 1)

IL_0181:
	{
		return;
	}
}
// UnityEngine.Texture2D CaptureAndSave::AddWatermark(UnityEngine.Texture2D,UnityEngine.Texture2D,WatermarkAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_AddWatermark_m6DE43361C72C40E024F31CC16C20D87C68EC85D8 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___background0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___align2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = ___align2;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_0025;
			}
			case 3:
			{
				goto IL_002e;
			}
			case 4:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_009e;
	}

IL_0025:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_009e;
	}

IL_002e:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___background0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ___watermark1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_5));
		V_1 = 0;
		goto IL_009e;
	}

IL_0043:
	{
		V_0 = 0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___background0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___watermark1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_9));
		goto IL_009e;
	}

IL_0058:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = ___background0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = ___watermark1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_13));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = ___background0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___watermark1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_17));
		goto IL_009e;
	}

IL_0079:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ___background0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = ___watermark1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_21))/(int32_t)2));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = ___background0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = ___watermark1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_25))/(int32_t)2));
		goto IL_009e;
	}

IL_009e:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = ___background0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = ___watermark1;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30;
		L_30 = CaptureAndSave_CombineTexture_mEFC797A2CCC70EAC61EBD59FCDE58983E2BD4183(__this, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// UnityEngine.Texture2D CaptureAndSave::AddWatermark(UnityEngine.Texture2D,UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_AddWatermark_m6A1A920D1FF2A31B2672DC21E8E8AD9EDA81FB09 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___background0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___startX2, int32_t ___startY3, const RuntimeMethod* method)
{
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___background0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_0);
		int32_t L_2 = ___startY3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___watermark1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		___startY3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)), (int32_t)L_4));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___background0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___watermark1;
		int32_t L_7 = ___startX2;
		int32_t L_8 = ___startY3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9;
		L_9 = CaptureAndSave_CombineTexture_mEFC797A2CCC70EAC61EBD59FCDE58983E2BD4183(__this, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Texture2D CaptureAndSave::CombineTexture(UnityEngine.Texture2D,UnityEngine.Texture2D,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * CaptureAndSave_CombineTexture_mEFC797A2CCC70EAC61EBD59FCDE58983E2BD4183 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___background0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___watermark1, int32_t ___startX2, int32_t ___startY3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___background0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___background0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_4, L_1, L_3, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_00b4;
	}

IL_001b:
	{
		V_2 = 0;
		goto IL_00a4;
	}

IL_0022:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___startX2;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___startX2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___watermark1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		if ((((int32_t)L_7) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10)))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_11 = V_2;
		int32_t L_12 = ___startY3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___startY3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___watermark1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		if ((((int32_t)L_13) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_16)))))
		{
			goto IL_008c;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = ___background0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = ___watermark1;
		int32_t L_22 = V_1;
		int32_t L_23 = ___startX2;
		int32_t L_24 = V_2;
		int32_t L_25 = ___startY3;
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), /*hidden argument*/NULL);
		V_4 = L_26;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = V_4;
		float L_29 = (&V_4)->get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_27, L_28, ((float)((float)L_29/(float)(1.0f))), /*hidden argument*/NULL);
		V_5 = L_30;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = V_5;
		NullCheck(L_31);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_008c:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = ___background0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_35, L_36, L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_0;
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = V_6;
		NullCheck(L_39);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00a4:
	{
		int32_t L_44 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_45 = ___background0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_45);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00b4:
	{
		int32_t L_48 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = ___background0;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_49);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_001b;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_51 = V_0;
		NullCheck(L_51);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_51, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_52 = V_0;
		return L_52;
	}
}
// System.Void CaptureAndSave::AndroidGalleryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_AndroidGalleryPath_mE596838C2E6D85173C8F3264AF0560286E28C469 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___androidPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_ALBUM_NAME_5();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___androidPath0;
		String_t* L_3 = __this->get_ALBUM_NAME_5();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, L_3, /*hidden argument*/NULL);
		__this->set_androidImagePath_6(L_4);
		goto IL_002e;
	}

IL_0027:
	{
		String_t* L_5 = ___androidPath0;
		__this->set_androidImagePath_6(L_5);
	}

IL_002e:
	{
		String_t* L_6 = __this->get_androidImagePath_6();
		bool L_7;
		L_7 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = __this->get_androidImagePath_6();
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_9;
		L_9 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void CaptureAndSave::OnError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_OnError_mF1C9CE87E758AE4802F90B465EEE55CCD42B1CA4 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___err0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_1 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		String_t* L_2 = ___err0;
		NullCheck(L_1);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void CaptureAndSave::OnComplete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSave_OnComplete_m606BA9712D34558ECFFD481D1C114D0FDFB93140 (CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_1 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
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
// System.Void CaptureAndSaveEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener__ctor_m7A811D50B95696B9478912C1F4791863B445DD09 (CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::add_onError(CaptureAndSaveEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_add_onError_mA21DEAD9677F516935EA3A7E2D336105DE87DED7 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___value0, const RuntimeMethod* method)
{
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_0 = ___value0;
		CaptureAndSaveEventListener_AddHandler_onError_m9A098A2FD2840A757DEB22D50236641A45B2DDE0(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::remove_onError(CaptureAndSaveEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_remove_onError_mBACB6C4327B6B0685CCC4A8A89EEB797B98814FE (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___value0, const RuntimeMethod* method)
{
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_0 = ___value0;
		CaptureAndSaveEventListener_RemoveHandler_onError_m317FDF30CE35A66972EA4D052EA9A2852CB0D0EF(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::add_onSuccess(CaptureAndSaveEventListener/OnSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_add_onSuccess_m206426A6F4B9153A834E76C057ACEE664B034784 (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___value0, const RuntimeMethod* method)
{
	{
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_0 = ___value0;
		CaptureAndSaveEventListener_AddHandler_onSuccess_m729B7E4B5DCF78805F9C94A7E26CF3C70CFD061D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::remove_onSuccess(CaptureAndSaveEventListener/OnSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_remove_onSuccess_m02B2110DBCB16B4614DC96B389871C76B3CE97BD (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___value0, const RuntimeMethod* method)
{
	{
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_0 = ___value0;
		CaptureAndSaveEventListener_RemoveHandler_onSuccess_mA3062AE3B9F231E6DA056B9BB4EAF6CAC9008DD4(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::add_onScreenShot(CaptureAndSaveEventListener/OnScreenShot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_add_onScreenShot_mF53FD518EABC1BF3765FF1DC4D80491FE1C588F8 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___value0, const RuntimeMethod* method)
{
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_0 = ___value0;
		CaptureAndSaveEventListener_AddHandler_onScreenShot_m97C5B68AF13A6EF9CB2E209C7F2BDB0BD89C9381(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::remove_onScreenShot(CaptureAndSaveEventListener/OnScreenShot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_remove_onScreenShot_mFB98B4CA7BA86A25C6793FFF828FE2B4343A87E3 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___value0, const RuntimeMethod* method)
{
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_0 = ___value0;
		CaptureAndSaveEventListener_RemoveHandler_onScreenShot_mF09F4CA0A547D31D233FBD0F75CD7D30962FAEA3(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CaptureAndSaveEventListener::AddHandler_onError(CaptureAndSaveEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_AddHandler_onError_m9A098A2FD2840A757DEB22D50236641A45B2DDE0 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->set_onErrorInvoker_0(((OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE *)CastclassSealed((RuntimeObject*)L_2, OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void CaptureAndSaveEventListener::RemoveHandler_onError(CaptureAndSaveEventListener/OnError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_RemoveHandler_onError_m317FDF30CE35A66972EA4D052EA9A2852CB0D0EF (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->set_onErrorInvoker_0(((OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE *)CastclassSealed((RuntimeObject*)L_2, OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void CaptureAndSaveEventListener::AddHandler_onSuccess(CaptureAndSaveEventListener/OnSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_AddHandler_onSuccess_m729B7E4B5DCF78805F9C94A7E26CF3C70CFD061D (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->set_onSuccessInvoker_1(((OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA *)CastclassSealed((RuntimeObject*)L_2, OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void CaptureAndSaveEventListener::RemoveHandler_onSuccess(CaptureAndSaveEventListener/OnSuccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_RemoveHandler_onSuccess_mA3062AE3B9F231E6DA056B9BB4EAF6CAC9008DD4 (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onSuccessInvoker_1();
		OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->set_onSuccessInvoker_1(((OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA *)CastclassSealed((RuntimeObject*)L_2, OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void CaptureAndSaveEventListener::AddHandler_onScreenShot(CaptureAndSaveEventListener/OnScreenShot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_AddHandler_onScreenShot_m97C5B68AF13A6EF9CB2E209C7F2BDB0BD89C9381 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onScreenShotInvoker_2();
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->set_onScreenShotInvoker_2(((OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C *)CastclassSealed((RuntimeObject*)L_2, OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void CaptureAndSaveEventListener::RemoveHandler_onScreenShot(CaptureAndSaveEventListener/OnScreenShot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureAndSaveEventListener_RemoveHandler_onScreenShot_mF09F4CA0A547D31D233FBD0F75CD7D30962FAEA3 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_0 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onScreenShotInvoker_2();
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->set_onScreenShotInvoker_2(((OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C *)CastclassSealed((RuntimeObject*)L_2, OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C_il2cpp_TypeInfo_var)));
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
// System.Void CaptureAndSave/<GetScreenPixels>c__Iterator1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScreenPixelsU3Ec__Iterator1__ctor_m3DDCCE2D879CE726110B4D27E53A6464029CA697 (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object CaptureAndSave/<GetScreenPixels>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetScreenPixelsU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m9F349CB56EF9DEFFE752C74D06A32E4ECB9EB13E (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Object CaptureAndSave/<GetScreenPixels>c__Iterator1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetScreenPixelsU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_mB21304C332667402CAA0B0FFC1C18F53F89E3ED6 (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Boolean CaptureAndSave/<GetScreenPixels>c__Iterator1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetScreenPixelsU3Ec__Iterator1_MoveNext_m7F4D3094D58B7833E7D24DCDF3A7479D1789F4E7 (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0151;
	}

IL_0021:
	{
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_2 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_2, /*hidden argument*/NULL);
		__this->set_U24current_10(L_2);
		__this->set_U24PC_9(1);
		goto IL_0153;
	}

IL_0038:
	{
		int32_t L_3 = __this->get_imgType_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		__this->set_U3CtFormatU3E__0_1(5);
		goto IL_0057;
	}

IL_0050:
	{
		__this->set_U3CtFormatU3E__0_1(3);
	}

IL_0057:
	{
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_4 = __this->get_U3CU3Ef__this_18();
		int32_t L_5 = __this->get_width_2();
		int32_t L_6 = __this->get_height_3();
		int32_t L_7 = __this->get_U3CtFormatU3E__0_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_8, L_5, L_6, L_7, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_tex_8(L_8);
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_9 = __this->get_U3CU3Ef__this_18();
		NullCheck(L_9);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = L_9->get_tex_8();
		int32_t L_11 = __this->get_x_4();
		int32_t L_12;
		L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_13 = __this->get_height_3();
		int32_t L_14 = __this->get_y_5();
		int32_t L_15 = __this->get_width_2();
		int32_t L_16 = __this->get_height_3();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_17), ((float)((float)L_11)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), (int32_t)L_14)))), ((float)((float)L_15)), ((float)((float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_10, L_17, 0, 0, /*hidden argument*/NULL);
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_18 = __this->get_U3CU3Ef__this_18();
		NullCheck(L_18);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = L_18->get_tex_8();
		NullCheck(L_19);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_19, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = __this->get_watermark_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_012b;
		}
	}
	{
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_22 = __this->get_U3CU3Ef__this_18();
		NullCheck(L_22);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = L_22->get_tex_8();
		__this->set_U3CtempU3E__1_7(L_23);
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_24 = __this->get_U3CU3Ef__this_18();
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_25 = __this->get_U3CU3Ef__this_18();
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_26 = __this->get_U3CU3Ef__this_18();
		NullCheck(L_26);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_27 = L_26->get_tex_8();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = __this->get_watermark_6();
		int32_t L_29 = __this->get_align_8();
		NullCheck(L_25);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30;
		L_30 = CaptureAndSave_AddWatermark_m6DE43361C72C40E024F31CC16C20D87C68EC85D8(L_25, L_27, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_tex_8(L_30);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = __this->get_U3CtempU3E__1_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_31, /*hidden argument*/NULL);
		__this->set_U3CtempU3E__1_7((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL);
	}

IL_012b:
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_32 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onScreenShotInvoker_2();
		if (!L_32)
		{
			goto IL_014a;
		}
	}
	{
		OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * L_33 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onScreenShotInvoker_2();
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_34 = __this->get_U3CU3Ef__this_18();
		NullCheck(L_34);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_35 = L_34->get_tex_8();
		NullCheck(L_33);
		OnScreenShot_Invoke_m0B8805B39A792E4ACF293603D7F5C48682605AD1(L_33, L_35, /*hidden argument*/NULL);
	}

IL_014a:
	{
		__this->set_U24PC_9((-1));
	}

IL_0151:
	{
		return (bool)0;
	}

IL_0153:
	{
		return (bool)1;
	}
}
// System.Void CaptureAndSave/<GetScreenPixels>c__Iterator1::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScreenPixelsU3Ec__Iterator1_Dispose_m3498577915E0654846B3446897C07101F9964E89 (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void CaptureAndSave/<GetScreenPixels>c__Iterator1::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetScreenPixelsU3Ec__Iterator1_Reset_m5B48FCC6D15ADF82561F1AABE8484DDD6E9096F1 (U3CGetScreenPixelsU3Ec__Iterator1_tF85F1EC725113DD6C9255EF7BCFF5B6B121461F1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetScreenPixelsU3Ec__Iterator1_Reset_m5B48FCC6D15ADF82561F1AABE8484DDD6E9096F1_RuntimeMethod_var)));
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
// System.Void CaptureAndSave/<SaveToAlbum>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveToAlbumU3Ec__Iterator0__ctor_m61B320E59017621E0C6F518C42449967CFD87BF0 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object CaptureAndSave/<SaveToAlbum>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveToAlbumU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_mF1FB6FECA91EB8C52FD84B964364B6BCF39F22A5 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_11();
		return L_0;
	}
}
// System.Object CaptureAndSave/<SaveToAlbum>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveToAlbumU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m621AEB7FC36C08F4DD738EA105F1FCF3DEC953D5 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_11();
		return L_0;
	}
}
// System.Boolean CaptureAndSave/<SaveToAlbum>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSaveToAlbumU3Ec__Iterator0_MoveNext_m7245F9BA5C4860C70CCBBF88C38960794EA2B160 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1772B17FB84B1A2F8D28E7E42A183E7554CB4F7);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_10();
		V_0 = L_0;
		__this->set_U24PC_10((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		goto IL_00e8;
	}

IL_0025:
	{
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_2 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_2, /*hidden argument*/NULL);
		__this->set_U24current_11(L_2);
		__this->set_U24PC_10(1);
		goto IL_00ea;
	}

IL_003c:
	{
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_3 = __this->get_U3CU3Ef__this_21();
		int32_t L_4 = __this->get_x_0();
		int32_t L_5 = __this->get_y_1();
		int32_t L_6 = __this->get_width_2();
		int32_t L_7 = __this->get_height_3();
		int32_t L_8 = __this->get_imgType_4();
		NullCheck(L_3);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9;
		L_9 = CaptureAndSave_GetPixels_mA824039556E59CFD92DFB5AC832FAD64A576264A(L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->set_U3CtU3E__0_5(L_9);
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_10 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_10, /*hidden argument*/NULL);
		__this->set_U24current_11(L_10);
		__this->set_U24PC_10(2);
		goto IL_00ea;
	}

IL_0082:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = __this->get_U3CtU3E__0_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b1;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_13 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		if (!L_13)
		{
			goto IL_00ac;
		}
	}
	{
		OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * L_14 = ((CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_StaticFields*)il2cpp_codegen_static_fields_for(CaptureAndSaveEventListener_tCD2F82B7C17BBDADD558E8EDAC512831EFC31D03_il2cpp_TypeInfo_var))->get_onErrorInvoker_0();
		NullCheck(L_14);
		OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6(L_14, _stringLiteralA1772B17FB84B1A2F8D28E7E42A183E7554CB4F7, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		goto IL_00e8;
	}

IL_00b1:
	{
		CaptureAndSave_t52D3E7D765991EF4665F7177A0C0FEA501F10AAB * L_15 = __this->get_U3CU3Ef__this_21();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = __this->get_U3CtU3E__0_5();
		String_t* L_17 = __this->get_path_6();
		int32_t L_18 = __this->get_imgType_4();
		bool L_19 = __this->get_saveToGallery_7();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = __this->get_watermark_8();
		int32_t L_21 = __this->get_align_9();
		NullCheck(L_15);
		CaptureAndSave_SaveTexture_mC28949CBECE5F0624C791E98D49617B2D7EEC6C3(L_15, L_16, L_17, L_18, (bool)1, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->set_U24PC_10((-1));
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		return (bool)1;
	}
}
// System.Void CaptureAndSave/<SaveToAlbum>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveToAlbumU3Ec__Iterator0_Dispose_m1C192BD5EEF340A4E0FF29AB90B84B3BB0A71D13 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_10((-1));
		return;
	}
}
// System.Void CaptureAndSave/<SaveToAlbum>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveToAlbumU3Ec__Iterator0_Reset_mD7B6C1DC19B38334CE7A9AB03A3C61EA3EA02AF0 (U3CSaveToAlbumU3Ec__Iterator0_tD3221E31B35BF30D7CBAD2A45BA38FA527EA71DC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSaveToAlbumU3Ec__Iterator0_Reset_mD7B6C1DC19B38334CE7A9AB03A3C61EA3EA02AF0_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * __this, String_t* ___err0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___err0' to native representation
	char* ____err0_marshaled = NULL;
	____err0_marshaled = il2cpp_codegen_marshal_string(___err0);

	// Native function invocation
	il2cppPInvokeFunc(____err0_marshaled);

	// Marshaling cleanup of parameter '___err0' native representation
	il2cpp_codegen_marshal_free(____err0_marshaled);
	____err0_marshaled = NULL;

}
// System.Void CaptureAndSaveEventListener/OnError::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError__ctor_mAB2CD976E143F30738B07CC43747DBC10FEF0E35 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CaptureAndSaveEventListener/OnError::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_Invoke_m6E3E333565981FC5B3D329D874E452A4BE9C35A6 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * __this, String_t* ___err0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___err0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___err0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___err0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___err0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___err0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___err0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___err0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___err0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___err0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___err0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___err0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___err0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___err0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CaptureAndSaveEventListener/OnError::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnError_BeginInvoke_m5C8BB7CE62DFA5050CBD4AFECABE6DF15005A293 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * __this, String_t* ___err0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___err0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void CaptureAndSaveEventListener/OnError::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnError_EndInvoke_m47FD9F9841590BB88DCBA5B1E130D140D0C6B7B7 (OnError_t258885C18CF9D68C2AF725FF7370932C1B5BC8DE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void CaptureAndSaveEventListener/OnScreenShot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenShot__ctor_m4E3EAF74E139583C398D6752A90AEF15197EE9EB (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CaptureAndSaveEventListener/OnScreenShot::Invoke(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenShot_Invoke_m0B8805B39A792E4ACF293603D7F5C48682605AD1 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tex2D0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tex2D0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___tex2D0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___tex2D0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___tex2D0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___tex2D0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tex2D0, targetMethod);
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
						GenericInterfaceActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(targetMethod, targetThis, ___tex2D0);
					else
						GenericVirtActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(targetMethod, targetThis, ___tex2D0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tex2D0);
					else
						VirtActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tex2D0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___tex2D0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___tex2D0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CaptureAndSaveEventListener/OnScreenShot::BeginInvoke(UnityEngine.Texture2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnScreenShot_BeginInvoke_mC69DFD171D27A4E96CCFD6C0B1FEB891FD58EC40 (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex2D0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___tex2D0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void CaptureAndSaveEventListener/OnScreenShot::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenShot_EndInvoke_mAB10F86EE41378A5B1AEE59696493F03C3217D0C (OnScreenShot_t82D533097F935E2B3CD1BF0A84FF9E2A676CC11C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	il2cppPInvokeFunc(____msg0_marshaled);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

}
// System.Void CaptureAndSaveEventListener/OnSuccess::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess__ctor_m0D5760AFE79BC156BE152DAFE8075B66A099D4BE (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CaptureAndSaveEventListener/OnSuccess::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess_Invoke_m0091D277DE80FB52953FA66AFECF7B2A372571FA (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * __this, String_t* ___msg0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___msg0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___msg0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___msg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___msg0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___msg0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___msg0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CaptureAndSaveEventListener/OnSuccess::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSuccess_BeginInvoke_m890214274EDD8192AFEE31FAC1BB442DF5CAB72C (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * __this, String_t* ___msg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___msg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void CaptureAndSaveEventListener/OnSuccess::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccess_EndInvoke_m61D0235AA2C58CA42909D637FD9834CA28C0C8FA (OnSuccess_t06566D804C5CC66ADA54E8A046557E1800D869CA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
