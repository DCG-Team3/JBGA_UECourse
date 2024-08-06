// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppProject1/BlasterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterAnimInstance() {}

// Begin Cross Module References
CPPPROJECT1_API UClass* Z_Construct_UClass_ABlasterCharacter_NoRegister();
CPPPROJECT1_API UClass* Z_Construct_UClass_UBlasterAnimInstance();
CPPPROJECT1_API UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_CppProject1();
// End Cross Module References

// Begin Class UBlasterAnimInstance
void UBlasterAnimInstance::StaticRegisterNativesUBlasterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlasterAnimInstance);
UClass* Z_Construct_UClass_UBlasterAnimInstance_NoRegister()
{
	return UBlasterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBlasterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BlasterAnimInstance.h" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlasterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BlasterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterCharacter;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static void NewProp_bIsAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
	static void NewProp_bWeaponEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponEquipped;
	static void NewProp_bIsAiming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlasterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter = { "BlasterCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, BlasterCharacter), Z_Construct_UClass_ABlasterCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlasterCharacter_MetaData), NewProp_BlasterCharacter_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlasterAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsAccelerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAccelerating_MetaData), NewProp_bIsAccelerating_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bWeaponEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped = { "bWeaponEquipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponEquipped_MetaData), NewProp_bWeaponEquipped_MetaData) };
void Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAiming_SetBit(void* Obj)
{
	((UBlasterAnimInstance*)Obj)->bIsAiming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlasterAnimInstance), &Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAiming_MetaData), NewProp_bIsAiming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_BlasterCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bWeaponEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlasterAnimInstance_Statics::NewProp_bIsAiming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlasterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CppProject1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlasterAnimInstance_Statics::ClassParams = {
	&UBlasterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlasterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlasterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton, Z_Construct_UClass_UBlasterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlasterAnimInstance.OuterSingleton;
}
template<> CPPPROJECT1_API UClass* StaticClass<UBlasterAnimInstance>()
{
	return UBlasterAnimInstance::StaticClass();
}
UBlasterAnimInstance::UBlasterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlasterAnimInstance);
UBlasterAnimInstance::~UBlasterAnimInstance() {}
// End Class UBlasterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlasterAnimInstance, UBlasterAnimInstance::StaticClass, TEXT("UBlasterAnimInstance"), &Z_Registration_Info_UClass_UBlasterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlasterAnimInstance), 3027174968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAnimInstance_h_1464207013(TEXT("/Script/CppProject1"),
	Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CppProject1_Source_CppProject1_BlasterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
