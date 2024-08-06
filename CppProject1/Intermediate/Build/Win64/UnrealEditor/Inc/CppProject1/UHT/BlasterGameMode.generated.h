// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPPROJECT1_BlasterGameMode_generated_h
#error "BlasterGameMode.generated.h already included, missing '#pragma once' in BlasterGameMode.h"
#endif
#define CPPPROJECT1_BlasterGameMode_generated_h

#define FID_CppProject1_Source_CppProject1_BlasterGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterGameMode(); \
	friend struct Z_Construct_UClass_ABlasterGameMode_Statics; \
public: \
	DECLARE_CLASS(ABlasterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppProject1"), NO_API) \
	DECLARE_SERIALIZER(ABlasterGameMode)


#define FID_CppProject1_Source_CppProject1_BlasterGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterGameMode(ABlasterGameMode&&); \
	ABlasterGameMode(const ABlasterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterGameMode) \
	NO_API virtual ~ABlasterGameMode();


#define FID_CppProject1_Source_CppProject1_BlasterGameMode_h_12_PROLOG
#define FID_CppProject1_Source_CppProject1_BlasterGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CppProject1_Source_CppProject1_BlasterGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_CppProject1_Source_CppProject1_BlasterGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT1_API UClass* StaticClass<class ABlasterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CppProject1_Source_CppProject1_BlasterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
