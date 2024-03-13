#pragma once

#include "InputCoreTypes.h"
#include "GDIOApiLibrary.h"
#include "GDIOApi4.generated.h"

UENUM()
enum class GDIO_HPATH_TYPES : uint8 {
	Absolute,	
	Relative
};

UENUM()
enum class CoordinateConversionTypes : uint8
{
	None = 0,
	Local = 1,
	WorldToScreenPoint = 2,
	ScreenToWorldPoint = 4,
	ScreenToViewportPoint = 5
};

UCLASS()
class UBP_GDIOAPI : public UObject {
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static TArray<UObject*> GetObjectList(FString hierarchyPath) {
		return UGDIOApi::GetObjectList(hierarchyPath);
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static UObject* GetGameObject(FString hierarchyPath) {
		return UGDIOApi::GetGameObject(hierarchyPath);
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static FVector GetObjectPositionWithHPath(FString HPath, CoordinateConversionTypes coordinateSpace, bool& valid){
		bool v;
		FVector temp =  UGDIOApi::GetObjectPosition(HPath, (CoordinateConversion) coordinateSpace,v );
		valid = v;
		return temp;
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static FVector GetObjectPosition(UObject * obj, CoordinateConversionTypes coordinateSpace, bool& valid) {
		bool v;
		FVector temp = UGDIOApi::GetObjectPosition(obj, (CoordinateConversion)coordinateSpace, v);
		valid = v;
		return temp;
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetIntFieldValue(FString hierarchyPath, FString field, int& value) {
		return UGDIOApi::GetObjectFieldValue<int>(hierarchyPath,field,value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetStringFieldValue(FString hierarchyPath, FString field, FString& value) {
		String s;
		bool retMe = UGDIOApi::GetObjectFieldValue<String>(hierarchyPath, field, s);
		value = FString(s.c_str());
		return retMe;
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetBoolFieldValue(FString hierarchyPath, FString field, bool& value) {
		return UGDIOApi::GetObjectFieldValue<bool>(hierarchyPath, field, value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetFloatFieldValue(FString hierarchyPath, FString field, float& value) {
		return UGDIOApi::GetObjectFieldValue<float>(hierarchyPath, field, value);
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetIntFieldValue(FString hierarchyPath, FString field, int value) {
		return UGDIOApi::SetObjectFieldValue<int>(hierarchyPath, field, value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetStringFieldValue(FString hierarchyPath, FString field, FString value) {
		String s = String(*value);
		return UGDIOApi::SetObjectFieldValue<String>(hierarchyPath, field, s);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetFloatFieldValue(FString hierarchyPath, FString field, float value) {//really a double (in5+
		return UGDIOApi::SetObjectFieldValue<float>(hierarchyPath, field, value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetBoolFieldValue(FString hierarchyPath, FString field, bool value) {//really a double (in5+
		return UGDIOApi::SetObjectFieldValue<bool>(hierarchyPath, field, value);
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool KeyPress(TArray<FKey> keys, int numberOfFrames)
	{
		return UGDIOApi::KeyPress(keys, numberOfFrames);
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool Click(FKey mouseButton, FVector2D loc, int frameCount = 30)
	{
		return UGDIOApi::Click(mouseButton, loc, frameCount);
	}
	
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool ClickObjectFromHPath(FKey mouseButton, FString HPath, int frameCount = 30) {
		return UGDIOApi::ClickObject(mouseButton, HPath, frameCount);
	}

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool ClickObject(FKey mouseButton, UObject* obj, int frameCount = 30) {
		return UGDIOApi::ClickObject(mouseButton, obj, frameCount);
	}
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static FString getHierarchyPath(UObject* obj, GDIO_HPATH_TYPES type)
	{
		if (type == GDIO_HPATH_TYPES::Absolute)
			return UGDIOApi::getHierarchyPath(obj, "Absolute");
		else {
			return UGDIOApi::getHierarchyPath(obj, "Relative");
		}
	}
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseMovetoPoint(FVector2D destination, int frameCount, FVector2D origin) {
		FVector2D dest =  FVector2D(destination.X, destination.Y);
		FVector2D o =  FVector2D(origin.X, origin.Y);
		return UGDIOApi::MouseMovetoPoint(dest,  frameCount,o);
	}

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseMovetoObject(UObject* obj, int frameCount = 30) {
		return UGDIOApi::MouseMovetoObject(obj, frameCount);
	}

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseMovetoObjectFromHPath(FString HPath, int frameCount=30) {
		return UGDIOApi::MouseMovetoObject(HPath, frameCount);
	}

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseDrag(FKey MouseButton, FVector2D destination, int frameCount, FVector2D origin)
	{
		FVector2D dest = FVector2D(destination.X, destination.Y);
		FVector2D o = FVector2D(origin.X, origin.Y);
		return UGDIOApi::MouseDrag(MouseButton,dest, frameCount,o);
	}

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool FloatInputEvent(FKey key, float value)
	{
		return UGDIOApi::FloatInputEvent(key, value);
	}
};
