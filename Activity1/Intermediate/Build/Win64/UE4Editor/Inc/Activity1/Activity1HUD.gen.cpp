// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activity1/Activity1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivity1HUD() {}
// Cross Module References
	ACTIVITY1_API UClass* Z_Construct_UClass_AActivity1HUD_NoRegister();
	ACTIVITY1_API UClass* Z_Construct_UClass_AActivity1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Activity1();
// End Cross Module References
	void AActivity1HUD::StaticRegisterNativesAActivity1HUD()
	{
	}
	UClass* Z_Construct_UClass_AActivity1HUD_NoRegister()
	{
		return AActivity1HUD::StaticClass();
	}
	struct Z_Construct_UClass_AActivity1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActivity1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Activity1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActivity1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Activity1HUD.h" },
		{ "ModuleRelativePath", "Activity1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActivity1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActivity1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActivity1HUD_Statics::ClassParams = {
		&AActivity1HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AActivity1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActivity1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActivity1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActivity1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActivity1HUD, 1896875461);
	template<> ACTIVITY1_API UClass* StaticClass<AActivity1HUD>()
	{
		return AActivity1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActivity1HUD(Z_Construct_UClass_AActivity1HUD, &AActivity1HUD::StaticClass, TEXT("/Script/Activity1"), TEXT("AActivity1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActivity1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
