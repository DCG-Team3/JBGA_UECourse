// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/BlasterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameMode() {}

// Begin Cross Module References
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterGameMode();
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class ABlasterGameMode
void ABlasterGameMode::StaticRegisterNativesABlasterGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterGameMode);
UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister()
{
	return ABlasterGameMode::StaticClass();
}
struct Z_Construct_UClass_ABlasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BlasterGameMode.h" },
		{ "ModuleRelativePath", "BlasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams = {
	&ABlasterGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterGameMode()
{
	if (!Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton, Z_Construct_UClass_ABlasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterGameMode.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<ABlasterGameMode>()
{
	return ABlasterGameMode::StaticClass();
}
ABlasterGameMode::ABlasterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameMode);
ABlasterGameMode::~ABlasterGameMode() {}
// End Class ABlasterGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameMode, ABlasterGameMode::StaticClass, TEXT("ABlasterGameMode"), &Z_Registration_Info_UClass_ABlasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameMode), 3893197819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterGameMode_h_2118283082(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
