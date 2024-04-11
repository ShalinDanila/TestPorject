// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingProject/LoadNewLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadNewLevel() {}
// Cross Module References
	BUILDINGPROJECT_API UClass* Z_Construct_UClass_ULoadNewLevel_NoRegister();
	BUILDINGPROJECT_API UClass* Z_Construct_UClass_ULoadNewLevel();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingProject();
// End Cross Module References
	DEFINE_FUNCTION(ULoadNewLevel::execCreateNewLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewLevel();
		P_NATIVE_END;
	}
	void ULoadNewLevel::StaticRegisterNativesULoadNewLevel()
	{
		UClass* Class = ULoadNewLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewLevel", &ULoadNewLevel::execCreateNewLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoadNewLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadNewLevel, nullptr, "CreateNewLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadNewLevel_NoRegister()
	{
		return ULoadNewLevel::StaticClass();
	}
	struct Z_Construct_UClass_ULoadNewLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadNewLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadNewLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadNewLevel_CreateNewLevel, "CreateNewLevel" }, // 1334169588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadNewLevel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LoadNewLevel.h" },
		{ "ModuleRelativePath", "LoadNewLevel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadNewLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadNewLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadNewLevel_Statics::ClassParams = {
		&ULoadNewLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadNewLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadNewLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadNewLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadNewLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadNewLevel, 2293479803);
	template<> BUILDINGPROJECT_API UClass* StaticClass<ULoadNewLevel>()
	{
		return ULoadNewLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadNewLevel(Z_Construct_UClass_ULoadNewLevel, &ULoadNewLevel::StaticClass, TEXT("/Script/BuildingProject"), TEXT("ULoadNewLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadNewLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
