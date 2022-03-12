// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/Challenges/SProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectile() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectile_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASProjectile::execExplosion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explosion();
		P_NATIVE_END;
	}
	void ASProjectile::StaticRegisterNativesASProjectile()
	{
		UClass* Class = ASProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explosion", &ASProjectile::execExplosion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASProjectile_Explosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASProjectile_Explosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/SProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASProjectile_Explosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASProjectile, nullptr, "Explosion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASProjectile_Explosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASProjectile_Explosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASProjectile_Explosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASProjectile_Explosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASProjectile_NoRegister()
	{
		return ASProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASProjectile_Explosion, "Explosion" }, // 3336824589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Challenges/SProjectile.h" },
		{ "ModuleRelativePath", "Public/Challenges/SProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Sphere collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SProjectile.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Projectile movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SProjectile.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Challenges/SProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASProjectile_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectile, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Challenges/SProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectile_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectile, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::NewProp_ExplosionEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectile_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectile_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectile_Statics::NewProp_ExplosionEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASProjectile_Statics::ClassParams = {
		&ASProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASProjectile, 2011866992);
	template<> COOPGAME_API UClass* StaticClass<ASProjectile>()
	{
		return ASProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASProjectile(Z_Construct_UClass_ASProjectile, &ASProjectile::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
