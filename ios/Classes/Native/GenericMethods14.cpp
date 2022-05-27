#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.Collections.Generic.Dictionary`2<System.Object,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_t26B505AC9FEDD4CB3AA00175FA9F336BE955AA04;
// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<UnityEngine.BoneWeight>
struct IList_1_tB202A64AAD46B31CA2396A040D30646BAF48383E;
// System.Collections.Generic.IList`1<UnityEngine.Color>
struct IList_1_t5C1E484BA4B6CFDAA2FD0F17AE1646EAB6341147;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.IList`1<UnityEngine.Vector2>
struct IList_1_t6249FC5F8E020A2283584E3A1B806E8AF52F90B2;
// System.Collections.Generic.IList`1<UnityEngine.Vector3>
struct IList_1_t8B00F815D77E0AC6983C059BC09DBC979F8E86E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct KeyCollection_t425E55E4B5D18CA949CAA90CFFE75B1AEAFCAE2E;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t0D351E0A1BFCAF2113576F196766F05AB1BD1A98;
// System.Collections.Generic.List`1<UniGLTF.BlendShape>
struct List_1_tFF3732E4B8D4AD86051B04825569D6390FBD65F8;
// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<UniGLTF.glTFAccessor>
struct List_1_t5E3A081FE0820A09563D886E910CD951358A0A78;
// System.Collections.Generic.List`1<UniGLTF.glTFAnimation>
struct List_1_t06B2802E2A47D63F1FF85B2C7CDAABD8357B70DA;
// System.Collections.Generic.List`1<UniGLTF.glTFBuffer>
struct List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780;
// System.Collections.Generic.List`1<UniGLTF.glTFBufferView>
struct List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16;
// System.Collections.Generic.List`1<UniGLTF.glTFCamera>
struct List_1_t14A6AE8D6762D98BC775F8E7999AE633586D0837;
// System.Collections.Generic.List`1<UniGLTF.glTFImage>
struct List_1_tADB6FEC24135E9D2DFB4EA860CEF7ED99A0C9F9C;
// System.Collections.Generic.List`1<UniGLTF.glTFMaterial>
struct List_1_t7F2470DE36CCFAF3999195A37A00C6ED08D2F147;
// System.Collections.Generic.List`1<UniGLTF.glTFMesh>
struct List_1_tA8241A5A05BA21421BC68C2067C0F572556DBBAB;
// System.Collections.Generic.List`1<UniGLTF.glTFNode>
struct List_1_t59F131DFF2B044C35B519AB3E03B5764E9AF977C;
// System.Collections.Generic.List`1<UniGLTF.glTFSkin>
struct List_1_t38C43BF13175F49F7F7DF6E84D8C38C1B0CC2B7C;
// System.Collections.Generic.List`1<UniGLTF.glTFTexture>
struct List_1_t76BBBE621A771B1F37A1B4ADB15119E8DE4179F4;
// System.Collections.Generic.List`1<UniGLTF.glTFTextureSampler>
struct List_1_t4463CF1C80AB0BCF067F14445D38CF5936282DD1;
// System.Collections.Generic.List`1<UniGLTF.gltfScene>
struct List_1_t1EE0D84F4D6C7F7BAD226D16FA835BD2F7EF3B3E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct ValueCollection_tF32EB5F9F1E0A9748110E61910FAEB39F121867D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UniGLTF.glTFExtensions/ComponentVec>[]
struct EntryU5BU5D_t51FAE05EAC76CA3EBB5BC837BFF8D3FBB539C4AC;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UniGLTF.Byte4[]
struct Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UniGLTF.UShort4[]
struct UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UniGLTF.glTFAccessor[]
struct glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86;
// UniGLTF.glTFBuffer[]
struct glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F;
// UniGLTF.glTFBufferView[]
struct glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309;
// UniGLTF.MeshImporter/MeshContext/Float4[]
struct Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// UniGLTF.IBytesBuffer
struct IBytesBuffer_t3B9A3F2A8970C1FAA95A78D6C6AB3BECC3D6AEB0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UniGLTF.glTF
struct glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949;
// UniGLTF.glTFAccessor
struct glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E;
// UniGLTF.glTFAssets
struct glTFAssets_t45EF6CCCA85C4EDCF772E79B85CD58D3CC3D33A0;
// UniGLTF.glTFBuffer
struct glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735;
// UniGLTF.glTFBufferView
struct glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D;
// UniGLTF.glTFExtension
struct glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067;
// UniGLTF.glTFSparse
struct glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243;
// UniGLTF.glTFSparseIndices
struct glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A;
// UniGLTF.glTFSparseValues
struct glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
IL2CPP_EXTERN_C String_t* _stringLiteral42CBCCD9C46E6F1BBB4E9725A4A6E347E5A20434;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
IL2CPP_EXTERN_C String_t* _stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshContext_FillZero_TisBoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8_m87A8BEB6408A05B46DBE5DE6658F731ABAD549BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshContext_FillZero_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mD5358DE881434D769007411BFEAEB37E84A81B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshContext_FillZero_TisRuntimeObject_m437BC17A5C5A5636CB371EE28EB735EF90F110F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshContext_FillZero_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m0552B449E05274BD5D9794E7FDDDB7307A90E1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshContext_FillZero_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m0D3F4BF0E85E891255677FCFBB2D99CE0C5D3508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m90F041003B889301FD6A2AB13F209EB2804A89CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mE005ADDB0846AAF5E05E5961570D206623AE5105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisRuntimeObject_m7447C56FD5DB02E4685BAA26B0ADA3711E7B5853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m112C119AACE06EAF44567973F73D8A981D49D7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m53EAB963607339CB8642755CBE1B981CB3842D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m141779B15019F888F7A8ADA3F8A0950ACD26E1C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEBD77E66AC9D1227C3401C79D47580B41CFA7930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetAccessorType_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mEF1BA46E30A2F051F22E8AEF0F0A9D80C6B0ED96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m936E6182593E5944A6287D4CCB37028B2675D75F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m0DC4DD0315901A644BCC342E4E409A6CD15E1858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisRuntimeObject_m575530F9570500FBE037D3D43FA517F9715387BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD14CE0B9BAE66CBEF1CBCCDC775BE27D712807AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m9730F005B6890F6CF71550A07C0581A855A5B1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m5EF5017DDF26035589CECB1C29A12EA53E075869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m60C35CE2F5527DB2B50ADE034B6CFD4F5819BBB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* glTFExtensions_GetComponentType_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mE8F4A4E046F09DFE4CCBD47C30384E0ABD36FFFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>
struct Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t51FAE05EAC76CA3EBB5BC837BFF8D3FBB539C4AC* ___entries_1;
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
	KeyCollection_t425E55E4B5D18CA949CAA90CFFE75B1AEAFCAE2E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF32EB5F9F1E0A9748110E61910FAEB39F121867D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___entries_1)); }
	inline EntryU5BU5D_t51FAE05EAC76CA3EBB5BC837BFF8D3FBB539C4AC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t51FAE05EAC76CA3EBB5BC837BFF8D3FBB539C4AC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t51FAE05EAC76CA3EBB5BC837BFF8D3FBB539C4AC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___keys_7)); }
	inline KeyCollection_t425E55E4B5D18CA949CAA90CFFE75B1AEAFCAE2E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t425E55E4B5D18CA949CAA90CFFE75B1AEAFCAE2E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t425E55E4B5D18CA949CAA90CFFE75B1AEAFCAE2E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ___values_8)); }
	inline ValueCollection_tF32EB5F9F1E0A9748110E61910FAEB39F121867D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF32EB5F9F1E0A9748110E61910FAEB39F121867D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF32EB5F9F1E0A9748110E61910FAEB39F121867D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD, ____items_1)); }
	inline BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2* get__items_1() const { return ____items_1; }
	inline BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD_StaticFields, ____emptyArray_5)); }
	inline BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneWeightU5BU5D_t6EEE411D372C3427740E79D379E0DA8E9E1A5DB2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____items_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__items_1() const { return ____items_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields, ____emptyArray_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
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


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UniGLTF.glTFAccessor>
struct List_1_t5E3A081FE0820A09563D886E910CD951358A0A78  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5E3A081FE0820A09563D886E910CD951358A0A78, ____items_1)); }
	inline glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86* get__items_1() const { return ____items_1; }
	inline glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5E3A081FE0820A09563D886E910CD951358A0A78, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5E3A081FE0820A09563D886E910CD951358A0A78, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5E3A081FE0820A09563D886E910CD951358A0A78, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5E3A081FE0820A09563D886E910CD951358A0A78_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5E3A081FE0820A09563D886E910CD951358A0A78_StaticFields, ____emptyArray_5)); }
	inline glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86* get__emptyArray_5() const { return ____emptyArray_5; }
	inline glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(glTFAccessorU5BU5D_tD78D5CF2DB1D4A47C9BA23B8A763A19D42693E86* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UniGLTF.glTFBuffer>
struct List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780, ____items_1)); }
	inline glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F* get__items_1() const { return ____items_1; }
	inline glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780_StaticFields, ____emptyArray_5)); }
	inline glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(glTFBufferU5BU5D_tA5BEDC27BFDB9389CA922E6E6E4B2283819CA46F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UniGLTF.glTFBufferView>
struct List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16, ____items_1)); }
	inline glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309* get__items_1() const { return ____items_1; }
	inline glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16_StaticFields, ____emptyArray_5)); }
	inline glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309* get__emptyArray_5() const { return ____emptyArray_5; }
	inline glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(glTFBufferViewU5BU5D_tFC6A25A22DCFE4ECC4AC6D48F4AF1148222E2309* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
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

// UniGLTF.glTF
struct glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949  : public RuntimeObject
{
public:
	// UniGLTF.glTFAssets UniGLTF.glTF::asset
	glTFAssets_t45EF6CCCA85C4EDCF772E79B85CD58D3CC3D33A0 * ___asset_0;
	// System.Collections.Generic.List`1<UniGLTF.glTFBuffer> UniGLTF.glTF::buffers
	List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * ___buffers_1;
	// System.Collections.Generic.List`1<UniGLTF.glTFBufferView> UniGLTF.glTF::bufferViews
	List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * ___bufferViews_2;
	// System.Collections.Generic.List`1<UniGLTF.glTFAccessor> UniGLTF.glTF::accessors
	List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * ___accessors_3;
	// System.Collections.Generic.List`1<UniGLTF.glTFTexture> UniGLTF.glTF::textures
	List_1_t76BBBE621A771B1F37A1B4ADB15119E8DE4179F4 * ___textures_4;
	// System.Collections.Generic.List`1<UniGLTF.glTFTextureSampler> UniGLTF.glTF::samplers
	List_1_t4463CF1C80AB0BCF067F14445D38CF5936282DD1 * ___samplers_5;
	// System.Collections.Generic.List`1<UniGLTF.glTFImage> UniGLTF.glTF::images
	List_1_tADB6FEC24135E9D2DFB4EA860CEF7ED99A0C9F9C * ___images_6;
	// System.Collections.Generic.List`1<UniGLTF.glTFMaterial> UniGLTF.glTF::materials
	List_1_t7F2470DE36CCFAF3999195A37A00C6ED08D2F147 * ___materials_7;
	// System.Collections.Generic.List`1<UniGLTF.glTFMesh> UniGLTF.glTF::meshes
	List_1_tA8241A5A05BA21421BC68C2067C0F572556DBBAB * ___meshes_8;
	// System.Collections.Generic.List`1<UniGLTF.glTFNode> UniGLTF.glTF::nodes
	List_1_t59F131DFF2B044C35B519AB3E03B5764E9AF977C * ___nodes_9;
	// System.Collections.Generic.List`1<UniGLTF.glTFSkin> UniGLTF.glTF::skins
	List_1_t38C43BF13175F49F7F7DF6E84D8C38C1B0CC2B7C * ___skins_10;
	// System.Int32 UniGLTF.glTF::scene
	int32_t ___scene_11;
	// System.Collections.Generic.List`1<UniGLTF.gltfScene> UniGLTF.glTF::scenes
	List_1_t1EE0D84F4D6C7F7BAD226D16FA835BD2F7EF3B3E * ___scenes_12;
	// System.Collections.Generic.List`1<UniGLTF.glTFAnimation> UniGLTF.glTF::animations
	List_1_t06B2802E2A47D63F1FF85B2C7CDAABD8357B70DA * ___animations_13;
	// System.Collections.Generic.List`1<UniGLTF.glTFCamera> UniGLTF.glTF::cameras
	List_1_t14A6AE8D6762D98BC775F8E7999AE633586D0837 * ___cameras_14;
	// System.Collections.Generic.List`1<System.String> UniGLTF.glTF::extensionsUsed
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___extensionsUsed_15;
	// System.Collections.Generic.List`1<System.String> UniGLTF.glTF::extensionsRequired
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___extensionsRequired_16;
	// UniGLTF.glTFExtension UniGLTF.glTF::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_17;
	// UniGLTF.glTFExtension UniGLTF.glTF::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_18;

public:
	inline static int32_t get_offset_of_asset_0() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___asset_0)); }
	inline glTFAssets_t45EF6CCCA85C4EDCF772E79B85CD58D3CC3D33A0 * get_asset_0() const { return ___asset_0; }
	inline glTFAssets_t45EF6CCCA85C4EDCF772E79B85CD58D3CC3D33A0 ** get_address_of_asset_0() { return &___asset_0; }
	inline void set_asset_0(glTFAssets_t45EF6CCCA85C4EDCF772E79B85CD58D3CC3D33A0 * value)
	{
		___asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_buffers_1() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___buffers_1)); }
	inline List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * get_buffers_1() const { return ___buffers_1; }
	inline List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 ** get_address_of_buffers_1() { return &___buffers_1; }
	inline void set_buffers_1(List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * value)
	{
		___buffers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffers_1), (void*)value);
	}

	inline static int32_t get_offset_of_bufferViews_2() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___bufferViews_2)); }
	inline List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * get_bufferViews_2() const { return ___bufferViews_2; }
	inline List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 ** get_address_of_bufferViews_2() { return &___bufferViews_2; }
	inline void set_bufferViews_2(List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * value)
	{
		___bufferViews_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferViews_2), (void*)value);
	}

	inline static int32_t get_offset_of_accessors_3() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___accessors_3)); }
	inline List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * get_accessors_3() const { return ___accessors_3; }
	inline List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 ** get_address_of_accessors_3() { return &___accessors_3; }
	inline void set_accessors_3(List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * value)
	{
		___accessors_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessors_3), (void*)value);
	}

	inline static int32_t get_offset_of_textures_4() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___textures_4)); }
	inline List_1_t76BBBE621A771B1F37A1B4ADB15119E8DE4179F4 * get_textures_4() const { return ___textures_4; }
	inline List_1_t76BBBE621A771B1F37A1B4ADB15119E8DE4179F4 ** get_address_of_textures_4() { return &___textures_4; }
	inline void set_textures_4(List_1_t76BBBE621A771B1F37A1B4ADB15119E8DE4179F4 * value)
	{
		___textures_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textures_4), (void*)value);
	}

	inline static int32_t get_offset_of_samplers_5() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___samplers_5)); }
	inline List_1_t4463CF1C80AB0BCF067F14445D38CF5936282DD1 * get_samplers_5() const { return ___samplers_5; }
	inline List_1_t4463CF1C80AB0BCF067F14445D38CF5936282DD1 ** get_address_of_samplers_5() { return &___samplers_5; }
	inline void set_samplers_5(List_1_t4463CF1C80AB0BCF067F14445D38CF5936282DD1 * value)
	{
		___samplers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplers_5), (void*)value);
	}

	inline static int32_t get_offset_of_images_6() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___images_6)); }
	inline List_1_tADB6FEC24135E9D2DFB4EA860CEF7ED99A0C9F9C * get_images_6() const { return ___images_6; }
	inline List_1_tADB6FEC24135E9D2DFB4EA860CEF7ED99A0C9F9C ** get_address_of_images_6() { return &___images_6; }
	inline void set_images_6(List_1_tADB6FEC24135E9D2DFB4EA860CEF7ED99A0C9F9C * value)
	{
		___images_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___images_6), (void*)value);
	}

	inline static int32_t get_offset_of_materials_7() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___materials_7)); }
	inline List_1_t7F2470DE36CCFAF3999195A37A00C6ED08D2F147 * get_materials_7() const { return ___materials_7; }
	inline List_1_t7F2470DE36CCFAF3999195A37A00C6ED08D2F147 ** get_address_of_materials_7() { return &___materials_7; }
	inline void set_materials_7(List_1_t7F2470DE36CCFAF3999195A37A00C6ED08D2F147 * value)
	{
		___materials_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_7), (void*)value);
	}

	inline static int32_t get_offset_of_meshes_8() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___meshes_8)); }
	inline List_1_tA8241A5A05BA21421BC68C2067C0F572556DBBAB * get_meshes_8() const { return ___meshes_8; }
	inline List_1_tA8241A5A05BA21421BC68C2067C0F572556DBBAB ** get_address_of_meshes_8() { return &___meshes_8; }
	inline void set_meshes_8(List_1_tA8241A5A05BA21421BC68C2067C0F572556DBBAB * value)
	{
		___meshes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_8), (void*)value);
	}

	inline static int32_t get_offset_of_nodes_9() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___nodes_9)); }
	inline List_1_t59F131DFF2B044C35B519AB3E03B5764E9AF977C * get_nodes_9() const { return ___nodes_9; }
	inline List_1_t59F131DFF2B044C35B519AB3E03B5764E9AF977C ** get_address_of_nodes_9() { return &___nodes_9; }
	inline void set_nodes_9(List_1_t59F131DFF2B044C35B519AB3E03B5764E9AF977C * value)
	{
		___nodes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodes_9), (void*)value);
	}

	inline static int32_t get_offset_of_skins_10() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___skins_10)); }
	inline List_1_t38C43BF13175F49F7F7DF6E84D8C38C1B0CC2B7C * get_skins_10() const { return ___skins_10; }
	inline List_1_t38C43BF13175F49F7F7DF6E84D8C38C1B0CC2B7C ** get_address_of_skins_10() { return &___skins_10; }
	inline void set_skins_10(List_1_t38C43BF13175F49F7F7DF6E84D8C38C1B0CC2B7C * value)
	{
		___skins_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skins_10), (void*)value);
	}

	inline static int32_t get_offset_of_scene_11() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___scene_11)); }
	inline int32_t get_scene_11() const { return ___scene_11; }
	inline int32_t* get_address_of_scene_11() { return &___scene_11; }
	inline void set_scene_11(int32_t value)
	{
		___scene_11 = value;
	}

	inline static int32_t get_offset_of_scenes_12() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___scenes_12)); }
	inline List_1_t1EE0D84F4D6C7F7BAD226D16FA835BD2F7EF3B3E * get_scenes_12() const { return ___scenes_12; }
	inline List_1_t1EE0D84F4D6C7F7BAD226D16FA835BD2F7EF3B3E ** get_address_of_scenes_12() { return &___scenes_12; }
	inline void set_scenes_12(List_1_t1EE0D84F4D6C7F7BAD226D16FA835BD2F7EF3B3E * value)
	{
		___scenes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scenes_12), (void*)value);
	}

	inline static int32_t get_offset_of_animations_13() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___animations_13)); }
	inline List_1_t06B2802E2A47D63F1FF85B2C7CDAABD8357B70DA * get_animations_13() const { return ___animations_13; }
	inline List_1_t06B2802E2A47D63F1FF85B2C7CDAABD8357B70DA ** get_address_of_animations_13() { return &___animations_13; }
	inline void set_animations_13(List_1_t06B2802E2A47D63F1FF85B2C7CDAABD8357B70DA * value)
	{
		___animations_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animations_13), (void*)value);
	}

	inline static int32_t get_offset_of_cameras_14() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___cameras_14)); }
	inline List_1_t14A6AE8D6762D98BC775F8E7999AE633586D0837 * get_cameras_14() const { return ___cameras_14; }
	inline List_1_t14A6AE8D6762D98BC775F8E7999AE633586D0837 ** get_address_of_cameras_14() { return &___cameras_14; }
	inline void set_cameras_14(List_1_t14A6AE8D6762D98BC775F8E7999AE633586D0837 * value)
	{
		___cameras_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameras_14), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsUsed_15() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___extensionsUsed_15)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_extensionsUsed_15() const { return ___extensionsUsed_15; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_extensionsUsed_15() { return &___extensionsUsed_15; }
	inline void set_extensionsUsed_15(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___extensionsUsed_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsUsed_15), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsRequired_16() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___extensionsRequired_16)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_extensionsRequired_16() const { return ___extensionsRequired_16; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_extensionsRequired_16() { return &___extensionsRequired_16; }
	inline void set_extensionsRequired_16(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___extensionsRequired_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsRequired_16), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_17() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___extensions_17)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_17() const { return ___extensions_17; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_17() { return &___extensions_17; }
	inline void set_extensions_17(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_17), (void*)value);
	}

	inline static int32_t get_offset_of_extras_18() { return static_cast<int32_t>(offsetof(glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949, ___extras_18)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_18() const { return ___extras_18; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_18() { return &___extras_18; }
	inline void set_extras_18(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_18), (void*)value);
	}
};


// UniGLTF.glTFBuffer
struct glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735  : public RuntimeObject
{
public:
	// UniGLTF.IBytesBuffer UniGLTF.glTFBuffer::Storage
	RuntimeObject* ___Storage_0;
	// System.String UniGLTF.glTFBuffer::uri
	String_t* ___uri_1;
	// System.Int32 UniGLTF.glTFBuffer::byteLength
	int32_t ___byteLength_2;
	// UniGLTF.glTFExtension UniGLTF.glTFBuffer::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_3;
	// UniGLTF.glTFExtension UniGLTF.glTFBuffer::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_4;
	// System.String UniGLTF.glTFBuffer::name
	String_t* ___name_5;

public:
	inline static int32_t get_offset_of_Storage_0() { return static_cast<int32_t>(offsetof(glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735, ___Storage_0)); }
	inline RuntimeObject* get_Storage_0() const { return ___Storage_0; }
	inline RuntimeObject** get_address_of_Storage_0() { return &___Storage_0; }
	inline void set_Storage_0(RuntimeObject* value)
	{
		___Storage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Storage_0), (void*)value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_1), (void*)value);
	}

	inline static int32_t get_offset_of_byteLength_2() { return static_cast<int32_t>(offsetof(glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735, ___byteLength_2)); }
	inline int32_t get_byteLength_2() const { return ___byteLength_2; }
	inline int32_t* get_address_of_byteLength_2() { return &___byteLength_2; }
	inline void set_byteLength_2(int32_t value)
	{
		___byteLength_2 = value;
	}

	inline static int32_t get_offset_of_extensions_3() { return static_cast<int32_t>(offsetof(glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735, ___extensions_3)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_3() const { return ___extensions_3; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_3() { return &___extensions_3; }
	inline void set_extensions_3(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_3), (void*)value);
	}

	inline static int32_t get_offset_of_extras_4() { return static_cast<int32_t>(offsetof(glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735, ___extras_4)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_4() const { return ___extras_4; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_4() { return &___extras_4; }
	inline void set_extras_4(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}
};


// UniGLTF.glTFSparse
struct glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243  : public RuntimeObject
{
public:
	// System.Int32 UniGLTF.glTFSparse::count
	int32_t ___count_0;
	// UniGLTF.glTFSparseIndices UniGLTF.glTFSparse::indices
	glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * ___indices_1;
	// UniGLTF.glTFSparseValues UniGLTF.glTFSparse::values
	glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * ___values_2;
	// UniGLTF.glTFExtension UniGLTF.glTFSparse::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_3;
	// UniGLTF.glTFExtension UniGLTF.glTFSparse::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_indices_1() { return static_cast<int32_t>(offsetof(glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243, ___indices_1)); }
	inline glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * get_indices_1() const { return ___indices_1; }
	inline glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A ** get_address_of_indices_1() { return &___indices_1; }
	inline void set_indices_1(glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * value)
	{
		___indices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indices_1), (void*)value);
	}

	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243, ___values_2)); }
	inline glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * get_values_2() const { return ___values_2; }
	inline glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_2), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_3() { return static_cast<int32_t>(offsetof(glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243, ___extensions_3)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_3() const { return ___extensions_3; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_3() { return &___extensions_3; }
	inline void set_extensions_3(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_3), (void*)value);
	}

	inline static int32_t get_offset_of_extras_4() { return static_cast<int32_t>(offsetof(glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243, ___extras_4)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_4() const { return ___extras_4; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_4() { return &___extras_4; }
	inline void set_extras_4(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_4), (void*)value);
	}
};


// UniGLTF.glTFSparseValues
struct glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188  : public RuntimeObject
{
public:
	// System.Int32 UniGLTF.glTFSparseValues::bufferView
	int32_t ___bufferView_0;
	// System.Int32 UniGLTF.glTFSparseValues::byteOffset
	int32_t ___byteOffset_1;
	// UniGLTF.glTFExtension UniGLTF.glTFSparseValues::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_2;
	// UniGLTF.glTFExtension UniGLTF.glTFSparseValues::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_3;

public:
	inline static int32_t get_offset_of_bufferView_0() { return static_cast<int32_t>(offsetof(glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188, ___bufferView_0)); }
	inline int32_t get_bufferView_0() const { return ___bufferView_0; }
	inline int32_t* get_address_of_bufferView_0() { return &___bufferView_0; }
	inline void set_bufferView_0(int32_t value)
	{
		___bufferView_0 = value;
	}

	inline static int32_t get_offset_of_byteOffset_1() { return static_cast<int32_t>(offsetof(glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188, ___byteOffset_1)); }
	inline int32_t get_byteOffset_1() const { return ___byteOffset_1; }
	inline int32_t* get_address_of_byteOffset_1() { return &___byteOffset_1; }
	inline void set_byteOffset_1(int32_t value)
	{
		___byteOffset_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188, ___extensions_2)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_2() const { return ___extensions_2; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_2), (void*)value);
	}

	inline static int32_t get_offset_of_extras_3() { return static_cast<int32_t>(offsetof(glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188, ___extras_3)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_3() const { return ___extras_3; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_3() { return &___extras_3; }
	inline void set_extras_3(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_3), (void*)value);
	}
};


// UniGLTF.MeshImporter/MeshContext
struct MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9  : public RuntimeObject
{
public:
	// System.String UniGLTF.MeshImporter/MeshContext::m_name
	String_t* ___m_name_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UniGLTF.MeshImporter/MeshContext::m_positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_positions_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UniGLTF.MeshImporter/MeshContext::m_normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_normals_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UniGLTF.MeshImporter/MeshContext::m_tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_tangents_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UniGLTF.MeshImporter/MeshContext::m_uv
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___m_uv_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UniGLTF.MeshImporter/MeshContext::m_uv2
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___m_uv2_5;
	// System.Collections.Generic.List`1<UnityEngine.Color> UniGLTF.MeshImporter/MeshContext::m_colors
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___m_colors_6;
	// System.Collections.Generic.List`1<UnityEngine.BoneWeight> UniGLTF.MeshImporter/MeshContext::m_boneWeights
	List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * ___m_boneWeights_7;
	// System.Collections.Generic.List`1<System.Int32[]> UniGLTF.MeshImporter/MeshContext::m_subMeshes
	List_1_t0D351E0A1BFCAF2113576F196766F05AB1BD1A98 * ___m_subMeshes_8;
	// System.Collections.Generic.List`1<System.Int32> UniGLTF.MeshImporter/MeshContext::m_materialIndices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_materialIndices_9;
	// System.Collections.Generic.List`1<UniGLTF.BlendShape> UniGLTF.MeshImporter/MeshContext::m_blendShapes
	List_1_tFF3732E4B8D4AD86051B04825569D6390FBD65F8 * ___m_blendShapes_10;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_positions_1() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_positions_1)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_positions_1() const { return ___m_positions_1; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_positions_1() { return &___m_positions_1; }
	inline void set_m_positions_1(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_positions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_positions_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_normals_2() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_normals_2)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_normals_2() const { return ___m_normals_2; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_normals_2() { return &___m_normals_2; }
	inline void set_m_normals_2(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_normals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_normals_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_tangents_3() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_tangents_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_tangents_3() const { return ___m_tangents_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_tangents_3() { return &___m_tangents_3; }
	inline void set_m_tangents_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_tangents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_tangents_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_uv_4() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_uv_4)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_m_uv_4() const { return ___m_uv_4; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_m_uv_4() { return &___m_uv_4; }
	inline void set_m_uv_4(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___m_uv_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_uv_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_uv2_5() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_uv2_5)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_m_uv2_5() const { return ___m_uv2_5; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_m_uv2_5() { return &___m_uv2_5; }
	inline void set_m_uv2_5(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___m_uv2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_uv2_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_colors_6() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_colors_6)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_m_colors_6() const { return ___m_colors_6; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_m_colors_6() { return &___m_colors_6; }
	inline void set_m_colors_6(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___m_colors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_boneWeights_7() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_boneWeights_7)); }
	inline List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * get_m_boneWeights_7() const { return ___m_boneWeights_7; }
	inline List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD ** get_address_of_m_boneWeights_7() { return &___m_boneWeights_7; }
	inline void set_m_boneWeights_7(List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * value)
	{
		___m_boneWeights_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boneWeights_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_subMeshes_8() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_subMeshes_8)); }
	inline List_1_t0D351E0A1BFCAF2113576F196766F05AB1BD1A98 * get_m_subMeshes_8() const { return ___m_subMeshes_8; }
	inline List_1_t0D351E0A1BFCAF2113576F196766F05AB1BD1A98 ** get_address_of_m_subMeshes_8() { return &___m_subMeshes_8; }
	inline void set_m_subMeshes_8(List_1_t0D351E0A1BFCAF2113576F196766F05AB1BD1A98 * value)
	{
		___m_subMeshes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subMeshes_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialIndices_9() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_materialIndices_9)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_materialIndices_9() const { return ___m_materialIndices_9; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_materialIndices_9() { return &___m_materialIndices_9; }
	inline void set_m_materialIndices_9(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_materialIndices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialIndices_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_blendShapes_10() { return static_cast<int32_t>(offsetof(MeshContext_t0B3171832E590CFF7518863E1D9ED72540CAD7B9, ___m_blendShapes_10)); }
	inline List_1_tFF3732E4B8D4AD86051B04825569D6390FBD65F8 * get_m_blendShapes_10() const { return ___m_blendShapes_10; }
	inline List_1_tFF3732E4B8D4AD86051B04825569D6390FBD65F8 ** get_address_of_m_blendShapes_10() { return &___m_blendShapes_10; }
	inline void set_m_blendShapes_10(List_1_tFF3732E4B8D4AD86051B04825569D6390FBD65F8 * value)
	{
		___m_blendShapes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_blendShapes_10), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.ArraySegment`1<UnityEngine.Vector3>
struct ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1 
{
public:
	// T[] System.ArraySegment`1::_array
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1, ____array_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__array_0() const { return ____array_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.BoneWeight
struct BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 
{
public:
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;

public:
	inline static int32_t get_offset_of_m_Weight0_0() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight0_0)); }
	inline float get_m_Weight0_0() const { return ___m_Weight0_0; }
	inline float* get_address_of_m_Weight0_0() { return &___m_Weight0_0; }
	inline void set_m_Weight0_0(float value)
	{
		___m_Weight0_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight1_1() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight1_1)); }
	inline float get_m_Weight1_1() const { return ___m_Weight1_1; }
	inline float* get_address_of_m_Weight1_1() { return &___m_Weight1_1; }
	inline void set_m_Weight1_1(float value)
	{
		___m_Weight1_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight2_2() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight2_2)); }
	inline float get_m_Weight2_2() const { return ___m_Weight2_2; }
	inline float* get_address_of_m_Weight2_2() { return &___m_Weight2_2; }
	inline void set_m_Weight2_2(float value)
	{
		___m_Weight2_2 = value;
	}

	inline static int32_t get_offset_of_m_Weight3_3() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_Weight3_3)); }
	inline float get_m_Weight3_3() const { return ___m_Weight3_3; }
	inline float* get_address_of_m_Weight3_3() { return &___m_Weight3_3; }
	inline void set_m_Weight3_3(float value)
	{
		___m_Weight3_3 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex0_4() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex0_4)); }
	inline int32_t get_m_BoneIndex0_4() const { return ___m_BoneIndex0_4; }
	inline int32_t* get_address_of_m_BoneIndex0_4() { return &___m_BoneIndex0_4; }
	inline void set_m_BoneIndex0_4(int32_t value)
	{
		___m_BoneIndex0_4 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex1_5() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex1_5)); }
	inline int32_t get_m_BoneIndex1_5() const { return ___m_BoneIndex1_5; }
	inline int32_t* get_address_of_m_BoneIndex1_5() { return &___m_BoneIndex1_5; }
	inline void set_m_BoneIndex1_5(int32_t value)
	{
		___m_BoneIndex1_5 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex2_6() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex2_6)); }
	inline int32_t get_m_BoneIndex2_6() const { return ___m_BoneIndex2_6; }
	inline int32_t* get_address_of_m_BoneIndex2_6() { return &___m_BoneIndex2_6; }
	inline void set_m_BoneIndex2_6(int32_t value)
	{
		___m_BoneIndex2_6 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex3_7() { return static_cast<int32_t>(offsetof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8, ___m_BoneIndex3_7)); }
	inline int32_t get_m_BoneIndex3_7() const { return ___m_BoneIndex3_7; }
	inline int32_t* get_address_of_m_BoneIndex3_7() { return &___m_BoneIndex3_7; }
	inline void set_m_BoneIndex3_7(int32_t value)
	{
		___m_BoneIndex3_7 = value;
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


// UniGLTF.Byte4
#pragma pack(push, tp, 1)
struct Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F 
{
public:
	// System.Byte UniGLTF.Byte4::x
	uint8_t ___x_0;
	// System.Byte UniGLTF.Byte4::y
	uint8_t ___y_1;
	// System.Byte UniGLTF.Byte4::z
	uint8_t ___z_2;
	// System.Byte UniGLTF.Byte4::w
	uint8_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F, ___x_0)); }
	inline uint8_t get_x_0() const { return ___x_0; }
	inline uint8_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint8_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F, ___y_1)); }
	inline uint8_t get_y_1() const { return ___y_1; }
	inline uint8_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint8_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F, ___z_2)); }
	inline uint8_t get_z_2() const { return ___z_2; }
	inline uint8_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint8_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F, ___w_3)); }
	inline uint8_t get_w_3() const { return ___w_3; }
	inline uint8_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint8_t value)
	{
		___w_3 = value;
	}
};
#pragma pack(pop, tp)


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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// UniGLTF.UShort4
#pragma pack(push, tp, 1)
struct UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F 
{
public:
	// System.UInt16 UniGLTF.UShort4::x
	uint16_t ___x_0;
	// System.UInt16 UniGLTF.UShort4::y
	uint16_t ___y_1;
	// System.UInt16 UniGLTF.UShort4::z
	uint16_t ___z_2;
	// System.UInt16 UniGLTF.UShort4::w
	uint16_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F, ___x_0)); }
	inline uint16_t get_x_0() const { return ___x_0; }
	inline uint16_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint16_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F, ___y_1)); }
	inline uint16_t get_y_1() const { return ___y_1; }
	inline uint16_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint16_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F, ___z_2)); }
	inline uint16_t get_z_2() const { return ___z_2; }
	inline uint16_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint16_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F, ___w_3)); }
	inline uint16_t get_w_3() const { return ___w_3; }
	inline uint16_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint16_t value)
	{
		___w_3 = value;
	}
};
#pragma pack(pop, tp)


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UniGLTF.MeshImporter/MeshContext/Float4
#pragma pack(push, tp, 1)
struct Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F 
{
public:
	// System.Single UniGLTF.MeshImporter/MeshContext/Float4::x
	float ___x_0;
	// System.Single UniGLTF.MeshImporter/MeshContext/Float4::y
	float ___y_1;
	// System.Single UniGLTF.MeshImporter/MeshContext/Float4::z
	float ___z_2;
	// System.Single UniGLTF.MeshImporter/MeshContext/Float4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};
#pragma pack(pop, tp)


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
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


// UniJSON.Utf8String
struct Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A 
{
public:
	// System.ArraySegment`1<System.Byte> UniJSON.Utf8String::Bytes
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___Bytes_1;

public:
	inline static int32_t get_offset_of_Bytes_1() { return static_cast<int32_t>(offsetof(Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A, ___Bytes_1)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_Bytes_1() const { return ___Bytes_1; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_Bytes_1() { return &___Bytes_1; }
	inline void set_Bytes_1(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___Bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Bytes_1))->____array_0), (void*)NULL);
	}
};

struct Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A_StaticFields
{
public:
	// System.Text.Encoding UniJSON.Utf8String::Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___Encoding_0;

public:
	inline static int32_t get_offset_of_Encoding_0() { return static_cast<int32_t>(offsetof(Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A_StaticFields, ___Encoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_Encoding_0() const { return ___Encoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_Encoding_0() { return &___Encoding_0; }
	inline void set_Encoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___Encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encoding_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UniJSON.Utf8String
struct Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A_marshaled_pinvoke
{
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___Bytes_1;
};
// Native definition for COM marshalling of UniJSON.Utf8String
struct Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A_marshaled_com
{
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___Bytes_1;
};

// UniGLTF.glBufferTarget
struct glBufferTarget_tACB747F3A5B9C3044623433B8A30A28F3C2C0C6D 
{
public:
	// System.Int32 UniGLTF.glBufferTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(glBufferTarget_tACB747F3A5B9C3044623433B8A30A28F3C2C0C6D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniGLTF.glComponentType
struct glComponentType_t3A0D7940E25FABA2A6BD86FD792FF9E7C0D02C1D 
{
public:
	// System.Int32 UniGLTF.glComponentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(glComponentType_t3A0D7940E25FABA2A6BD86FD792FF9E7C0D02C1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
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


// UniGLTF.glTFAccessor
struct glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E  : public RuntimeObject
{
public:
	// System.Int32 UniGLTF.glTFAccessor::bufferView
	int32_t ___bufferView_0;
	// System.Int32 UniGLTF.glTFAccessor::byteOffset
	int32_t ___byteOffset_1;
	// System.String UniGLTF.glTFAccessor::type
	String_t* ___type_2;
	// UniGLTF.glComponentType UniGLTF.glTFAccessor::componentType
	int32_t ___componentType_3;
	// System.Int32 UniGLTF.glTFAccessor::count
	int32_t ___count_4;
	// System.Single[] UniGLTF.glTFAccessor::max
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___max_5;
	// System.Single[] UniGLTF.glTFAccessor::min
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___min_6;
	// System.Boolean UniGLTF.glTFAccessor::normalized
	bool ___normalized_7;
	// UniGLTF.glTFSparse UniGLTF.glTFAccessor::sparse
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * ___sparse_8;
	// System.String UniGLTF.glTFAccessor::name
	String_t* ___name_9;
	// UniGLTF.glTFExtension UniGLTF.glTFAccessor::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_10;
	// UniGLTF.glTFExtension UniGLTF.glTFAccessor::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_11;

public:
	inline static int32_t get_offset_of_bufferView_0() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___bufferView_0)); }
	inline int32_t get_bufferView_0() const { return ___bufferView_0; }
	inline int32_t* get_address_of_bufferView_0() { return &___bufferView_0; }
	inline void set_bufferView_0(int32_t value)
	{
		___bufferView_0 = value;
	}

	inline static int32_t get_offset_of_byteOffset_1() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___byteOffset_1)); }
	inline int32_t get_byteOffset_1() const { return ___byteOffset_1; }
	inline int32_t* get_address_of_byteOffset_1() { return &___byteOffset_1; }
	inline void set_byteOffset_1(int32_t value)
	{
		___byteOffset_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_2), (void*)value);
	}

	inline static int32_t get_offset_of_componentType_3() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___componentType_3)); }
	inline int32_t get_componentType_3() const { return ___componentType_3; }
	inline int32_t* get_address_of_componentType_3() { return &___componentType_3; }
	inline void set_componentType_3(int32_t value)
	{
		___componentType_3 = value;
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_max_5() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___max_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_max_5() const { return ___max_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_max_5() { return &___max_5; }
	inline void set_max_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___max_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___max_5), (void*)value);
	}

	inline static int32_t get_offset_of_min_6() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___min_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_min_6() const { return ___min_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_min_6() { return &___min_6; }
	inline void set_min_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___min_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___min_6), (void*)value);
	}

	inline static int32_t get_offset_of_normalized_7() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___normalized_7)); }
	inline bool get_normalized_7() const { return ___normalized_7; }
	inline bool* get_address_of_normalized_7() { return &___normalized_7; }
	inline void set_normalized_7(bool value)
	{
		___normalized_7 = value;
	}

	inline static int32_t get_offset_of_sparse_8() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___sparse_8)); }
	inline glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * get_sparse_8() const { return ___sparse_8; }
	inline glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 ** get_address_of_sparse_8() { return &___sparse_8; }
	inline void set_sparse_8(glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * value)
	{
		___sparse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sparse_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_10() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___extensions_10)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_10() const { return ___extensions_10; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_10() { return &___extensions_10; }
	inline void set_extensions_10(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_10), (void*)value);
	}

	inline static int32_t get_offset_of_extras_11() { return static_cast<int32_t>(offsetof(glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E, ___extras_11)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_11() const { return ___extras_11; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_11() { return &___extras_11; }
	inline void set_extras_11(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_11), (void*)value);
	}
};


// UniGLTF.glTFBufferView
struct glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D  : public RuntimeObject
{
public:
	// System.Int32 UniGLTF.glTFBufferView::buffer
	int32_t ___buffer_0;
	// System.Int32 UniGLTF.glTFBufferView::byteOffset
	int32_t ___byteOffset_1;
	// System.Int32 UniGLTF.glTFBufferView::byteLength
	int32_t ___byteLength_2;
	// System.Int32 UniGLTF.glTFBufferView::byteStride
	int32_t ___byteStride_3;
	// UniGLTF.glBufferTarget UniGLTF.glTFBufferView::target
	int32_t ___target_4;
	// UniGLTF.glTFExtension UniGLTF.glTFBufferView::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_5;
	// UniGLTF.glTFExtension UniGLTF.glTFBufferView::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_6;
	// System.String UniGLTF.glTFBufferView::name
	String_t* ___name_7;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___buffer_0)); }
	inline int32_t get_buffer_0() const { return ___buffer_0; }
	inline int32_t* get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(int32_t value)
	{
		___buffer_0 = value;
	}

	inline static int32_t get_offset_of_byteOffset_1() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___byteOffset_1)); }
	inline int32_t get_byteOffset_1() const { return ___byteOffset_1; }
	inline int32_t* get_address_of_byteOffset_1() { return &___byteOffset_1; }
	inline void set_byteOffset_1(int32_t value)
	{
		___byteOffset_1 = value;
	}

	inline static int32_t get_offset_of_byteLength_2() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___byteLength_2)); }
	inline int32_t get_byteLength_2() const { return ___byteLength_2; }
	inline int32_t* get_address_of_byteLength_2() { return &___byteLength_2; }
	inline void set_byteLength_2(int32_t value)
	{
		___byteLength_2 = value;
	}

	inline static int32_t get_offset_of_byteStride_3() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___byteStride_3)); }
	inline int32_t get_byteStride_3() const { return ___byteStride_3; }
	inline int32_t* get_address_of_byteStride_3() { return &___byteStride_3; }
	inline void set_byteStride_3(int32_t value)
	{
		___byteStride_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___target_4)); }
	inline int32_t get_target_4() const { return ___target_4; }
	inline int32_t* get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(int32_t value)
	{
		___target_4 = value;
	}

	inline static int32_t get_offset_of_extensions_5() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___extensions_5)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_5() const { return ___extensions_5; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_5() { return &___extensions_5; }
	inline void set_extensions_5(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_5), (void*)value);
	}

	inline static int32_t get_offset_of_extras_6() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___extras_6)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_6() const { return ___extras_6; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_6() { return &___extras_6; }
	inline void set_extras_6(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}
};


// UniGLTF.glTFExtensions
struct glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2  : public RuntimeObject
{
public:

public:
};

struct glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec> UniGLTF.glTFExtensions::ComponentTypeMap
	Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * ___ComponentTypeMap_0;
	// UniJSON.Utf8String UniGLTF.glTFExtensions::s_extensions
	Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A  ___s_extensions_1;

public:
	inline static int32_t get_offset_of_ComponentTypeMap_0() { return static_cast<int32_t>(offsetof(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields, ___ComponentTypeMap_0)); }
	inline Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * get_ComponentTypeMap_0() const { return ___ComponentTypeMap_0; }
	inline Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B ** get_address_of_ComponentTypeMap_0() { return &___ComponentTypeMap_0; }
	inline void set_ComponentTypeMap_0(Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * value)
	{
		___ComponentTypeMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComponentTypeMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_extensions_1() { return static_cast<int32_t>(offsetof(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields, ___s_extensions_1)); }
	inline Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A  get_s_extensions_1() const { return ___s_extensions_1; }
	inline Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A * get_address_of_s_extensions_1() { return &___s_extensions_1; }
	inline void set_s_extensions_1(Utf8String_t8681DF141647599385F1B228EACDB6BBD3B2545A  value)
	{
		___s_extensions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_extensions_1))->___Bytes_1))->____array_0), (void*)NULL);
	}
};


// UniGLTF.glTFSparseIndices
struct glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A  : public RuntimeObject
{
public:
	// System.Int32 UniGLTF.glTFSparseIndices::bufferView
	int32_t ___bufferView_0;
	// System.Int32 UniGLTF.glTFSparseIndices::byteOffset
	int32_t ___byteOffset_1;
	// UniGLTF.glComponentType UniGLTF.glTFSparseIndices::componentType
	int32_t ___componentType_2;
	// UniGLTF.glTFExtension UniGLTF.glTFSparseIndices::extensions
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extensions_3;
	// UniGLTF.glTFExtension UniGLTF.glTFSparseIndices::extras
	glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * ___extras_4;

public:
	inline static int32_t get_offset_of_bufferView_0() { return static_cast<int32_t>(offsetof(glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A, ___bufferView_0)); }
	inline int32_t get_bufferView_0() const { return ___bufferView_0; }
	inline int32_t* get_address_of_bufferView_0() { return &___bufferView_0; }
	inline void set_bufferView_0(int32_t value)
	{
		___bufferView_0 = value;
	}

	inline static int32_t get_offset_of_byteOffset_1() { return static_cast<int32_t>(offsetof(glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A, ___byteOffset_1)); }
	inline int32_t get_byteOffset_1() const { return ___byteOffset_1; }
	inline int32_t* get_address_of_byteOffset_1() { return &___byteOffset_1; }
	inline void set_byteOffset_1(int32_t value)
	{
		___byteOffset_1 = value;
	}

	inline static int32_t get_offset_of_componentType_2() { return static_cast<int32_t>(offsetof(glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A, ___componentType_2)); }
	inline int32_t get_componentType_2() const { return ___componentType_2; }
	inline int32_t* get_address_of_componentType_2() { return &___componentType_2; }
	inline void set_componentType_2(int32_t value)
	{
		___componentType_2 = value;
	}

	inline static int32_t get_offset_of_extensions_3() { return static_cast<int32_t>(offsetof(glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A, ___extensions_3)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extensions_3() const { return ___extensions_3; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extensions_3() { return &___extensions_3; }
	inline void set_extensions_3(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extensions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_3), (void*)value);
	}

	inline static int32_t get_offset_of_extras_4() { return static_cast<int32_t>(offsetof(glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A, ___extras_4)); }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * get_extras_4() const { return ___extras_4; }
	inline glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 ** get_address_of_extras_4() { return &___extras_4; }
	inline void set_extras_4(glTFExtension_t8ADFAAABB345C62FA84ECB68BFAD1B08FEF71067 * value)
	{
		___extras_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extras_4), (void*)value);
	}
};


// UniGLTF.glTFExtensions/ComponentVec
struct ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A 
{
public:
	// UniGLTF.glComponentType UniGLTF.glTFExtensions/ComponentVec::ComponentType
	int32_t ___ComponentType_0;
	// System.Int32 UniGLTF.glTFExtensions/ComponentVec::ElementCount
	int32_t ___ElementCount_1;

public:
	inline static int32_t get_offset_of_ComponentType_0() { return static_cast<int32_t>(offsetof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A, ___ComponentType_0)); }
	inline int32_t get_ComponentType_0() const { return ___ComponentType_0; }
	inline int32_t* get_address_of_ComponentType_0() { return &___ComponentType_0; }
	inline void set_ComponentType_0(int32_t value)
	{
		___ComponentType_0 = value;
	}

	inline static int32_t get_offset_of_ElementCount_1() { return static_cast<int32_t>(offsetof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A, ___ElementCount_1)); }
	inline int32_t get_ElementCount_1() const { return ___ElementCount_1; }
	inline int32_t* get_address_of_ElementCount_1() { return &___ElementCount_1; }
	inline void set_ElementCount_1(int32_t value)
	{
		___ElementCount_1 = value;
	}
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UniGLTF.Byte4[]
struct Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F  m_Items[1];

public:
	inline Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  m_Items[1];

public:
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UniGLTF.UShort4[]
struct UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F  m_Items[1];

public:
	inline UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UniGLTF.MeshImporter/MeshContext/Float4[]
struct Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F  m_Items[1];

public:
	inline Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F  value)
	{
		m_Items[index] = value;
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
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
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


// System.Void System.ArraySegment`1<UnityEngine.Vector3>::.ctor(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m56BCBEB9CF0ED61D8045225C14B9B315F4FA3155_gshared (ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___array0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UniGLTF.glTFExtensions/ComponentVec>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD476DB62FF583770778B477E52F86302B2DB1E71_gshared (Dictionary_2_t26B505AC9FEDD4CB3AA00175FA9F336BE955AA04 * __this, RuntimeObject * ___key0, ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);

// System.Void System.ArraySegment`1<UnityEngine.Vector3>::.ctor(!0[])
inline void ArraySegment_1__ctor_m56BCBEB9CF0ED61D8045225C14B9B315F4FA3155 (ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1 *, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*, const RuntimeMethod*))ArraySegment_1__ctor_m56BCBEB9CF0ED61D8045225C14B9B315F4FA3155_gshared)(__this, ___array0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UniGLTF.glTFExtensions/ComponentVec>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E (Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * __this, Type_t * ___key0, ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *, Type_t *, ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *, const RuntimeMethod*))Dictionary_2_TryGetValue_mD476DB62FF583770778B477E52F86302B2DB1E71_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UniGLTF.glTFAccessor>::get_Item(System.Int32)
inline glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * (*) (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UniGLTF.glTFBufferView>::get_Item(System.Int32)
inline glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * (*) (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Int32> UniGLTF.glTFExtensions::_GetIndices(UniGLTF.glTF,UniGLTF.glTFBufferView,System.Int32,System.Int32,UniGLTF.glComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22 (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view1, int32_t ___count2, int32_t ___byteOffset3, int32_t ___componentType4, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UniGLTF.glTFBuffer>::get_Item(System.Int32)
inline glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * (*) (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.ArraySegment`1<System.Byte> UniGLTF.glTFBuffer::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C (glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Int32 UniGLTF.glTFExtensions::ExtendSparseBufferAndGetAccessorIndex<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,System.Int32,T[],System.Int32[],System.Int32,UniGLTF.glBufferTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_ExtendSparseBufferAndGetAccessorIndex_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m356B9BCFB04D9D2556E5C35E2E760FCF4234D1CC_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___gltf0, int32_t ___bufferIndex1, int32_t ___accessorCount2, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___sparseValues3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___sparseIndices4, int32_t ___sparseViewIndex5, int32_t ___target6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ExtendSparseBufferAndGetAccessorIndex(gltf, bufferIndex,
		//     accessorCount,
		//     new ArraySegment<T>(sparseValues), sparseIndices, sparseViewIndex,
		//     target);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___gltf0;
		int32_t L_1 = ___bufferIndex1;
		int32_t L_2 = ___accessorCount2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = ___sparseValues3;
		ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ArraySegment_1__ctor_m56BCBEB9CF0ED61D8045225C14B9B315F4FA3155((&L_4), (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___sparseIndices4;
		int32_t L_6 = ___sparseViewIndex5;
		int32_t L_7 = ___target6;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = ((  int32_t (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1 , Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_1, (int32_t)L_2, (ArraySegment_1_t12E2F3BC867255EB056CA1F106A8D1E85142A3F1 )L_4, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (int32_t)L_8;
	}
}
// System.Int32 UniGLTF.glTFExtensions::GetAccessorElementCount<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetAccessorElementCount_TisRuntimeObject_m90B77FF4CADFBB5F3B2EBBD0707EB4288D0A36CB_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ElementCount;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// return 1;
		return (int32_t)1;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m90F041003B889301FD6A2AB13F209EB2804A89CC_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m90F041003B889301FD6A2AB13F209EB2804A89CC_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Matrix4x4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mE005ADDB0846AAF5E05E5961570D206623AE5105_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mE005ADDB0846AAF5E05E5961570D206623AE5105_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisRuntimeObject_m7447C56FD5DB02E4685BAA26B0ADA3711E7B5853_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisRuntimeObject_m7447C56FD5DB02E4685BAA26B0ADA3711E7B5853_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m112C119AACE06EAF44567973F73D8A981D49D7CF_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m112C119AACE06EAF44567973F73D8A981D49D7CF_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UniGLTF.UShort4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m53EAB963607339CB8642755CBE1B981CB3842D71_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m53EAB963607339CB8642755CBE1B981CB3842D71_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m141779B15019F888F7A8ADA3F8A0950ACD26E1C5_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m141779B15019F888F7A8ADA3F8A0950ACD26E1C5_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEBD77E66AC9D1227C3401C79D47580B41CFA7930_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEBD77E66AC9D1227C3401C79D47580B41CFA7930_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// System.String UniGLTF.glTFExtensions::GetAccessorType<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* glTFExtensions_GetAccessorType_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mEF1BA46E30A2F051F22E8AEF0F0A9D80C6B0ED96_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// switch (cv.ElementCount)
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ElementCount_1();
		V_1 = (int32_t)L_5;
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004e;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005a;
	}

IL_0042:
	{
		// case 2: return "VEC2";
		return (String_t*)_stringLiteral02BB463928D4E15BD5ECA84DABC17D6F67D3A89A;
	}

IL_0048:
	{
		// case 3: return "VEC3";
		return (String_t*)_stringLiteralE3A5647F9D4D7321D0FB2267C5B9C147C222F636;
	}

IL_004e:
	{
		// case 4: return "VEC4";
		return (String_t*)_stringLiteral6DA17EF0CFCB88F3EE460F1488CE83FBB4DE84A3;
	}

IL_0054:
	{
		// case 16: return "MAT4";
		return (String_t*)_stringLiteralEAAF420AB23FFD94B4DF38C14A9A16F0BED2E0F7;
	}

IL_005a:
	{
		// default: throw new Exception();
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetAccessorType_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mEF1BA46E30A2F051F22E8AEF0F0A9D80C6B0ED96_RuntimeMethod_var)));
	}

IL_0060:
	{
		// return "SCALAR";
		return (String_t*)_stringLiteral7F5DF872FA6CA76650526A1B598A5AE1F16E1FFC;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UniGLTF.Byte4>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* glTFExtensions_GetArrayFromAccessor_TisByte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F_m0E52444FEF94E7E74DEDD84A37F1B90F905203EB_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_6 = (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)(Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_11 = (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)(Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_19;
		L_19 = ((  Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_53;
		L_53 = ((  Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Byte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_68 = V_1;
		return (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UnityEngine.Color>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* glTFExtensions_GetArrayFromAccessor_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m3155F6C481B4DCE83C3DD42BF25114CE5931E9DB_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_19;
		L_19 = ((  ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_53;
		L_53 = ((  ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_68 = V_1;
		return (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UnityEngine.Matrix4x4>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* glTFExtensions_GetArrayFromAccessor_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m90DCFAC38598F31A9B995BA1B69A7C83548AFC30_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_6 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_11 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_19;
		L_19 = ((  Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_53;
		L_53 = ((  Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_68 = V_1;
		return (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<System.Single>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* glTFExtensions_GetArrayFromAccessor_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mAA53A2481E16423521BF7A4292AD6BB2CF638C52_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19;
		L_19 = ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53;
		L_53 = ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		float L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (float)L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68 = V_1;
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UniGLTF.UShort4>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* glTFExtensions_GetArrayFromAccessor_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m7A873DF0A592AD8D8C54EBB919C0AC30D0AA07DF_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_6 = (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)(UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_11 = (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)(UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_19;
		L_19 = ((  UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_53;
		L_53 = ((  UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (UShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_68 = V_1;
		return (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UnityEngine.Vector2>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* glTFExtensions_GetArrayFromAccessor_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m05DBC74D4A9465A8FE68DEC5F27CC300AE90A202_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_11 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19;
		L_19 = ((  Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_53;
		L_53 = ((  Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_68 = V_1;
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* glTFExtensions_GetArrayFromAccessor_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m7E4E67662B61F2D36619506FF5D383E159ABBEC0_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19;
		L_19 = ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_53;
		L_53 = ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = V_1;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetArrayFromAccessor<UniGLTF.MeshImporter/MeshContext/Float4>(UniGLTF.glTF,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* glTFExtensions_GetArrayFromAccessor_TisFloat4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F_m7866087C96D42CACF500F9003789B31331D7C016_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___accessorIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * V_0 = NULL;
	Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* V_1 = NULL;
	glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * V_2 = NULL;
	Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* G_B5_0 = NULL;
	{
		// var vertexAccessor = self.accessors[accessorIndex];
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		NullCheck(L_0);
		List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 * L_1 = (List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_0->get_accessors_3();
		int32_t L_2 = ___accessorIndex1;
		NullCheck((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1);
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3;
		L_3 = List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_inline((List_1_t5E3A081FE0820A09563D886E910CD951358A0A78 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m6E66A068FFED064DF8A6C8003EFA48F3EA1A9760_RuntimeMethod_var);
		V_0 = (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_3;
		// if (vertexAccessor.count <= 0) return new T[] { };
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_count_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// if (vertexAccessor.count <= 0) return new T[] { };
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_6 = (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)(Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)0);
		return (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_6;
	}

IL_001d:
	{
		// var result = (vertexAccessor.bufferView != -1)
		//     ? self.GetAttrib<T>(vertexAccessor, self.bufferViews[vertexAccessor.bufferView])
		//     : new T[vertexAccessor.count]
		//     ;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->get_bufferView_0();
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->get_count_4();
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_11 = (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)(Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_10);
		G_B5_0 = L_11;
		goto IL_004b;
	}

IL_0033:
	{
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_12 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_13 = V_0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_14 = ___self0;
		NullCheck(L_14);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_15 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_14->get_bufferViews_2();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)L_16->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_18;
		L_18 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_15, (int32_t)L_17, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_19;
		L_19 = ((  Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_12, (glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E *)L_13, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		G_B5_0 = L_19;
	}

IL_004b:
	{
		V_1 = (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)G_B5_0;
		// var sparse = vertexAccessor.sparse;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_20 = V_0;
		NullCheck(L_20);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_21 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_20->get_sparse_8();
		V_2 = (glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 *)L_21;
		// if (sparse != null && sparse.count > 0)
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = (int32_t)L_23->get_count_0();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// var indices = self._GetIndices(self.bufferViews[sparse.indices.bufferView], sparse.count, sparse.indices.byteOffset, sparse.indices.componentType);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_25 = ___self0;
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_26 = ___self0;
		NullCheck(L_26);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_27 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_26->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_28 = V_2;
		NullCheck(L_28);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_29 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_28->get_indices_1();
		NullCheck(L_29);
		int32_t L_30 = (int32_t)L_29->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_31;
		L_31 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_27, (int32_t)L_30, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = (int32_t)L_32->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_34 = V_2;
		NullCheck(L_34);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_35 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_34->get_indices_1();
		NullCheck(L_35);
		int32_t L_36 = (int32_t)L_35->get_byteOffset_1();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_37 = V_2;
		NullCheck(L_37);
		glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A * L_38 = (glTFSparseIndices_t3699AADFD8048B5567079F94E28D7C972BFCE99A *)L_37->get_indices_1();
		NullCheck(L_38);
		int32_t L_39 = (int32_t)L_38->get_componentType_2();
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = glTFExtensions__GetIndices_m3DC719D23890F11AE69DB717BDC1C0497193CE22((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_25, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_31, (int32_t)L_33, (int32_t)L_36, (int32_t)L_39, /*hidden argument*/NULL);
		// var values = self.GetAttrib<T>(sparse.count, sparse.values.byteOffset, self.bufferViews[sparse.values.bufferView]);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_41 = ___self0;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (int32_t)L_42->get_count_0();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_44 = V_2;
		NullCheck(L_44);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_45 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_44->get_values_2();
		NullCheck(L_45);
		int32_t L_46 = (int32_t)L_45->get_byteOffset_1();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_47 = ___self0;
		NullCheck(L_47);
		List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 * L_48 = (List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_47->get_bufferViews_2();
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_49 = V_2;
		NullCheck(L_49);
		glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 * L_50 = (glTFSparseValues_t8E5ADFB559E6F2BEEEAFDA0497E48A6E924EB188 *)L_49->get_values_2();
		NullCheck(L_50);
		int32_t L_51 = (int32_t)L_50->get_bufferView_0();
		NullCheck((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_52;
		L_52 = List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_inline((List_1_tBBBFD5B6F03680C17F5F7D1293686B61E311ED16 *)L_48, (int32_t)L_51, /*hidden argument*/List_1_get_Item_m42DA0506BBE3F9B97679B2E6FC2E36C4E73A427E_RuntimeMethod_var);
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_53;
		L_53 = ((  Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_41, (int32_t)L_43, (int32_t)L_46, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_52, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_3 = (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_53;
		// var it = indices.GetEnumerator();
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		V_4 = (RuntimeObject*)L_54;
		// for (int i = 0; i < sparse.count; ++i)
		V_5 = (int32_t)0;
		goto IL_00fa;
	}

IL_00d7:
	{
		// it.MoveNext();
		RuntimeObject* L_55 = V_4;
		NullCheck((RuntimeObject*)L_55);
		bool L_56;
		L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		// result[it.Current] = values[i];
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_57 = V_1;
		RuntimeObject* L_58 = V_4;
		NullCheck((RuntimeObject*)L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, (RuntimeObject*)L_58);
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_60 = V_3;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Float4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F )L_63);
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_64 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < sparse.count; ++i)
		int32_t L_65 = V_5;
		glTFSparse_tFB3191AEF5BA0BECF4BA704FC11645EC162DC243 * L_66 = V_2;
		NullCheck(L_66);
		int32_t L_67 = (int32_t)L_66->get_count_0();
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00d7;
		}
	}

IL_0104:
	{
		// return result;
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_68 = V_1;
		return (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_68;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.Byte>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* glTFExtensions_GetAttrib_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAB4F434D2B5F76219636D84C36D02F69CAB00066_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UniGLTF.Byte4>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* glTFExtensions_GetAttrib_TisByte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F_mFFB622F84C94C22023350ACB2BBDEED286CF9BE2_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_6;
		L_6 = ((  Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Color>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* glTFExtensions_GetAttrib_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mFE061EBA8A5539790A84A888AB5061671C846704_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6;
		L_6 = ((  ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Matrix4x4>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* glTFExtensions_GetAttrib_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_mDE567F07034D1C775E1AA8B34DD25633C3677E0F_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_6;
		L_6 = ((  Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.Single>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* glTFExtensions_GetAttrib_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m2D756F8878D14BB557EE44D4A84BE29DCD969F4F_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6;
		L_6 = ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.UInt16>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* glTFExtensions_GetAttrib_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m9593DF4A0D887CF4CCE9021AC6386041EB453F2E_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_6;
		L_6 = ((  UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.UInt32>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* glTFExtensions_GetAttrib_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF61CF515EC585603B92AD6376CEC2191815C62D4_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6;
		L_6 = ((  UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UniGLTF.UShort4>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* glTFExtensions_GetAttrib_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m93C6907E8619E0CDECBEB659D3A2A4EBB333EFD0_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_6;
		L_6 = ((  UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Vector2>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* glTFExtensions_GetAttrib_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m6061785F21303CC918712405B4E2B6F27D1803AD_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6;
		L_6 = ((  Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Vector3>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* glTFExtensions_GetAttrib_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mDB3116BC4D4DA714464396BC93C31E04562A0DAE_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6;
		L_6 = ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UniGLTF.MeshImporter/MeshContext/Float4>(UniGLTF.glTF,UniGLTF.glTFAccessor,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* glTFExtensions_GetAttrib_TisFloat4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F_m9DBB9D760B9ACF4DF5D541364983C1A73EA0FE0E_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * ___accessor1, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.GetAttrib<T>(accessor.count, accessor.byteOffset, view);
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_0 = ___self0;
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_1 = ___accessor1;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)L_1->get_count_4();
		glTFAccessor_t0A9D29B6FA318B2E4FFD876A63072348B38DD60E * L_3 = ___accessor1;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)L_3->get_byteOffset_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_5 = ___view2;
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_6;
		L_6 = ((  Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* (*) (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *, int32_t, int32_t, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 *)L_0, (int32_t)L_2, (int32_t)L_4, (glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_6;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.Byte>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* glTFExtensions_GetAttrib_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA7D226DF35856F0DEB0153ACA858E4B3CC818763_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_0;
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UniGLTF.Byte4>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* glTFExtensions_GetAttrib_TisByte4_t317907ED0DB2FF903C17B42EA91BA3812880A30F_m4E6C1DF564B55357F6BCAA7496A768A63C79DF18_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_1 = (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)(Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41* L_19 = V_0;
		return (Byte4U5BU5D_t31ECE6C0654FB51BD23EB392F889D88AF00A1B41*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Color>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* glTFExtensions_GetAttrib_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mFE7106F51D455341053700E3C8B4A17B16E7AA12_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_19 = V_0;
		return (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Matrix4x4>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* glTFExtensions_GetAttrib_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m08659C01785DA2D11D8300C12CAAFB2FE2F8431A_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_1 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_19 = V_0;
		return (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.Single>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* glTFExtensions_GetAttrib_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m7F4EF950EEC0609C840EEA5EA67D8804F0160CA3_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = V_0;
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.UInt16>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* glTFExtensions_GetAttrib_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m1E5E37581E50929FD64574DFFBCDB8A88EAB8912_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_1 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_19 = V_0;
		return (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<System.UInt32>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* glTFExtensions_GetAttrib_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m69463BCFCAC6E3E6BEB756D519450376BA91BAE0_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_19 = V_0;
		return (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UniGLTF.UShort4>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* glTFExtensions_GetAttrib_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m3B0EAEF727DB7B3B4E5C6B61A620D0AF47FB94C2_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_1 = (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)(UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100* L_19 = V_0;
		return (UShort4U5BU5D_tB6D3983A6A0F868837598F82060537FE92836100*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Vector2>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* glTFExtensions_GetAttrib_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m39DA99EEF3A1BB1A6FF6E752700CF8A0BBE181CE_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19 = V_0;
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UnityEngine.Vector3>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* glTFExtensions_GetAttrib_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEF1A08901EB4E37B4CEC873AD27D84F56C218080_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = V_0;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_19;
	}
}
// T[] UniGLTF.glTFExtensions::GetAttrib<UniGLTF.MeshImporter/MeshContext/Float4>(UniGLTF.glTF,System.Int32,System.Int32,UniGLTF.glTFBufferView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* glTFExtensions_GetAttrib_TisFloat4_t8FA2CF5832E2F61A685688270B858B161BC0DB3F_m8EFC331050C114FB101DA3441554CEA6C6FDCD34_gshared (glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * ___self0, int32_t ___count1, int32_t ___byteOffset2, glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * ___view3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var attrib = new T[count];
		int32_t L_0 = ___count1;
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_1 = (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)(Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_0);
		V_0 = (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_1;
		// var segment = self.buffers[view.buffer].GetBytes();
		glTF_t133AADB1C2E807FC85BE0DEC93290A3E452FF949 * L_2 = ___self0;
		NullCheck(L_2);
		List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 * L_3 = (List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_2->get_buffers_1();
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_4 = ___view3;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)L_4->get_buffer_0();
		NullCheck((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3);
		glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 * L_6;
		L_6 = List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_inline((List_1_t8B2775970FD131DE8B6E13F609C35F0EE3ED3780 *)L_3, (int32_t)L_5, /*hidden argument*/List_1_get_Item_m380DE3B077C0995D465FC041E6FF271A19EF7C8B_RuntimeMethod_var);
		NullCheck((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		L_7 = glTFBuffer_GetBytes_m5EEFB7A8D9FCA0F52451E533423652CC5BC0905C((glTFBuffer_t03A21D57A2763058B9B7A0391EA4C100E4133735 *)L_6, /*hidden argument*/NULL);
		V_1 = (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_7;
		// var bytes = new ArraySegment<Byte>(segment.Array, segment.Offset + view.byteOffset + byteOffset, count * view.byteStride);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_9;
		L_9 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_10 = ___view3;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)L_10->get_byteOffset_1();
		int32_t L_12 = ___byteOffset2;
		int32_t L_13 = ___count1;
		glTFBufferView_tDE12863CB7B5F92F3258F9D7D598DDBFEFD60A4D * L_14 = ___view3;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)L_14->get_byteStride_3();
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_16), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// bytes.MarshalCopyTo(attrib);
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_17 = V_0;
		int32_t L_18;
		L_18 = ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_16, (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// return attrib;
		Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744* L_19 = V_0;
		return (Float4U5BU5D_tA1C1AC5DA360C37D3763B89D70A5238A0AE27744*)L_19;
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m936E6182593E5944A6287D4CCB37028B2675D75F_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m936E6182593E5944A6287D4CCB37028B2675D75F_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Matrix4x4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m0DC4DD0315901A644BCC342E4E409A6CD15E1858_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m0DC4DD0315901A644BCC342E4E409A6CD15E1858_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisRuntimeObject_m575530F9570500FBE037D3D43FA517F9715387BF_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisRuntimeObject_m575530F9570500FBE037D3D43FA517F9715387BF_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD14CE0B9BAE66CBEF1CBCCDC775BE27D712807AF_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD14CE0B9BAE66CBEF1CBCCDC775BE27D712807AF_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UniGLTF.UShort4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m9730F005B6890F6CF71550A07C0581A855A5B1C4_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisUShort4_tBC0F99BD983A849465815019C1A3CFB09997EA8F_m9730F005B6890F6CF71550A07C0581A855A5B1C4_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m5EF5017DDF26035589CECB1C29A12EA53E075869_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m5EF5017DDF26035589CECB1C29A12EA53E075869_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m60C35CE2F5527DB2B50ADE034B6CFD4F5819BBB8_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m60C35CE2F5527DB2B50ADE034B6CFD4F5819BBB8_RuntimeMethod_var)));
	}
}
// UniGLTF.glComponentType UniGLTF.glTFExtensions::GetComponentType<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t glTFExtensions_GetComponentType_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mE8F4A4E046F09DFE4CCBD47C30384E0ABD36FFFD_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cv = default(ComponentVec);
		il2cpp_codegen_initobj((&V_0), sizeof(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A ));
		// if (ComponentTypeMap.TryGetValue(typeof(T), out cv))
		IL2CPP_RUNTIME_CLASS_INIT(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var);
		Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B * L_0 = ((glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_StaticFields*)il2cpp_codegen_static_fields_for(glTFExtensions_t05A19B71B8A05D37A3602304AE4113B7727C6CF2_il2cpp_TypeInfo_var))->get_ComponentTypeMap_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E((Dictionary_2_tA4D1E7086070BE6E3FA55DE433C6DE12D47C4B1B *)L_0, (Type_t *)L_2, (ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1FC963CFA7908DAA694A08F43D7AE1E585AD380E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// return cv.ComponentType;
		ComponentVec_t4B93AC342610C9473A8E1862181EDCBDC678EF5A  L_4 = V_0;
		int32_t L_5 = (int32_t)L_4.get_ComponentType_0();
		return (int32_t)L_5;
	}

IL_0027:
	{
		// else if (typeof(T) == typeof(uint))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_7, (Type_t *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return glComponentType.UNSIGNED_INT;
		return (int32_t)(((int32_t)5125));
	}

IL_0048:
	{
		// else if (typeof(T) == typeof(float))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_12, (Type_t *)L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		// return glComponentType.FLOAT;
		return (int32_t)(((int32_t)5126));
	}

IL_0069:
	{
		// throw new NotImplementedException(typeof(T).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_16, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_17);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_19 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_19, (String_t*)L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&glTFExtensions_GetComponentType_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mE8F4A4E046F09DFE4CCBD47C30384E0ABD36FFFD_RuntimeMethod_var)));
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::FillZero<UnityEngine.BoneWeight>(System.Collections.Generic.IList`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_FillZero_TisBoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8_m87A8BEB6408A05B46DBE5DE6658F731ABAD549BB_gshared (RuntimeObject* ___list0, int32_t ___fillLength1, const RuntimeMethod* method)
{
	BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (list.Count > fillLength)
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.BoneWeight>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		int32_t L_2 = ___fillLength1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("Impossible");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42CBCCD9C46E6F1BBB4E9725A4A6E347E5A20434)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshContext_FillZero_TisBoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8_m87A8BEB6408A05B46DBE5DE6658F731ABAD549BB_RuntimeMethod_var)));
	}

IL_0014:
	{
		// list.Add(default);
		RuntimeObject* L_4 = ___list0;
		il2cpp_codegen_initobj((&V_0), sizeof(BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 ));
		BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  L_5 = V_0;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.BoneWeight>::Add(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (BoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8 )L_5);
	}

IL_0023:
	{
		// while (list.Count < fillLength)
		RuntimeObject* L_6 = ___list0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.BoneWeight>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		int32_t L_8 = ___fillLength1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::FillZero<UnityEngine.Color>(System.Collections.Generic.IList`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_FillZero_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mD5358DE881434D769007411BFEAEB37E84A81B49_gshared (RuntimeObject* ___list0, int32_t ___fillLength1, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (list.Count > fillLength)
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		int32_t L_2 = ___fillLength1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("Impossible");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42CBCCD9C46E6F1BBB4E9725A4A6E347E5A20434)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshContext_FillZero_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mD5358DE881434D769007411BFEAEB37E84A81B49_RuntimeMethod_var)));
	}

IL_0014:
	{
		// list.Add(default);
		RuntimeObject* L_4 = ___list0;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = V_0;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Color>::Add(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_5);
	}

IL_0023:
	{
		// while (list.Count < fillLength)
		RuntimeObject* L_6 = ___list0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Color>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		int32_t L_8 = ___fillLength1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::FillZero<System.Object>(System.Collections.Generic.IList`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_FillZero_TisRuntimeObject_m437BC17A5C5A5636CB371EE28EB735EF90F110F3_gshared (RuntimeObject* ___list0, int32_t ___fillLength1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// if (list.Count > fillLength)
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		int32_t L_2 = ___fillLength1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("Impossible");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42CBCCD9C46E6F1BBB4E9725A4A6E347E5A20434)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshContext_FillZero_TisRuntimeObject_m437BC17A5C5A5636CB371EE28EB735EF90F110F3_RuntimeMethod_var)));
	}

IL_0014:
	{
		// list.Add(default);
		RuntimeObject* L_4 = ___list0;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_0;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (RuntimeObject *)L_5);
	}

IL_0023:
	{
		// while (list.Count < fillLength)
		RuntimeObject* L_6 = ___list0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		int32_t L_8 = ___fillLength1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::FillZero<UnityEngine.Vector2>(System.Collections.Generic.IList`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_FillZero_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m0552B449E05274BD5D9794E7FDDDB7307A90E1D6_gshared (RuntimeObject* ___list0, int32_t ___fillLength1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (list.Count > fillLength)
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		int32_t L_2 = ___fillLength1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("Impossible");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42CBCCD9C46E6F1BBB4E9725A4A6E347E5A20434)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshContext_FillZero_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m0552B449E05274BD5D9794E7FDDDB7307A90E1D6_RuntimeMethod_var)));
	}

IL_0014:
	{
		// list.Add(default);
		RuntimeObject* L_4 = ___list0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::Add(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
	}

IL_0023:
	{
		// while (list.Count < fillLength)
		RuntimeObject* L_6 = ___list0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector2>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		int32_t L_8 = ___fillLength1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::FillZero<UnityEngine.Vector3>(System.Collections.Generic.IList`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_FillZero_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m0D3F4BF0E85E891255677FCFBB2D99CE0C5D3508_gshared (RuntimeObject* ___list0, int32_t ___fillLength1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (list.Count > fillLength)
		RuntimeObject* L_0 = ___list0;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		int32_t L_2 = ___fillLength1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("Impossible");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42CBCCD9C46E6F1BBB4E9725A4A6E347E5A20434)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshContext_FillZero_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m0D3F4BF0E85E891255677FCFBB2D99CE0C5D3508_RuntimeMethod_var)));
	}

IL_0014:
	{
		// list.Add(default);
		RuntimeObject* L_4 = ___list0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5);
	}

IL_0023:
	{
		// while (list.Count < fillLength)
		RuntimeObject* L_6 = ___list0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_6);
		int32_t L_8 = ___fillLength1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::Truncate<UnityEngine.BoneWeight>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_Truncate_TisBoneWeight_t48ACF6336A02E6D89797F11624FBC9108CF076D8_mAD7369692D1E4CAB56527E3DD527F5FD90038732_gshared (List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * ___list0, int32_t ___maxIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (list == null)
		List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * L_0 = ___list0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// var count = maxIndex + 1;
		int32_t L_1 = ___maxIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// if (list.Count > count)
		List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * L_2 = ___list0;
		NullCheck((List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// list.RemoveRange(count, list.Count - count);
		List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * L_5 = ___list0;
		int32_t L_6 = V_0;
		List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD * L_7 = ___list0;
		NullCheck((List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *)L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_9 = V_0;
		NullCheck((List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *)L_5);
		((  void (*) (List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t1E8259AF95AC0F89EAFB0CBFBB3DA7F616E949AD *)L_5, (int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::Truncate<UnityEngine.Color>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_Truncate_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m6C49A6368F2599999DE1DADFD230FDC6C4BD63D5_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___list0, int32_t ___maxIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (list == null)
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = ___list0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// var count = maxIndex + 1;
		int32_t L_1 = ___maxIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// if (list.Count > count)
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_2 = ___list0;
		NullCheck((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// list.RemoveRange(count, list.Count - count);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_5 = ___list0;
		int32_t L_6 = V_0;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = ___list0;
		NullCheck((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_9 = V_0;
		NullCheck((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)L_5);
		((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)L_5, (int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::Truncate<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_Truncate_TisRuntimeObject_m958A263602DEA776CFAFFB4C1B67BAC9EFA84706_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___maxIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (list == null)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// var count = maxIndex + 1;
		int32_t L_1 = ___maxIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// if (list.Count > count)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___list0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// list.RemoveRange(count, list.Count - count);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___list0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_9 = V_0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, (int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::Truncate<UnityEngine.Vector2>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_Truncate_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mB72AD17F6850B3E7E9A2BD9E6E47E2CEB21DF95A_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___list0, int32_t ___maxIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (list == null)
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = ___list0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// var count = maxIndex + 1;
		int32_t L_1 = ___maxIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// if (list.Count > count)
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_2 = ___list0;
		NullCheck((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// list.RemoveRange(count, list.Count - count);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_5 = ___list0;
		int32_t L_6 = V_0;
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_7 = ___list0;
		NullCheck((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_9 = V_0;
		NullCheck((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_5);
		((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_5, (int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UniGLTF.MeshImporter/MeshContext::Truncate<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContext_Truncate_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m873A1869886CFECE234F7E803BCAD1C56366A9A7_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___list0, int32_t ___maxIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (list == null)
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___list0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// var count = maxIndex + 1;
		int32_t L_1 = ___maxIndex1;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// if (list.Count > count)
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = ___list0;
		NullCheck((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// list.RemoveRange(count, list.Count - count);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_5 = ___list0;
		int32_t L_6 = V_0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = ___list0;
		NullCheck((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_9 = V_0;
		NullCheck((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_5);
		((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_5, (int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_5 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_9), (int32_t)L_7, (int32_t)L_8, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6 = L_9;
		// }
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_13), (int32_t)L_11, (int32_t)L_12, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
