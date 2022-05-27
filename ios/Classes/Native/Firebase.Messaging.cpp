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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5;
// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0;
// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C;
// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12;
// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m64B71C98F80908CDF42FA9BA3A65B25ECB7E5B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m66E3610EDE60DB16CDD09F94F053B72CFFEEF6AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SendPendingEvents_mF3E52FB026B338AA637B44F287493C5248F3A466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacksEnabled_m54BAF04617AA647685CF51597049CF244A3338B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacks_m312BAC615CFEC21221D003E1901CF4F1BF0F9D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mA9EF07469EBED58B419994607222B036BB632334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m07B52449A0455E0CC7DB4C2FC6CB7E730CC19877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7C86C67EC57B3247CAD9D7E92358A1CE63E5183B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging
struct FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6  : public RuntimeObject
{
public:

public:
};

struct FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields
{
public:
	// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::MessageReceivedInternal
	EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___MessageReceivedInternal_0;
	// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::TokenReceivedInternal
	EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___TokenReceivedInternal_1;
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging::listener
	Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * ___listener_2;

public:
	inline static int32_t get_offset_of_MessageReceivedInternal_0() { return static_cast<int32_t>(offsetof(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields, ___MessageReceivedInternal_0)); }
	inline EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * get_MessageReceivedInternal_0() const { return ___MessageReceivedInternal_0; }
	inline EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 ** get_address_of_MessageReceivedInternal_0() { return &___MessageReceivedInternal_0; }
	inline void set_MessageReceivedInternal_0(EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * value)
	{
		___MessageReceivedInternal_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageReceivedInternal_0), (void*)value);
	}

	inline static int32_t get_offset_of_TokenReceivedInternal_1() { return static_cast<int32_t>(offsetof(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields, ___TokenReceivedInternal_1)); }
	inline EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * get_TokenReceivedInternal_1() const { return ___TokenReceivedInternal_1; }
	inline EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 ** get_address_of_TokenReceivedInternal_1() { return &___TokenReceivedInternal_1; }
	inline void set_TokenReceivedInternal_1(EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * value)
	{
		___TokenReceivedInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenReceivedInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields, ___listener_2)); }
	inline Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * get_listener_2() const { return ___listener_2; }
	inline Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_2), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE
struct FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C  : public RuntimeObject
{
public:

public:
};

struct FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD * ___swigExceptionHelper_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigStringHelper
	SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062  : public RuntimeObject
{
public:
	// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::messageReceivedDelegate
	MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * ___messageReceivedDelegate_0;
	// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::tokenReceivedDelegate
	TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * ___tokenReceivedDelegate_1;
	// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging/Listener::app
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app_2;

public:
	inline static int32_t get_offset_of_messageReceivedDelegate_0() { return static_cast<int32_t>(offsetof(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062, ___messageReceivedDelegate_0)); }
	inline MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * get_messageReceivedDelegate_0() const { return ___messageReceivedDelegate_0; }
	inline MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 ** get_address_of_messageReceivedDelegate_0() { return &___messageReceivedDelegate_0; }
	inline void set_messageReceivedDelegate_0(MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * value)
	{
		___messageReceivedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageReceivedDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokenReceivedDelegate_1() { return static_cast<int32_t>(offsetof(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062, ___tokenReceivedDelegate_1)); }
	inline TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * get_tokenReceivedDelegate_1() const { return ___tokenReceivedDelegate_1; }
	inline TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 ** get_address_of_tokenReceivedDelegate_1() { return &___tokenReceivedDelegate_1; }
	inline void set_tokenReceivedDelegate_1(TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * value)
	{
		___tokenReceivedDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenReceivedDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062, ___app_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_app_2() const { return ___app_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_2), (void*)value);
	}
};

struct Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::listener
	Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * ___listener_3;

public:
	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields, ___listener_3)); }
	inline Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * get_listener_3() const { return ___listener_3; }
	inline Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_3), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___applicationDelegate_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___arithmeticDelegate_1;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___divideByZeroDelegate_2;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___indexOutOfRangeDelegate_3;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___invalidCastDelegate_4;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___invalidOperationDelegate_5;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___ioDelegate_6;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___nullReferenceDelegate_7;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___outOfMemoryDelegate_8;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___overflowDelegate_9;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___systemDelegate_10;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentDelegate_11;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentNullDelegate_12;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields
{
public:
	// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields
{
public:
	// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_StaticFields
{
public:
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C  : public RuntimeObject
{
public:
	// System.String Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::token
	String_t* ___token_0;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C, ___token_0)); }
	inline String_t* get_token_0() const { return ___token_0; }
	inline String_t** get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(String_t* value)
	{
		___token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_0), (void*)value);
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


// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::<Message>k__BackingField
	FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17, ___U3CMessageU3Ek__BackingField_1)); }
	inline FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 ** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}
};


// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String Firebase.Messaging.TokenReceivedEventArgs::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96, ___U3CTokenU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_1() const { return ___U3CTokenU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_1() { return &___U3CTokenU3Ek__BackingField_1; }
	inline void set_U3CTokenU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_1), (void*)value);
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::message
	intptr_t ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0, ___message_0)); }
	inline intptr_t get_message_0() const { return ___message_0; }
	inline intptr_t* get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(intptr_t value)
	{
		___message_0 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__am$cache2
	Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache3
	Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache4
	Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_20), (void*)value);
	}
};


// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseMessage::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.FirebaseMessage::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

struct FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_StaticFields
{
public:
	// System.DateTime Firebase.Messaging.FirebaseMessage::UnixEpochUtc
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpochUtc_2;

public:
	inline static int32_t get_offset_of_UnixEpochUtc_2() { return static_cast<int32_t>(offsetof(FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_StaticFields, ___UnixEpochUtc_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpochUtc_2() const { return ___UnixEpochUtc_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpochUtc_2() { return &___UnixEpochUtc_2; }
	inline void set_UnixEpochUtc_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpochUtc_2 = value;
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
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


// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_gshared (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_gshared (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * ___func0, int32_t ___errorValue1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_m668738E42F6FE96C6E71420BCEA1A29756520A2E (FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_delete_FirebaseMessage_m4DC67B04FA3B5795FA04779066FBA094B2BD571F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * Listener_Create_m2B4562588F091C07B8B7E752657F9B746F0E3B36 (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m7FA84BD5ED49DBE443B895C1C314E42C7B5BDE38 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_m54BAF04617AA647685CF51597049CF244A3338B7 (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_mF3E52FB026B338AA637B44F287493C5248F3A466 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_m211C08FAE39C2133E592D3AF2C764A7D96ECD9E7 (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_mEA2108B5D742CB3C688965B03721CA3960FA4789 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_mEF72F529710C38E1F6B49606DB3C64ACA4840726 (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m40BC1075CFCAFC7E1EBFBB709CA45DF8BFC1F5DA (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m26A63E1DF7EC15C3B5A1922C08E0D835F228DF64 (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacks_m26BEEA791280A24B9BE02135F8EB225DFA473CD0 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * ___jarg10, TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacksEnabled_mCEE337D4A1F329B572C448E67EB50DCA75C4974C (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SendPendingEvents_mA01452DB28FEA823BF2539C45BA79BB96F55C842 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m495FAB1B6844EDC17A9E2C332AFD9986DDCA2D92 (SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m4AA008A69C3B3D6E0A96F3483B2046F9B081E23D (SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m7FBAF654A99897D1739DF85B86E5131088C51954_inline (MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * __this, FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mA9C32C5B5007835735E27867E11850434F889581_inline (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64 (intptr_t ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C (String_t* ___token0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mC2577139CB5BD3C3EA0C1550E35D9E590C48442B (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m7A0A68DCF142B6F654A2625AC9A2FC76D029BD96 (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m312BAC615CFEC21221D003E1901CF4F1BF0F9D90 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * ___messageCallback0, TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * ___tokenCallback1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m65EF2C4571343A3E1FE7FE3849A6231D19888BB1 (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m16295D65EB00CF404EDF3B0B6FAE0461387D5106 (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * __this, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_mAF70D92FB10C9D626C416FD613AA2E8D0CA7B784 (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_gshared)(__this, ___object0, ___method1, method);
}
// !!0 Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<!!0>,!!0)
inline int32_t ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8 (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * ___func0, int32_t ___errorValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, int32_t, const RuntimeMethod*))ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_gshared)(___func0, ___errorValue1, method);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mCB7A2BC655CD2879A1833FFDFEAE8E4FC94EB9F2 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919 (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m421ED856F8FB936CF340D83202CDDF11C4A22032 (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m7C534812933F61C3B2509B6ED012E6BB96D22927 (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___applicationDelegate0, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___arithmeticDelegate1, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___divideByZeroDelegate2, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___indexOutOfRangeDelegate3, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___invalidCastDelegate4, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___invalidOperationDelegate5, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___ioDelegate6, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___nullReferenceDelegate7, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___outOfMemoryDelegate8, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___overflowDelegate9, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mE2AC268435B4E705D1ED6C7E2124E1470D23DEED (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentDelegate0, ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m8160707307BCC64295B22025E9D4E742B31D9A87 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m11D6B79F40E6A62ADB727643262CD18BE976F811 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_mD3D963BA55AB685AF99D2A2C8EB98B03864D7B01 (FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mABF24DACD1B6DB69F58A68847BB5037E19C15748 (MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * __this, FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * ___msg0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m66E3610EDE60DB16CDD09F94F053B72CFFEEF6AB (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * __this, RuntimeObject * ___sender0, MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *, RuntimeObject *, MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_mF14AB7B4F39575BF9815A7BFD0578BBF65AF06A5 (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * __this, String_t* ___token0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m64B71C98F80908CDF42FA9BA3A65B25ECB7E5B06 (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * __this, RuntimeObject * ___sender0, TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *, RuntimeObject *, TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_delete_FirebaseMessage(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_SetListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_SetListenerCallbacksEnabled(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_SendPendingEvents();
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseMessaging(Il2CppMethodPointer);
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
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_mD3D963BA55AB685AF99D2A2C8EB98B03864D7B01 (FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Finalize_m894FCF2E4AF2280FE95EF64781184511B06DC989 (FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseMessage_Dispose_m668738E42F6FE96C6E71420BCEA1A29756520A2E(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_m668738E42F6FE96C6E71420BCEA1A29756520A2E (FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
			FirebaseMessagingPINVOKE_Firebase_Messaging_delete_FirebaseMessage_m4DC67B04FA3B5795FA04779066FBA094B2BD571F(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__cctor_m95DF5E0541B1C2601094A96CBAEF68B385C27196 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_il2cpp_TypeInfo_var))->set_UnixEpochUtc_2(L_0);
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
// System.Void Firebase.Messaging.FirebaseMessaging::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging__cctor_mECA2DB0EC2D8E03C7A6489DDFD7075139DED507D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_0;
		L_0 = Listener_Create_m2B4562588F091C07B8B7E752657F9B746F0E3B36(/*hidden argument*/NULL);
		((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->set_listener_2(L_0);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_m211C08FAE39C2133E592D3AF2C764A7D96ECD9E7 (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * V_0 = NULL;
	EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_0 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_2 = V_1;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_5 = V_0;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *>((EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 **)(((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_address_of_MessageReceivedInternal_0()), ((EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_7 = V_0;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)L_7) == ((RuntimeObject*)(EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_mEF72F529710C38E1F6B49606DB3C64ACA4840726 (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * V_0 = NULL;
	EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_0 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_2 = V_1;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_5 = V_0;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *>((EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 **)(((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_address_of_MessageReceivedInternal_0()), ((EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_7 = V_0;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)L_7) == ((RuntimeObject*)(EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m40BC1075CFCAFC7E1EBFBB709CA45DF8BFC1F5DA (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * V_0 = NULL;
	EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_0 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_2 = V_1;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_5 = V_0;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *>((EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 **)(((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_address_of_TokenReceivedInternal_1()), ((EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_7 = V_0;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)L_7) == ((RuntimeObject*)(EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m26A63E1DF7EC15C3B5A1922C08E0D835F228DF64 (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * V_0 = NULL;
	EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_0 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_2 = V_1;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_5 = V_0;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *>((EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 **)(((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_address_of_TokenReceivedInternal_1()), ((EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_7 = V_0;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)L_7) == ((RuntimeObject*)(EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_mEA2108B5D742CB3C688965B03721CA3960FA4789 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
			EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_3 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
			V_1 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_4 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
			V_2 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (L_5)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0040;
			}
		}

IL_0035:
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_7;
			L_7 = Listener_Create_m2B4562588F091C07B8B7E752657F9B746F0E3B36(/*hidden argument*/NULL);
			goto IL_0045;
		}

IL_0040:
		{
			Listener_Destroy_m7FA84BD5ED49DBE443B895C1C314E42C7B5BDE38(/*hidden argument*/NULL);
		}

IL_0045:
		{
			bool L_8 = V_1;
			bool L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
			FirebaseMessaging_SetListenerCallbacksEnabled_m54BAF04617AA647685CF51597049CF244A3338B7(L_8, L_9, /*hidden argument*/NULL);
			bool L_10 = V_1;
			if (L_10)
			{
				goto IL_0058;
			}
		}

IL_0052:
		{
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_005d;
			}
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
			FirebaseMessaging_SendPendingEvents_mF3E52FB026B338AA637B44F287493C5248F3A466(/*hidden argument*/NULL);
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceived_m69D592DFF8505930F0748052CF9FDD2A149E1308 (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		FirebaseMessaging_add_MessageReceivedInternal_m211C08FAE39C2133E592D3AF2C764A7D96ECD9E7(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_mEA2108B5D742CB3C688965B03721CA3960FA4789(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceived_m5BB1BE46102FF87F4C18DEA4DF2CFE72B8196A27 (EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		FirebaseMessaging_remove_MessageReceivedInternal_mEF72F529710C38E1F6B49606DB3C64ACA4840726(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_mEA2108B5D742CB3C688965B03721CA3960FA4789(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceived_mA10B1D25C82876599901C4D37900D7CF2540FEBB (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		FirebaseMessaging_add_TokenReceivedInternal_m40BC1075CFCAFC7E1EBFBB709CA45DF8BFC1F5DA(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_mEA2108B5D742CB3C688965B03721CA3960FA4789(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceived_m38F01211E9ECF9A5E5D5E6A14A943D35050806E2 (EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		FirebaseMessaging_remove_TokenReceivedInternal_m26A63E1DF7EC15C3B5A1922C08E0D835F228DF64(L_3, /*hidden argument*/NULL);
		FirebaseMessaging_CreateOrDestroyListener_mEA2108B5D742CB3C688965B03721CA3960FA4789(/*hidden argument*/NULL);
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_m312BAC615CFEC21221D003E1901CF4F1BF0F9D90 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * ___messageCallback0, TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * ___tokenCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * L_0 = ___messageCallback0;
		TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * L_1 = ___tokenCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacks_m26BEEA791280A24B9BE02135F8EB225DFA473CD0(L_0, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacks_m312BAC615CFEC21221D003E1901CF4F1BF0F9D90_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_m54BAF04617AA647685CF51597049CF244A3338B7 (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___message_callback_enabled0;
		bool L_1 = ___token_callback_enabled1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacksEnabled_mCEE337D4A1F329B572C448E67EB50DCA75C4974C(L_0, L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacksEnabled_m54BAF04617AA647685CF51597049CF244A3338B7_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_mF3E52FB026B338AA637B44F287493C5248F3A466 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_Firebase_Messaging_SendPendingEvents_mA01452DB28FEA823BF2539C45BA79BB96F55C842(/*hidden argument*/NULL);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SendPendingEvents_mF3E52FB026B338AA637B44F287493C5248F3A466_RuntimeMethod_var)));
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE__cctor_m77368F38F494CF31E8D6611305A9FC6F22A94C21 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD * L_0 = (SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD *)il2cpp_codegen_object_new(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m495FAB1B6844EDC17A9E2C332AFD9986DDCA2D92(L_0, /*hidden argument*/NULL);
		((FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 * L_1 = (SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 *)il2cpp_codegen_object_new(SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m4AA008A69C3B3D6E0A96F3483B2046F9B081E23D(L_1, /*hidden argument*/NULL);
		((FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_delete_FirebaseMessage_m4DC67B04FA3B5795FA04779066FBA094B2BD571F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_delete_FirebaseMessage)(____jarg10_marshaled);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacks_m26BEEA791280A24B9BE02135F8EB225DFA473CD0 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * ___jarg10, TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_SetListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SetListenerCallbacksEnabled_mCEE337D4A1F329B572C448E67EB50DCA75C4974C (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_SetListenerCallbacksEnabled)(static_cast<int32_t>(___jarg10), static_cast<int32_t>(___jarg21));

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::Firebase_Messaging_SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_Firebase_Messaging_SendPendingEvents_mA01452DB28FEA823BF2539C45BA79BB96F55C842 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_SendPendingEvents)();

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mABF24DACD1B6DB69F58A68847BB5037E19C15748 (MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * __this, FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * L_0 = ___msg0;
		MessageReceivedEventArgs_set_Message_m7FBAF654A99897D1739DF85B86E5131088C51954_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m7FBAF654A99897D1739DF85B86E5131088C51954 (MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * __this, FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
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
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_mF14AB7B4F39575BF9815A7BFD0578BBF65AF06A5 (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___token0;
		TokenReceivedEventArgs_set_Token_mA9C32C5B5007835735E27867E11850434F889581_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Firebase.Messaging.TokenReceivedEventArgs::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenReceivedEventArgs_get_Token_m8EDE0BC315FD6A0A4A3B01464BEBD673C22887A6 (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mA9C32C5B5007835735E27867E11850434F889581 (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64(intptr_t ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64(___message0, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C(char* ___token0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___token0' to managed representation
	String_t* ____token0_unmarshaled = NULL;
	____token0_unmarshaled = il2cpp_codegen_marshal_string_result(___token0);

	// Managed method invocation
	Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C(____token0_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m65EF2C4571343A3E1FE7FE3849A6231D19888BB1 (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * L_0 = (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 *)il2cpp_codegen_object_new(MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12_il2cpp_TypeInfo_var);
		MessageReceivedDelegate__ctor_mC2577139CB5BD3C3EA0C1550E35D9E590C48442B(L_0, NULL, (intptr_t)((intptr_t)Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_messageReceivedDelegate_0(L_0);
		TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * L_1 = (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 *)il2cpp_codegen_object_new(TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331_il2cpp_TypeInfo_var);
		TokenReceivedDelegate__ctor_m7A0A68DCF142B6F654A2625AC9A2FC76D029BD96(L_1, NULL, (intptr_t)((intptr_t)Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_tokenReceivedDelegate_1(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2;
		L_2 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		__this->set_app_2(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * L_3 = __this->get_messageReceivedDelegate_0();
		TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * L_4 = __this->get_tokenReceivedDelegate_1();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetListenerCallbacks_m312BAC615CFEC21221D003E1901CF4F1BF0F9D90(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * Listener_Create_m2B4562588F091C07B8B7E752657F9B746F0E3B36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_3 = ((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->get_listener_3();
			if (!L_3)
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_4 = ((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = L_4;
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}

IL_0026:
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_5 = (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 *)il2cpp_codegen_object_new(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var);
			Listener__ctor_m65EF2C4571343A3E1FE7FE3849A6231D19888BB1(L_5, /*hidden argument*/NULL);
			((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->set_listener_3(L_5);
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_6 = ((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->get_listener_3();
			V_1 = L_6;
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m7FA84BD5ED49DBE443B895C1C314E42C7B5BDE38 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_3 = ((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->get_listener_3();
			if (L_3)
			{
				goto IL_0020;
			}
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}

IL_0020:
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_4 = ((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->get_listener_3();
			NullCheck(L_4);
			Listener_Dispose_m16295D65EB00CF404EDF3B0B6FAE0461387D5106(L_4, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x36, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x36, IL_0036)
	}

IL_0036:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Finalize_mE16A4823CE53CDE9141297DA74D42FBC91E0427A (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Listener_Dispose_m16295D65EB00CF404EDF3B0B6FAE0461387D5106(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12, IL_0012)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m16295D65EB00CF404EDF3B0B6FAE0461387D5106 (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 * L_3 = ((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->get_listener_3();
			if ((!(((RuntimeObject*)(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 *)L_3) == ((RuntimeObject*)(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 *)__this))))
			{
				goto IL_0030;
			}
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
			FirebaseMessaging_SetListenerCallbacks_m312BAC615CFEC21221D003E1901CF4F1BF0F9D90((MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 *)NULL, (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 *)NULL, /*hidden argument*/NULL);
			((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_StaticFields*)il2cpp_codegen_static_fields_for(Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062_il2cpp_TypeInfo_var))->set_listener_3((Listener_t4F987E818B4204E45956F4F110E5303CF1FC1062 *)NULL);
			__this->set_app_2((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL);
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_mFEF1A6CCD1C9BE3E421D2F90BBD50E096350FD64 (intptr_t ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mA9EF07469EBED58B419994607222B036BB632334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * V_0 = NULL;
	{
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * L_0 = (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 *)il2cpp_codegen_object_new(U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0_il2cpp_TypeInfo_var);
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_mAF70D92FB10C9D626C416FD613AA2E8D0CA7B784(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * L_1 = V_0;
		intptr_t L_2 = ___message0;
		NullCheck(L_1);
		L_1->set_message_0((intptr_t)L_2);
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * L_3 = V_0;
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_4 = (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)il2cpp_codegen_object_new(Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA_il2cpp_TypeInfo_var);
		Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE(L_4, L_3, (intptr_t)((intptr_t)U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mA9EF07469EBED58B419994607222B036BB632334_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mCEA921334BE688D8C04005FFF06E2BB2B5B096FE_RuntimeMethod_var);
		int32_t L_5;
		L_5 = ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8(L_4, 0, /*hidden argument*/ExceptionAggregator_Wrap_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEA79A0D1E7D23B435237DD5D09EAAC86D35569F8_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_m2B373059C1298E1634054A54891DF4D7A2C85D6C (String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m07B52449A0455E0CC7DB4C2FC6CB7E730CC19877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * V_0 = NULL;
	{
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * L_0 = (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C *)il2cpp_codegen_object_new(U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C_il2cpp_TypeInfo_var);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mCB7A2BC655CD2879A1833FFDFEAE8E4FC94EB9F2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * L_1 = V_0;
		String_t* L_2 = ___token0;
		NullCheck(L_1);
		L_1->set_token_0(L_2);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * L_3 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_3, (intptr_t)((intptr_t)U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m07B52449A0455E0CC7DB4C2FC6CB7E730CC19877_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_4, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m348FFF28F1BC7732542350C15FAA0D18E41563F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_0 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_1 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_2 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_3 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_4 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_5 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_6 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_7 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_8 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_9 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_10 = (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F *)il2cpp_codegen_object_new(ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * L_11 = (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m421ED856F8FB936CF340D83202CDDF11C4A22032(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * L_12 = (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m421ED856F8FB936CF340D83202CDDF11C4A22032(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * L_13 = (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m421ED856F8FB936CF340D83202CDDF11C4A22032(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_14 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_15 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_16 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_17 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_18 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_19 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_20 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_21 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_22 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_23 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * L_24 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m7C534812933F61C3B2509B6ED012E6BB96D22927(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * L_25 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * L_26 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * L_27 = ((SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mE2AC268435B4E705D1ED6C7E2124E1470D23DEED(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m495FAB1B6844EDC17A9E2C332AFD9986DDCA2D92 (SWIGExceptionHelper_t1C7C8431078FAFF1139DC921FF13F94DD70756FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m7C534812933F61C3B2509B6ED012E6BB96D22927 (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___applicationDelegate0, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___arithmeticDelegate1, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___divideByZeroDelegate2, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___indexOutOfRangeDelegate3, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___invalidCastDelegate4, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___invalidOperationDelegate5, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___ioDelegate6, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___nullReferenceDelegate7, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___outOfMemoryDelegate8, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___overflowDelegate9, ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseMessaging)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_mE2AC268435B4E705D1ED6C7E2124E1470D23DEED (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentDelegate0, ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m66F5A5D96AD415ABCCBA372CD4D3141E04366D57 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4C4D19BD68B0C56027D22B499E2EC37031288B26 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m13E016A177B71D6669CF7E6EDF12C12A429E4F07 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m4623A7327AE1E6CAFD70B921C4590269E5678818 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m4ACC0CE39C2CB727CF13214FE00CB3B7EE262917 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m4587F7B5CB42B25C2790AA3BA62E91CA66F68BE0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4D348FA45C5A094AC9C13E96BD34FD2B04853551 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m534A438B41E056E1A936BE4ED4EE2AA78FC0B81A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m0C7D8A28223664E94D456216A11E7D9F1D36B969 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m162052093B56358640AFF3B91C9617867ABC66DF (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m99CCBC63B075AF306D8238A355F09A9F508B944C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m8619B7F199C3C520279DC5CABEDB0BD9F1757250 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m393FBBA99AA2E691F4A469A5AD2EE32871C7A3F7 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m325EAD87777486BC5617C4F9709944CBF1A437F8 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602(L_8, /*hidden argument*/NULL);
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Exception_t * L_0 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m61B1EC4BB4D8431602805623831B311104415602_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m7FA3EA562DCAF8289DB28011BED55AE31B1E2B77 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_tA66385CDC01E1F67B180156A168D4C3839B9CD8C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3A2B27AF051A22242B0A9615E68E3E2ABC20DC44_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mD5EDC8BA24A497E98DC45B78AF9270D3E4E8469B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * L_0 = (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 *)il2cpp_codegen_object_new(SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m8160707307BCC64295B22025E9D4E742B31D9A87(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * L_1 = ((SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m11D6B79F40E6A62ADB727643262CD18BE976F811(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m4AA008A69C3B3D6E0A96F3483B2046F9B081E23D (SWIGStringHelper_tA3C36DC445A9168048D331FCFDBB9AD658D8F6E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_m11D6B79F40E6A62ADB727643262CD18BE976F811 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseMessaging)(____stringDelegate0_marshaled);

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m1D9B26577868352119491B364D4B33920421B106 (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_mAF70D92FB10C9D626C416FD613AA2E8D0CA7B784 (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mA9EF07469EBED58B419994607222B036BB632334 (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t4BB659F8C7CFF420EA1A64A1B21D0D833AE410A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m66E3610EDE60DB16CDD09F94F053B72CFFEEF6AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_0 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_MessageReceivedInternal_0();
		V_0 = L_0;
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		EventHandler_1_t66F9315DD9D75B6A3C6CE449EAE40645C92AD587 * L_2 = V_0;
		intptr_t L_3 = __this->get_message_0();
		FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * L_4 = (FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 *)il2cpp_codegen_object_new(FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757_il2cpp_TypeInfo_var);
		FirebaseMessage__ctor_mD3D963BA55AB685AF99D2A2C8EB98B03864D7B01(L_4, (intptr_t)L_3, (bool)1, /*hidden argument*/NULL);
		MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * L_5 = (MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 *)il2cpp_codegen_object_new(MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17_il2cpp_TypeInfo_var);
		MessageReceivedEventArgs__ctor_mABF24DACD1B6DB69F58A68847BB5037E19C15748(L_5, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m66E3610EDE60DB16CDD09F94F053B72CFFEEF6AB(L_2, NULL, L_5, /*hidden argument*/EventHandler_1_Invoke_m66E3610EDE60DB16CDD09F94F053B72CFFEEF6AB_RuntimeMethod_var);
		return 1;
	}

IL_0026:
	{
		return 0;
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mCB7A2BC655CD2879A1833FFDFEAE8E4FC94EB9F2 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m07B52449A0455E0CC7DB4C2FC6CB7E730CC19877 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t3F43EDDBA3EF7FBAA4C43349493DB26E04C8781C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m64B71C98F80908CDF42FA9BA3A65B25ECB7E5B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var);
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_0 = ((FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tFF1D546896100AFA4A4183AF2F61E431F15A9EA6_il2cpp_TypeInfo_var))->get_TokenReceivedInternal_1();
		V_0 = L_0;
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		EventHandler_1_tDEB39A0A447AC10288C367C94F542A131F956803 * L_2 = V_0;
		String_t* L_3 = __this->get_token_0();
		TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * L_4 = (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 *)il2cpp_codegen_object_new(TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96_il2cpp_TypeInfo_var);
		TokenReceivedEventArgs__ctor_mF14AB7B4F39575BF9815A7BFD0578BBF65AF06A5(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m64B71C98F80908CDF42FA9BA3A65B25ECB7E5B06(L_2, NULL, L_4, /*hidden argument*/EventHandler_1_Invoke_m64B71C98F80908CDF42FA9BA3A65B25ECB7E5B06_RuntimeMethod_var);
	}

IL_001e:
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * __this, intptr_t ___message0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___message0);

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_mC2577139CB5BD3C3EA0C1550E35D9E590C48442B (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_Invoke_m90088358CCA7071556308B2B4924F099B53C3376 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * __this, intptr_t ___message0, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_m97784A7500212313FDAE54A1238CE0BEEE53BC9F (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * __this, intptr_t ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___message0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_EndInvoke_m9AEDC932BD33D88385CA1F914593D75D7FDD4D66 (MessageReceivedDelegate_t5259F1046D9D3A7F2986FF536A5E54354CE99A12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m7A0A68DCF142B6F654A2625AC9A2FC76D029BD96 (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_Invoke_mAC40ACCF0A880FD1843098D72739242F3EDD2FD2 (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * __this, String_t* ___token0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___token0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___token0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___token0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___token0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___token0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___token0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___token0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___token0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenReceivedDelegate_BeginInvoke_m5504A854389A0FD79285E349AA31A68B87FC60D5 (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * __this, String_t* ___token0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___token0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_EndInvoke_m7C5D0CD1B9313803CDFCFE2279A205CFEFCB42B9 (TokenReceivedDelegate_t846A823C6095CBC22FD676242CB5B04AEC1E2331 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m421ED856F8FB936CF340D83202CDDF11C4A22032 (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mB8E64EEFF313B3CF123EBEC7C273531B795A6F19 (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mE051CB164BA7699B334D3EAFB4CF7C007CAC9ECE (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m42D91FC8944B36CB5B6F884619838A0000D55F84 (ExceptionArgumentDelegate_t5CFF7129BC2D491308779E7AB4491C6050E35175 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mED3F7D633873005F555A4E5ABE384713FB5F7919 (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m776BE1B935CBC457D6A6E87FB26737877C2ACB6B (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * __this, String_t* ___message0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mE55A21A52EDD333B6449C9F37455CA449B8518FD (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mD67DDC81F523340BD1E377172A27819147DA1176 (ExceptionDelegate_t8F66F0503A0E5B2A213EC27BFC49F9B3FD7BE53F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m8160707307BCC64295B22025E9D4E742B31D9A87 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m2817CB52C19C8BA7EB34EDDD9514B735F20282E8 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
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
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mA60DA0B7155410971BAC6FB3B3D4D31C1272BBBD (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_mA12277F19A4B6861FF71F8A280DBED6A8AD48007 (SWIGStringDelegate_t8737EBD6E75C26C2CB357A9B61F16F9372FC8559 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m7FBAF654A99897D1739DF85B86E5131088C51954_inline (MessageReceivedEventArgs_tA34FFA90FCDD96F3A6B5B442C2A1378D7E704C17 * __this, FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseMessage_tCD2664D9B6B432E53BB7FC202E69B4A2EB877757 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mA9C32C5B5007835735E27867E11850434F889581_inline (TokenReceivedEventArgs_tB394D65BC3A100583BB8D47EC2B721061510BC96 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_1(L_0);
		return;
	}
}
