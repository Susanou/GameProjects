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
struct FVector;
struct FHitResult;
#ifdef ACTIVITY1_Activity1Projectile_generated_h
#error "Activity1Projectile.generated.h already included, missing '#pragma once' in Activity1Projectile.h"
#endif
#define ACTIVITY1_Activity1Projectile_generated_h

#define Activity1_Source_Activity1_Activity1Projectile_h_16_SPARSE_DATA
#define Activity1_Source_Activity1_Activity1Projectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Activity1_Source_Activity1_Activity1Projectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Activity1_Source_Activity1_Activity1Projectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActivity1Projectile(); \
	friend struct Z_Construct_UClass_AActivity1Projectile_Statics; \
public: \
	DECLARE_CLASS(AActivity1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Activity1"), NO_API) \
	DECLARE_SERIALIZER(AActivity1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Activity1_Source_Activity1_Activity1Projectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAActivity1Projectile(); \
	friend struct Z_Construct_UClass_AActivity1Projectile_Statics; \
public: \
	DECLARE_CLASS(AActivity1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Activity1"), NO_API) \
	DECLARE_SERIALIZER(AActivity1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Activity1_Source_Activity1_Activity1Projectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActivity1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActivity1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActivity1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActivity1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActivity1Projectile(AActivity1Projectile&&); \
	NO_API AActivity1Projectile(const AActivity1Projectile&); \
public:


#define Activity1_Source_Activity1_Activity1Projectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActivity1Projectile(AActivity1Projectile&&); \
	NO_API AActivity1Projectile(const AActivity1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActivity1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActivity1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActivity1Projectile)


#define Activity1_Source_Activity1_Activity1Projectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AActivity1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AActivity1Projectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AActivity1Projectile, ExplosionEffect); }


#define Activity1_Source_Activity1_Activity1Projectile_h_13_PROLOG
#define Activity1_Source_Activity1_Activity1Projectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Activity1_Source_Activity1_Activity1Projectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Activity1_Source_Activity1_Activity1Projectile_h_16_SPARSE_DATA \
	Activity1_Source_Activity1_Activity1Projectile_h_16_RPC_WRAPPERS \
	Activity1_Source_Activity1_Activity1Projectile_h_16_INCLASS \
	Activity1_Source_Activity1_Activity1Projectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Activity1_Source_Activity1_Activity1Projectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Activity1_Source_Activity1_Activity1Projectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Activity1_Source_Activity1_Activity1Projectile_h_16_SPARSE_DATA \
	Activity1_Source_Activity1_Activity1Projectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Activity1_Source_Activity1_Activity1Projectile_h_16_INCLASS_NO_PURE_DECLS \
	Activity1_Source_Activity1_Activity1Projectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIVITY1_API UClass* StaticClass<class AActivity1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Activity1_Source_Activity1_Activity1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
