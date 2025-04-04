// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/FantasyPlayerControls.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FANTASYCOMBAT_FantasyPlayerControls_generated_h
#error "FantasyPlayerControls.generated.h already included, missing '#pragma once' in FantasyPlayerControls.h"
#endif
#define FANTASYCOMBAT_FantasyPlayerControls_generated_h

#define FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFantasyPlayerControls(); \
	friend struct Z_Construct_UClass_AFantasyPlayerControls_Statics; \
public: \
	DECLARE_CLASS(AFantasyPlayerControls, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FantasyCombat"), NO_API) \
	DECLARE_SERIALIZER(AFantasyPlayerControls)


#define FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFantasyPlayerControls(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFantasyPlayerControls(AFantasyPlayerControls&&); \
	AFantasyPlayerControls(const AFantasyPlayerControls&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFantasyPlayerControls); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFantasyPlayerControls); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFantasyPlayerControls) \
	NO_API virtual ~AFantasyPlayerControls();


#define FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_12_PROLOG
#define FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_15_INCLASS_NO_PURE_DECLS \
	FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FANTASYCOMBAT_API UClass* StaticClass<class AFantasyPlayerControls>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FantasyCombat_Source_FantasyCombat_Public_Controller_FantasyPlayerControls_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
