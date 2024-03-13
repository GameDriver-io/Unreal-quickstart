// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FVector2D;
class UObject;
enum class GDIO_HPATH_TYPES : uint8;
enum class CoordinateConversionTypes : uint8;
struct FVector;
#ifdef GAMEDRIVER_GDIOApi4_generated_h
#error "GDIOApi4.generated.h already included, missing '#pragma once' in GDIOApi4.h"
#endif
#define GAMEDRIVER_GDIOApi4_generated_h

#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_SPARSE_DATA
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFloatInputEvent); \
	DECLARE_FUNCTION(execMouseDrag); \
	DECLARE_FUNCTION(execMouseMovetoObjectFromHPath); \
	DECLARE_FUNCTION(execMouseMovetoObject); \
	DECLARE_FUNCTION(execMouseMovetoPoint); \
	DECLARE_FUNCTION(execgetHierarchyPath); \
	DECLARE_FUNCTION(execClickObject); \
	DECLARE_FUNCTION(execClickObjectFromHPath); \
	DECLARE_FUNCTION(execClick); \
	DECLARE_FUNCTION(execKeyPress); \
	DECLARE_FUNCTION(execSetBoolFieldValue); \
	DECLARE_FUNCTION(execSetFloatFieldValue); \
	DECLARE_FUNCTION(execSetStringFieldValue); \
	DECLARE_FUNCTION(execSetIntFieldValue); \
	DECLARE_FUNCTION(execGetFloatFieldValue); \
	DECLARE_FUNCTION(execGetBoolFieldValue); \
	DECLARE_FUNCTION(execGetStringFieldValue); \
	DECLARE_FUNCTION(execGetIntFieldValue); \
	DECLARE_FUNCTION(execGetObjectPosition); \
	DECLARE_FUNCTION(execGetObjectPositionWithHPath); \
	DECLARE_FUNCTION(execGetGameObject); \
	DECLARE_FUNCTION(execGetObjectList);


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFloatInputEvent); \
	DECLARE_FUNCTION(execMouseDrag); \
	DECLARE_FUNCTION(execMouseMovetoObjectFromHPath); \
	DECLARE_FUNCTION(execMouseMovetoObject); \
	DECLARE_FUNCTION(execMouseMovetoPoint); \
	DECLARE_FUNCTION(execgetHierarchyPath); \
	DECLARE_FUNCTION(execClickObject); \
	DECLARE_FUNCTION(execClickObjectFromHPath); \
	DECLARE_FUNCTION(execClick); \
	DECLARE_FUNCTION(execKeyPress); \
	DECLARE_FUNCTION(execSetBoolFieldValue); \
	DECLARE_FUNCTION(execSetFloatFieldValue); \
	DECLARE_FUNCTION(execSetStringFieldValue); \
	DECLARE_FUNCTION(execSetIntFieldValue); \
	DECLARE_FUNCTION(execGetFloatFieldValue); \
	DECLARE_FUNCTION(execGetBoolFieldValue); \
	DECLARE_FUNCTION(execGetStringFieldValue); \
	DECLARE_FUNCTION(execGetIntFieldValue); \
	DECLARE_FUNCTION(execGetObjectPosition); \
	DECLARE_FUNCTION(execGetObjectPositionWithHPath); \
	DECLARE_FUNCTION(execGetGameObject); \
	DECLARE_FUNCTION(execGetObjectList);


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBP_GDIOAPI(); \
	friend struct Z_Construct_UClass_UBP_GDIOAPI_Statics; \
public: \
	DECLARE_CLASS(UBP_GDIOAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UBP_GDIOAPI)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBP_GDIOAPI(); \
	friend struct Z_Construct_UClass_UBP_GDIOAPI_Statics; \
public: \
	DECLARE_CLASS(UBP_GDIOAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UBP_GDIOAPI)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_GDIOAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_GDIOAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_GDIOAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_GDIOAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_GDIOAPI(UBP_GDIOAPI&&); \
	NO_API UBP_GDIOAPI(const UBP_GDIOAPI&); \
public:


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_GDIOAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_GDIOAPI(UBP_GDIOAPI&&); \
	NO_API UBP_GDIOAPI(const UBP_GDIOAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_GDIOAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_GDIOAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_GDIOAPI)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_23_PROLOG
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_SPARSE_DATA \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_RPC_WRAPPERS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_INCLASS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_SPARSE_DATA \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDRIVER_API UClass* StaticClass<class UBP_GDIOAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi4_h


#define FOREACH_ENUM_COORDINATECONVERSIONTYPES(op) \
	op(CoordinateConversionTypes::None) \
	op(CoordinateConversionTypes::Local) \
	op(CoordinateConversionTypes::WorldToScreenPoint) \
	op(CoordinateConversionTypes::ScreenToWorldPoint) \
	op(CoordinateConversionTypes::ScreenToViewportPoint) 

enum class CoordinateConversionTypes : uint8;
template<> GAMEDRIVER_API UEnum* StaticEnum<CoordinateConversionTypes>();

#define FOREACH_ENUM_GDIO_HPATH_TYPES(op) \
	op(GDIO_HPATH_TYPES::Absolute) \
	op(GDIO_HPATH_TYPES::Relative) 

enum class GDIO_HPATH_TYPES : uint8;
template<> GAMEDRIVER_API UEnum* StaticEnum<GDIO_HPATH_TYPES>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
