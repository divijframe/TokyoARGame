#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String Doozy.DDebug::get_CurrentClass()
extern void DDebug_get_CurrentClass_m8B95B8EC0246ABBD7CDFD5A75DB3D1AF47E8DC4F (void);
// 0x00000002 System.Void Doozy.DDebug::Log(System.Object)
extern void DDebug_Log_mCA5141629753874ACA61C3EDB7BB1D5A524DFCDD (void);
// 0x00000003 System.Void Doozy.DDebug::Log(System.Object,UnityEngine.Object)
extern void DDebug_Log_mDA23610B29C978FCA38C11DB77E3CD013943A715 (void);
// 0x00000004 System.Void Doozy.DDebug::LogError(System.Object)
extern void DDebug_LogError_mB0B66F25B0E3222AB2F7A786F77D04F54CE1D927 (void);
// 0x00000005 System.Void Doozy.DDebug::LogError(System.Object,UnityEngine.Object)
extern void DDebug_LogError_m2D5C749FC64E5BC15E5D954EC2C3B65D7427FCD1 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	DDebug_get_CurrentClass_m8B95B8EC0246ABBD7CDFD5A75DB3D1AF47E8DC4F,
	DDebug_Log_mCA5141629753874ACA61C3EDB7BB1D5A524DFCDD,
	DDebug_Log_mDA23610B29C978FCA38C11DB77E3CD013943A715,
	DDebug_LogError_mB0B66F25B0E3222AB2F7A786F77D04F54CE1D927,
	DDebug_LogError_m2D5C749FC64E5BC15E5D954EC2C3B65D7427FCD1,
};
static const int32_t s_InvokerIndices[5] = 
{
	8552,
	8487,
	7916,
	8487,
	7916,
};
extern const CustomAttributesCacheGenerator g_DDebug_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_DDebug_CodeGenModule;
const Il2CppCodeGenModule g_DDebug_CodeGenModule = 
{
	"DDebug.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_DDebug_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
