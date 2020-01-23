// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMONSTER_PlayerCharacterController_generated_h
#error "PlayerCharacterController.generated.h already included, missing '#pragma once' in PlayerCharacterController.h"
#endif
#define PROJECTMONSTER_PlayerCharacterController_generated_h

#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_SPARSE_DATA
#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_RPC_WRAPPERS
#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacterController(); \
	friend struct Z_Construct_UClass_APlayerCharacterController_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMonster"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacterController)


#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacterController(); \
	friend struct Z_Construct_UClass_APlayerCharacterController_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMonster"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacterController)


#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacterController(APlayerCharacterController&&); \
	NO_API APlayerCharacterController(const APlayerCharacterController&); \
public:


#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacterController(APlayerCharacterController&&); \
	NO_API APlayerCharacterController(const APlayerCharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacterController)


#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_12_PROLOG
#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_SPARSE_DATA \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_RPC_WRAPPERS \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_INCLASS \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_SPARSE_DATA \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_INCLASS_NO_PURE_DECLS \
	ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMONSTER_API UClass* StaticClass<class APlayerCharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMonster_Source_ProjectMonster_Character_PlayerCharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
