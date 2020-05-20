// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpawnCubeCPP/SpawnCubeCPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnCubeCPPGameModeBase() {}
// Cross Module References
	SPAWNCUBECPP_API UClass* Z_Construct_UClass_ASpawnCubeCPPGameModeBase_NoRegister();
	SPAWNCUBECPP_API UClass* Z_Construct_UClass_ASpawnCubeCPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpawnCubeCPP();
// End Cross Module References
	void ASpawnCubeCPPGameModeBase::StaticRegisterNativesASpawnCubeCPPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpawnCubeCPPGameModeBase_NoRegister()
	{
		return ASpawnCubeCPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpawnCubeCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpawnCubeCPPGameModeBase.h" },
		{ "ModuleRelativePath", "SpawnCubeCPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnCubeCPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::ClassParams = {
		&ASpawnCubeCPPGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnCubeCPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnCubeCPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnCubeCPPGameModeBase, 3855794079);
	template<> SPAWNCUBECPP_API UClass* StaticClass<ASpawnCubeCPPGameModeBase>()
	{
		return ASpawnCubeCPPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnCubeCPPGameModeBase(Z_Construct_UClass_ASpawnCubeCPPGameModeBase, &ASpawnCubeCPPGameModeBase::StaticClass, TEXT("/Script/SpawnCubeCPP"), TEXT("ASpawnCubeCPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnCubeCPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
