// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTERPROJ1_Ammo_generated_h
#error "Ammo.generated.h already included, missing '#pragma once' in Ammo.h"
#endif
#define SHOOTERPROJ1_Ammo_generated_h

#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_SPARSE_DATA
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAmmoSphereOverlap);


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAmmoSphereOverlap);


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterProj1"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAmmo(); \
	friend struct Z_Construct_UClass_AAmmo_Statics; \
public: \
	DECLARE_CLASS(AAmmo, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterProj1"), NO_API) \
	DECLARE_SERIALIZER(AAmmo)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmo(AAmmo&&); \
	NO_API AAmmo(const AAmmo&); \
public:


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmo(AAmmo&&); \
	NO_API AAmmo(const AAmmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmo)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmmoMesh() { return STRUCT_OFFSET(AAmmo, AmmoMesh); } \
	FORCEINLINE static uint32 __PPO__AmmoType() { return STRUCT_OFFSET(AAmmo, AmmoType); } \
	FORCEINLINE static uint32 __PPO__AmmoIconTexture() { return STRUCT_OFFSET(AAmmo, AmmoIconTexture); } \
	FORCEINLINE static uint32 __PPO__AmmoCollisionSphere() { return STRUCT_OFFSET(AAmmo, AmmoCollisionSphere); }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_15_PROLOG
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_RPC_WRAPPERS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_INCLASS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_INCLASS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERPROJ1_API UClass* StaticClass<class AAmmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealEngine4_ShooterProject_Source_ShooterProj1_Ammo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
