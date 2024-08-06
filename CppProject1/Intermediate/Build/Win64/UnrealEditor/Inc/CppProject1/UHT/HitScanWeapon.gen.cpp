// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/HitScanWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitScanWeapon() {}

// Begin Cross Module References
CPPPROJECT1_API UClass* Z_Construct_UClass_AHitScanWeapon();
CPPPROJECT1_API UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister();
CPPPROJECT1_API UClass* Z_Construct_UClass_AWeapon();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class AHitScanWeapon
void AHitScanWeapon::StaticRegisterNativesAHitScanWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitScanWeapon);
UClass* Z_Construct_UClass_AHitScanWeapon_NoRegister()
{
	return AHitScanWeapon::StaticClass();
}
struct Z_Construct_UClass_AHitScanWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HitScanWeapon.h" },
		{ "ModuleRelativePath", "HitScanWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "HitScanWeapon" },
		{ "ModuleRelativePath", "HitScanWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitScanWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHitScanWeapon, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitScanWeapon_Statics::NewProp_MaxRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams = {
	&AHitScanWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AHitScanWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHitScanWeapon()
{
	if (!Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton, Z_Construct_UClass_AHitScanWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHitScanWeapon.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<AHitScanWeapon>()
{
	return AHitScanWeapon::StaticClass();
}
AHitScanWeapon::AHitScanWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHitScanWeapon);
AHitScanWeapon::~AHitScanWeapon() {}
// End Class AHitScanWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_HitScanWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHitScanWeapon, AHitScanWeapon::StaticClass, TEXT("AHitScanWeapon"), &Z_Registration_Info_UClass_AHitScanWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitScanWeapon), 4151172501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_HitScanWeapon_h_3991542183(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_HitScanWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_HitScanWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
