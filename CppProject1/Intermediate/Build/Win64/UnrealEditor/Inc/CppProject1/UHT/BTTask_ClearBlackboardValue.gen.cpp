// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/BTTask_ClearBlackboardValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ClearBlackboardValue() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
CPPPROJECT1_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue();
CPPPROJECT1_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class UBTTask_ClearBlackboardValue
void UBTTask_ClearBlackboardValue::StaticRegisterNativesUBTTask_ClearBlackboardValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ClearBlackboardValue);
UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue_NoRegister()
{
	return UBTTask_ClearBlackboardValue::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_ClearBlackboardValue.h" },
		{ "ModuleRelativePath", "BTTask_ClearBlackboardValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearBlackboardValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::ClassParams = {
	&UBTTask_ClearBlackboardValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue()
{
	if (!Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.OuterSingleton, Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<UBTTask_ClearBlackboardValue>()
{
	return UBTTask_ClearBlackboardValue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearBlackboardValue);
UBTTask_ClearBlackboardValue::~UBTTask_ClearBlackboardValue() {}
// End Class UBTTask_ClearBlackboardValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTTask_ClearBlackboardValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ClearBlackboardValue, UBTTask_ClearBlackboardValue::StaticClass, TEXT("UBTTask_ClearBlackboardValue"), &Z_Registration_Info_UClass_UBTTask_ClearBlackboardValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ClearBlackboardValue), 2967236406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTTask_ClearBlackboardValue_h_3259653175(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTTask_ClearBlackboardValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTTask_ClearBlackboardValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
