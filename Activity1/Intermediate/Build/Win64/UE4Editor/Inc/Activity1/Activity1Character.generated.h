// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIVITY1_Activity1Character_generated_h
#error "Activity1Character.generated.h already included, missing '#pragma once' in Activity1Character.h"
#endif
#define ACTIVITY1_Activity1Character_generated_h

#define Activity1_Source_Activity1_Activity1Character_h_20_SPARSE_DATA
#define Activity1_Source_Activity1_Activity1Character_h_20_RPC_WRAPPERS
#define Activity1_Source_Activity1_Activity1Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Activity1_Source_Activity1_Activity1Character_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActivity1Character(); \
	friend struct Z_Construct_UClass_AActivity1Character_Statics; \
public: \
	DECLARE_CLASS(AActivity1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Activity1"), NO_API) \
	DECLARE_SERIALIZER(AActivity1Character)


#define Activity1_Source_Activity1_Activity1Character_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAActivity1Character(); \
	friend struct Z_Construct_UClass_AActivity1Character_Statics; \
public: \
	DECLARE_CLASS(AActivity1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Activity1"), NO_API) \
	DECLARE_SERIALIZER(AActivity1Character)


#define Activity1_Source_Activity1_Activity1Character_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActivity1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActivity1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActivity1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActivity1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActivity1Character(AActivity1Character&&); \
	NO_API AActivity1Character(const AActivity1Character&); \
public:


#define Activity1_Source_Activity1_Activity1Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActivity1Character(AActivity1Character&&); \
	NO_API AActivity1Character(const AActivity1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActivity1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActivity1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActivity1Character)


#define Activity1_Source_Activity1_Activity1Character_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AActivity1Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AActivity1Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AActivity1Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AActivity1Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AActivity1Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AActivity1Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AActivity1Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AActivity1Character, L_MotionController); }


#define Activity1_Source_Activity1_Activity1Character_h_17_PROLOG
#define Activity1_Source_Activity1_Activity1Character_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Activity1_Source_Activity1_Activity1Character_h_20_PRIVATE_PROPERTY_OFFSET \
	Activity1_Source_Activity1_Activity1Character_h_20_SPARSE_DATA \
	Activity1_Source_Activity1_Activity1Character_h_20_RPC_WRAPPERS \
	Activity1_Source_Activity1_Activity1Character_h_20_INCLASS \
	Activity1_Source_Activity1_Activity1Character_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Activity1_Source_Activity1_Activity1Character_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Activity1_Source_Activity1_Activity1Character_h_20_PRIVATE_PROPERTY_OFFSET \
	Activity1_Source_Activity1_Activity1Character_h_20_SPARSE_DATA \
	Activity1_Source_Activity1_Activity1Character_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Activity1_Source_Activity1_Activity1Character_h_20_INCLASS_NO_PURE_DECLS \
	Activity1_Source_Activity1_Activity1Character_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIVITY1_API UClass* StaticClass<class AActivity1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Activity1_Source_Activity1_Activity1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
