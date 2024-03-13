// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/GDIOApi4.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGDIOApi4() {}
// Cross Module References
	GAMEDRIVER_API UEnum* Z_Construct_UEnum_GameDriver_CoordinateConversionTypes();
	UPackage* Z_Construct_UPackage__Script_GameDriver();
	GAMEDRIVER_API UEnum* Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES();
	GAMEDRIVER_API UClass* Z_Construct_UClass_UBP_GDIOAPI_NoRegister();
	GAMEDRIVER_API UClass* Z_Construct_UClass_UBP_GDIOAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* CoordinateConversionTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameDriver_CoordinateConversionTypes, Z_Construct_UPackage__Script_GameDriver(), TEXT("CoordinateConversionTypes"));
		}
		return Singleton;
	}
	template<> GAMEDRIVER_API UEnum* StaticEnum<CoordinateConversionTypes>()
	{
		return CoordinateConversionTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CoordinateConversionTypes(CoordinateConversionTypes_StaticEnum, TEXT("/Script/GameDriver"), TEXT("CoordinateConversionTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Hash() { return 1474201363U; }
	UEnum* Z_Construct_UEnum_GameDriver_CoordinateConversionTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameDriver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CoordinateConversionTypes"), 0, Get_Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CoordinateConversionTypes::None", (int64)CoordinateConversionTypes::None },
				{ "CoordinateConversionTypes::Local", (int64)CoordinateConversionTypes::Local },
				{ "CoordinateConversionTypes::WorldToScreenPoint", (int64)CoordinateConversionTypes::WorldToScreenPoint },
				{ "CoordinateConversionTypes::ScreenToWorldPoint", (int64)CoordinateConversionTypes::ScreenToWorldPoint },
				{ "CoordinateConversionTypes::ScreenToViewportPoint", (int64)CoordinateConversionTypes::ScreenToViewportPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.Name", "CoordinateConversionTypes::Local" },
				{ "ModuleRelativePath", "Public/GDIOApi4.h" },
				{ "None.Name", "CoordinateConversionTypes::None" },
				{ "ScreenToViewportPoint.Name", "CoordinateConversionTypes::ScreenToViewportPoint" },
				{ "ScreenToWorldPoint.Name", "CoordinateConversionTypes::ScreenToWorldPoint" },
				{ "WorldToScreenPoint.Name", "CoordinateConversionTypes::WorldToScreenPoint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameDriver,
				nullptr,
				"CoordinateConversionTypes",
				"CoordinateConversionTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* GDIO_HPATH_TYPES_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES, Z_Construct_UPackage__Script_GameDriver(), TEXT("GDIO_HPATH_TYPES"));
		}
		return Singleton;
	}
	template<> GAMEDRIVER_API UEnum* StaticEnum<GDIO_HPATH_TYPES>()
	{
		return GDIO_HPATH_TYPES_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GDIO_HPATH_TYPES(GDIO_HPATH_TYPES_StaticEnum, TEXT("/Script/GameDriver"), TEXT("GDIO_HPATH_TYPES"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Hash() { return 1224282587U; }
	UEnum* Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameDriver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GDIO_HPATH_TYPES"), 0, Get_Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GDIO_HPATH_TYPES::Absolute", (int64)GDIO_HPATH_TYPES::Absolute },
				{ "GDIO_HPATH_TYPES::Relative", (int64)GDIO_HPATH_TYPES::Relative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.Name", "GDIO_HPATH_TYPES::Absolute" },
				{ "ModuleRelativePath", "Public/GDIOApi4.h" },
				{ "Relative.Name", "GDIO_HPATH_TYPES::Relative" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameDriver,
				nullptr,
				"GDIO_HPATH_TYPES",
				"GDIO_HPATH_TYPES",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execFloatInputEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::FloatInputEvent(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseDrag)
	{
		P_GET_STRUCT(FKey,Z_Param_MouseButton);
		P_GET_STRUCT(FVector2D,Z_Param_destination);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_GET_STRUCT(FVector2D,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseDrag(Z_Param_MouseButton,Z_Param_destination,Z_Param_frameCount,Z_Param_origin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseMovetoObjectFromHPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseMovetoObjectFromHPath(Z_Param_HPath,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseMovetoObject)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseMovetoObject(Z_Param_obj,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseMovetoPoint)
	{
		P_GET_STRUCT(FVector2D,Z_Param_destination);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_GET_STRUCT(FVector2D,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseMovetoPoint(Z_Param_destination,Z_Param_frameCount,Z_Param_origin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execgetHierarchyPath)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_ENUM(GDIO_HPATH_TYPES,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBP_GDIOAPI::getHierarchyPath(Z_Param_obj,GDIO_HPATH_TYPES(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execClickObject)
	{
		P_GET_STRUCT(FKey,Z_Param_mouseButton);
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::ClickObject(Z_Param_mouseButton,Z_Param_obj,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execClickObjectFromHPath)
	{
		P_GET_STRUCT(FKey,Z_Param_mouseButton);
		P_GET_PROPERTY(FStrProperty,Z_Param_HPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::ClickObjectFromHPath(Z_Param_mouseButton,Z_Param_HPath,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execClick)
	{
		P_GET_STRUCT(FKey,Z_Param_mouseButton);
		P_GET_STRUCT(FVector2D,Z_Param_loc);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::Click(Z_Param_mouseButton,Z_Param_loc,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execKeyPress)
	{
		P_GET_TARRAY(FKey,Z_Param_keys);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::KeyPress(Z_Param_keys,Z_Param_numberOfFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetBoolFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetBoolFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetFloatFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetFloatFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetStringFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetStringFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetIntFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetIntFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetFloatFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetFloatFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetBoolFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_UBOOL_REF(Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetBoolFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetStringFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetStringFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetIntFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetIntFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetObjectPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_ENUM(CoordinateConversionTypes,Z_Param_coordinateSpace);
		P_GET_UBOOL_REF(Z_Param_Out_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBP_GDIOAPI::GetObjectPosition(Z_Param_obj,CoordinateConversionTypes(Z_Param_coordinateSpace),Z_Param_Out_valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetObjectPositionWithHPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HPath);
		P_GET_ENUM(CoordinateConversionTypes,Z_Param_coordinateSpace);
		P_GET_UBOOL_REF(Z_Param_Out_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBP_GDIOAPI::GetObjectPositionWithHPath(Z_Param_HPath,CoordinateConversionTypes(Z_Param_coordinateSpace),Z_Param_Out_valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetGameObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UBP_GDIOAPI::GetGameObject(Z_Param_hierarchyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetObjectList)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UBP_GDIOAPI::GetObjectList(Z_Param_hierarchyPath);
		P_NATIVE_END;
	}
	void UBP_GDIOAPI::StaticRegisterNativesUBP_GDIOAPI()
	{
		UClass* Class = UBP_GDIOAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Click", &UBP_GDIOAPI::execClick },
			{ "ClickObject", &UBP_GDIOAPI::execClickObject },
			{ "ClickObjectFromHPath", &UBP_GDIOAPI::execClickObjectFromHPath },
			{ "FloatInputEvent", &UBP_GDIOAPI::execFloatInputEvent },
			{ "GetBoolFieldValue", &UBP_GDIOAPI::execGetBoolFieldValue },
			{ "GetFloatFieldValue", &UBP_GDIOAPI::execGetFloatFieldValue },
			{ "GetGameObject", &UBP_GDIOAPI::execGetGameObject },
			{ "getHierarchyPath", &UBP_GDIOAPI::execgetHierarchyPath },
			{ "GetIntFieldValue", &UBP_GDIOAPI::execGetIntFieldValue },
			{ "GetObjectList", &UBP_GDIOAPI::execGetObjectList },
			{ "GetObjectPosition", &UBP_GDIOAPI::execGetObjectPosition },
			{ "GetObjectPositionWithHPath", &UBP_GDIOAPI::execGetObjectPositionWithHPath },
			{ "GetStringFieldValue", &UBP_GDIOAPI::execGetStringFieldValue },
			{ "KeyPress", &UBP_GDIOAPI::execKeyPress },
			{ "MouseDrag", &UBP_GDIOAPI::execMouseDrag },
			{ "MouseMovetoObject", &UBP_GDIOAPI::execMouseMovetoObject },
			{ "MouseMovetoObjectFromHPath", &UBP_GDIOAPI::execMouseMovetoObjectFromHPath },
			{ "MouseMovetoPoint", &UBP_GDIOAPI::execMouseMovetoPoint },
			{ "SetBoolFieldValue", &UBP_GDIOAPI::execSetBoolFieldValue },
			{ "SetFloatFieldValue", &UBP_GDIOAPI::execSetFloatFieldValue },
			{ "SetIntFieldValue", &UBP_GDIOAPI::execSetIntFieldValue },
			{ "SetStringFieldValue", &UBP_GDIOAPI::execSetStringFieldValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics
	{
		struct BP_GDIOAPI_eventClick_Parms
		{
			FKey mouseButton;
			FVector2D loc;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseButton;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loc;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_mouseButton = { "mouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClick_Parms, mouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClick_Parms, loc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClick_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventClick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventClick_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_mouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_loc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "Click", nullptr, nullptr, sizeof(BP_GDIOAPI_eventClick_Parms), Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics
	{
		struct BP_GDIOAPI_eventClickObject_Parms
		{
			FKey mouseButton;
			UObject* obj;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseButton;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_mouseButton = { "mouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObject_Parms, mouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObject_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObject_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventClickObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventClickObject_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_mouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_obj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "ClickObject", nullptr, nullptr, sizeof(BP_GDIOAPI_eventClickObject_Parms), Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_ClickObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics
	{
		struct BP_GDIOAPI_eventClickObjectFromHPath_Parms
		{
			FKey mouseButton;
			FString HPath;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mouseButton;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HPath;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_mouseButton = { "mouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObjectFromHPath_Parms, mouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_HPath = { "HPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObjectFromHPath_Parms, HPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObjectFromHPath_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventClickObjectFromHPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventClickObjectFromHPath_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_mouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_HPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "ClickObjectFromHPath", nullptr, nullptr, sizeof(BP_GDIOAPI_eventClickObjectFromHPath_Parms), Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics
	{
		struct BP_GDIOAPI_eventFloatInputEvent_Parms
		{
			FKey key;
			float value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventFloatInputEvent_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventFloatInputEvent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventFloatInputEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventFloatInputEvent_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "FloatInputEvent", nullptr, nullptr, sizeof(BP_GDIOAPI_eventFloatInputEvent_Parms), Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetBoolFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			bool value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetBoolFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetBoolFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetBoolFieldValue_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetBoolFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetBoolFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetBoolFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetFloatFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			float value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetFloatFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetFloatFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetFloatFieldValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetFloatFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetFloatFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetFloatFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetFloatFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics
	{
		struct BP_GDIOAPI_eventGetGameObject_Parms
		{
			FString hierarchyPath;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetGameObject_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetGameObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetGameObject", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetGameObject_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics
	{
		struct BP_GDIOAPI_eventgetHierarchyPath_Parms
		{
			UObject* obj;
			GDIO_HPATH_TYPES type;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventgetHierarchyPath_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventgetHierarchyPath_Parms, type), Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventgetHierarchyPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_obj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "getHierarchyPath", nullptr, nullptr, sizeof(BP_GDIOAPI_eventgetHierarchyPath_Parms), Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetIntFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			int32 value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetIntFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetIntFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetIntFieldValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetIntFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetIntFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetIntFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetIntFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics
	{
		struct BP_GDIOAPI_eventGetObjectList_Parms
		{
			FString hierarchyPath;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectList_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetObjectList", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetObjectList_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics
	{
		struct BP_GDIOAPI_eventGetObjectPosition_Parms
		{
			UObject* obj;
			CoordinateConversionTypes coordinateSpace;
			bool valid;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_coordinateSpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_coordinateSpace;
		static void NewProp_valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_valid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPosition_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace = { "coordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPosition_Parms, coordinateSpace), Z_Construct_UEnum_GameDriver_CoordinateConversionTypes, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetObjectPosition_Parms*)Obj)->valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetObjectPosition_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_obj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetObjectPosition", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetObjectPosition_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics
	{
		struct BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms
		{
			FString HPath;
			CoordinateConversionTypes coordinateSpace;
			bool valid;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_coordinateSpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_coordinateSpace;
		static void NewProp_valid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_valid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_HPath = { "HPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms, HPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace = { "coordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms, coordinateSpace), Z_Construct_UEnum_GameDriver_CoordinateConversionTypes, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms*)Obj)->valid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_HPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetObjectPositionWithHPath", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetStringFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			FString value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetStringFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetStringFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetStringFieldValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetStringFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetStringFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetStringFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventGetStringFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics
	{
		struct BP_GDIOAPI_eventKeyPress_Parms
		{
			TArray<FKey> keys;
			int32 numberOfFrames;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_keys;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfFrames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys_Inner = { "keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys = { "keys", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventKeyPress_Parms, keys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_numberOfFrames = { "numberOfFrames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventKeyPress_Parms, numberOfFrames), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventKeyPress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventKeyPress_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_numberOfFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "KeyPress", nullptr, nullptr, sizeof(BP_GDIOAPI_eventKeyPress_Parms), Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_KeyPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics
	{
		struct BP_GDIOAPI_eventMouseDrag_Parms
		{
			FKey MouseButton;
			FVector2D destination;
			int32 frameCount;
			FVector2D origin;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseButton;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, MouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, destination), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseDrag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseDrag_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_MouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseDrag", nullptr, nullptr, sizeof(BP_GDIOAPI_eventMouseDrag_Parms), Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics
	{
		struct BP_GDIOAPI_eventMouseMovetoObject_Parms
		{
			UObject* obj;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObject_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObject_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseMovetoObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseMovetoObject_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_obj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseMovetoObject", nullptr, nullptr, sizeof(BP_GDIOAPI_eventMouseMovetoObject_Parms), Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics
	{
		struct BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms
		{
			FString HPath;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HPath;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_HPath = { "HPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms, HPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_HPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseMovetoObjectFromHPath", nullptr, nullptr, sizeof(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms), Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics
	{
		struct BP_GDIOAPI_eventMouseMovetoPoint_Parms
		{
			FVector2D destination;
			int32 frameCount;
			FVector2D origin;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frameCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_origin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoPoint_Parms, destination), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoPoint_Parms, frameCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoPoint_Parms, origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseMovetoPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseMovetoPoint_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_frameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseMovetoPoint", nullptr, nullptr, sizeof(BP_GDIOAPI_eventMouseMovetoPoint_Parms), Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetBoolFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			bool value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetBoolFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetBoolFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetBoolFieldValue_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetBoolFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetBoolFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventSetBoolFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetFloatFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			float value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetFloatFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetFloatFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetFloatFieldValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetFloatFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetFloatFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetFloatFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventSetFloatFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetIntFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			int32 value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetIntFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetIntFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetIntFieldValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetIntFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetIntFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetIntFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventSetIntFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetStringFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			FString value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_field;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetStringFieldValue_Parms, hierarchyPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetStringFieldValue_Parms, field), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetStringFieldValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetStringFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetStringFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_hierarchyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetStringFieldValue", nullptr, nullptr, sizeof(BP_GDIOAPI_eventSetStringFieldValue_Parms), Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBP_GDIOAPI_NoRegister()
	{
		return UBP_GDIOAPI::StaticClass();
	}
	struct Z_Construct_UClass_UBP_GDIOAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_GDIOAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBP_GDIOAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBP_GDIOAPI_Click, "Click" }, // 3309717984
		{ &Z_Construct_UFunction_UBP_GDIOAPI_ClickObject, "ClickObject" }, // 834055662
		{ &Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath, "ClickObjectFromHPath" }, // 3746708077
		{ &Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent, "FloatInputEvent" }, // 3508365868
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue, "GetBoolFieldValue" }, // 971870941
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetFloatFieldValue, "GetFloatFieldValue" }, // 2662670458
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject, "GetGameObject" }, // 3377231115
		{ &Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath, "getHierarchyPath" }, // 3015870816
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue, "GetIntFieldValue" }, // 2378588926
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList, "GetObjectList" }, // 568750
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition, "GetObjectPosition" }, // 3908001341
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath, "GetObjectPositionWithHPath" }, // 2115858490
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue, "GetStringFieldValue" }, // 1263037618
		{ &Z_Construct_UFunction_UBP_GDIOAPI_KeyPress, "KeyPress" }, // 1810195330
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag, "MouseDrag" }, // 1252771082
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject, "MouseMovetoObject" }, // 1812442208
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath, "MouseMovetoObjectFromHPath" }, // 3555254324
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint, "MouseMovetoPoint" }, // 2656344857
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue, "SetBoolFieldValue" }, // 2078855415
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue, "SetFloatFieldValue" }, // 4083711176
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue, "SetIntFieldValue" }, // 3431366772
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue, "SetStringFieldValue" }, // 1369179457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_GDIOAPI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GDIOApi4.h" },
		{ "ModuleRelativePath", "Public/GDIOApi4.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_GDIOAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_GDIOAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_GDIOAPI_Statics::ClassParams = {
		&UBP_GDIOAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_GDIOAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_GDIOAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_GDIOAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_GDIOAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBP_GDIOAPI, 1009334141);
	template<> GAMEDRIVER_API UClass* StaticClass<UBP_GDIOAPI>()
	{
		return UBP_GDIOAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_GDIOAPI(Z_Construct_UClass_UBP_GDIOAPI, &UBP_GDIOAPI::StaticClass, TEXT("/Script/GameDriver"), TEXT("UBP_GDIOAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_GDIOAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
