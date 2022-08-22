// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterProj1/ShooterProj1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterProj1GameModeBase() {}
// Cross Module References
	SHOOTERPROJ1_API UClass* Z_Construct_UClass_AShooterProj1GameModeBase_NoRegister();
	SHOOTERPROJ1_API UClass* Z_Construct_UClass_AShooterProj1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShooterProj1();
// End Cross Module References
	void AShooterProj1GameModeBase::StaticRegisterNativesAShooterProj1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AShooterProj1GameModeBase_NoRegister()
	{
		return AShooterProj1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooterProj1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterProj1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterProj1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterProj1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterProj1GameModeBase.h" },
		{ "ModuleRelativePath", "ShooterProj1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterProj1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterProj1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterProj1GameModeBase_Statics::ClassParams = {
		&AShooterProj1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterProj1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProj1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterProj1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterProj1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterProj1GameModeBase, 2042782921);
	template<> SHOOTERPROJ1_API UClass* StaticClass<AShooterProj1GameModeBase>()
	{
		return AShooterProj1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterProj1GameModeBase(Z_Construct_UClass_AShooterProj1GameModeBase, &AShooterProj1GameModeBase::StaticClass, TEXT("/Script/ShooterProj1"), TEXT("AShooterProj1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterProj1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
