// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/printInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprintInterface() {}
// Cross Module References
	GAMEDRIVER_API UClass* Z_Construct_UClass_UprintInterface_NoRegister();
	GAMEDRIVER_API UClass* Z_Construct_UClass_UprintInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References
	void UprintInterface::StaticRegisterNativesUprintInterface()
	{
	}
	UClass* Z_Construct_UClass_UprintInterface_NoRegister()
	{
		return UprintInterface::StaticClass();
	}
	struct Z_Construct_UClass_UprintInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UprintInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UprintInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/printInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UprintInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IprintInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UprintInterface_Statics::ClassParams = {
		&UprintInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UprintInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UprintInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UprintInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UprintInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UprintInterface, 781672212);
	template<> GAMEDRIVER_API UClass* StaticClass<UprintInterface>()
	{
		return UprintInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UprintInterface(Z_Construct_UClass_UprintInterface, &UprintInterface::StaticClass, TEXT("/Script/GameDriver"), TEXT("UprintInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UprintInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
