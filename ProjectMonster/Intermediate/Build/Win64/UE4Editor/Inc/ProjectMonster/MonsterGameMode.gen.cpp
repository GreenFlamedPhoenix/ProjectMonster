// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMonster/ModesAndSettings/GameModes/MonsterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterGameMode() {}
// Cross Module References
	PROJECTMONSTER_API UClass* Z_Construct_UClass_AMonsterGameMode_NoRegister();
	PROJECTMONSTER_API UClass* Z_Construct_UClass_AMonsterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectMonster();
// End Cross Module References
	void AMonsterGameMode::StaticRegisterNativesAMonsterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMonsterGameMode_NoRegister()
	{
		return AMonsterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMonster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ModesAndSettings/GameModes/MonsterGameMode.h" },
		{ "ModuleRelativePath", "ModesAndSettings/GameModes/MonsterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterGameMode_Statics::ClassParams = {
		&AMonsterGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterGameMode, 2398673659);
	template<> PROJECTMONSTER_API UClass* StaticClass<AMonsterGameMode>()
	{
		return AMonsterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterGameMode(Z_Construct_UClass_AMonsterGameMode, &AMonsterGameMode::StaticClass, TEXT("/Script/ProjectMonster"), TEXT("AMonsterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
