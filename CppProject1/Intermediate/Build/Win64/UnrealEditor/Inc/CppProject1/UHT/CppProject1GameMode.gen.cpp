// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/CppProject1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppProject1GameMode() {}

// Begin Cross Module References
CPPPROJECT1_API UClass* Z_Construct_UClass_ACppProject1GameMode();
CPPPROJECT1_API UClass* Z_Construct_UClass_ACppProject1GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class ACppProject1GameMode
void ACppProject1GameMode::StaticRegisterNativesACppProject1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACppProject1GameMode);
UClass* Z_Construct_UClass_ACppProject1GameMode_NoRegister()
{
	return ACppProject1GameMode::StaticClass();
}
struct Z_Construct_UClass_ACppProject1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CppProject1GameMode.h" },
		{ "ModuleRelativePath", "CppProject1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppProject1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACppProject1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppProject1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppProject1GameMode_Statics::ClassParams = {
	&ACppProject1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACppProject1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACppProject1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACppProject1GameMode()
{
	if (!Z_Registration_Info_UClass_ACppProject1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppProject1GameMode.OuterSingleton, Z_Construct_UClass_ACppProject1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACppProject1GameMode.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<ACppProject1GameMode>()
{
	return ACppProject1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACppProject1GameMode);
ACppProject1GameMode::~ACppProject1GameMode() {}
// End Class ACppProject1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_CppProject1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACppProject1GameMode, ACppProject1GameMode::StaticClass, TEXT("ACppProject1GameMode"), &Z_Registration_Info_UClass_ACppProject1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppProject1GameMode), 1733427108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_CppProject1GameMode_h_4176929881(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_CppProject1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_CppProject1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
