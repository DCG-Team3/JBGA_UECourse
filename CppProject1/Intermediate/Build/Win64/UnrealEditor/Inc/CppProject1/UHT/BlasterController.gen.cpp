// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/BlasterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterController();
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class ABlasterController
void ABlasterController::StaticRegisterNativesABlasterController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterController);
UClass* Z_Construct_UClass_ABlasterController_NoRegister()
{
	return ABlasterController::StaticClass();
}
struct Z_Construct_UClass_ABlasterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BlasterController.h" },
		{ "ModuleRelativePath", "BlasterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[] = {
		{ "Category", "BlasterController" },
		{ "ModuleRelativePath", "BlasterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[] = {
		{ "Category", "BlasterController" },
		{ "ModuleRelativePath", "BlasterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "BlasterController" },
		{ "ModuleRelativePath", "BlasterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "BlasterController" },
		{ "ModuleRelativePath", "BlasterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterController, RestartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartDelay_MetaData), NewProp_RestartDelay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDClass_MetaData), NewProp_HUDClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterController, LoseScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseScreenClass_MetaData), NewProp_LoseScreenClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlasterController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterController, WinScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinScreenClass_MetaData), NewProp_WinScreenClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterController_Statics::NewProp_RestartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterController_Statics::NewProp_HUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterController_Statics::NewProp_LoseScreenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterController_Statics::NewProp_WinScreenClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterController_Statics::ClassParams = {
	&ABlasterController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlasterController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterController()
{
	if (!Z_Registration_Info_UClass_ABlasterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterController.OuterSingleton, Z_Construct_UClass_ABlasterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterController.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<ABlasterController>()
{
	return ABlasterController::StaticClass();
}
ABlasterController::ABlasterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterController);
ABlasterController::~ABlasterController() {}
// End Class ABlasterController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterController, ABlasterController::StaticClass, TEXT("ABlasterController"), &Z_Registration_Info_UClass_ABlasterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterController), 3259806030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterController_h_3531663539(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
