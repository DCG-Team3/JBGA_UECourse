// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/BlasterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterAIController();
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class ABlasterAIController
void ABlasterAIController::StaticRegisterNativesABlasterAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterAIController);
UClass* Z_Construct_UClass_ABlasterAIController_NoRegister()
{
	return ABlasterAIController::StaticClass();
}
struct Z_Construct_UClass_ABlasterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BlasterAIController.h" },
		{ "ModuleRelativePath", "BlasterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[] = {
		{ "Category", "BlasterAIController" },
		{ "ModuleRelativePath", "BlasterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterAIController_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlasterAIController, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIBehavior_MetaData), NewProp_AIBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterAIController_Statics::NewProp_AIBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlasterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterAIController_Statics::ClassParams = {
	&ABlasterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABlasterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterAIController()
{
	if (!Z_Registration_Info_UClass_ABlasterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterAIController.OuterSingleton, Z_Construct_UClass_ABlasterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterAIController.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<ABlasterAIController>()
{
	return ABlasterAIController::StaticClass();
}
ABlasterAIController::ABlasterAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterAIController);
ABlasterAIController::~ABlasterAIController() {}
// End Class ABlasterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterAIController, ABlasterAIController::StaticClass, TEXT("ABlasterAIController"), &Z_Registration_Info_UClass_ABlasterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterAIController), 479528240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAIController_h_132158977(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
