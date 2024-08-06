// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/BTService_PlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayerLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
CPPPROJECT1_API UClass* Z_Construct_UClass_UBTService_PlayerLocation();
CPPPROJECT1_API UClass* Z_Construct_UClass_UBTService_PlayerLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class UBTService_PlayerLocation
void UBTService_PlayerLocation::StaticRegisterNativesUBTService_PlayerLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_PlayerLocation);
UClass* Z_Construct_UClass_UBTService_PlayerLocation_NoRegister()
{
	return UBTService_PlayerLocation::StaticClass();
}
struct Z_Construct_UClass_UBTService_PlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_PlayerLocation.h" },
		{ "ModuleRelativePath", "BTService_PlayerLocation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_PlayerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayerLocation_Statics::ClassParams = {
	&UBTService_PlayerLocation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_PlayerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_PlayerLocation()
{
	if (!Z_Registration_Info_UClass_UBTService_PlayerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_PlayerLocation.OuterSingleton, Z_Construct_UClass_UBTService_PlayerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_PlayerLocation.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<UBTService_PlayerLocation>()
{
	return UBTService_PlayerLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayerLocation);
UBTService_PlayerLocation::~UBTService_PlayerLocation() {}
// End Class UBTService_PlayerLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTService_PlayerLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_PlayerLocation, UBTService_PlayerLocation::StaticClass, TEXT("UBTService_PlayerLocation"), &Z_Registration_Info_UClass_UBTService_PlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_PlayerLocation), 4258687058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTService_PlayerLocation_h_3178080741(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTService_PlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BTService_PlayerLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
