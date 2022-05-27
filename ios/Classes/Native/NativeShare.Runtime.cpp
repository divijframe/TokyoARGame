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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeShareNamespace.NSShareResultCallbackiOS
struct NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75;
// NativeShare
struct NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeShare/ShareResultCallback
struct ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShareResult_tB8B17738495375BE1CC827DACD3C6054C9CB0B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F;
IL2CPP_EXTERN_C String_t* _stringLiteral6307B090E7219A907073428ED745FD41EFA179DE;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral8302A0571E7DCC9204775D1D077FC0075A94BCAF;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB;
IL2CPP_EXTERN_C String_t* _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_mAF85249D1265E7D4B2F6F74C4B2806FF4E8AFE53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9D70CDF1A9FD353B515CA50777F0A0C2AB45897D 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// NativeShare
struct NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208  : public RuntimeObject
{
public:
	// System.String NativeShare::subject
	String_t* ___subject_0;
	// System.String NativeShare::text
	String_t* ___text_1;
	// System.String NativeShare::title
	String_t* ___title_2;
	// System.String NativeShare::url
	String_t* ___url_3;
	// System.Collections.Generic.List`1<System.String> NativeShare::files
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___files_4;
	// System.Collections.Generic.List`1<System.String> NativeShare::mimes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___mimes_5;
	// NativeShare/ShareResultCallback NativeShare::callback
	ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * ___callback_6;

public:
	inline static int32_t get_offset_of_subject_0() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___subject_0)); }
	inline String_t* get_subject_0() const { return ___subject_0; }
	inline String_t** get_address_of_subject_0() { return &___subject_0; }
	inline void set_subject_0(String_t* value)
	{
		___subject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}

	inline static int32_t get_offset_of_files_4() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___files_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_files_4() const { return ___files_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_files_4() { return &___files_4; }
	inline void set_files_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___files_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___files_4), (void*)value);
	}

	inline static int32_t get_offset_of_mimes_5() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___mimes_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_mimes_5() const { return ___mimes_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_mimes_5() { return &___mimes_5; }
	inline void set_mimes_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___mimes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimes_5), (void*)value);
	}

	inline static int32_t get_offset_of_callback_6() { return static_cast<int32_t>(offsetof(NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208, ___callback_6)); }
	inline ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * get_callback_6() const { return ___callback_6; }
	inline ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F ** get_address_of_callback_6() { return &___callback_6; }
	inline void set_callback_6(ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * value)
	{
		___callback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_6), (void*)value);
	}
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
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


// NativeShare/ShareResult
struct ShareResult_tB8B17738495375BE1CC827DACD3C6054C9CB0B8C 
{
public:
	// System.Int32 NativeShare/ShareResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareResult_tB8B17738495375BE1CC827DACD3C6054C9CB0B8C, ___value___2)); }
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


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
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


// NativeShare/ShareResultCallback
struct ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F  : public MulticastDelegate_t
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


// NativeShareNamespace.NSShareResultCallbackiOS
struct NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// NativeShare/ShareResultCallback NativeShareNamespace.NSShareResultCallbackiOS::callback
	ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * ___callback_5;

public:
	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75, ___callback_5)); }
	inline ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * get_callback_5() const { return ___callback_5; }
	inline ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}
};

struct NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields
{
public:
	// NativeShareNamespace.NSShareResultCallbackiOS NativeShareNamespace.NSShareResultCallbackiOS::instance
	NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields, ___instance_4)); }
	inline NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * get_instance_4() const { return ___instance_4; }
	inline NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NativeShareNamespace.NSShareResultCallbackiOS>()
inline NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * GameObject_AddComponent_TisNSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_mAF85249D1265E7D4B2F6F74C4B2806FF4E8AFE53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void NativeShare/ShareResultCallback::Invoke(NativeShare/ShareResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mFF9516E7B5955EE8FFB471DDB332B447944866EC (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Byte[] NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeShare_GetTextureBytes_mD896B87FE7242395D56B62EE954736DDDF53180A (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_AddFile_mE44950A244FCA49E8D8320FDF870C36D45F56831 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void NativeShareNamespace.NSShareResultCallbackiOS::Initialize(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS_Initialize_m3D1AD900B4031E111EB688FE8D554C421B977A97 (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * ___callback0, const RuntimeMethod* method);
// System.String NativeShare::GetURLWithScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_GetURLWithScheme_mB2A3DEAEFBB13DA99C6C4410541942CE73F56407 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method);
// System.Void NativeShare::_NativeShare_Share(System.String[],System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__NativeShare_Share_m2E3A004C53DC8BC2E3E4D99DD4C605574F87E527 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___files0, int32_t ___filesCount1, String_t* ___subject2, String_t* ___text3, String_t* ___link4, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String NativeShare::CombineURLWithText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_CombineURLWithText_mE6212D1FC0FB0C2C75359C021924A0B40C3AAB22 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___quality1, const RuntimeMethod* method);
// System.Byte[] NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeShare_GetTextureBytesFromCopy_mC951A15CE8413D70F75C51BC3260A620DC1AA5C4 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeShare_Share(char**, int32_t, char*, char*, char*);
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
// System.Void NativeShareNamespace.NSShareResultCallbackiOS::Initialize(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS_Initialize_m3D1AD900B4031E111EB688FE8D554C421B977A97 (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_mAF85249D1265E7D4B2F6F74C4B2806FF4E8AFE53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8302A0571E7DCC9204775D1D077FC0075A94BCAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * L_0 = ((NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance = new GameObject( "NSShareResultCallbackiOS" ).AddComponent<NSShareResultCallbackiOS>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral8302A0571E7DCC9204775D1D077FC0075A94BCAF, /*hidden argument*/NULL);
		NullCheck(L_2);
		NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * L_3;
		L_3 = GameObject_AddComponent_TisNSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_mAF85249D1265E7D4B2F6F74C4B2806FF4E8AFE53(L_2, /*hidden argument*/GameObject_AddComponent_TisNSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_mAF85249D1265E7D4B2F6F74C4B2806FF4E8AFE53_RuntimeMethod_var);
		((NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var))->set_instance_4(L_3);
		// DontDestroyOnLoad( instance.gameObject );
		NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * L_4 = ((NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		// }
		goto IL_004f;
	}

IL_0032:
	{
		// else if( instance.callback != null )
		NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * L_6 = ((NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_7 = L_6->get_callback_5();
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// instance.callback( NativeShare.ShareResult.Unknown, null );
		NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * L_8 = ((NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_8);
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_9 = L_8->get_callback_5();
		NullCheck(L_9);
		ShareResultCallback_Invoke_mFF9516E7B5955EE8FFB471DDB332B447944866EC(L_9, 0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// instance.callback = callback;
		NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * L_10 = ((NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_StaticFields*)il2cpp_codegen_static_fields_for(NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75_il2cpp_TypeInfo_var))->get_instance_4();
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_11 = ___callback0;
		NullCheck(L_10);
		L_10->set_callback_5(L_11);
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSShareResultCallbackiOS::OnShareCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS_OnShareCompleted_m57F4E5F4A41EFC692B10BE5A65D9465F4B4363C4 (NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// NativeShare.ShareResultCallback _callback = callback;
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_0 = __this->get_callback_5();
		V_0 = L_0;
		// callback = null;
		__this->set_callback_5((ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F *)NULL);
		// if( _callback != null )
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if( string.IsNullOrEmpty( message ) )
		String_t* L_2 = ___message0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// _callback( NativeShare.ShareResult.Unknown, null );
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_4 = V_0;
		NullCheck(L_4);
		ShareResultCallback_Invoke_mFF9516E7B5955EE8FFB471DDB332B447944866EC(L_4, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		// NativeShare.ShareResult result = (NativeShare.ShareResult) ( message[0] - '0' ); // Convert first char to digit and then to ShareResult
		String_t* L_5 = ___message0;
		NullCheck(L_5);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)48)));
		// string shareTarget = message.Length > 1 ? message.Substring( 1 ) : null;
		String_t* L_7 = ___message0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) > ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		goto IL_0040;
	}

IL_0039:
	{
		String_t* L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_9, 1, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_0040:
	{
		V_2 = G_B6_0;
		// _callback( result, shareTarget );
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_11 = V_0;
		int32_t L_12 = V_1;
		String_t* L_13 = V_2;
		NullCheck(L_11);
		ShareResultCallback_Invoke_mFF9516E7B5955EE8FFB471DDB332B447944866EC(L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSShareResultCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackiOS__ctor_mA7D27B20BED533E444FD280AED963E1319518E9B (NSShareResultCallbackiOS_tFE149157B9FBBEA1829D22AC795B326D03D32D75 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NativeShare::_NativeShare_Share(System.String[],System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__NativeShare_Share_m2E3A004C53DC8BC2E3E4D99DD4C605574F87E527 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___files0, int32_t ___filesCount1, String_t* ___subject2, String_t* ___text3, String_t* ___link4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t, char*, char*, char*);

	// Marshaling of parameter '___files0' to native representation
	char** ____files0_marshaled = NULL;
	if (___files0 != NULL)
	{
		il2cpp_array_size_t ____files0_Length = (___files0)->max_length;
		____files0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____files0_Length + 1);
		(____files0_marshaled)[____files0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____files0_Length); i++)
		{
			(____files0_marshaled)[i] = il2cpp_codegen_marshal_string((___files0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____files0_marshaled = NULL;
	}

	// Marshaling of parameter '___subject2' to native representation
	char* ____subject2_marshaled = NULL;
	____subject2_marshaled = il2cpp_codegen_marshal_string(___subject2);

	// Marshaling of parameter '___text3' to native representation
	char* ____text3_marshaled = NULL;
	____text3_marshaled = il2cpp_codegen_marshal_string(___text3);

	// Marshaling of parameter '___link4' to native representation
	char* ____link4_marshaled = NULL;
	____link4_marshaled = il2cpp_codegen_marshal_string(___link4);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeShare_Share)(____files0_marshaled, ___filesCount1, ____subject2_marshaled, ____text3_marshaled, ____link4_marshaled);

	// Marshaling cleanup of parameter '___files0' native representation
	if (____files0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____files0_marshaled_CleanupLoopCount = (___files0 != NULL) ? (___files0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____files0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____files0_marshaled)[i]);
			(____files0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____files0_marshaled);
		____files0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___subject2' native representation
	il2cpp_codegen_marshal_free(____subject2_marshaled);
	____subject2_marshaled = NULL;

	// Marshaling cleanup of parameter '___text3' native representation
	il2cpp_codegen_marshal_free(____text3_marshaled);
	____text3_marshaled = NULL;

	// Marshaling cleanup of parameter '___link4' native representation
	il2cpp_codegen_marshal_free(____link4_marshaled);
	____link4_marshaled = NULL;

}
// NativeShare NativeShare::SetSubject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetSubject_m90E61507CB0A243A4E8D841E99F1EAC394668E03 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___subject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B1_1 = NULL;
	{
		// this.subject = subject ?? string.Empty;
		String_t* L_0 = ___subject0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_subject_0(G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetText_mD6DB5DC5EED309BFA85ED73FA4089DE37061EFD0 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B1_1 = NULL;
	{
		// this.text = text ?? string.Empty;
		String_t* L_0 = ___text0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_text_1(G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetUrl_mB292B08F5A6B0BC49DC538F4E740770DEC46E985 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B1_1 = NULL;
	{
		// this.url = url ?? string.Empty;
		String_t* L_0 = ___url0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_url_3(G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetTitle_mF6FF77C667A8EBDECB1B756B2046C2316D7D80BA (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B1_1 = NULL;
	{
		// this.title = title ?? string.Empty;
		String_t* L_0 = ___title0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_title_2(G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetCallback(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_SetCallback_m6CB695D7F011214F6E3C3BA432F96D7CD863DFB5 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * ___callback0, const RuntimeMethod* method)
{
	{
		// this.callback = callback;
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_0 = ___callback0;
		__this->set_callback_6(L_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddTarget(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_AddTarget_m92306BBE960060B46A4FA50D4FD927157672580F (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_AddFile_mE44950A244FCA49E8D8320FDF870C36D45F56831 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B3_1 = NULL;
	{
		// if( !string.IsNullOrEmpty( filePath ) && File.Exists( filePath ) )
		String_t* L_0 = ___filePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_2 = ___filePath0;
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// files.Add( filePath );
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = __this->get_files_4();
		String_t* L_5 = ___filePath0;
		NullCheck(L_4);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_4, L_5, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// mimes.Add( mime ?? string.Empty );
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_mimes_5();
		String_t* L_7 = ___mime1;
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_002c;
		}
	}
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(G_B4_1, G_B4_0, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// }
		goto IL_0043;
	}

IL_0033:
	{
		// Debug.LogError( "Share Error: file does not exist at path or permission denied: " + filePath );
		String_t* L_10 = ___filePath0;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddFile(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * NativeShare_AddFile_m4B463BB6A2C350FA4119172778A59CDDE2AFBA49 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, String_t* ___createdFileName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B12_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * G_B13_2 = NULL;
	{
		// if( !texture )
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Share Error: Texture does not exist!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_0014:
	{
		// if( string.IsNullOrEmpty( createdFileName ) )
		String_t* L_2 = ___createdFileName1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// createdFileName = "Image.png";
		___createdFileName1 = _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
	}

IL_0023:
	{
		// if( createdFileName.EndsWith( ".jpeg", System.StringComparison.OrdinalIgnoreCase ) || createdFileName.EndsWith( ".jpg", System.StringComparison.OrdinalIgnoreCase ) )
		String_t* L_4 = ___createdFileName1;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_4, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = ___createdFileName1;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_6, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}

IL_003f:
	{
		// saveAsJpeg = true;
		V_0 = (bool)1;
		goto IL_0060;
	}

IL_0043:
	{
		// if( !createdFileName.EndsWith( ".png", System.StringComparison.OrdinalIgnoreCase ) )
		String_t* L_8 = ___createdFileName1;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_8, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		// createdFileName += ".png";
		String_t* L_10 = ___createdFileName1;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		___createdFileName1 = L_11;
	}

IL_005e:
	{
		// saveAsJpeg = false;
		V_0 = (bool)0;
	}

IL_0060:
	{
		// string filePath = Path.Combine( Application.temporaryCachePath, createdFileName );
		String_t* L_12;
		L_12 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		String_t* L_13 = ___createdFileName1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// File.WriteAllBytes( filePath, GetTextureBytes( texture, saveAsJpeg ) );
		String_t* L_15 = V_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___texture0;
		bool L_17 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = NativeShare_GetTextureBytes_mD896B87FE7242395D56B62EE954736DDDF53180A(__this, L_16, L_17, /*hidden argument*/NULL);
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_15, L_18, /*hidden argument*/NULL);
		// AddFile( filePath, saveAsJpeg ? "image/jpeg" : "image/png" );
		String_t* L_19 = V_1;
		bool L_20 = V_0;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_20)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_0086;
		}
	}
	{
		G_B13_0 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_008b;
	}

IL_0086:
	{
		G_B13_0 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_008b:
	{
		NullCheck(G_B13_2);
		NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * L_21;
		L_21 = NativeShare_AddFile_mE44950A244FCA49E8D8320FDF870C36D45F56831(G_B13_2, G_B13_1, G_B13_0, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// return this;
		return __this;
	}
}
// System.Void NativeShare::Share()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Share_mD25C91790D2CAC06A5F1216AF8090EFCF40AA04F (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( files.Count == 0 && subject.Length == 0 && text.Length == 0 && url.Length == 0 )
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_files_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_0, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_2 = __this->get_subject_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = __this->get_text_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = __this->get_url_3();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogWarning( "Share Error: attempting to share nothing!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003f:
	{
		// NSShareResultCallbackiOS.Initialize( callback );
		ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * L_8 = __this->get_callback_6();
		NSShareResultCallbackiOS_Initialize_m3D1AD900B4031E111EB688FE8D554C421B977A97(L_8, /*hidden argument*/NULL);
		// if( files.Count == 0 )
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = __this->get_files_4();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_9, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0076;
		}
	}
	{
		// _NativeShare_Share( new string[0], 0, subject, text, GetURLWithScheme() );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		String_t* L_12 = __this->get_subject_0();
		String_t* L_13 = __this->get_text_1();
		String_t* L_14;
		L_14 = NativeShare_GetURLWithScheme_mB2A3DEAEFBB13DA99C6C4410541942CE73F56407(__this, /*hidden argument*/NULL);
		NativeShare__NativeShare_Share_m2E3A004C53DC8BC2E3E4D99DD4C605574F87E527(L_11, 0, L_12, L_13, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		// _NativeShare_Share( files.ToArray(), files.Count, subject, CombineURLWithText(), "" );
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = __this->get_files_4();
		NullCheck(L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16;
		L_16 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_15, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = __this->get_files_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_17, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		String_t* L_19 = __this->get_subject_0();
		String_t* L_20;
		L_20 = NativeShare_CombineURLWithText_mE6212D1FC0FB0C2C75359C021924A0B40C3AAB22(__this, /*hidden argument*/NULL);
		NativeShare__NativeShare_Share_m2E3A004C53DC8BC2E3E4D99DD4C605574F87E527(L_16, L_18, L_19, L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean NativeShare::TargetExists(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_TargetExists_mAE7208F54CA07E5E077B2F667CCD011AC1554B2E (String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean NativeShare::FindTarget(System.String&,System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_FindTarget_mF4444BBC397DE46FF4F8A65DAF1F7ED41572D2AA (String_t** ___androidPackageName0, String_t** ___androidClassName1, String_t* ___packageNameRegex2, String_t* ___classNameRegex3, const RuntimeMethod* method)
{
	{
		// androidPackageName = null;
		String_t** L_0 = ___androidPackageName0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// androidClassName = null;
		String_t** L_1 = ___androidClassName1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.String NativeShare::GetURLWithScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_GetURLWithScheme_mB2A3DEAEFBB13DA99C6C4410541942CE73F56407 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ( url.Length == 0 || url.Contains( "://" ) ) ? url : ( "https://" + url );
		String_t* L_0 = __this->get_url_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = __this->get_url_3();
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = __this->get_url_3();
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0030:
	{
		String_t* L_6 = __this->get_url_3();
		return L_6;
	}
}
// System.String NativeShare::CombineURLWithText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_CombineURLWithText_mE6212D1FC0FB0C2C75359C021924A0B40C3AAB22 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( url.Length == 0 || text.IndexOf( url, System.StringComparison.OrdinalIgnoreCase ) >= 0 )
		String_t* L_0 = __this->get_url_3();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = __this->get_text_1();
		String_t* L_3 = __this->get_url_3();
		NullCheck(L_2);
		int32_t L_4;
		L_4 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_2, L_3, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0022:
	{
		// return text;
		String_t* L_5 = __this->get_text_1();
		return L_5;
	}

IL_0029:
	{
		// else if( text.Length == 0 )
		String_t* L_6 = __this->get_text_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return GetURLWithScheme();
		String_t* L_8;
		L_8 = NativeShare_GetURLWithScheme_mB2A3DEAEFBB13DA99C6C4410541942CE73F56407(__this, /*hidden argument*/NULL);
		return L_8;
	}

IL_003d:
	{
		// return string.Concat( text, " ", GetURLWithScheme() );
		String_t* L_9 = __this->get_text_1();
		String_t* L_10;
		L_10 = NativeShare_GetURLWithScheme_mB2A3DEAEFBB13DA99C6C4410541942CE73F56407(__this, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Byte[] NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeShare_GetTextureBytes_mD896B87FE7242395D56B62EE954736DDDF53180A (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
			L_2 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_1, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			goto IL_0013;
		}

IL_000b:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_3, ((int32_t)100), /*hidden argument*/NULL);
			G_B3_0 = L_4;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_002e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0016:
	{ // begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NativeShare_GetTextureBytesFromCopy_mC951A15CE8413D70F75C51BC3260A620DC1AA5C4(__this, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	} // end catch (depth: 1)

CATCH_0022:
	{ // begin catch(System.ArgumentException)
		// catch( System.ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = NativeShare_GetTextureBytesFromCopy_mC951A15CE8413D70F75C51BC3260A620DC1AA5C4(__this, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	} // end catch (depth: 1)

IL_002e:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeShare_GetTextureBytesFromCopy_mC951A15CE8413D70F75C51BC3260A620DC1AA5C4 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6307B090E7219A907073428ED745FD41EFA179DE);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Sharing non-readable textures is slower than sharing readable textures" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral6307B090E7219A907073428ED745FD41EFA179DE, /*hidden argument*/NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// Graphics.Blit( texture, rt );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___texture0;
				RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
				Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_6, L_7, /*hidden argument*/NULL);
				// RenderTexture.active = rt;
				RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_1;
				RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_8, /*hidden argument*/NULL);
				// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___texture0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ___texture0;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
				bool L_13 = ___isJpeg1;
				G_B2_0 = L_12;
				G_B2_1 = L_10;
				if (L_13)
				{
					G_B3_0 = L_12;
					G_B3_1 = L_10;
					goto IL_0043;
				}
			}

IL_0040:
			{
				G_B4_0 = 4;
				G_B4_1 = G_B2_0;
				G_B4_2 = G_B2_1;
				goto IL_0044;
			}

IL_0043:
			{
				G_B4_0 = 3;
				G_B4_1 = G_B3_0;
				G_B4_2 = G_B3_1;
			}

IL_0044:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
				Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_14, G_B4_2, G_B4_1, G_B4_0, (bool)0, /*hidden argument*/NULL);
				V_0 = L_14;
				// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_0;
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___texture0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ___texture0;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
				Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
				memset((&L_20), 0, sizeof(L_20));
				Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_20), (0.0f), (0.0f), ((float)((float)L_17)), ((float)((float)L_19)), /*hidden argument*/NULL);
				NullCheck(L_15);
				Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E(L_15, L_20, 0, 0, (bool)0, /*hidden argument*/NULL);
				// sourceTexReadable.Apply( false, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = V_0;
				NullCheck(L_21);
				Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660(L_21, (bool)0, (bool)0, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x97, FINALLY_008a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007b;
			}
			throw e;
		}

CATCH_007b:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// Object.DestroyImmediate( sourceTexReadable );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_22, /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBE, FINALLY_008a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		// RenderTexture.active = activeRT;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = V_2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_23, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rt );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_24, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_0097:
	{
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
				bool L_25 = ___isJpeg1;
				if (L_25)
				{
					goto IL_00a3;
				}
			}

IL_009b:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
				L_27 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_26, /*hidden argument*/NULL);
				G_B11_0 = L_27;
				goto IL_00ab;
			}

IL_00a3:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
				L_29 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_28, ((int32_t)100), /*hidden argument*/NULL);
				G_B11_0 = L_29;
			}

IL_00ab:
			{
				V_3 = G_B11_0;
				IL2CPP_LEAVE(0xBE, FINALLY_00b7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ae;
			}
			throw e;
		}

CATCH_00ae:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBE, FINALLY_00b7);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		// Object.DestroyImmediate( sourceTexReadable );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_30, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		return L_31;
	}
}
// System.Void NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_mE88CEC99E9A437191E24742736B419876555C601 (NativeShare_t9B31B3B5D487867ECC89974ADB59851CFBB63208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string subject = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_subject_0(L_0);
		// private string text = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_text_1(L_1);
		// private string title = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_title_2(L_2);
		// private string url = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_url_3(L_3);
		// private readonly List<string> files = new List<string>( 0 );
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B(L_4, 0, /*hidden argument*/List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		__this->set_files_4(L_4);
		// private readonly List<string> mimes = new List<string>( 0 );
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B(L_5, 0, /*hidden argument*/List_1__ctor_m4D81A60A3C9A9F425B13CEE1AC43A357335E8B0B_RuntimeMethod_var);
		__this->set_mimes_5(L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___shareTarget1' to native representation
	char* ____shareTarget1_marshaled = NULL;
	____shareTarget1_marshaled = il2cpp_codegen_marshal_string(___shareTarget1);

	// Native function invocation
	il2cppPInvokeFunc(___result0, ____shareTarget1_marshaled);

	// Marshaling cleanup of parameter '___shareTarget1' native representation
	il2cpp_codegen_marshal_free(____shareTarget1_marshaled);
	____shareTarget1_marshaled = NULL;

}
// System.Void NativeShare/ShareResultCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback__ctor_m96E720FBB342C026D404A3FC84C11C002CB446F8 (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeShare/ShareResultCallback::Invoke(NativeShare/ShareResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mFF9516E7B5955EE8FFB471DDB332B447944866EC (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, ___shareTarget1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___shareTarget1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___result0, ___shareTarget1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___result0, ___shareTarget1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0, ___shareTarget1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0, ___shareTarget1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___result0) - 1), ___shareTarget1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, ___shareTarget1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeShare/ShareResultCallback::BeginInvoke(NativeShare/ShareResult,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShareResultCallback_BeginInvoke_m6297215E407A91CEC8456BBD85382F4429918E47 (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * __this, int32_t ___result0, String_t* ___shareTarget1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShareResult_tB8B17738495375BE1CC827DACD3C6054C9CB0B8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ShareResult_tB8B17738495375BE1CC827DACD3C6054C9CB0B8C_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___shareTarget1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NativeShare/ShareResultCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_EndInvoke_m0FC9C479244235C31CF56BBDEEFC3654727C0D34 (ShareResultCallback_t8D755C355CFB21181B1B10ECFDA036362F1C624F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
