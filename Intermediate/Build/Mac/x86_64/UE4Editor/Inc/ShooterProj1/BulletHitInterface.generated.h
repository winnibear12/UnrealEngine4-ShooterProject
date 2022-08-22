// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SHOOTERPROJ1_BulletHitInterface_generated_h
#error "BulletHitInterface.generated.h already included, missing '#pragma once' in BulletHitInterface.h"
#endif
#define SHOOTERPROJ1_BulletHitInterface_generated_h

#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_SPARSE_DATA
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_RPC_WRAPPERS \
	virtual void BulletHit_Implementation(FHitResult HitResult) {}; \
 \
	DECLARE_FUNCTION(execBulletHit);


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BulletHit_Implementation(FHitResult HitResult) {}; \
 \
	DECLARE_FUNCTION(execBulletHit);


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_EVENT_PARMS \
	struct BulletHitInterface_eventBulletHit_Parms \
	{ \
		FHitResult HitResult; \
	};


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_CALLBACK_WRAPPERS
#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTERPROJ1_API UBulletHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBulletHitInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTERPROJ1_API, UBulletHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBulletHitInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTERPROJ1_API UBulletHitInterface(UBulletHitInterface&&); \
	SHOOTERPROJ1_API UBulletHitInterface(const UBulletHitInterface&); \
public:


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTERPROJ1_API UBulletHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTERPROJ1_API UBulletHitInterface(UBulletHitInterface&&); \
	SHOOTERPROJ1_API UBulletHitInterface(const UBulletHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTERPROJ1_API, UBulletHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBulletHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBulletHitInterface)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBulletHitInterface(); \
	friend struct Z_Construct_UClass_UBulletHitInterface_Statics; \
public: \
	DECLARE_CLASS(UBulletHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShooterProj1"), SHOOTERPROJ1_API) \
	DECLARE_SERIALIZER(UBulletHitInterface)


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBulletHitInterface() {} \
public: \
	typedef UBulletHitInterface UClassType; \
	typedef IBulletHitInterface ThisClass; \
	static void Execute_BulletHit(UObject* O, FHitResult HitResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBulletHitInterface() {} \
public: \
	typedef UBulletHitInterface UClassType; \
	typedef IBulletHitInterface ThisClass; \
	static void Execute_BulletHit(UObject* O, FHitResult HitResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_10_PROLOG \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_EVENT_PARMS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_RPC_WRAPPERS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_CALLBACK_WRAPPERS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_SPARSE_DATA \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_CALLBACK_WRAPPERS \
	UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERPROJ1_API UClass* StaticClass<class UBulletHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealEngine4_ShooterProject_Source_ShooterProj1_BulletHitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
