// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPPROJECT1_BlasterController_generated_h
#error "BlasterController.generated.h already included, missing '#pragma once' in BlasterController.h"
#endif
#define CPPPROJECT1_BlasterController_generated_h

#define FID_CppProject1_Source_CppProject1_BlasterController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterController(); \
	friend struct Z_Construct_UClass_ABlasterController_Statics; \
public: \
	DECLARE_CLASS(ABlasterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppProject1"), NO_API) \
	DECLARE_SERIALIZER(ABlasterController)


#define FID_CppProject1_Source_CppProject1_BlasterController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlasterController(ABlasterController&&); \
	ABlasterController(const ABlasterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterController) \
	NO_API virtual ~ABlasterController();


#define FID_CppProject1_Source_CppProject1_BlasterController_h_12_PROLOG
#define FID_CppProject1_Source_CppProject1_BlasterController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CppProject1_Source_CppProject1_BlasterController_h_15_INCLASS_NO_PURE_DECLS \
	FID_CppProject1_Source_CppProject1_BlasterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPPROJECT1_API UClass* StaticClass<class ABlasterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CppProject1_Source_CppProject1_BlasterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
