// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEDRIVER_printInterface_generated_h
#error "printInterface.generated.h already included, missing '#pragma once' in printInterface.h"
#endif
#define GAMEDRIVER_printInterface_generated_h

#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_SPARSE_DATA
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_RPC_WRAPPERS
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEDRIVER_API UprintInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UprintInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEDRIVER_API, UprintInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UprintInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEDRIVER_API UprintInterface(UprintInterface&&); \
	GAMEDRIVER_API UprintInterface(const UprintInterface&); \
public:


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEDRIVER_API UprintInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEDRIVER_API UprintInterface(UprintInterface&&); \
	GAMEDRIVER_API UprintInterface(const UprintInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEDRIVER_API, UprintInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UprintInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UprintInterface)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUprintInterface(); \
	friend struct Z_Construct_UClass_UprintInterface_Statics; \
public: \
	DECLARE_CLASS(UprintInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameDriver"), GAMEDRIVER_API) \
	DECLARE_SERIALIZER(UprintInterface)


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IprintInterface() {} \
public: \
	typedef UprintInterface UClassType; \
	typedef IprintInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IprintInterface() {} \
public: \
	typedef UprintInterface UClassType; \
	typedef IprintInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_9_PROLOG
#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_SPARSE_DATA \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_RPC_WRAPPERS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_SPARSE_DATA \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDRIVER_API UClass* StaticClass<class UprintInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GameDriver_Source_GameDriver_Public_printInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
