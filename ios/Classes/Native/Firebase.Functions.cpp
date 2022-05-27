#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>
struct Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>
struct Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>>
struct Func_2_tF925CFC67E30F0EC1FBFCD7AD2AC8FBEE4B0F95C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>>
struct Func_2_t4A1C4F8A891915DF683734BD8A0794F0FF599AD3;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_tB51174A6DE5821B98ECC7865DCD68970EC83EC0F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct KeyCollection_tA51BCDB32913A75333E6E0361272218840BCAA42;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Functions.FirebaseFunctions>
struct KeyCollection_t43448A66453979D68D5A274386BDE39677453F02;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>
struct TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Firebase.Functions.HttpsCallableResult>
struct TaskFactory_1_t8339845D26F327EBDE1CA72F59F20A463B99A272;
// System.Threading.Tasks.TaskFactory`1<Firebase.Functions.HttpsCallableResultInternal>
struct TaskFactory_1_t2705D4FD9DC985EAA8DCBC388C7279FFB0FC13E6;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>
struct Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182;
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>
struct Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct ValueCollection_tBFC679FCCA75CAF93D85B0D33D013B146A92B3BA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Functions.FirebaseFunctions>
struct ValueCollection_tB1EC5B9FD033FA7BA378570C26CE1B9F02BA06A2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>[]
struct EntryU5BU5D_t84ABA732BBFAC6BFA1DDFE7185DEE22A3E7EB3EB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Functions.FirebaseFunctions>[]
struct EntryU5BU5D_t59C065DC8B9205E3FC99DDCBFA4760444360341A;
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
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
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
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
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
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.Functions.FirebaseFunctions
struct FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1;
// Firebase.Functions.FirebaseFunctionsInternal
struct FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708;
// Firebase.Functions.FunctionsException
struct FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.Functions.Future_HttpsCallableResult
struct Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425;
// Firebase.Functions.HttpsCallableReference
struct HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B;
// Firebase.Functions.HttpsCallableReferenceInternal
struct HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65;
// Firebase.Functions.HttpsCallableResult
struct HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25;
// Firebase.Functions.HttpsCallableResultInternal
struct HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
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
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// Firebase.Variant
struct Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1;
// Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B;
// Firebase.Functions.Future_HttpsCallableResult/Action
struct Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097;
// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B;
// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3;

IL2CPP_EXTERN_C RuntimeClass* Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA322FB2DA3648EC81AEB6AFE2CA46BC7B37EC7;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5647C188F04DC03A9F3CB77B8711FDFA8AF4C30;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC9191C84DBBA8308DD0092667E2B69A1C00EBBC5;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m6644739AFDFEFB1156001C30D6984C8267560186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC87DB6A7E80C4D256C9D189E5D306E706A26B20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m93BD4F2B75A7230EB6591C3C6619A6F360FCF5B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m95F76DB8C0971095E2EC7CA7B5A26964ABAF6F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA700593D3BAD0255E7E5AD478C2AC94AD894AC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCAA2BF97FE460425A817349216154947D4E88213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m24EA0651CEBE661C548CB969BA84B6936244FCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4CF60E9E432725A2C5249DD7EF0122B4752B86C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_GetHttpsCallable_mE2CCAA7BB400AFCEBFF11E03B28EB5563F967A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_GetInstanceInternal_m32A52935C6F0FB7FA9BB421E4747E46531B7E3E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctionsInternal_ReleaseReferenceInternal_m17C446C231DF2BBEF1D133F45BBC97CE2240F4DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctions_GetInstance_m3A4D74604199EA931E035208B01D7857AEEBE999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctions_OnAppDisposed_mBA6519E7D9C6DAE57CC7FA53D108B31629F87D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseFunctions_ThrowIfNull_m72329A4F3D618DCF5AC19F6E13DB5183B74D8B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0B3424BA4BD93D0BD36C668B8B5360756F697C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_GetResult_m944246E7128EB9C0649751E7387A32B24D69757C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_SWIG_FreeCompletionData_m812E3340CF1DCA3A8CB3080611C16CB2BC8033EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_SWIG_OnCompletion_m6E6B403D2FB7B26E15C138512486322AAF69F4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_HttpsCallableResult_ThrowIfDisposed_mA9D44B96EFAB1C3C65D5880AA022E6B298F49E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReferenceInternal_CallAsync_mBEFB8B9BB4D848897ED7E6B47CCF432380365FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableReference_U3CCallAsyncU3Em__0_mAD573F36CE2C779B8B39E56EB394FB27EED112A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpsCallableResultInternal_data_mAEF97A648E69B4E0C8366DB7AEEC8D9640C96A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m7F91B8A07694329E1E481E3F4AA845887C49A274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA30053C170A5788FECF6D55DC17EB206EE3D50AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m663145B526A3D66686A4B941FEBAF9C290898B45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisHttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_m36455C890220280007A8D733C81BDFF6D5343B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m3DAD307A9556857FD296D61E10A1B7A59832C153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m1538931F5F523FC80AF880B2046A48449B84429C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_0_0_0_var;
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
struct U3CModuleU3E_t5955514A31B11E050F03883CE8B47EF5AD0B9239 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>
struct Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t84ABA732BBFAC6BFA1DDFE7185DEE22A3E7EB3EB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA51BCDB32913A75333E6E0361272218840BCAA42 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBFC679FCCA75CAF93D85B0D33D013B146A92B3BA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___entries_1)); }
	inline EntryU5BU5D_t84ABA732BBFAC6BFA1DDFE7185DEE22A3E7EB3EB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t84ABA732BBFAC6BFA1DDFE7185DEE22A3E7EB3EB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t84ABA732BBFAC6BFA1DDFE7185DEE22A3E7EB3EB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___keys_7)); }
	inline KeyCollection_tA51BCDB32913A75333E6E0361272218840BCAA42 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA51BCDB32913A75333E6E0361272218840BCAA42 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA51BCDB32913A75333E6E0361272218840BCAA42 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ___values_8)); }
	inline ValueCollection_tBFC679FCCA75CAF93D85B0D33D013B146A92B3BA * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBFC679FCCA75CAF93D85B0D33D013B146A92B3BA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBFC679FCCA75CAF93D85B0D33D013B146A92B3BA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>
struct Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t59C065DC8B9205E3FC99DDCBFA4760444360341A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t43448A66453979D68D5A274386BDE39677453F02 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB1EC5B9FD033FA7BA378570C26CE1B9F02BA06A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___entries_1)); }
	inline EntryU5BU5D_t59C065DC8B9205E3FC99DDCBFA4760444360341A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t59C065DC8B9205E3FC99DDCBFA4760444360341A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t59C065DC8B9205E3FC99DDCBFA4760444360341A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___keys_7)); }
	inline KeyCollection_t43448A66453979D68D5A274386BDE39677453F02 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t43448A66453979D68D5A274386BDE39677453F02 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t43448A66453979D68D5A274386BDE39677453F02 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ___values_8)); }
	inline ValueCollection_tB1EC5B9FD033FA7BA378570C26CE1B9F02BA06A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB1EC5B9FD033FA7BA378570C26CE1B9F02BA06A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB1EC5B9FD033FA7BA378570C26CE1B9F02BA06A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>
struct TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6, ___m_task_0)); }
	inline Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

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


// Firebase.Functions.FirebaseFunctions
struct FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1  : public RuntimeObject
{
public:
	// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.FirebaseFunctions::functionsInternal
	FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___functionsInternal_1;
	// Firebase.FirebaseApp Firebase.Functions.FirebaseFunctions::firebaseApp
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___firebaseApp_2;
	// System.String Firebase.Functions.FirebaseFunctions::instanceKey
	String_t* ___instanceKey_3;

public:
	inline static int32_t get_offset_of_functionsInternal_1() { return static_cast<int32_t>(offsetof(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1, ___functionsInternal_1)); }
	inline FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * get_functionsInternal_1() const { return ___functionsInternal_1; }
	inline FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 ** get_address_of_functionsInternal_1() { return &___functionsInternal_1; }
	inline void set_functionsInternal_1(FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * value)
	{
		___functionsInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___functionsInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_firebaseApp_2() { return static_cast<int32_t>(offsetof(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1, ___firebaseApp_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_firebaseApp_2() const { return ___firebaseApp_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_firebaseApp_2() { return &___firebaseApp_2; }
	inline void set_firebaseApp_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___firebaseApp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseApp_2), (void*)value);
	}

	inline static int32_t get_offset_of_instanceKey_3() { return static_cast<int32_t>(offsetof(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1, ___instanceKey_3)); }
	inline String_t* get_instanceKey_3() const { return ___instanceKey_3; }
	inline String_t** get_address_of_instanceKey_3() { return &___instanceKey_3; }
	inline void set_instanceKey_3(String_t* value)
	{
		___instanceKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceKey_3), (void*)value);
	}
};

struct FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions> Firebase.Functions.FirebaseFunctions::functionsByInstanceKey
	Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * ___functionsByInstanceKey_0;

public:
	inline static int32_t get_offset_of_functionsByInstanceKey_0() { return static_cast<int32_t>(offsetof(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields, ___functionsByInstanceKey_0)); }
	inline Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * get_functionsByInstanceKey_0() const { return ___functionsByInstanceKey_0; }
	inline Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 ** get_address_of_functionsByInstanceKey_0() { return &___functionsByInstanceKey_0; }
	inline void set_functionsByInstanceKey_0(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * value)
	{
		___functionsByInstanceKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___functionsByInstanceKey_0), (void*)value);
	}
};


// Firebase.Functions.FunctionsInternalPINVOKE
struct FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51  : public RuntimeObject
{
public:

public:
};

struct FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_StaticFields
{
public:
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper Firebase.Functions.FunctionsInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 * ___swigExceptionHelper_0;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper Firebase.Functions.FunctionsInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Functions.HttpsCallableReference
struct HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B  : public RuntimeObject
{
public:
	// Firebase.Functions.FirebaseFunctions Firebase.Functions.HttpsCallableReference::firebaseFunctions
	FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * ___firebaseFunctions_0;
	// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.HttpsCallableReference::<Internal>k__BackingField
	HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * ___U3CInternalU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_firebaseFunctions_0() { return static_cast<int32_t>(offsetof(HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B, ___firebaseFunctions_0)); }
	inline FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * get_firebaseFunctions_0() const { return ___firebaseFunctions_0; }
	inline FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 ** get_address_of_firebaseFunctions_0() { return &___firebaseFunctions_0; }
	inline void set_firebaseFunctions_0(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * value)
	{
		___firebaseFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseFunctions_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B, ___U3CInternalU3Ek__BackingField_1)); }
	inline HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * get_U3CInternalU3Ek__BackingField_1() const { return ___U3CInternalU3Ek__BackingField_1; }
	inline HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 ** get_address_of_U3CInternalU3Ek__BackingField_1() { return &___U3CInternalU3Ek__BackingField_1; }
	inline void set_U3CInternalU3Ek__BackingField_1(HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * value)
	{
		___U3CInternalU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_1), (void*)value);
	}
};


// Firebase.Functions.HttpsCallableResult
struct HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25  : public RuntimeObject
{
public:
	// System.Object Firebase.Functions.HttpsCallableResult::<Data>k__BackingField
	RuntimeObject * ___U3CDataU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25, ___U3CDataU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CDataU3Ek__BackingField_0() const { return ___U3CDataU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CDataU3Ek__BackingField_0() { return &___U3CDataU3Ek__BackingField_0; }
	inline void set_U3CDataU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_0), (void*)value);
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

// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields
{
public:
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___applicationDelegate_0;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___arithmeticDelegate_1;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___divideByZeroDelegate_2;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___indexOutOfRangeDelegate_3;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___invalidCastDelegate_4;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___invalidOperationDelegate_5;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___ioDelegate_6;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___nullReferenceDelegate_7;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___outOfMemoryDelegate_8;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___overflowDelegate_9;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___systemDelegate_10;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentDelegate_11;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentNullDelegate_12;
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields
{
public:
	// System.Int32 Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields
{
public:
	// System.Exception Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_StaticFields
{
public:
	// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B  : public RuntimeObject
{
public:
	// Firebase.Functions.Future_HttpsCallableResult Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0::fu
	Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B, ___fu_0)); }
	inline Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * get_fu_0() const { return ___fu_0; }
	inline Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B, ___tcs_1)); }
	inline TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
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

// Firebase.Functions.FunctionsErrorCode
struct FunctionsErrorCode_tFD9050760C15240B4892CDE453EC1871F163DA50 
{
public:
	// System.Int32 Firebase.Functions.FunctionsErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FunctionsErrorCode_tFD9050760C15240B4892CDE453EC1871F163DA50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.FutureStatus
struct FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Firebase.InitResult
struct InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult>
struct Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182, ___m_result_40)); }
	inline HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * get_m_result_40() const { return ___m_result_40; }
	inline HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t8339845D26F327EBDE1CA72F59F20A463B99A272 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF925CFC67E30F0EC1FBFCD7AD2AC8FBEE4B0F95C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t8339845D26F327EBDE1CA72F59F20A463B99A272 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t8339845D26F327EBDE1CA72F59F20A463B99A272 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t8339845D26F327EBDE1CA72F59F20A463B99A272 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF925CFC67E30F0EC1FBFCD7AD2AC8FBEE4B0F95C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF925CFC67E30F0EC1FBFCD7AD2AC8FBEE4B0F95C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF925CFC67E30F0EC1FBFCD7AD2AC8FBEE4B0F95C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>
struct Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433, ___m_result_40)); }
	inline HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * get_m_result_40() const { return ___m_result_40; }
	inline HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2705D4FD9DC985EAA8DCBC388C7279FFB0FC13E6 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t4A1C4F8A891915DF683734BD8A0794F0FF599AD3 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t2705D4FD9DC985EAA8DCBC388C7279FFB0FC13E6 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t2705D4FD9DC985EAA8DCBC388C7279FFB0FC13E6 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t2705D4FD9DC985EAA8DCBC388C7279FFB0FC13E6 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t4A1C4F8A891915DF683734BD8A0794F0FF599AD3 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t4A1C4F8A891915DF683734BD8A0794F0FF599AD3 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t4A1C4F8A891915DF683734BD8A0794F0FF599AD3 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
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


// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.Functions.FirebaseFunctionsInternal
struct FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Functions.FirebaseFunctionsInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Functions.FunctionsException
struct FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2  : public Exception_t
{
public:
	// Firebase.Functions.FunctionsErrorCode Firebase.Functions.FunctionsException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Functions.HttpsCallableReferenceInternal
struct HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableReferenceInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Functions.HttpsCallableReferenceInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Functions.HttpsCallableResultInternal
struct HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.HttpsCallableResultInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Functions.HttpsCallableResultInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75  : public Exception_t
{
public:
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CInitResultU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75, ___U3CInitResultU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitResultU3Ek__BackingField_17() const { return ___U3CInitResultU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitResultU3Ek__BackingField_17() { return &___U3CInitResultU3Ek__BackingField_17; }
	inline void set_U3CInitResultU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitResultU3Ek__BackingField_17 = value;
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


// Firebase.Variant
struct Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>
struct Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6  : public MulticastDelegate_t
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


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Functions.Future_HttpsCallableResult
struct Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Functions.Future_HttpsCallableResult::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.Functions.Future_HttpsCallableResult::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate Firebase.Functions.Future_HttpsCallableResult::SWIG_CompletionCB
	SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action> Firebase.Functions.Future_HttpsCallableResult::Callbacks
	Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * ___Callbacks_3;
	// System.Int32 Firebase.Functions.Future_HttpsCallableResult::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Functions.Future_HttpsCallableResult::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
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


// Firebase.Functions.Future_HttpsCallableResult/Action
struct Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3  : public MulticastDelegate_t
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_m9333E52269EFEEE109F8A285E91ABCE0D0C3DF95_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * ___continuationFunction0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FirebaseFunctionsInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_SetSwigCMemOwn_mC147A9957B8C0C3E9A07E6020F61B682077105A9_inline (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, bool ___ownership0, const RuntimeMethod* method);
// System.String Firebase.Functions.FirebaseFunctions::InstanceKey(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseFunctions_InstanceKey_mBB66EF9A28F2F0443C1E04794662E503519B14B2 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___region1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FirebaseFunctions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_Dispose_mE2197D6171C4ED78FF3FBC553BF865F64C3755DB (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::Remove(!0)
inline bool Dictionary_2_Remove_m6644739AFDFEFB1156001C30D6984C8267560186 (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * FirebaseFunctions_GetInstance_m50A33AC567BAFDD3FA7883CE602574BBDBE1A3F9 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * FirebaseFunctions_GetInstance_m3A4D74604199EA931E035208B01D7857AEEBE999 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___region1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m95F76DB8C0971095E2EC7CA7B5A26964ABAF6F3C (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * __this, String_t* ___key0, FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 *, String_t*, FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.FirebaseFunctionsInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * FirebaseFunctionsInternal_GetInstanceInternal_m32A52935C6F0FB7FA9BB421E4747E46531B7E3E7 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___region1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.String Firebase.ErrorMessages::get_DllNotFoundExceptionErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595 (const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14 (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FirebaseFunctions::.ctor(Firebase.Functions.FirebaseFunctionsInternal,Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions__ctor_mB8CC43A961E8BABA3FD085ADEA7F05BC1C6249A1 (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___functions0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app1, String_t* ___region2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m24EA0651CEBE661C548CB969BA84B6936244FCC2 (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * __this, String_t* ___key0, FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 *, String_t*, FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::getCPtr(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseFunctionsInternal_getCPtr_mB126D878E68A05C200AB922B7352E74E2ADEA5BB (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, const RuntimeMethod* method);
// System.Void Firebase.Functions.FirebaseFunctions::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_ThrowIfNull_m72329A4F3D618DCF5AC19F6E13DB5183B74D8B37 (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, const RuntimeMethod* method);
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.FirebaseFunctionsInternal::GetHttpsCallable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * FirebaseFunctionsInternal_GetHttpsCallable_mE2CCAA7BB400AFCEBFF11E03B28EB5563F967A38 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Firebase.Functions.HttpsCallableReference::.ctor(Firebase.Functions.FirebaseFunctions,Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReference__ctor_mD79E2D21D43376C8C04939A39B0B424049050AAF (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * ___functions0, HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * ___callableReferenceInternal1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Functions.FirebaseFunctions>::.ctor()
inline void Dictionary_2__ctor_mCAA2BF97FE460425A817349216154947D4E88213 (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FirebaseFunctionsInternal::ReleaseReferenceInternal(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_ReleaseReferenceInternal_m17C446C231DF2BBEF1D133F45BBC97CE2240F4DC (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___instance0, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable_m75F837B3BBDA6D33E386F29C7FEEE75ECF7273AA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal__ctor_m8032C1BE1DAC4BB7E426ED9077BBB39B1486B3A6 (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal_m709E1348809DD776D31B691D903893C70C844E52 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Functions.FirebaseFunctionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal__ctor_m3226F27448BDCB44EB7B4AED8B7AE71CC21BF9F4 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal_m79556703762C1291CB530C6040D4CAAD41A5537F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsException::set_ErrorCode(Firebase.Functions.FunctionsErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionsException_set_ErrorCode_m065C339874E8A94DFEF407C2E6928C88905ACC32_inline (FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m60543182623AC2D8C2CA903813ADDB3D1A8219A6 (SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 * __this, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m0A4F7E7A85AFC4B23F085B535E0127931027B47E (SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 * __this, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast_m9F3A7993B8A930CD57FDB4E7EC1338D5F35ED3AA (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetCompletionData_mFEB8427CDB1AE5200C9161D5F96D49CD519404EC (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_delete_Future_HttpsCallableResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_delete_Future_HttpsCallableResult_m5F3787AB80D06BEB00E7FDA5956638F9F13EF9BF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m7482800AD5037356AD88E62DCD6B24449FDC237C (U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::.ctor()
inline void TaskCompletionSource_1__ctor_m663145B526A3D66686A4B941FEBAF9C290898B45 (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39 (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::get_Task()
inline Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_inline (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * (*) (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m36746B1279E86EE9DAFF4BDEEA988E080C1BFCC0 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetOnCompletionCallback(Firebase.Functions.Future_HttpsCallableResult/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetOnCompletionCallback_mF05DCB69A605F03E0A3E1D87DF640109EE489980 (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_ThrowIfDisposed_mA9D44B96EFAB1C3C65D5880AA022E6B298F49E9E (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3BE1EC213AC97B8697CCE461D8D6D4AD3B726F5F (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::.ctor()
inline void Dictionary_2__ctor_mA700593D3BAD0255E7E5AD478C2AC94AD894AC1E (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4CF60E9E432725A2C5249DD7EF0122B4752B86C1 (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * __this, int32_t ___key0, Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 *, int32_t, Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Functions.Future_HttpsCallableResult::SWIG_OnCompletion(Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_HttpsCallableResult_SWIG_OnCompletion_m6E6B403D2FB7B26E15C138512486322AAF69F4F7 (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_FreeCompletionData_m812E3340CF1DCA3A8CB3080611C16CB2BC8033EC (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m93BD4F2B75A7230EB6591C3C6619A6F360FCF5B8 (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * __this, int32_t ___key0, Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 *, int32_t, Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Functions.Future_HttpsCallableResult/Action>::Remove(!0)
inline bool Dictionary_2_Remove_mC87DB6A7E80C4D256C9D189E5D306E706A26B20C (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m54CF7F65E2865930755BE841310ADAB61D8B6CB8 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion_m1493D35279FF5720CCE1DA9EC522109E7BF392A2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData_m85F06BEDDC030E4B343C21C2FF76292AC1B65A1F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_GetResult_mA5C42181DCB2C628768B6C4D7FCAB59835C38913 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Functions.HttpsCallableResultInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal__ctor_mA1AFF4AEC078F5A7B6C6959AB581CF238EE10C25 (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Functions.HttpsCallableReference::set_Internal(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableReference_set_Internal_mCAB7202F4976D29285C12964243C133622541AD2_inline (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * ___value0, const RuntimeMethod* method);
// Firebase.Variant Firebase.Variant::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * Variant_FromObject_mE58A1F66819C8CD004C2BF52AFE4F19985597EF7 (RuntimeObject * ___o0, const RuntimeMethod* method);
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.HttpsCallableReference::get_Internal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * HttpsCallableReference_get_Internal_m408ED314A86EDEDBF1FC5004878230A2B7E0CBC6_inline (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.HttpsCallableReferenceInternal::CallAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * HttpsCallableReferenceInternal_CallAsync_mBEFB8B9BB4D848897ED7E6B47CCF432380365FF0 (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * __this, Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___data0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>,Firebase.Functions.HttpsCallableResult>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0B3424BA4BD93D0BD36C668B8B5360756F697C1F (Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>::ContinueWith<Firebase.Functions.HttpsCallableResult>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
inline Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182 * Task_1_ContinueWith_TisHttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_m36455C890220280007A8D733C81BDFF6D5343B3F (Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * __this, Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6 * ___continuationFunction0, const RuntimeMethod* method)
{
	return ((  Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182 * (*) (Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 *, Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6 *, const RuntimeMethod*))Task_1_ContinueWith_TisRuntimeObject_m9333E52269EFEEE109F8A285E91ABCE0D0C3DF95_gshared)(__this, ___continuationFunction0, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983 (ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared)(__this, method);
}
// System.Void Firebase.Functions.FunctionsException::.ctor(Firebase.FirebaseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsException__ctor_m4BB4016CAA714D1D9DB351485325E1B7140C836D (FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 * __this, FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * ___e0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>::get_Result()
inline HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * Task_1_get_Result_m3DAD307A9556857FD296D61E10A1B7A59832C153 (Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * __this, const RuntimeMethod* method)
{
	return ((  HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * (*) (Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// Firebase.Variant Firebase.Functions.HttpsCallableResultInternal::data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * HttpsCallableResultInternal_data_mAEF97A648E69B4E0C8366DB7AEEC8D9640C96A47 (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * __this, const RuntimeMethod* method);
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VariantExtension_ToObject_mD6F64264302F2E7E8820EA084214205152FAA0B9 (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___variant0, const RuntimeMethod* method);
// System.Void Firebase.Functions.HttpsCallableResult::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResult__ctor_m42D596BE180BAFFF2223B15CF77699360878EC2E (HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * __this, RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_delete_HttpsCallableReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_delete_HttpsCallableReferenceInternal_mD95404BC66672D5721EDC7D14DEDF8F04540D371 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Variant::getCPtr(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Variant_getCPtr_m54D63420C815303499DE5265A30EEE92981C55B3 (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1_m5671AF67D2D5A6944550D522C88CD0D8D2B2A828 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Functions.Future_HttpsCallableResult::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__ctor_mDC22CC44C93AD7D28727710FFA8D4455323A52BF (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.Future_HttpsCallableResult::GetTask(Firebase.Functions.Future_HttpsCallableResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * Future_HttpsCallableResult_GetTask_m986FC6E1FE49E18C0226660F7BF9C00BC61E46BC (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * ___fu0, const RuntimeMethod* method);
// System.Void Firebase.Functions.HttpsCallableResult::set_Data(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableResult_set_Data_m57CFE0450881D51EF6DB14AAC0E4DCB793E52A46_inline (HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_delete_HttpsCallableResultInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_delete_HttpsCallableResultInternal_m17E65FABCFE19B3B8CF85D79897460D0D3EAD3E4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_HttpsCallableResultInternal_data(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_HttpsCallableResultInternal_data_mBE438797B086A4393B820443C7EB3289DF3655DA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_mDE4F4CD06BFEFA94C7B3757DAF5EB3F4E10DAD8E (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41 (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mCE9B4AC8D843A7EC7BCFDC473210067F37A1C8A1 (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FunctionsInternal_m5A3A66F32581F5DD4D3B549AD1F33517B842728A (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___applicationDelegate0, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___arithmeticDelegate1, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___divideByZeroDelegate2, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___indexOutOfRangeDelegate3, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___invalidCastDelegate4, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___invalidOperationDelegate5, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___ioDelegate6, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___nullReferenceDelegate7, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___outOfMemoryDelegate8, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___overflowDelegate9, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FunctionsInternal_m16BB9818DDD553BABA24D587B981C23A0F234E68 (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentDelegate0, ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentNullDelegate1, ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87 (Exception_t * ___e0, const RuntimeMethod* method);
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
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mEC6015486CB9FB9CDE809D387F44D0E2390A8CBE (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FunctionsInternal_m7BBC2FC93E20A30903F43CDC9FF797D8DF0CB046 (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m7F91B8A07694329E1E481E3F4AA845887C49A274 (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// Firebase.Functions.HttpsCallableResultInternal Firebase.Functions.Future_HttpsCallableResult::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * Future_HttpsCallableResult_GetResult_m944246E7128EB9C0649751E7387A32B24D69757C (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Functions.HttpsCallableResultInternal>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mA30053C170A5788FECF6D55DC17EB206EE3D50AC (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * __this, HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 *, HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData(void*, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_Future_HttpsCallableResult_GetResult(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_delete_Future_HttpsCallableResult(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_delete_HttpsCallableReferenceInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1(void*, void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_delete_HttpsCallableResultInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_HttpsCallableResultInternal_data(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable(void*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal(void*, char*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FunctionsInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_FunctionsInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FunctionsInternal(Il2CppMethodPointer);
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
// System.Void Firebase.Functions.FirebaseFunctions::.ctor(Firebase.Functions.FirebaseFunctionsInternal,Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions__ctor_mB8CC43A961E8BABA3FD085ADEA7F05BC1C6249A1 (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___functions0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app1, String_t* ___region2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_OnAppDisposed_mBA6519E7D9C6DAE57CC7FA53D108B31629F87D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app1;
		__this->set_firebaseApp_2(L_0);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = __this->get_firebaseApp_2();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_2, __this, (intptr_t)((intptr_t)FirebaseFunctions_OnAppDisposed_mBA6519E7D9C6DAE57CC7FA53D108B31629F87D1C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79(L_1, L_2, /*hidden argument*/NULL);
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_3 = ___functions0;
		__this->set_functionsInternal_1(L_3);
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_4 = __this->get_functionsInternal_1();
		NullCheck(L_4);
		FirebaseFunctionsInternal_SetSwigCMemOwn_mC147A9957B8C0C3E9A07E6020F61B682077105A9_inline(L_4, (bool)1, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = ___app1;
		String_t* L_6 = ___region2;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = FirebaseFunctions_InstanceKey_mBB66EF9A28F2F0443C1E04794662E503519B14B2(L_5, L_6, /*hidden argument*/NULL);
		__this->set_instanceKey_3(L_7);
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_Finalize_mF53844D0BAE587197D5880AF860831EBB957EC89 (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseFunctions_Dispose_mE2197D6171C4ED78FF3FBC553BF865F64C3755DB(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Functions.FirebaseFunctions::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_OnAppDisposed_mBA6519E7D9C6DAE57CC7FA53D108B31629F87D1C (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseFunctions_Dispose_mE2197D6171C4ED78FF3FBC553BF865F64C3755DB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_Dispose_mE2197D6171C4ED78FF3FBC553BF865F64C3755DB (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6644739AFDFEFB1156001C30D6984C8267560186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_OnAppDisposed_mBA6519E7D9C6DAE57CC7FA53D108B31629F87D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * L_0 = ((FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var))->get_functionsByInstanceKey_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_2 = __this->get_functionsInternal_1();
			if (L_2)
			{
				goto IL_0022;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}

IL_0022:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
			Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * L_3 = ((FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var))->get_functionsByInstanceKey_0();
			String_t* L_4 = __this->get_instanceKey_3();
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_Remove_m6644739AFDFEFB1156001C30D6984C8267560186(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m6644739AFDFEFB1156001C30D6984C8267560186_RuntimeMethod_var);
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_6 = __this->get_functionsInternal_1();
			NullCheck(L_6);
			VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose() */, L_6);
			__this->set_functionsInternal_1((FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 *)NULL);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_7 = __this->get_firebaseApp_2();
			EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
			EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_8, __this, (intptr_t)((intptr_t)FirebaseFunctions_OnAppDisposed_mBA6519E7D9C6DAE57CC7FA53D108B31629F87D1C_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_7);
			FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812(L_7, L_8, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		return;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * FirebaseFunctions_get_DefaultInstance_m2A0F3F4448817225F99FB3AACAD93453EE6C9B32 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_1;
		L_1 = FirebaseFunctions_GetInstance_m50A33AC567BAFDD3FA7883CE602574BBDBE1A3F9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.Functions.FirebaseFunctions::InstanceKey(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseFunctions_InstanceKey_mBB66EF9A28F2F0443C1E04794662E503519B14B2 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___region1;
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * FirebaseFunctions_GetInstance_m50A33AC567BAFDD3FA7883CE602574BBDBE1A3F9 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5647C188F04DC03A9F3CB77B8711FDFA8AF4C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_1;
		L_1 = FirebaseFunctions_GetInstance_m3A4D74604199EA931E035208B01D7857AEEBE999(L_0, _stringLiteralB5647C188F04DC03A9F3CB77B8711FDFA8AF4C30, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Functions.FirebaseFunctions Firebase.Functions.FirebaseFunctions::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * FirebaseFunctions_GetInstance_m3A4D74604199EA931E035208B01D7857AEEBE999 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m95F76DB8C0971095E2EC7CA7B5A26964ABAF6F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m24EA0651CEBE661C548CB969BA84B6936244FCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA322FB2DA3648EC81AEB6AFE2CA46BC7B37EC7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * V_2 = NULL;
	FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * V_3 = NULL;
	int32_t V_4 = 0;
	FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B6_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B5_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * L_0 = ((FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var))->get_functionsByInstanceKey_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___app0;
			String_t* L_3 = ___region1;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
			String_t* L_4;
			L_4 = FirebaseFunctions_InstanceKey_mBB66EF9A28F2F0443C1E04794662E503519B14B2(L_2, L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			V_2 = (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 *)NULL;
			Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * L_5 = ((FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var))->get_functionsByInstanceKey_0();
			String_t* L_6 = V_1;
			NullCheck(L_5);
			bool L_7;
			L_7 = Dictionary_2_TryGetValue_m95F76DB8C0971095E2EC7CA7B5A26964ABAF6F3C(L_5, L_6, (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m95F76DB8C0971095E2EC7CA7B5A26964ABAF6F3C_RuntimeMethod_var);
			if (!L_7)
			{
				goto IL_0035;
			}
		}

IL_0028:
		{
			FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_9 = V_2;
			V_3 = L_9;
			IL2CPP_LEAVE(0xA0, FINALLY_0099);
		}

IL_0035:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_10 = ___app0;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_11 = L_10;
			G_B5_0 = L_11;
			if (L_11)
			{
				G_B6_0 = L_11;
				goto IL_0042;
			}
		}

IL_003c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_12;
			L_12 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
			G_B6_0 = L_12;
		}

IL_0042:
		{
			___app0 = G_B6_0;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_13 = ___app0;
			String_t* L_14 = ___region1;
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_15;
			L_15 = FirebaseFunctionsInternal_GetInstanceInternal_m32A52935C6F0FB7FA9BB421E4747E46531B7E3E7(L_13, L_14, (int32_t*)(&V_4), /*hidden argument*/NULL);
			V_5 = L_15;
			int32_t L_16 = V_4;
			if (!L_16)
			{
				goto IL_0063;
			}
		}

IL_0056:
		{
			int32_t L_17 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_tB3D82EB67D7EFFAFB43E09920F90099A285E2C51_il2cpp_TypeInfo_var)));
			String_t* L_18;
			L_18 = ErrorMessages_get_DllNotFoundExceptionErrorMessage_m493D1E37E274C2D633EB65991F5B26102E3F6595(/*hidden argument*/NULL);
			InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_19 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
			InitializationException__ctor_m4F5649529A9F0863B359E63E74F8B5331F138A14(L_19, L_17, L_18, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctions_GetInstance_m3A4D74604199EA931E035208B01D7857AEEBE999_RuntimeMethod_var)));
		}

IL_0063:
		{
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_20 = V_5;
			if (L_20)
			{
				goto IL_007c;
			}
		}

IL_006a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
			LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(3, _stringLiteral3AA322FB2DA3648EC81AEB6AFE2CA46BC7B37EC7, /*hidden argument*/NULL);
			V_3 = (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 *)NULL;
			IL2CPP_LEAVE(0xA0, FINALLY_0099);
		}

IL_007c:
		{
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_21 = V_5;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_22 = ___app0;
			String_t* L_23 = ___region1;
			FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_24 = (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 *)il2cpp_codegen_object_new(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
			FirebaseFunctions__ctor_mB8CC43A961E8BABA3FD085ADEA7F05BC1C6249A1(L_24, L_21, L_22, L_23, /*hidden argument*/NULL);
			V_2 = L_24;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
			Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * L_25 = ((FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var))->get_functionsByInstanceKey_0();
			String_t* L_26 = V_1;
			FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_27 = V_2;
			NullCheck(L_25);
			Dictionary_2_set_Item_m24EA0651CEBE661C548CB969BA84B6936244FCC2(L_25, L_26, L_27, /*hidden argument*/Dictionary_2_set_Item_m24EA0651CEBE661C548CB969BA84B6936244FCC2_RuntimeMethod_var);
			FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_28 = V_2;
			V_3 = L_28;
			IL2CPP_LEAVE(0xA0, FINALLY_0099);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0099;
	}

FINALLY_0099:
	{ // begin finally (depth: 1)
		RuntimeObject * L_29 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_29, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(153)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA0, IL_00a0)
	}

IL_00a0:
	{
		FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_30 = V_3;
		return L_30;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions_ThrowIfNull_m72329A4F3D618DCF5AC19F6E13DB5183B74D8B37 (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_0 = __this->get_functionsInternal_1();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_1 = __this->get_functionsInternal_1();
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = FirebaseFunctionsInternal_getCPtr_mB126D878E68A05C200AB922B7352E74E2ADEA5BB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3;
		L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_5 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctions_ThrowIfNull_m72329A4F3D618DCF5AC19F6E13DB5183B74D8B37_RuntimeMethod_var)));
	}

IL_0033:
	{
		return;
	}
}
// Firebase.Functions.HttpsCallableReference Firebase.Functions.FirebaseFunctions::GetHttpsCallable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * FirebaseFunctions_GetHttpsCallable_m8EBCB3CD55D29CCD601625AC4552ADB1EB584BE5 (FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseFunctions_ThrowIfNull_m72329A4F3D618DCF5AC19F6E13DB5183B74D8B37(__this, /*hidden argument*/NULL);
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_0 = __this->get_functionsInternal_1();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_2;
		L_2 = FirebaseFunctionsInternal_GetHttpsCallable_mE2CCAA7BB400AFCEBFF11E03B28EB5563F967A38(L_0, L_1, /*hidden argument*/NULL);
		HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * L_3 = (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B *)il2cpp_codegen_object_new(HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B_il2cpp_TypeInfo_var);
		HttpsCallableReference__ctor_mD79E2D21D43376C8C04939A39B0B424049050AAF(L_3, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Firebase.Functions.FirebaseFunctions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctions__cctor_mF5CFD320FF4DE534E8233CBCDC6D625AB675BAE6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCAA2BF97FE460425A817349216154947D4E88213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 * L_0 = (Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0 *)il2cpp_codegen_object_new(Dictionary_2_t08B32148AC1A6696789F9565D00A88766B6453C0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCAA2BF97FE460425A817349216154947D4E88213(L_0, /*hidden argument*/Dictionary_2__ctor_mCAA2BF97FE460425A817349216154947D4E88213_RuntimeMethod_var);
		((FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1_il2cpp_TypeInfo_var))->set_functionsByInstanceKey_0(L_0);
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
// System.Void Firebase.Functions.FirebaseFunctionsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal__ctor_m3226F27448BDCB44EB7B4AED8B7AE71CC21BF9F4 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Runtime.InteropServices.HandleRef Firebase.Functions.FirebaseFunctionsInternal::getCPtr(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseFunctionsInternal_getCPtr_mB126D878E68A05C200AB922B7352E74E2ADEA5BB (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_Finalize_m9408A3188A101728C2D5DDD8711A63A3CBF7F920 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose() */, __this);
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
// System.Void Firebase.Functions.FirebaseFunctionsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_Dispose_mE257783370EF3DB5B8E15C65B4DBCED5837D8DC7 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
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
		FirebaseFunctionsInternal_ReleaseReferenceInternal_m17C446C231DF2BBEF1D133F45BBC97CE2240F4DC(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_LEAVE(0x36, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
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
// System.Void Firebase.Functions.FirebaseFunctionsInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_SetSwigCMemOwn_mC147A9957B8C0C3E9A07E6020F61B682077105A9 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, bool ___ownership0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownership0;
		__this->set_swigCMemOwn_1(L_0);
		return;
	}
}
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.FirebaseFunctionsInternal::GetHttpsCallable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * FirebaseFunctionsInternal_GetHttpsCallable_mE2CCAA7BB400AFCEBFF11E03B28EB5563F967A38 (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable_m75F837B3BBDA6D33E386F29C7FEEE75ECF7273AA(L_0, L_1, /*hidden argument*/NULL);
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_3 = (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 *)il2cpp_codegen_object_new(HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65_il2cpp_TypeInfo_var);
		HttpsCallableReferenceInternal__ctor_m8032C1BE1DAC4BB7E426ED9077BBB39B1486B3A6(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_GetHttpsCallable_mE2CCAA7BB400AFCEBFF11E03B28EB5563F967A38_RuntimeMethod_var)));
	}

IL_0023:
	{
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Functions.FirebaseFunctionsInternal Firebase.Functions.FirebaseFunctionsInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * FirebaseFunctionsInternal_GetInstanceInternal_m32A52935C6F0FB7FA9BB421E4747E46531B7E3E7 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___region1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * V_2 = NULL;
	FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
			L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
			String_t* L_2 = ___region1;
			IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
			intptr_t L_3;
			L_3 = FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal_m709E1348809DD776D31B691D903893C70C844E52(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5;
			L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			G_B4_0 = ((FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 *)(NULL));
			goto IL_002e;
		}

IL_0027:
		{
			intptr_t L_6 = V_1;
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_7 = (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 *)il2cpp_codegen_object_new(FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708_il2cpp_TypeInfo_var);
			FirebaseFunctionsInternal__ctor_m3226F27448BDCB44EB7B4AED8B7AE71CC21BF9F4(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
		}

IL_002e:
		{
			V_2 = G_B4_0;
			bool L_8;
			L_8 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_9;
			L_9 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_GetInstanceInternal_m32A52935C6F0FB7FA9BB421E4747E46531B7E3E7_RuntimeMethod_var)));
		}

IL_003f:
		{
			FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_10 = V_2;
			V_3 = L_10;
			IL2CPP_LEAVE(0x4A, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		int32_t* L_11 = ___init_result_out2;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Functions.FirebaseFunctionsInternal::ReleaseReferenceInternal(Firebase.Functions.FirebaseFunctionsInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_ReleaseReferenceInternal_m17C446C231DF2BBEF1D133F45BBC97CE2240F4DC (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * L_0 = ___instance0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseFunctionsInternal_getCPtr_mB126D878E68A05C200AB922B7352E74E2ADEA5BB(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal_m79556703762C1291CB530C6040D4CAAD41A5537F(L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseFunctionsInternal_ReleaseReferenceInternal_m17C446C231DF2BBEF1D133F45BBC97CE2240F4DC_RuntimeMethod_var)));
	}

IL_001b:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Functions.FunctionsException::.ctor(Firebase.FirebaseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsException__ctor_m4BB4016CAA714D1D9DB351485325E1B7140C836D (FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 * __this, FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_0 = ___e0;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_0);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_1, /*hidden argument*/NULL);
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_2 = ___e0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60_inline(L_2, /*hidden argument*/NULL);
		FunctionsException_set_ErrorCode_m065C339874E8A94DFEF407C2E6928C88905ACC32_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsException::set_ErrorCode(Firebase.Functions.FunctionsErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsException_set_ErrorCode_m065C339874E8A94DFEF407C2E6928C88905ACC32 (FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE__cctor_m72497F400FF9D0E0A09AE2DDE3D220C3F7EDFB96 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 * L_0 = (SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m60543182623AC2D8C2CA903813ADDB3D1A8219A6(L_0, /*hidden argument*/NULL);
		((FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_StaticFields*)il2cpp_codegen_static_fields_for(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 * L_1 = (SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 *)il2cpp_codegen_object_new(SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m0A4F7E7A85AFC4B23F085B535E0127931027B47E(L_1, /*hidden argument*/NULL);
		((FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_StaticFields*)il2cpp_codegen_static_fields_for(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion_m1493D35279FF5720CCE1DA9EC522109E7BF392A2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData_m85F06BEDDC030E4B343C21C2FF76292AC1B65A1F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_GetResult_mA5C42181DCB2C628768B6C4D7FCAB59835C38913 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_Future_HttpsCallableResult_GetResult)(____jarg10_marshaled);

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_delete_Future_HttpsCallableResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_delete_Future_HttpsCallableResult_m5F3787AB80D06BEB00E7FDA5956638F9F13EF9BF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_delete_Future_HttpsCallableResult)(____jarg10_marshaled);

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_delete_HttpsCallableReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_delete_HttpsCallableReferenceInternal_mD95404BC66672D5721EDC7D14DEDF8F04540D371 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_delete_HttpsCallableReferenceInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1_m5671AF67D2D5A6944550D522C88CD0D8D2B2A828 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_delete_HttpsCallableResultInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_delete_HttpsCallableResultInternal_m17E65FABCFE19B3B8CF85D79897460D0D3EAD3E4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_delete_HttpsCallableResultInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_HttpsCallableResultInternal_data(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_HttpsCallableResultInternal_data_mBE438797B086A4393B820443C7EB3289DF3655DA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_HttpsCallableResultInternal_data)(____jarg10_marshaled);

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable_m75F837B3BBDA6D33E386F29C7FEEE75ECF7273AA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_FirebaseFunctionsInternal_GetHttpsCallable)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal_m709E1348809DD776D31B691D903893C70C844E52 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_FirebaseFunctionsInternal_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionsInternalPINVOKE_Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal_m79556703762C1291CB530C6040D4CAAD41A5537F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Functions_FirebaseFunctionsInternal_ReleaseReferenceInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Functions.FunctionsInternalPINVOKE::Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast_m9F3A7993B8A930CD57FDB4E7EC1338D5F35ED3AA (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96(___key0, NULL);

}
// System.Void Firebase.Functions.Future_HttpsCallableResult::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__ctor_mDC22CC44C93AD7D28727710FFA8D4455323A52BF (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIGUpcast_m9F3A7993B8A930CD57FDB4E7EC1338D5F35ED3AA((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_Finalize_m8E95D7FC05DF5F438E2C39F3B9B1297F759150B6 (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Functions.Future_HttpsCallableResult::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_Dispose_m109403DAC2F4229CE0F6700D37CFF4946E6F5DF9 (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
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
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0026:
		{
			Future_HttpsCallableResult_SetCompletionData_mFEB8427CDB1AE5200C9161D5F96D49CD519404EC(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_5 = ((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_004e;
			}
		}

IL_003c:
		{
			((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
			FunctionsInternalPINVOKE_Firebase_Functions_delete_Future_HttpsCallableResult_m5F3787AB80D06BEB00E7FDA5956638F9F13EF9BF(L_6, /*hidden argument*/NULL);
		}

IL_004e:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_005f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x77, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.Future_HttpsCallableResult::GetTask(Firebase.Functions.Future_HttpsCallableResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * Future_HttpsCallableResult_GetTask_m986FC6E1FE49E18C0226660F7BF9C00BC61E46BC (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m663145B526A3D66686A4B941FEBAF9C290898B45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m1538931F5F523FC80AF880B2046A48449B84429C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m7482800AD5037356AD88E62DCD6B24449FDC237C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_1 = V_0;
		Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_3 = V_0;
		TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_4 = (TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m663145B526A3D66686A4B941FEBAF9C290898B45(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m663145B526A3D66686A4B941FEBAF9C290898B45_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_5 = V_0;
		NullCheck(L_5);
		Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_9 = L_8->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_13;
		L_13 = TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_inline(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_14 = V_0;
		NullCheck(L_14);
		Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_16 = V_0;
		Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * L_17 = (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 *)il2cpp_codegen_object_new(Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097_il2cpp_TypeInfo_var);
		Action__ctor_m36746B1279E86EE9DAFF4BDEEA988E080C1BFCC0(L_17, L_16, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m1538931F5F523FC80AF880B2046A48449B84429C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_HttpsCallableResult_SetOnCompletionCallback_mF05DCB69A605F03E0A3E1D87DF640109EE489980(L_15, L_17, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_20;
		L_20 = TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_mEB28DE1FFA030328F6DA298A86DA4A69ECE1F551_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_ThrowIfDisposed_mA9D44B96EFAB1C3C65D5880AA022E6B298F49E9E (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_ThrowIfDisposed_mA9D44B96EFAB1C3C65D5880AA022E6B298F49E9E_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetOnCompletionCallback(Firebase.Functions.Future_HttpsCallableResult/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetOnCompletionCallback_mF05DCB69A605F03E0A3E1D87DF640109EE489980 (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA700593D3BAD0255E7E5AD478C2AC94AD894AC1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4CF60E9E432725A2C5249DD7EF0122B4752B86C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Future_HttpsCallableResult_ThrowIfDisposed_mA9D44B96EFAB1C3C65D5880AA022E6B298F49E9E(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * L_1 = (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m3BE1EC213AC97B8697CCE461D8D6D4AD3B726F5F(L_1, NULL, (intptr_t)((intptr_t)Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
			Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * L_4 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * L_5 = (Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 *)il2cpp_codegen_object_new(Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mA700593D3BAD0255E7E5AD478C2AC94AD894AC1E(L_5, /*hidden argument*/Dictionary_2__ctor_mA700593D3BAD0255E7E5AD478C2AC94AD894AC1E_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
			((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * L_8 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m4CF60E9E432725A2C5249DD7EF0122B4752B86C1(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m4CF60E9E432725A2C5249DD7EF0122B4752B86C1_RuntimeMethod_var);
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
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14;
		L_14 = Future_HttpsCallableResult_SWIG_OnCompletion_m6E6B403D2FB7B26E15C138512486322AAF69F4F7(__this, L_12, L_13, /*hidden argument*/NULL);
		Future_HttpsCallableResult_SetCompletionData_mFEB8427CDB1AE5200C9161D5F96D49CD519404EC(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SetCompletionData_mFEB8427CDB1AE5200C9161D5F96D49CD519404EC (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_HttpsCallableResult_ThrowIfDisposed_mA9D44B96EFAB1C3C65D5880AA022E6B298F49E9E(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_HttpsCallableResult_SWIG_FreeCompletionData_m812E3340CF1DCA3A8CB3080611C16CB2BC8033EC(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_CompletionDispatcher_m5B2E5195D7C9FADAA62BE0C97B50FDFF5E039F96 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC87DB6A7E80C4D256C9D189E5D306E706A26B20C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m93BD4F2B75A7230EB6591C3C6619A6F360FCF5B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
			Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * L_2 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
			Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * L_3 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_m93BD4F2B75A7230EB6591C3C6619A6F360FCF5B8(L_3, L_4, (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m93BD4F2B75A7230EB6591C3C6619A6F360FCF5B8_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
			Dictionary_2_t2C7230098C8E9EAA97C652CD5A88D7FDD1DA3131 * L_6 = ((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			bool L_8;
			L_8 = Dictionary_2_Remove_mC87DB6A7E80C4D256C9D189E5D306E706A26B20C(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_mC87DB6A7E80C4D256C9D189E5D306E706A26B20C_RuntimeMethod_var);
		}

IL_0036:
		{
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
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * L_11 = V_0;
		NullCheck(L_11);
		Action_Invoke_m54CF7F65E2865930755BE841310ADAB61D8B6CB8(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Functions.Future_HttpsCallableResult::SWIG_OnCompletion(Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_HttpsCallableResult_SWIG_OnCompletion_m6E6B403D2FB7B26E15C138512486322AAF69F4F7 (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIG_OnCompletion_m1493D35279FF5720CCE1DA9EC522109E7BF392A2(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_SWIG_OnCompletion_m6E6B403D2FB7B26E15C138512486322AAF69F4F7_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult_SWIG_FreeCompletionData_m812E3340CF1DCA3A8CB3080611C16CB2BC8033EC (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_SWIG_FreeCompletionData_m85F06BEDDC030E4B343C21C2FF76292AC1B65A1F(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_SWIG_FreeCompletionData_m812E3340CF1DCA3A8CB3080611C16CB2BC8033EC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Functions.HttpsCallableResultInternal Firebase.Functions.Future_HttpsCallableResult::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * Future_HttpsCallableResult_GetResult_m944246E7128EB9C0649751E7387A32B24D69757C (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_Firebase_Functions_Future_HttpsCallableResult_GetResult_mA5C42181DCB2C628768B6C4D7FCAB59835C38913(L_0, /*hidden argument*/NULL);
		HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * L_2 = (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC *)il2cpp_codegen_object_new(HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC_il2cpp_TypeInfo_var);
		HttpsCallableResultInternal__ctor_mA1AFF4AEC078F5A7B6C6959AB581CF238EE10C25(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_HttpsCallableResult_GetResult_m944246E7128EB9C0649751E7387A32B24D69757C_RuntimeMethod_var)));
	}

IL_0022:
	{
		HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_HttpsCallableResult__cctor_mC9B0BA3D35F1599644D9DAEB3C3A10E05AB613C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_StaticFields*)il2cpp_codegen_static_fields_for(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.Functions.HttpsCallableReference::.ctor(Firebase.Functions.FirebaseFunctions,Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReference__ctor_mD79E2D21D43376C8C04939A39B0B424049050AAF (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * ___functions0, HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * ___callableReferenceInternal1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FirebaseFunctions_t2C46457958FE7865F15F572EBE26A783AF28D6A1 * L_0 = ___functions0;
		__this->set_firebaseFunctions_0(L_0);
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_1 = ___callableReferenceInternal1;
		HttpsCallableReference_set_Internal_mCAB7202F4976D29285C12964243C133622541AD2_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Functions.HttpsCallableReferenceInternal Firebase.Functions.HttpsCallableReference::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * HttpsCallableReference_get_Internal_m408ED314A86EDEDBF1FC5004878230A2B7E0CBC6 (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, const RuntimeMethod* method)
{
	{
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_0 = __this->get_U3CInternalU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Functions.HttpsCallableReference::set_Internal(Firebase.Functions.HttpsCallableReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReference_set_Internal_mCAB7202F4976D29285C12964243C133622541AD2 (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * ___value0, const RuntimeMethod* method)
{
	{
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResult> Firebase.Functions.HttpsCallableReference::CallAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182 * HttpsCallableReference_CallAsync_m0BEBE98C35E036D016A0AB1D73219AFB664C302F (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m0B3424BA4BD93D0BD36C668B8B5360756F697C1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableReference_U3CCallAsyncU3Em__0_mAD573F36CE2C779B8B39E56EB394FB27EED112A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_TisHttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_m36455C890220280007A8D733C81BDFF6D5343B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___data0;
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_1;
		L_1 = Variant_FromObject_mE58A1F66819C8CD004C2BF52AFE4F19985597EF7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_2;
		L_2 = HttpsCallableReference_get_Internal_m408ED314A86EDEDBF1FC5004878230A2B7E0CBC6_inline(__this, /*hidden argument*/NULL);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_3 = V_0;
		NullCheck(L_2);
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_4;
		L_4 = HttpsCallableReferenceInternal_CallAsync_mBEFB8B9BB4D848897ED7E6B47CCF432380365FF0(L_2, L_3, /*hidden argument*/NULL);
		Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6 * L_5 = (Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6 *)il2cpp_codegen_object_new(Func_2_t7E60AB2BA4667F02F1661857EC9ED0D3F2B07DA6_il2cpp_TypeInfo_var);
		Func_2__ctor_m0B3424BA4BD93D0BD36C668B8B5360756F697C1F(L_5, __this, (intptr_t)((intptr_t)HttpsCallableReference_U3CCallAsyncU3Em__0_mAD573F36CE2C779B8B39E56EB394FB27EED112A2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0B3424BA4BD93D0BD36C668B8B5360756F697C1F_RuntimeMethod_var);
		NullCheck(L_4);
		Task_1_tE3A8B11CF437116670572E3D01F109F7BC434182 * L_6;
		L_6 = Task_1_ContinueWith_TisHttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_m36455C890220280007A8D733C81BDFF6D5343B3F(L_4, L_5, /*hidden argument*/Task_1_ContinueWith_TisHttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_m36455C890220280007A8D733C81BDFF6D5343B3F_RuntimeMethod_var);
		return L_6;
	}
}
// Firebase.Functions.HttpsCallableResult Firebase.Functions.HttpsCallableReference::<CallAsync>m__0(System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * HttpsCallableReference_U3CCallAsyncU3Em__0_mAD573F36CE2C779B8B39E56EB394FB27EED112A2 (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m3DAD307A9556857FD296D61E10A1B7A59832C153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9191C84DBBA8308DD0092667E2B69A1C00EBBC5);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_0;
		L_0 = HttpsCallableReference_get_Internal_m408ED314A86EDEDBF1FC5004878230A2B7E0CBC6_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, _stringLiteralC9191C84DBBA8308DD0092667E2B69A1C00EBBC5, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_1 = ___task0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_3 = ___task0;
		NullCheck(L_3);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_4;
		L_4 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_5 = V_0;
		NullCheck(L_5);
		ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * L_6;
		L_6 = AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983(L_6, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0039:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			Exception_t * L_9;
			L_9 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var, L_8);
			V_1 = L_9;
			Exception_t * L_10 = V_1;
			if (!((FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)IsInstSealed((RuntimeObject*)L_10, FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var)))
			{
				goto IL_0057;
			}
		}

IL_004b:
		{
			Exception_t * L_11 = V_1;
			FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 * L_12 = (FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2_il2cpp_TypeInfo_var)));
			FunctionsException__ctor_m4BB4016CAA714D1D9DB351485325E1B7140C836D(L_12, ((FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)CastclassSealed((RuntimeObject*)L_11, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReference_U3CCallAsyncU3Em__0_mAD573F36CE2C779B8B39E56EB394FB27EED112A2_RuntimeMethod_var)));
		}

IL_0057:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0039;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_0073;
			}
		}

IL_006d:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_0073:
		{
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_17 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReference_U3CCallAsyncU3Em__0_mAD573F36CE2C779B8B39E56EB394FB27EED112A2_RuntimeMethod_var)));
	}

IL_0076:
	{
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_18 = ___task0;
		NullCheck(L_18);
		HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * L_19;
		L_19 = Task_1_get_Result_m3DAD307A9556857FD296D61E10A1B7A59832C153(L_18, /*hidden argument*/Task_1_get_Result_m3DAD307A9556857FD296D61E10A1B7A59832C153_RuntimeMethod_var);
		NullCheck(L_19);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_20;
		L_20 = HttpsCallableResultInternal_data_mAEF97A648E69B4E0C8366DB7AEEC8D9640C96A47(L_19, /*hidden argument*/NULL);
		RuntimeObject * L_21;
		L_21 = VariantExtension_ToObject_mD6F64264302F2E7E8820EA084214205152FAA0B9(L_20, /*hidden argument*/NULL);
		HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * L_22 = (HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 *)il2cpp_codegen_object_new(HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25_il2cpp_TypeInfo_var);
		HttpsCallableResult__ctor_m42D596BE180BAFFF2223B15CF77699360878EC2E(L_22, L_21, /*hidden argument*/NULL);
		return L_22;
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal__ctor_m8032C1BE1DAC4BB7E426ED9077BBB39B1486B3A6 (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal_Finalize_m93EAF87F8DA4EA303201CC816703FABFCE0053C7 (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose() */, __this);
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
// System.Void Firebase.Functions.HttpsCallableReferenceInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableReferenceInternal_Dispose_mF92128910C7BF9A3D0B384118DD14F4A33D4AAD4 (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
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
			IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
			FunctionsInternalPINVOKE_Firebase_Functions_delete_HttpsCallableReferenceInternal_mD95404BC66672D5721EDC7D14DEDF8F04540D371(L_6, /*hidden argument*/NULL);
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
// System.Threading.Tasks.Task`1<Firebase.Functions.HttpsCallableResultInternal> Firebase.Functions.HttpsCallableReferenceInternal::CallAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * HttpsCallableReferenceInternal_CallAsync_mBEFB8B9BB4D848897ED7E6B47CCF432380365FF0 (HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * __this, Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_1 = ___data0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = Variant_getCPtr_m54D63420C815303499DE5265A30EEE92981C55B3(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = FunctionsInternalPINVOKE_Firebase_Functions_HttpsCallableReferenceInternal_Call__SWIG_1_m5671AF67D2D5A6944550D522C88CD0D8D2B2A828(L_0, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableReferenceInternal_CallAsync_mBEFB8B9BB4D848897ED7E6B47CCF432380365FF0_RuntimeMethod_var)));
	}

IL_0022:
	{
		intptr_t L_6 = V_0;
		Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_7 = (Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 *)il2cpp_codegen_object_new(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		Future_HttpsCallableResult__ctor_mDC22CC44C93AD7D28727710FFA8D4455323A52BF(L_7, (intptr_t)L_6, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425_il2cpp_TypeInfo_var);
		Task_1_t63DD430D36566AA29717F26C30A5E5A301FFA433 * L_8;
		L_8 = Future_HttpsCallableResult_GetTask_m986FC6E1FE49E18C0226660F7BF9C00BC61E46BC(L_7, /*hidden argument*/NULL);
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
// System.Void Firebase.Functions.HttpsCallableResult::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResult__ctor_m42D596BE180BAFFF2223B15CF77699360878EC2E (HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___data0;
		HttpsCallableResult_set_Data_m57CFE0450881D51EF6DB14AAC0E4DCB793E52A46_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.HttpsCallableResult::set_Data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResult_set_Data_m57CFE0450881D51EF6DB14AAC0E4DCB793E52A46 (HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_0(L_0);
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal__ctor_mA1AFF4AEC078F5A7B6C6959AB581CF238EE10C25 (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal_Finalize_m6AFEC6401E71576D1AD2DDE72C9D858334179609 (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose() */, __this);
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
// System.Void Firebase.Functions.HttpsCallableResultInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsCallableResultInternal_Dispose_m31D7EF27AC96A57A7C7B88ABAF2D5C3287F15BF5 (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
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
			IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
			FunctionsInternalPINVOKE_Firebase_Functions_delete_HttpsCallableResultInternal_m17E65FABCFE19B3B8CF85D79897460D0D3EAD3E4(L_6, /*hidden argument*/NULL);
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
// Firebase.Variant Firebase.Functions.HttpsCallableResultInternal::data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * HttpsCallableResultInternal_data_mAEF97A648E69B4E0C8366DB7AEEC8D9640C96A47 (HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = FunctionsInternalPINVOKE_Firebase_Functions_HttpsCallableResultInternal_data_mBE438797B086A4393B820443C7EB3289DF3655DA(L_0, /*hidden argument*/NULL);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_2 = (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 *)il2cpp_codegen_object_new(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var);
		Variant__ctor_mDE4F4CD06BFEFA94C7B3757DAF5EB3F4E10DAD8E(L_2, (intptr_t)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HttpsCallableResultInternal_data_mAEF97A648E69B4E0C8366DB7AEEC8D9640C96A47_RuntimeMethod_var)));
	}

IL_0022:
	{
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_5 = V_0;
		return L_5;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m5C02F98F48921944F91CC5DC9EF9B74A099393D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_0 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_1 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_2 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_3 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_4 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_5 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_6 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_7 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_8 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_9 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_10 = (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B *)il2cpp_codegen_object_new(ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * L_11 = (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mCE9B4AC8D843A7EC7BCFDC473210067F37A1C8A1(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * L_12 = (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mCE9B4AC8D843A7EC7BCFDC473210067F37A1C8A1(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * L_13 = (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mCE9B4AC8D843A7EC7BCFDC473210067F37A1C8A1(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_14 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_15 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_16 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_17 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_18 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_19 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_20 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_21 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_22 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_23 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * L_24 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FunctionsInternal_m5A3A66F32581F5DD4D3B549AD1F33517B842728A(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * L_25 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * L_26 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * L_27 = ((SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FunctionsInternal_m16BB9818DDD553BABA24D587B981C23A0F234E68(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m60543182623AC2D8C2CA903813ADDB3D1A8219A6 (SWIGExceptionHelper_t4A3281C6BAE3A77EA98346BF8D0D2628C1F861F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FunctionsInternal_m5A3A66F32581F5DD4D3B549AD1F33517B842728A (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___applicationDelegate0, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___arithmeticDelegate1, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___divideByZeroDelegate2, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___indexOutOfRangeDelegate3, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___invalidCastDelegate4, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___invalidOperationDelegate5, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___ioDelegate6, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___nullReferenceDelegate7, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___outOfMemoryDelegate8, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___overflowDelegate9, ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * ___systemExceptionDelegate10, const RuntimeMethod* method)
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FunctionsInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FunctionsInternal_m16BB9818DDD553BABA24D587B981C23A0F234E68 (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentDelegate0, ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentNullDelegate1, ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_FunctionsInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m3C507041B382F4E523D6B94A1DF8F09331312F5F (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m7D4F828D4B92C1528C3F4FA74060C68683CAAE1F (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m437F05054DD9C93037BED67123C0EBE21C94EACE (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m91B9DF1ED08A8224A5BA6978BB5D269ACB6B8B46 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m18692E7B011DA7E06E15395363CC7B2A1B01ACE1 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mE6F6A939B92F962BB66DFAC33BD175BFE9B40846 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m335FD4A98A723870789724DBFFA77405F92488D3 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m56B26E76A63D7E4A4BE327F05C34F151395C3F4E (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m9FD3450380C4CA4CF8134E501A7D96212536E009 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mAAF41F6407A09781F7D8576F97DAC9DA0883DE4B (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mDEEDD37944B3AFC25567D520732DC8266DC74FB4 (String_t* ___message0, const RuntimeMethod* method)
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
		L_1 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mF70029D8E08029F9B4437A9EADC2BD5E986F2F69 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
		L_2 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mDCE90D4BBE032DB0AA4B456117D34138224C8730 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
		L_0 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m42AD060D3684371AD8456443A30ABDBFD9E5AE4B (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
		L_0 = SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E(/*hidden argument*/NULL);
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
		SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87(L_8, /*hidden argument*/NULL);
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Exception_t * L_0 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m815E2A3B86FB1D42EBD8FC07F4217696F9EBDB87_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_0_0_0_var) };
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
		int32_t L_10 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
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
// System.Exception Firebase.Functions.FunctionsInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m8E06A456D55D2E1A818D53CD409BBADBA7D1CA1E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (FunctionsInternalPINVOKE_tF8BC322EC5FE7F53FD1607B633BD45EF87032F51_0_0_0_var) };
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
		int32_t L_6 = ((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tF351FDF06B15570B22233C836B6C9FA6BF955C9D_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m3622D0FE41FA23CE89D4DDF9B5596CFA52CA53A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * L_0 = (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 *)il2cpp_codegen_object_new(SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mEC6015486CB9FB9CDE809D387F44D0E2390A8CBE(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * L_1 = ((SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FunctionsInternal_m7BBC2FC93E20A30903F43CDC9FF797D8DF0CB046(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m0A4F7E7A85AFC4B23F085B535E0127931027B47E (SWIGStringHelper_t8955649EED5BD8E7572377888EA8C1DD908015D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FunctionsInternal(Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FunctionsInternal_m7BBC2FC93E20A30903F43CDC9FF797D8DF0CB046 (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FunctionsInternal)(____stringDelegate0_marshaled);

}
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC320FBA11A26402CF4309B101D4AF5E82DDEC0DB (String_t* ___cString0, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m7482800AD5037356AD88E62DCD6B24449FDC237C (U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m1538931F5F523FC80AF880B2046A48449B84429C (U3CGetTaskU3Ec__AnonStorey0_t2CAC13690DD17822F79077542FBC2F528BE90B7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m7F91B8A07694329E1E481E3F4AA845887C49A274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA30053C170A5788FECF6D55DC17EB206EE3D50AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_m7F91B8A07694329E1E481E3F4AA845887C49A274(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m7F91B8A07694329E1E481E3F4AA845887C49A274_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_3 = __this->get_fu_0();
			NullCheck(L_3);
			int32_t L_4;
			L_4 = FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			if (!L_5)
			{
				goto IL_0054;
			}
		}

IL_0033:
		{
			TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9;
			L_9 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_8, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m594BAC2B29F5735B4178F72D1867B087913E1D39_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t96571DE43620BCF3AE7F3CA496EC2E346D2EC8B6 * L_11 = __this->get_tcs_1();
			Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			HttpsCallableResultInternal_t7CED0EBA91FDE1288ECBDA59683C2680FC95F1DC * L_13;
			L_13 = Future_HttpsCallableResult_GetResult_m944246E7128EB9C0649751E7387A32B24D69757C(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_mA30053C170A5788FECF6D55DC17EB206EE3D50AC(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_mA30053C170A5788FECF6D55DC17EB206EE3D50AC_RuntimeMethod_var);
		}

IL_006a:
		{
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0086;
	} // end catch (depth: 1)

IL_0086:
	{
		Future_HttpsCallableResult_t8E8EA569BE511EBB30DB3285B16301816387F425 * L_16 = __this->get_fu_0();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_16);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m36746B1279E86EE9DAFF4BDEEA988E080C1BFCC0 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m54CF7F65E2865930755BE841310ADAB61D8B6CB8 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Functions.Future_HttpsCallableResult/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m85BA67C73574F8B1473A3526D2A2792AFF390D35 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m05ED00F38A9F17D4B2E66BC589421175C639F470 (Action_t202CC9A58D7E2D635341960F29B31FF6C63A7097 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3BE1EC213AC97B8697CCE461D8D6D4AD3B726F5F (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mED66414BBADE83E5197A3D9FC4F27BA93F3A8ED0 (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * __this, int32_t ___index0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m1FDB83DFBED2FD6936DA80A7184EDA46B404B483 (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Functions.Future_HttpsCallableResult/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_mEDD6749CB861DFC64ED3C0A3F5ABF44FBB2371AB (SWIG_CompletionDelegate_tAB641A440D25BEF2BC68B1AAA5E3DC29D5E2DF9B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mCE9B4AC8D843A7EC7BCFDC473210067F37A1C8A1 (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mFB8D6F0FA864574773052BBA9F528D5DACD92814 (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m22B89D10F7EB0A02D85B41B32300B54E44B1C15D (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m2644849E01D83D968B76D17FEBDD7B5D2159AEB4 (ExceptionArgumentDelegate_t85C80F68E250B48D33337F7A0BA1FD192F5C4A4D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m7AA8B39BB66D7EA9ABF26E5345AE219F9A027F41 (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mF0C29DA4B9B505BA26397E30A9149C3EB3CFA7FA (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mA64C2CB6E290E77FCCF31738B8F33B933D2A9422 (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mD2BC9060E0A4F8084550E58A12507A65B6B0C69C (ExceptionDelegate_t7E0282283FD2835B4ED58EB272FE76AD0BBACA9B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mEC6015486CB9FB9CDE809D387F44D0E2390A8CBE (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m4FFE5D0E4A5D5513998090BFA0C72B295772125C (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.IAsyncResult Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mD8CB23EF2341309A158899636FE8E0E49E7C5801 (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Functions.FunctionsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_mEBD01162CAF4C20F41C1FDF62D113B0680042F26 (SWIGStringDelegate_tB34046B32215C155E4BAEBC4A76AD05F317785A3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseFunctionsInternal_SetSwigCMemOwn_mC147A9957B8C0C3E9A07E6020F61B682077105A9_inline (FirebaseFunctionsInternal_t877A1C67E7C4C0F7C956ED40567E674D7C54D708 * __this, bool ___ownership0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownership0;
		__this->set_swigCMemOwn_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FunctionsException_set_ErrorCode_m065C339874E8A94DFEF407C2E6928C88905ACC32_inline (FunctionsException_t31EA65F84C85DB35716F67F7177C11ADEA8451E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableReference_set_Internal_mCAB7202F4976D29285C12964243C133622541AD2_inline (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * ___value0, const RuntimeMethod* method)
{
	{
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * HttpsCallableReference_get_Internal_m408ED314A86EDEDBF1FC5004878230A2B7E0CBC6_inline (HttpsCallableReference_tE40210B470924C0CE5B2092E50FD4A262109C20B * __this, const RuntimeMethod* method)
{
	{
		HttpsCallableReferenceInternal_tFA889395FB7FD0B2BA7BCF34EC88C40244A10E65 * L_0 = __this->get_U3CInternalU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * L_0 = __this->get_m_innerExceptions_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpsCallableResult_set_Data_m57CFE0450881D51EF6DB14AAC0E4DCB793E52A46_inline (HttpsCallableResult_tC703A1760503BE9E2791626BDCDB191E96A63B25 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
