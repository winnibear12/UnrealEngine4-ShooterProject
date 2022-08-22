// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERPROJ1_Explosive_generated_h
#error "Explosive.generated.h already included, missing '#pragma once' in Explosive.h"
#endif
#define SHOOTERPROJ1_Explosive_generated_h

#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_SPARSE_DATA
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_RPC_WRAPPERS
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
public: \
	DECLARE_CLASS(AExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterProj1"), NO_API) \
	DECLARE_SERIALIZER(AExplosive) \
	virtual UObject* _getUObject() const override { return const_cast<AExplosive*>(this); }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
public: \
	DECLARE_CLASS(AExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterProj1"), NO_API) \
	DECLARE_SERIALIZER(AExplosive) \
	virtual UObject* _getUObject() const override { return const_cast<AExplosive*>(this); }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosive(AExplosive&&); \
	NO_API AExplosive(const AExplosive&); \
public:


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosive(AExplosive&&); \
	NO_API AExplosive(const AExplosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosive)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExplodeParticles() { return STRUCT_OFFSET(AExplosive, ExplodeParticles); } \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AExplosive, ImpactSound); }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_14_PROLOG
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_RPC_WRAPPERS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_INCLASS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_INCLASS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERPROJ1_API UClass* StaticClass<class AExplosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealEngine4_ShooterProject_Source_ShooterProj1_Explosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
