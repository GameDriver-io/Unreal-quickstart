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
#ifdef GAMEDRIVER_UHitListener_generated_h
#error "UHitListener.generated.h already included, missing '#pragma once' in UHitListener.h"
#endif
#define GAMEDRIVER_UHitListener_generated_h

#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_SPARSE_DATA
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execonActorHit); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnActorOverlap);


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execonActorHit); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnActorOverlap);


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitListener(); \
	friend struct Z_Construct_UClass_UHitListener_Statics; \
public: \
	DECLARE_CLASS(UHitListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UHitListener)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUHitListener(); \
	friend struct Z_Construct_UClass_UHitListener_Statics; \
public: \
	DECLARE_CLASS(UHitListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UHitListener)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitListener(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitListener(UHitListener&&); \
	NO_API UHitListener(const UHitListener&); \
public:


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitListener(UHitListener&&); \
	NO_API UHitListener(const UHitListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitListener)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_8_PROLOG
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_SPARSE_DATA \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_RPC_WRAPPERS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_INCLASS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_SPARSE_DATA \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDRIVER_API UClass* StaticClass<class UHitListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
