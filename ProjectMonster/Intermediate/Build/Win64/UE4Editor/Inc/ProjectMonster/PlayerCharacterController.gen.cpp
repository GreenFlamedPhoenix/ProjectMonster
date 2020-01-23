// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMonster/Character/PlayerCharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterController() {}
// Cross Module References
	PROJECTMONSTER_API UClass* Z_Construct_UClass_APlayerCharacterController_NoRegister();
	PROJECTMONSTER_API UClass* Z_Construct_UClass_APlayerCharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProjectMonster();
// End Cross Module References
	void APlayerCharacterController::StaticRegisterNativesAPlayerCharacterController()
	{
	}
	UClass* Z_Construct_UClass_APlayerCharacterController_NoRegister()
	{
		return APlayerCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMonster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Character/PlayerCharacterController.h" },
		{ "ModuleRelativePath", "Character/PlayerCharacterController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterController_Statics::ClassParams = {
		&APlayerCharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCharacterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCharacterController, 1904126038);
	template<> PROJECTMONSTER_API UClass* StaticClass<APlayerCharacterController>()
	{
		return APlayerCharacterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacterController(Z_Construct_UClass_APlayerCharacterController, &APlayerCharacterController::StaticClass, TEXT("/Script/ProjectMonster"), TEXT("APlayerCharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
