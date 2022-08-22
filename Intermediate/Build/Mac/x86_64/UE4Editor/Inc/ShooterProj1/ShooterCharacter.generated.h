// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERPROJ1_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTERPROJ1_ShooterCharacter_generated_h

#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpLocation_Statics; \
	SHOOTERPROJ1_API static class UScriptStruct* StaticStruct();


template<> SHOOTERPROJ1_API UScriptStruct* StaticStruct<struct FInterpLocation>();

#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_SPARSE_DATA
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execFinishDeath); \
	DECLARE_FUNCTION(execEndStun); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execFinishReloading); \
	DECLARE_FUNCTION(execFinishDeath); \
	DECLARE_FUNCTION(execEndStun); \
	DECLARE_FUNCTION(execReleaseClip); \
	DECLARE_FUNCTION(execGrabClip); \
	DECLARE_FUNCTION(execAutoFireReset); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire);


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterProj1"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterProj1"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShooterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AShooterCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AShooterCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__HipTurnRate() { return STRUCT_OFFSET(AShooterCharacter, HipTurnRate); } \
	FORCEINLINE static uint32 __PPO__HipLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, HipLookUpRate); } \
	FORCEINLINE static uint32 __PPO__AimingTurnRate() { return STRUCT_OFFSET(AShooterCharacter, AimingTurnRate); } \
	FORCEINLINE static uint32 __PPO__AimingLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, AimingLookUpRate); } \
	FORCEINLINE static uint32 __PPO__MouseHipTurnRate() { return STRUCT_OFFSET(AShooterCharacter, MouseHipTurnRate); } \
	FORCEINLINE static uint32 __PPO__MouseHipLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, MouseHipLookUpRate); } \
	FORCEINLINE static uint32 __PPO__MouseAimingTurnRate() { return STRUCT_OFFSET(AShooterCharacter, MouseAimingTurnRate); } \
	FORCEINLINE static uint32 __PPO__MouseAimingLookUpRate() { return STRUCT_OFFSET(AShooterCharacter, MouseAimingLookUpRate); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(AShooterCharacter, FireSound); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(AShooterCharacter, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__HipFireMontage() { return STRUCT_OFFSET(AShooterCharacter, HipFireMontage); } \
	FORCEINLINE static uint32 __PPO__ImpactParticles() { return STRUCT_OFFSET(AShooterCharacter, ImpactParticles); } \
	FORCEINLINE static uint32 __PPO__BeamParticles() { return STRUCT_OFFSET(AShooterCharacter, BeamParticles); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(AShooterCharacter, bAiming); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(AShooterCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CrosshairSpreadMultiplier() { return STRUCT_OFFSET(AShooterCharacter, CrosshairSpreadMultiplier); } \
	FORCEINLINE static uint32 __PPO__CrosshairVelocityFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairVelocityFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairInAirFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairInAirFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairAimFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairAimFactor); } \
	FORCEINLINE static uint32 __PPO__CrosshairShootingFactor() { return STRUCT_OFFSET(AShooterCharacter, CrosshairShootingFactor); } \
	FORCEINLINE static uint32 __PPO__TraceHitItemLastFrame() { return STRUCT_OFFSET(AShooterCharacter, TraceHitItemLastFrame); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(AShooterCharacter, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__DefaultWeaponClass() { return STRUCT_OFFSET(AShooterCharacter, DefaultWeaponClass); } \
	FORCEINLINE static uint32 __PPO__TraceHitItem() { return STRUCT_OFFSET(AShooterCharacter, TraceHitItem); } \
	FORCEINLINE static uint32 __PPO__CamearaInterpDistance() { return STRUCT_OFFSET(AShooterCharacter, CamearaInterpDistance); } \
	FORCEINLINE static uint32 __PPO__CameraInterpElevation() { return STRUCT_OFFSET(AShooterCharacter, CameraInterpElevation); } \
	FORCEINLINE static uint32 __PPO__AmmoMap() { return STRUCT_OFFSET(AShooterCharacter, AmmoMap); } \
	FORCEINLINE static uint32 __PPO__Starting9mmAmmo() { return STRUCT_OFFSET(AShooterCharacter, Starting9mmAmmo); } \
	FORCEINLINE static uint32 __PPO__StartingARAmmo() { return STRUCT_OFFSET(AShooterCharacter, StartingARAmmo); } \
	FORCEINLINE static uint32 __PPO__CombatState() { return STRUCT_OFFSET(AShooterCharacter, CombatState); } \
	FORCEINLINE static uint32 __PPO__ReloadMontage() { return STRUCT_OFFSET(AShooterCharacter, ReloadMontage); } \
	FORCEINLINE static uint32 __PPO__ClipTransform() { return STRUCT_OFFSET(AShooterCharacter, ClipTransform); } \
	FORCEINLINE static uint32 __PPO__HandSceneComponent() { return STRUCT_OFFSET(AShooterCharacter, HandSceneComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponInterpComp() { return STRUCT_OFFSET(AShooterCharacter, WeaponInterpComp); } \
	FORCEINLINE static uint32 __PPO__InterpComp1() { return STRUCT_OFFSET(AShooterCharacter, InterpComp1); } \
	FORCEINLINE static uint32 __PPO__InterpComp2() { return STRUCT_OFFSET(AShooterCharacter, InterpComp2); } \
	FORCEINLINE static uint32 __PPO__InterpComp3() { return STRUCT_OFFSET(AShooterCharacter, InterpComp3); } \
	FORCEINLINE static uint32 __PPO__InterpComp4() { return STRUCT_OFFSET(AShooterCharacter, InterpComp4); } \
	FORCEINLINE static uint32 __PPO__InterpComp5() { return STRUCT_OFFSET(AShooterCharacter, InterpComp5); } \
	FORCEINLINE static uint32 __PPO__InterpComp6() { return STRUCT_OFFSET(AShooterCharacter, InterpComp6); } \
	FORCEINLINE static uint32 __PPO__InterpLocations() { return STRUCT_OFFSET(AShooterCharacter, InterpLocations); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AShooterCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AShooterCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__HitReactMontage() { return STRUCT_OFFSET(AShooterCharacter, HitReactMontage); } \
	FORCEINLINE static uint32 __PPO__StunChance() { return STRUCT_OFFSET(AShooterCharacter, StunChance); } \
	FORCEINLINE static uint32 __PPO__DeathMontage() { return STRUCT_OFFSET(AShooterCharacter, DeathMontage); }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_38_PROLOG
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_RPC_WRAPPERS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_INCLASS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_PRIVATE_PROPERTY_OFFSET \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_INCLASS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERPROJ1_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealEngine4_ShooterProject_Source_ShooterProj1_ShooterCharacter_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_FireTimerInProgress) \
	op(ECombatState::ECS_Reloading) \
	op(ECombatState::ECS_Stunned) \
	op(ECombatState::ECS_NAX) 

enum class ECombatState : uint8;
template<> SHOOTERPROJ1_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
