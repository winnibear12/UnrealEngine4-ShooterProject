// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterProj1/AmmoType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoType() {}
// Cross Module References
	SHOOTERPROJ1_API UEnum* Z_Construct_UEnum_ShooterProj1_EAmmoType();
	UPackage* Z_Construct_UPackage__Script_ShooterProj1();
// End Cross Module References
	static UEnum* EAmmoType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShooterProj1_EAmmoType, Z_Construct_UPackage__Script_ShooterProj1(), TEXT("EAmmoType"));
		}
		return Singleton;
	}
	template<> SHOOTERPROJ1_API UEnum* StaticEnum<EAmmoType>()
	{
		return EAmmoType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAmmoType(EAmmoType_StaticEnum, TEXT("/Script/ShooterProj1"), TEXT("EAmmoType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShooterProj1_EAmmoType_Hash() { return 3810303569U; }
	UEnum* Z_Construct_UEnum_ShooterProj1_EAmmoType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterProj1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAmmoType"), 0, Get_Z_Construct_UEnum_ShooterProj1_EAmmoType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAmmoType::EAT_9mm", (int64)EAmmoType::EAT_9mm },
				{ "EAmmoType::EAT_AR", (int64)EAmmoType::EAT_AR },
				{ "EAmmoType::EAT_MAX", (int64)EAmmoType::EAT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EAT_9mm.DisplayName", "9mm" },
				{ "EAT_9mm.Name", "EAmmoType::EAT_9mm" },
				{ "EAT_AR.DisplayName", "Assault Rifle" },
				{ "EAT_AR.Name", "EAmmoType::EAT_AR" },
				{ "EAT_MAX.DisplayName", "DefaultMAX" },
				{ "EAT_MAX.Name", "EAmmoType::EAT_MAX" },
				{ "ModuleRelativePath", "AmmoType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShooterProj1,
				nullptr,
				"EAmmoType",
				"EAmmoType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
