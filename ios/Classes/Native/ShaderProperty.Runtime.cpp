#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct KeyCollection_tEF491422A8B86C4B11E52DBABA657040ACF53F84;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct ValueCollection_t3E4222E1D9996FE43A052A122FF2866179490CF0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniGLTF.ShaderPropExporter.ShaderProps>[]
struct EntryU5BU5D_t5100A69A68A6F38F4C473A25F2CCF3C8B0D6D3A0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UniGLTF.ShaderPropExporter.ShaderProperty[]
struct ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UniGLTF.ShaderPropExporter.SupportedShader[]
struct SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UniGLTF.ShaderPropExporter.PreExportShaderAttribute
struct PreExportShaderAttribute_t199808ECE2371E3E0881CAA5CC5FF7925D58593A;
// UniGLTF.ShaderPropExporter.PreExportShadersAttribute
struct PreExportShadersAttribute_t17F8B287AC71D571760CA7517218266F16E580C6;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UniGLTF.ShaderPropExporter.ShaderProps
struct ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral034DB7F22AE9CBA3CDE4D7145D0B332C6E3587C0;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9;
IL2CPP_EXTERN_C String_t* _stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373;
IL2CPP_EXTERN_C String_t* _stringLiteral186805D5F75DD57BBE3EBEC2531DA33F1EB8A9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526;
IL2CPP_EXTERN_C String_t* _stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE;
IL2CPP_EXTERN_C String_t* _stringLiteral304134432E5962CF6674E58878A873D81198CAEB;
IL2CPP_EXTERN_C String_t* _stringLiteral30E5B38553E51419924E8EC9DF17949D13973236;
IL2CPP_EXTERN_C String_t* _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE;
IL2CPP_EXTERN_C String_t* _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF;
IL2CPP_EXTERN_C String_t* _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45;
IL2CPP_EXTERN_C String_t* _stringLiteral524916C9AA35BA4551E0A4C370367926BF3F833B;
IL2CPP_EXTERN_C String_t* _stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8;
IL2CPP_EXTERN_C String_t* _stringLiteral59B259A263D1796F7617C20534034F94A19001FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32;
IL2CPP_EXTERN_C String_t* _stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400;
IL2CPP_EXTERN_C String_t* _stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229;
IL2CPP_EXTERN_C String_t* _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C;
IL2CPP_EXTERN_C String_t* _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574;
IL2CPP_EXTERN_C String_t* _stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6;
IL2CPP_EXTERN_C String_t* _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201;
IL2CPP_EXTERN_C String_t* _stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F;
IL2CPP_EXTERN_C String_t* _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F;
IL2CPP_EXTERN_C String_t* _stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105;
IL2CPP_EXTERN_C String_t* _stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B;
IL2CPP_EXTERN_C String_t* _stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628;
IL2CPP_EXTERN_C String_t* _stringLiteralCB06293E3070D888955542383617A31852FFF8DF;
IL2CPP_EXTERN_C String_t* _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralD19F7F98535163D0D028CDFC22AE9D046E010719;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76;
IL2CPP_EXTERN_C String_t* _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7;
IL2CPP_EXTERN_C String_t* _stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934;
IL2CPP_EXTERN_C String_t* _stringLiteralE91B8361199214452AAF163E796839A54971EEA7;
IL2CPP_EXTERN_C String_t* _stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mBDCB136075E2F5FB9574B6E261E0215D93989CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9C3DCFCCFB7FCC9D18E564083CC7DF692B0B2B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m42EEB1622814804F90B72954869148904C133FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m4917A041ECCECE57B0A637204A70A3EE6886C446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m232EB31BBE7D28005D9A5BEE72810996A90DB860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PreExportShaderAttribute_t199808ECE2371E3E0881CAA5CC5FF7925D58593A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_0_0_0_var;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t06193E1E9A4E84A1CC9BE31EDAB5FEE5A9597FD5 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5100A69A68A6F38F4C473A25F2CCF3C8B0D6D3A0* ___entries_1;
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
	KeyCollection_tEF491422A8B86C4B11E52DBABA657040ACF53F84 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3E4222E1D9996FE43A052A122FF2866179490CF0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___entries_1)); }
	inline EntryU5BU5D_t5100A69A68A6F38F4C473A25F2CCF3C8B0D6D3A0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5100A69A68A6F38F4C473A25F2CCF3C8B0D6D3A0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5100A69A68A6F38F4C473A25F2CCF3C8B0D6D3A0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___keys_7)); }
	inline KeyCollection_tEF491422A8B86C4B11E52DBABA657040ACF53F84 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEF491422A8B86C4B11E52DBABA657040ACF53F84 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEF491422A8B86C4B11E52DBABA657040ACF53F84 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ___values_8)); }
	inline ValueCollection_t3E4222E1D9996FE43A052A122FF2866179490CF0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3E4222E1D9996FE43A052A122FF2866179490CF0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3E4222E1D9996FE43A052A122FF2866179490CF0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA56DD66743273C2140EA88815B334986F457B695  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UniGLTF.ShaderPropExporter.PreExportShaders
struct PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF  : public RuntimeObject
{
public:

public:
};

struct PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_StaticFields
{
public:
	// UniGLTF.ShaderPropExporter.SupportedShader[] UniGLTF.ShaderPropExporter.PreExportShaders::SupportedShaders
	SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* ___SupportedShaders_1;
	// UniGLTF.ShaderPropExporter.SupportedShader[] UniGLTF.ShaderPropExporter.PreExportShaders::VRMSupportedShaders
	SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* ___VRMSupportedShaders_3;

public:
	inline static int32_t get_offset_of_SupportedShaders_1() { return static_cast<int32_t>(offsetof(PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_StaticFields, ___SupportedShaders_1)); }
	inline SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* get_SupportedShaders_1() const { return ___SupportedShaders_1; }
	inline SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA** get_address_of_SupportedShaders_1() { return &___SupportedShaders_1; }
	inline void set_SupportedShaders_1(SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* value)
	{
		___SupportedShaders_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SupportedShaders_1), (void*)value);
	}

	inline static int32_t get_offset_of_VRMSupportedShaders_3() { return static_cast<int32_t>(offsetof(PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_StaticFields, ___VRMSupportedShaders_3)); }
	inline SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* get_VRMSupportedShaders_3() const { return ___VRMSupportedShaders_3; }
	inline SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA** get_address_of_VRMSupportedShaders_3() { return &___VRMSupportedShaders_3; }
	inline void set_VRMSupportedShaders_3(SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* value)
	{
		___VRMSupportedShaders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VRMSupportedShaders_3), (void*)value);
	}
};


// UniGLTF.ShaderPropExporter.PreShaderPropExporter
struct PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101  : public RuntimeObject
{
public:

public:
};

struct PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields
{
public:
	// System.String[] UniGLTF.ShaderPropExporter.PreShaderPropExporter::VRMExtensionShaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___VRMExtensionShaders_0;
	// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::m_shaderPropMap
	Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * ___m_shaderPropMap_1;

public:
	inline static int32_t get_offset_of_VRMExtensionShaders_0() { return static_cast<int32_t>(offsetof(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields, ___VRMExtensionShaders_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_VRMExtensionShaders_0() const { return ___VRMExtensionShaders_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_VRMExtensionShaders_0() { return &___VRMExtensionShaders_0; }
	inline void set_VRMExtensionShaders_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___VRMExtensionShaders_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VRMExtensionShaders_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_shaderPropMap_1() { return static_cast<int32_t>(offsetof(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields, ___m_shaderPropMap_1)); }
	inline Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * get_m_shaderPropMap_1() const { return ___m_shaderPropMap_1; }
	inline Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 ** get_address_of_m_shaderPropMap_1() { return &___m_shaderPropMap_1; }
	inline void set_m_shaderPropMap_1(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * value)
	{
		___m_shaderPropMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_shaderPropMap_1), (void*)value);
	}
};


// UniGLTF.ShaderPropExporter.ShaderProps
struct ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47  : public RuntimeObject
{
public:
	// UniGLTF.ShaderPropExporter.ShaderProperty[] UniGLTF.ShaderPropExporter.ShaderProps::Properties
	ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* ___Properties_0;

public:
	inline static int32_t get_offset_of_Properties_0() { return static_cast<int32_t>(offsetof(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47, ___Properties_0)); }
	inline ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* get_Properties_0() const { return ___Properties_0; }
	inline ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF** get_address_of_Properties_0() { return &___Properties_0; }
	inline void set_Properties_0(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* value)
	{
		___Properties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Properties_0), (void*)value);
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF, ___value_1)); }
	inline ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * get_value_1() const { return ___value_1; }
	inline ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// UniGLTF.ShaderPropExporter.PreExportShaderAttribute
struct PreExportShaderAttribute_t199808ECE2371E3E0881CAA5CC5FF7925D58593A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UniGLTF.ShaderPropExporter.PreExportShadersAttribute
struct PreExportShadersAttribute_t17F8B287AC71D571760CA7517218266F16E580C6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A 
{
public:
	// System.String UniGLTF.ShaderPropExporter.SupportedShader::TargetFolder
	String_t* ___TargetFolder_0;
	// System.String UniGLTF.ShaderPropExporter.SupportedShader::ShaderName
	String_t* ___ShaderName_1;

public:
	inline static int32_t get_offset_of_TargetFolder_0() { return static_cast<int32_t>(offsetof(SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A, ___TargetFolder_0)); }
	inline String_t* get_TargetFolder_0() const { return ___TargetFolder_0; }
	inline String_t** get_address_of_TargetFolder_0() { return &___TargetFolder_0; }
	inline void set_TargetFolder_0(String_t* value)
	{
		___TargetFolder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetFolder_0), (void*)value);
	}

	inline static int32_t get_offset_of_ShaderName_1() { return static_cast<int32_t>(offsetof(SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A, ___ShaderName_1)); }
	inline String_t* get_ShaderName_1() const { return ___ShaderName_1; }
	inline String_t** get_address_of_ShaderName_1() { return &___ShaderName_1; }
	inline void set_ShaderName_1(String_t* value)
	{
		___ShaderName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShaderName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_pinvoke
{
	char* ___TargetFolder_0;
	char* ___ShaderName_1;
};
// Native definition for COM marshalling of UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_com
{
	Il2CppChar* ___TargetFolder_0;
	Il2CppChar* ___ShaderName_1;
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


// UniGLTF.ShaderPropExporter.ShaderPropertyType
struct ShaderPropertyType_t76F588488E9FD08D873EB97AA7DE24A8A55E3E91 
{
public:
	// System.Int32 UniGLTF.ShaderPropExporter.ShaderPropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaderPropertyType_t76F588488E9FD08D873EB97AA7DE24A8A55E3E91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 
{
public:
	// System.String UniGLTF.ShaderPropExporter.ShaderProperty::Key
	String_t* ___Key_0;
	// UniGLTF.ShaderPropExporter.ShaderPropertyType UniGLTF.ShaderPropExporter.ShaderProperty::ShaderPropertyType
	int32_t ___ShaderPropertyType_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_0), (void*)value);
	}

	inline static int32_t get_offset_of_ShaderPropertyType_1() { return static_cast<int32_t>(offsetof(ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78, ___ShaderPropertyType_1)); }
	inline int32_t get_ShaderPropertyType_1() const { return ___ShaderPropertyType_1; }
	inline int32_t* get_address_of_ShaderPropertyType_1() { return &___ShaderPropertyType_1; }
	inline void set_ShaderPropertyType_1(int32_t value)
	{
		___ShaderPropertyType_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_pinvoke
{
	char* ___Key_0;
	int32_t ___ShaderPropertyType_1;
};
// Native definition for COM marshalling of UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_com
{
	Il2CppChar* ___Key_0;
	int32_t ___ShaderPropertyType_1;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UniGLTF.ShaderPropExporter.SupportedShader[]
struct SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  m_Items[1];

public:
	inline SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TargetFolder_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ShaderName_1), (void*)NULL);
		#endif
	}
	inline SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TargetFolder_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ShaderName_1), (void*)NULL);
		#endif
	}
};
// UniGLTF.ShaderPropExporter.ShaderProperty[]
struct ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  m_Items[1];

public:
	inline ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
	}
	inline ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
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


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UniGLTF.ShaderPropExporter.SupportedShader::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A * __this, String_t* ___targetFolder0, String_t* ___shaderName1, const RuntimeMethod* method);
// System.Void UniGLTF.ShaderPropExporter.ShaderProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316 (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * __this, const RuntimeMethod* method);
// System.Void UniGLTF.ShaderPropExporter.ShaderProperty::.ctor(System.String,UniGLTF.ShaderPropExporter.ShaderPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928 (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 * __this, String_t* ___key0, int32_t ___propType1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851 (KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF * __this, String_t* ___key0, ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *, String_t*, ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m22C9588E4B94D5193E4E9921A79BFF7DDCAB9EF2 (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::.ctor()
inline void Dictionary_2__ctor_m42EEB1622814804F90B72954869148904C133FE9 (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m4917A041ECCECE57B0A637204A70A3EE6886C446_inline (KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::get_Value()
inline ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * KeyValuePair_2_get_Value_m232EB31BBE7D28005D9A5BEE72810996A90DB860_inline (KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF * __this, const RuntimeMethod* method)
{
	return ((  ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * (*) (KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::Add(!0,!1)
inline void Dictionary_2_Add_mBDCB136075E2F5FB9574B6E261E0215D93989CB8 (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * __this, String_t* ___key0, ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 *, String_t*, ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9C3DCFCCFB7FCC9D18E564083CC7DF692B0B2B6A (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * __this, String_t* ___key0, ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 *, String_t*, ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m22C9588E4B94D5193E4E9921A79BFF7DDCAB9EF2 (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShaderAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShaderAttribute__ctor_mCE80C99EF4150CA58E78431F588EA27C03334249 (PreExportShaderAttribute_t199808ECE2371E3E0881CAA5CC5FF7925D58593A * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShaders::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShaders__cctor_m0439015BFF549EB8A9A6653B92EACEB871944D64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SupportedShader[] SupportedShaders = new SupportedShader[]
		// {
		//     new SupportedShader(GLTF_FOLDER, "Standard"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Color"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Texture"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Transparent"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Transparent Cutout"),
		//     new SupportedShader(GLTF_FOLDER, "UniGLTF/UniUnlit"),
		// };
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_0 = (SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA*)(SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA*)SZArrayNew(SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA_il2cpp_TypeInfo_var, (uint32_t)6);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_1 = L_0;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_2), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_2);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_3 = L_1;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_4), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_4);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_5 = L_3;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_6;
		memset((&L_6), 0, sizeof(L_6));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_6), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_6);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_7 = L_5;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_8;
		memset((&L_8), 0, sizeof(L_8));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_8), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_8);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_9 = L_7;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_10;
		memset((&L_10), 0, sizeof(L_10));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_10), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_10);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_11 = L_9;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_12;
		memset((&L_12), 0, sizeof(L_12));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_12), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_12);
		((PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_StaticFields*)il2cpp_codegen_static_fields_for(PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_il2cpp_TypeInfo_var))->set_SupportedShaders_1(L_11);
		// public static SupportedShader[] VRMSupportedShaders = new SupportedShader[]
		// {
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/MToon"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTexture"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitCutout"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTransparent"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTransparentZWrite"),
		// };
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_13 = (SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA*)(SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA*)SZArrayNew(SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA_il2cpp_TypeInfo_var, (uint32_t)5);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_14 = L_13;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_15;
		memset((&L_15), 0, sizeof(L_15));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_15), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_15);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_16 = L_14;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_17;
		memset((&L_17), 0, sizeof(L_17));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_17), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_17);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_18 = L_16;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_19;
		memset((&L_19), 0, sizeof(L_19));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_19), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_19);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_20 = L_18;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_21;
		memset((&L_21), 0, sizeof(L_21));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_21), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_21);
		SupportedShaderU5BU5D_t04FB6C4A14C7A8348FA90B61507FEC4F5D5624AA* L_22 = L_20;
		SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A  L_23;
		memset((&L_23), 0, sizeof(L_23));
		SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B((&L_23), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A )L_23);
		((PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_StaticFields*)il2cpp_codegen_static_fields_for(PreExportShaders_tEA2F7E062206BC6E40E6C4551B4D4AAA0C404CBF_il2cpp_TypeInfo_var))->set_VRMSupportedShaders_3(L_22);
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShadersAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShadersAttribute__ctor_m4DA7F6087FBB5266E78FCCDA921857C5580131B9 (PreExportShadersAttribute_t17F8B287AC71D571760CA7517218266F16E580C6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Standard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_Standard_mCB0E575A790457C3257DF3C1710F8028AAB4E88F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB06293E3070D888955542383617A31852FFF8DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Standard",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_Glossiness", ShaderPropertyType.Range)
		// ,new ShaderProperty("_GlossMapScale", ShaderPropertyType.Range)
		// ,new ShaderProperty("_SmoothnessTextureChannel", ShaderPropertyType.Float)
		// ,new ShaderProperty("_Metallic", ShaderPropertyType.Range)
		// ,new ShaderProperty("_MetallicGlossMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_SpecularHighlights", ShaderPropertyType.Float)
		// ,new ShaderProperty("_GlossyReflections", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Parallax", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ParallaxMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OcclusionStrength", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OcclusionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_EmissionColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_EmissionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailMask", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailAlbedoMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailNormalMapScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DetailNormalMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_UVSec", ShaderPropertyType.Float)
		// ,new ShaderProperty("_Mode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_5 = L_3;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_6), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_6);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_7 = L_5;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_8), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_8);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_9 = L_7;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_10), _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, 2, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_10);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_11 = L_9;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_12), _stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105, 2, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_12);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_13 = L_11;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_14), _stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45, 3, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_14);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_15 = L_13;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_16), _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, 2, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_16);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_17 = L_15;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_18), _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934, 0, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_18);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_19 = L_17;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_20), _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3, 3, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_20);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_21 = L_19;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_22;
		memset((&L_22), 0, sizeof(L_22));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_22), _stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492, 3, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_22);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_23 = L_21;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_24;
		memset((&L_24), 0, sizeof(L_24));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_24), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, 3, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_24);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_25 = L_23;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_26;
		memset((&L_26), 0, sizeof(L_26));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_26), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_26);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_27 = L_25;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_28;
		memset((&L_28), 0, sizeof(L_28));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_28), _stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8, 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_28);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_29 = L_27;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_30;
		memset((&L_30), 0, sizeof(L_30));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_30), _stringLiteralCB06293E3070D888955542383617A31852FFF8DF, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_30);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_31 = L_29;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_32;
		memset((&L_32), 0, sizeof(L_32));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_32), _stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B, 2, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_32);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_33 = L_31;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_34;
		memset((&L_34), 0, sizeof(L_34));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_34), _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_34);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_35 = L_33;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_36;
		memset((&L_36), 0, sizeof(L_36));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_36), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, 1, /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_36);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_37 = L_35;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_38;
		memset((&L_38), 0, sizeof(L_38));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_38), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, 0, /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_38);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_39 = L_37;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_40;
		memset((&L_40), 0, sizeof(L_40));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_40), _stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B, 0, /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_40);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_41 = L_39;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_42;
		memset((&L_42), 0, sizeof(L_42));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_42), _stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8, 0, /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_42);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_43 = L_41;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_44;
		memset((&L_44), 0, sizeof(L_44));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_44), _stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1, 3, /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_44);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_45 = L_43;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_46;
		memset((&L_46), 0, sizeof(L_46));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_46), _stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400, 0, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_46);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_47 = L_45;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_48;
		memset((&L_48), 0, sizeof(L_48));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_48), _stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2, 3, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_48);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_49 = L_47;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_50;
		memset((&L_50), 0, sizeof(L_50));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_50), _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, 3, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_50);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_51 = L_49;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_52;
		memset((&L_52), 0, sizeof(L_52));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_52), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_52);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_53 = L_51;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_54;
		memset((&L_54), 0, sizeof(L_54));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_54), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_54);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_55 = L_53;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_56;
		memset((&L_56), 0, sizeof(L_56));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_56), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_56);
		NullCheck(L_1);
		L_1->set_Properties_0(L_55);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_57 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_58;
		memset((&L_58), 0, sizeof(L_58));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_58), _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, L_57, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_58;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_UniGLTF_UniUnlit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_UniGLTF_UniUnlit_m005132A93B41ECB64B2BB9D8C938270D282A713E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "UniGLTF/UniUnlit",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_BlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_CullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_VColBlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_5 = L_3;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_6), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_6);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_7 = L_5;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_8), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_8);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_9 = L_7;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_10), _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, 3, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_10);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_11 = L_9;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_12), _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 3, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_12);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_13 = L_11;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_14), _stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628, 3, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_14);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_15 = L_13;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_16), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_16);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_17 = L_15;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_18), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_18);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_19 = L_17;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_20), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_20);
		NullCheck(L_1);
		L_1->set_Properties_0(L_19);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_21 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_22), _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, L_21, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_22;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_Unlit_Color_mD31BA11F173FC2A85EA28BDEC4EE4F9390EF90A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Color",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Color", ShaderPropertyType.Color)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		NullCheck(L_1);
		L_1->set_Properties_0(L_3);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_5 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_6), _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, L_5, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_Unlit_Texture_m5DDEEF45B1498F241FA2ED97D6887B5A8EF2E1F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Texture",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		NullCheck(L_1);
		L_1->set_Properties_0(L_3);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_5 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_6), _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, L_5, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Transparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_Unlit_Transparent_m801EDAED10B8C3A4C0B1F3EBD12A172CF02CB2D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Transparent",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		NullCheck(L_1);
		L_1->set_Properties_0(L_3);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_5 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_6), _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, L_5, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Transparent_Cutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_Unlit_Transparent_Cutout_m2DFFA83E3254BB6EF346EA66FF1EC207739621D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Transparent Cutout",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)2);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_5 = L_3;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_6), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_6);
		NullCheck(L_1);
		L_1->set_Properties_0(L_5);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_7 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_8), _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, L_7, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean UniGLTF.ShaderPropExporter.PreShaderPropExporter::UseUnlit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PreShaderPropExporter_UseUnlit_m65E95119BA5AD2C1D6BABB6DEEA0860CEEEA25E4 (String_t* ___shaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___shaderName0;
		if (!L_0)
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_1 = ___shaderName0;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m22C9588E4B94D5193E4E9921A79BFF7DDCAB9EF2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)2051160011)))))
		{
			goto IL_004a;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)1157043442)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)99082155))))
		{
			goto IL_0088;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)1157043442))))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00f1;
	}

IL_0032:
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)1540672242))))
		{
			goto IL_00a6;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2051160011))))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_00f1;
	}

IL_004a:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-1859127833)))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-2103228062))))
		{
			goto IL_00c4;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-1859127833))))
		{
			goto IL_0079;
		}
	}
	{
		goto IL_00f1;
	}

IL_0067:
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1581835377))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-484646049))))
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00f1;
	}

IL_0079:
	{
		String_t* L_14 = ___shaderName0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_0088:
	{
		String_t* L_16 = ___shaderName0;
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_0097:
	{
		String_t* L_18 = ___shaderName0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_00a6:
	{
		String_t* L_20 = ___shaderName0;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_00b5:
	{
		String_t* L_22 = ___shaderName0;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_00c4:
	{
		String_t* L_24 = ___shaderName0;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_00d3:
	{
		String_t* L_26 = ___shaderName0;
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00f1;
	}

IL_00e2:
	{
		String_t* L_28 = ___shaderName0;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00f1;
		}
	}

IL_00ef:
	{
		// return true;
		return (bool)1;
	}

IL_00f1:
	{
		// return false;
		return (bool)0;
	}
}
// UniGLTF.ShaderPropExporter.ShaderProps UniGLTF.ShaderPropExporter.PreShaderPropExporter::GetPropsForSupportedShader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * PreShaderPropExporter_GetPropsForSupportedShader_m09352D84ADCD01C99ABF77E9DB411AB9D3C70EF3 (String_t* ___shaderName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mBDCB136075E2F5FB9574B6E261E0215D93989CB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9C3DCFCCFB7FCC9D18E564083CC7DF692B0B2B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m42EEB1622814804F90B72954869148904C133FE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m4917A041ECCECE57B0A637204A70A3EE6886C446_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m232EB31BBE7D28005D9A5BEE72810996A90DB860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreExportShaderAttribute_t199808ECE2371E3E0881CAA5CC5FF7925D58593A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_shaderPropMap == null)
		IL2CPP_RUNTIME_CLASS_INIT(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var);
		Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * L_0 = ((PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var))->get_m_shaderPropMap_1();
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		// m_shaderPropMap = new Dictionary<string, ShaderProps>();
		Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * L_1 = (Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 *)il2cpp_codegen_object_new(Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m42EEB1622814804F90B72954869148904C133FE9(L_1, /*hidden argument*/Dictionary_2__ctor_m42EEB1622814804F90B72954869148904C133FE9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var);
		((PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var))->set_m_shaderPropMap_1(L_1);
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_4;
		L_4 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_3, ((int32_t)56));
		V_1 = L_4;
		V_2 = 0;
		goto IL_006e;
	}

IL_0027:
	{
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PropertyInfo_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (prop.GetCustomAttributes(typeof(PreExportShaderAttribute), true).Any())
		PropertyInfo_t * L_9 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (PreExportShaderAttribute_t199808ECE2371E3E0881CAA5CC5FF7925D58593A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12;
		L_12 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_9, L_11, (bool)1);
		bool L_13;
		L_13 = Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4((RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// var kv = (KeyValuePair<string, ShaderProps>)prop.GetValue(null, null);
		PropertyInfo_t * L_14 = V_3;
		NullCheck(L_14);
		RuntimeObject * L_15;
		L_15 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_14, NULL, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		V_4 = ((*(KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *)((KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *)UnBox(L_15, KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF_il2cpp_TypeInfo_var))));
		// m_shaderPropMap.Add(kv.Key, kv.Value);
		IL2CPP_RUNTIME_CLASS_INIT(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var);
		Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * L_16 = ((PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var))->get_m_shaderPropMap_1();
		String_t* L_17;
		L_17 = KeyValuePair_2_get_Key_m4917A041ECCECE57B0A637204A70A3EE6886C446_inline((KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m4917A041ECCECE57B0A637204A70A3EE6886C446_RuntimeMethod_var);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_18;
		L_18 = KeyValuePair_2_get_Value_m232EB31BBE7D28005D9A5BEE72810996A90DB860_inline((KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m232EB31BBE7D28005D9A5BEE72810996A90DB860_RuntimeMethod_var);
		NullCheck(L_16);
		Dictionary_2_Add_mBDCB136075E2F5FB9574B6E261E0215D93989CB8(L_16, L_17, L_18, /*hidden argument*/Dictionary_2_Add_mBDCB136075E2F5FB9574B6E261E0215D93989CB8_RuntimeMethod_var);
	}

IL_006a:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006e:
	{
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		int32_t L_20 = V_2;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0027;
		}
	}

IL_0074:
	{
		// if (m_shaderPropMap.TryGetValue(shaderName, out props))
		IL2CPP_RUNTIME_CLASS_INIT(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var);
		Dictionary_2_t31A83FEE80169E0EFB6409E99ABDC88128018C69 * L_22 = ((PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var))->get_m_shaderPropMap_1();
		String_t* L_23 = ___shaderName0;
		NullCheck(L_22);
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m9C3DCFCCFB7FCC9D18E564083CC7DF692B0B2B6A(L_22, L_23, (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9C3DCFCCFB7FCC9D18E564083CC7DF692B0B2B6A_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0085;
		}
	}
	{
		// return props;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_25 = V_0;
		return L_25;
	}

IL_0085:
	{
		// return null;
		return (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)NULL;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_MToon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_VRM_MToon_m8EF7923D1A880136B6F9C94CDB1E167A7211BD6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034DB7F22AE9CBA3CDE4D7145D0B332C6E3587C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186805D5F75DD57BBE3EBEC2531DA33F1EB8A9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304134432E5962CF6674E58878A873D81198CAEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E5B38553E51419924E8EC9DF17949D13973236);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524916C9AA35BA4551E0A4C370367926BF3F833B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD19F7F98535163D0D028CDFC22AE9D046E010719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91B8361199214452AAF163E796839A54971EEA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/MToon",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_ShadeColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadeTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_BumpScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ReceiveShadowRate", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ReceiveShadowTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadingGradeRate", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ShadingGradeTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadeShift", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ShadeToony", ShaderPropertyType.Range)
		// ,new ShaderProperty("_LightColorAttenuation", ShaderPropertyType.Range)
		// ,new ShaderProperty("_IndirectLightIntensity", ShaderPropertyType.Range)
		// ,new ShaderProperty("_RimColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_RimTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_RimLightingMix", ShaderPropertyType.Range)
		// ,new ShaderProperty("_RimFresnelPower", ShaderPropertyType.Range)
		// ,new ShaderProperty("_RimLift", ShaderPropertyType.Range)
		// ,new ShaderProperty("_SphereAdd", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_EmissionColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_EmissionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OutlineWidthTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OutlineWidth", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OutlineScaledMaxDistance", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OutlineColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_OutlineLightingMix", ShaderPropertyType.Range)
		// ,new ShaderProperty("_UvAnimMaskTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_UvAnimScrollX", ShaderPropertyType.Float)
		// ,new ShaderProperty("_UvAnimScrollY", ShaderPropertyType.Float)
		// ,new ShaderProperty("_UvAnimRotation", ShaderPropertyType.Float)
		// ,new ShaderProperty("_MToonVersion", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DebugMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineWidthMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineColorMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_CullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineCullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_5 = L_3;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_6), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_6);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_7 = L_5;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_8), _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5, 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_8);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_9 = L_7;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_10), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_10);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_11 = L_9;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_12), _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9, 0, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_12);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_13 = L_11;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_14), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, 3, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_14);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_15 = L_13;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_16), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, 0, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_16);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_17 = L_15;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_18), _stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC, 2, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_18);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_19 = L_17;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_20), _stringLiteral30E5B38553E51419924E8EC9DF17949D13973236, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_20);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_21 = L_19;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_22;
		memset((&L_22), 0, sizeof(L_22));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_22), _stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229, 2, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_22);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_23 = L_21;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_24;
		memset((&L_24), 0, sizeof(L_24));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_24), _stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526, 0, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_24);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_25 = L_23;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_26;
		memset((&L_26), 0, sizeof(L_26));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_26), _stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90, 2, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_26);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_27 = L_25;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_28;
		memset((&L_28), 0, sizeof(L_28));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_28), _stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE, 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_28);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_29 = L_27;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_30;
		memset((&L_30), 0, sizeof(L_30));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_30), _stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E, 2, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_30);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_31 = L_29;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_32;
		memset((&L_32), 0, sizeof(L_32));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_32), _stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF, 2, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_32);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_33 = L_31;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_34;
		memset((&L_34), 0, sizeof(L_34));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_34), _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, 1, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_34);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_35 = L_33;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_36;
		memset((&L_36), 0, sizeof(L_36));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_36), _stringLiteralD19F7F98535163D0D028CDFC22AE9D046E010719, 0, /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_36);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_37 = L_35;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_38;
		memset((&L_38), 0, sizeof(L_38));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_38), _stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F, 2, /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_38);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_39 = L_37;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_40;
		memset((&L_40), 0, sizeof(L_40));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_40), _stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373, 2, /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_40);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_41 = L_39;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_42;
		memset((&L_42), 0, sizeof(L_42));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_42), _stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7, 2, /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_42);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_43 = L_41;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_44;
		memset((&L_44), 0, sizeof(L_44));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_44), _stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7, 0, /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_44);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_45 = L_43;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_46;
		memset((&L_46), 0, sizeof(L_46));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_46), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, 1, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_46);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_47 = L_45;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_48;
		memset((&L_48), 0, sizeof(L_48));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_48), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, 0, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_48);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_49 = L_47;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_50;
		memset((&L_50), 0, sizeof(L_50));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_50), _stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9, 0, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_50);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_51 = L_49;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_52;
		memset((&L_52), 0, sizeof(L_52));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_52), _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, 2, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_52);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_53 = L_51;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_54;
		memset((&L_54), 0, sizeof(L_54));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_54), _stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF, 2, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_54);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_55 = L_53;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_56;
		memset((&L_56), 0, sizeof(L_56));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_56), _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, 1, /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_56);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_57 = L_55;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_58;
		memset((&L_58), 0, sizeof(L_58));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_58), _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D, 2, /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_58);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_59 = L_57;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_60;
		memset((&L_60), 0, sizeof(L_60));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_60), _stringLiteralE91B8361199214452AAF163E796839A54971EEA7, 0, /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_60);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_61 = L_59;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_62;
		memset((&L_62), 0, sizeof(L_62));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_62), _stringLiteral304134432E5962CF6674E58878A873D81198CAEB, 3, /*hidden argument*/NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_62);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_63 = L_61;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_64;
		memset((&L_64), 0, sizeof(L_64));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_64), _stringLiteral186805D5F75DD57BBE3EBEC2531DA33F1EB8A9BE, 3, /*hidden argument*/NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_64);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_65 = L_63;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_66;
		memset((&L_66), 0, sizeof(L_66));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_66), _stringLiteral034DB7F22AE9CBA3CDE4D7145D0B332C6E3587C0, 3, /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_66);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_67 = L_65;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_68;
		memset((&L_68), 0, sizeof(L_68));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_68), _stringLiteral524916C9AA35BA4551E0A4C370367926BF3F833B, 3, /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_68);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_69 = L_67;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_70;
		memset((&L_70), 0, sizeof(L_70));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_70), _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9, 3, /*hidden argument*/NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_70);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_71 = L_69;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_72;
		memset((&L_72), 0, sizeof(L_72));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_72), _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, 3, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_72);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_73 = L_71;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_74;
		memset((&L_74), 0, sizeof(L_74));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_74), _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE, 3, /*hidden argument*/NULL);
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_74);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_75 = L_73;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_76;
		memset((&L_76), 0, sizeof(L_76));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_76), _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2, 3, /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_76);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_77 = L_75;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_78;
		memset((&L_78), 0, sizeof(L_78));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_78), _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 3, /*hidden argument*/NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_78);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_79 = L_77;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_80;
		memset((&L_80), 0, sizeof(L_80));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_80), _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5, 3, /*hidden argument*/NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_80);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_81 = L_79;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_82;
		memset((&L_82), 0, sizeof(L_82));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_82), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_82);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_83 = L_81;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_84;
		memset((&L_84), 0, sizeof(L_84));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_84), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_84);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_85 = L_83;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_86;
		memset((&L_86), 0, sizeof(L_86));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_86), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_86);
		NullCheck(L_1);
		L_1->set_Properties_0(L_85);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_87 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_88;
		memset((&L_88), 0, sizeof(L_88));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_88), _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669, L_87, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_88;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitCutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_VRM_UnlitCutout_m63106979BC68B85E28DB7606C9EFD1C7060299CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitCutout",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)2);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_5 = L_3;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_6), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_6);
		NullCheck(L_1);
		L_1->set_Properties_0(L_5);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_7 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_8), _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, L_7, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_VRM_UnlitTexture_mC9BE534D3801465613B131727CD14AE5095ED339 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTexture",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		NullCheck(L_1);
		L_1->set_Properties_0(L_3);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_5 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_6), _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, L_5, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTransparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_VRM_UnlitTransparent_mE16E3D93F0240E0E4335186AD5B4A7CDE0D9FB8C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTransparent",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		NullCheck(L_1);
		L_1->set_Properties_0(L_3);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_5 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_6), _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, L_5, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTransparentZWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  PreShaderPropExporter_get_VRM_UnlitTransparentZWrite_mE05DF9F6FB4A9FA96865FEAE3FEF4E6135C03B5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTransparentZWrite",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_0 = (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 *)il2cpp_codegen_object_new(ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47_il2cpp_TypeInfo_var);
		ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_1 = V_0;
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_2 = (ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF*)SZArrayNew(ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t1240CE0B4E8EED0B33DE5378958D26BE218A3CBF* L_3 = L_2;
		ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 )L_4);
		NullCheck(L_1);
		L_1->set_Properties_0(L_3);
		ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * L_5 = V_0;
		KeyValuePair_2_t87F7E13EFE4A5D784D26D8B2223D9C9FF9F86BBF  L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851((&L_6), _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76, L_5, /*hidden argument*/KeyValuePair_2__ctor_mF332E6E2A9EAD082B00F4C2586CDB29817E4C851_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UniGLTF.ShaderPropExporter.PreShaderPropExporter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreShaderPropExporter__cctor_mACC321F23ED4315126DF81AA8C60613B3D3CCEA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string[] VRMExtensionShaders = new string[]
		// {
		//     "VRM/UnlitTransparentZWrite",
		//     "VRM/MToon"
		// };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		((PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t4A0A0C07144E6583608F86C30A4960B0D324E101_il2cpp_TypeInfo_var))->set_VRMExtensionShaders_0(L_2);
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
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshal_pinvoke(const ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78& unmarshaled, ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_pinvoke& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Key_0());
	marshaled.___ShaderPropertyType_1 = unmarshaled.get_ShaderPropertyType_1();
}
IL2CPP_EXTERN_C void ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshal_pinvoke_back(const ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_pinvoke& marshaled, ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78& unmarshaled)
{
	unmarshaled.set_Key_0(il2cpp_codegen_marshal_string_result(marshaled.___Key_0));
	int32_t unmarshaled_ShaderPropertyType_temp_1 = 0;
	unmarshaled_ShaderPropertyType_temp_1 = marshaled.___ShaderPropertyType_1;
	unmarshaled.set_ShaderPropertyType_1(unmarshaled_ShaderPropertyType_temp_1);
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshal_pinvoke_cleanup(ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
}
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshal_com(const ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78& unmarshaled, ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_com& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Key_0());
	marshaled.___ShaderPropertyType_1 = unmarshaled.get_ShaderPropertyType_1();
}
IL2CPP_EXTERN_C void ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshal_com_back(const ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_com& marshaled, ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78& unmarshaled)
{
	unmarshaled.set_Key_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0));
	int32_t unmarshaled_ShaderPropertyType_temp_1 = 0;
	unmarshaled_ShaderPropertyType_temp_1 = marshaled.___ShaderPropertyType_1;
	unmarshaled.set_ShaderPropertyType_1(unmarshaled_ShaderPropertyType_temp_1);
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshal_com_cleanup(ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
}
// System.Void UniGLTF.ShaderPropExporter.ShaderProperty::.ctor(System.String,UniGLTF.ShaderPropExporter.ShaderPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928 (ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 * __this, String_t* ___key0, int32_t ___propType1, const RuntimeMethod* method)
{
	{
		// Key = key;
		String_t* L_0 = ___key0;
		__this->set_Key_0(L_0);
		// ShaderPropertyType = propType;
		int32_t L_1 = ___propType1;
		__this->set_ShaderPropertyType_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, int32_t ___propType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 * _thisAdjusted = reinterpret_cast<ShaderProperty_tF29D970C88302EB86798122ECEF90925801CDD78 *>(__this + _offset);
	ShaderProperty__ctor_m28249A64D9F90033B329973247ADD684E8F7F928(_thisAdjusted, ___key0, ___propType1, method);
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
// System.Void UniGLTF.ShaderPropExporter.ShaderProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProps__ctor_mF8CD513C0ED7A7494B3156E00A2B1A8233726316 (ShaderProps_tA7075E31BD91566D2BFD34ED4C8908E44A20DE47 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshal_pinvoke(const SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A& unmarshaled, SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_pinvoke& marshaled)
{
	marshaled.___TargetFolder_0 = il2cpp_codegen_marshal_string(unmarshaled.get_TargetFolder_0());
	marshaled.___ShaderName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_ShaderName_1());
}
IL2CPP_EXTERN_C void SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshal_pinvoke_back(const SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_pinvoke& marshaled, SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A& unmarshaled)
{
	unmarshaled.set_TargetFolder_0(il2cpp_codegen_marshal_string_result(marshaled.___TargetFolder_0));
	unmarshaled.set_ShaderName_1(il2cpp_codegen_marshal_string_result(marshaled.___ShaderName_1));
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshal_pinvoke_cleanup(SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___TargetFolder_0);
	marshaled.___TargetFolder_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ShaderName_1);
	marshaled.___ShaderName_1 = NULL;
}
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshal_com(const SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A& unmarshaled, SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_com& marshaled)
{
	marshaled.___TargetFolder_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TargetFolder_0());
	marshaled.___ShaderName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ShaderName_1());
}
IL2CPP_EXTERN_C void SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshal_com_back(const SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_com& marshaled, SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A& unmarshaled)
{
	unmarshaled.set_TargetFolder_0(il2cpp_codegen_marshal_bstring_result(marshaled.___TargetFolder_0));
	unmarshaled.set_ShaderName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___ShaderName_1));
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshal_com_cleanup(SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___TargetFolder_0);
	marshaled.___TargetFolder_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ShaderName_1);
	marshaled.___ShaderName_1 = NULL;
}
// System.Void UniGLTF.ShaderPropExporter.SupportedShader::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B (SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A * __this, String_t* ___targetFolder0, String_t* ___shaderName1, const RuntimeMethod* method)
{
	{
		// TargetFolder = targetFolder;
		String_t* L_0 = ___targetFolder0;
		__this->set_TargetFolder_0(L_0);
		// ShaderName = shaderName;
		String_t* L_1 = ___shaderName1;
		__this->set_ShaderName_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B_AdjustorThunk (RuntimeObject * __this, String_t* ___targetFolder0, String_t* ___shaderName1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A * _thisAdjusted = reinterpret_cast<SupportedShader_tAA6AE822EB17EB174CF0EED914D10B2AC35C991A *>(__this + _offset);
	SupportedShader__ctor_m5CDE56D16C0A102717BFE9C2DEB5E04D74453A4B(_thisAdjusted, ___targetFolder0, ___shaderName1, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
