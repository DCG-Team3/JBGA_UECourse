// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPPROJECT1_BlasterCharacter_generated_h
#error "BlasterCharacter.generated.h already included, missing '#pragma once' in BlasterCharacter.h"
#endif
#define CPPPROJECT1_BlasterCharacter_generated_h

#define FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHealthPercent);


#define FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppProject1"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter)


#define FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterCharacter(ABlasterCharacter&&); \
	ABlasterCharacter(const ABlasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterCharacter) \
	NO_API virtual ~ABlasterCharacter();


#define FID_CppProject1_Source_CppProject1_BlasterCharacter_h_12_PROLOG
#define FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_CppProject1_Source_CppProject1_BlasterCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT1_API UClass* StaticClass<class ABlasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CppProject1_Source_CppProject1_BlasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
