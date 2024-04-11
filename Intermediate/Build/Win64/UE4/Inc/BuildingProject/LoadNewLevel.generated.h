// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGPROJECT_LoadNewLevel_generated_h
#error "LoadNewLevel.generated.h already included, missing '#pragma once' in LoadNewLevel.h"
#endif
#define BUILDINGPROJECT_LoadNewLevel_generated_h

#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_SPARSE_DATA
#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateNewLevel);


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateNewLevel);


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadNewLevel(); \
	friend struct Z_Construct_UClass_ULoadNewLevel_Statics; \
public: \
	DECLARE_CLASS(ULoadNewLevel, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingProject"), NO_API) \
	DECLARE_SERIALIZER(ULoadNewLevel)


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULoadNewLevel(); \
	friend struct Z_Construct_UClass_ULoadNewLevel_Statics; \
public: \
	DECLARE_CLASS(ULoadNewLevel, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingProject"), NO_API) \
	DECLARE_SERIALIZER(ULoadNewLevel)


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadNewLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadNewLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadNewLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadNewLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadNewLevel(ULoadNewLevel&&); \
	NO_API ULoadNewLevel(const ULoadNewLevel&); \
public:


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadNewLevel(ULoadNewLevel&&); \
	NO_API ULoadNewLevel(const ULoadNewLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadNewLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadNewLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadNewLevel)


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_PRIVATE_PROPERTY_OFFSET
#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_10_PROLOG
#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_SPARSE_DATA \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_RPC_WRAPPERS \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_INCLASS \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_SPARSE_DATA \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_INCLASS_NO_PURE_DECLS \
	BuildingProject_Source_BuildingProject_LoadNewLevel_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGPROJECT_API UClass* StaticClass<class ULoadNewLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingProject_Source_BuildingProject_LoadNewLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
