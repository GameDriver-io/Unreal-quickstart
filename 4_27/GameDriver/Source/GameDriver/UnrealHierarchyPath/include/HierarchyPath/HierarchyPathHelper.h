// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <UObject/Object.h>
#include <string>
#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Engine/UserInterfaceSettings.h"
#endif

#include "Engine/EngineBaseTypes.h"
#include "Common.h"
#include "GameFramework/TouchInterface.h"
#include "UObject/UnrealType.h"
#include <GameDriver/UnrealHierarchyPath/include/HierarchyPath/HierarchyPathVM.h>
namespace GameDriver {
	GAMEDRIVER_API const FKey* getEKeyForIntValue(int val);
	GAMEDRIVER_API const int getEKeyIntValue(FKey val);
}

#include <GDIOTypes.h>
class StructHolder;
//class MapPrimPrim;
class UWidgetTree;
class UPanelWidget;
class UWidget;
class UDynamicEntryBoxBase;
class UActorComponent;
struct FMinimalViewInfo;

bool ConvertWorldLocationToScreenLocation(APlayerController* PlayerController, FVector& tempV, FVector2D& outputSpot);
bool UObjectGetPosition(UObject* obj, FVector& location);
TArray<UActorComponent*>* GetAllComponents(UObject* Actor);
bool PlayerController_SetMouseState(APlayerController* PlayerController, int buttonId, EInputEvent Event, FVector2D* newLocationRaw);
bool PlayerController_SetTouchState(APlayerController* PlayerController, int fingerId, ETouchType::Type Event, FVector2D* Location);

bool ProjectWorldToCamera(APlayerController const* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative, FMinimalViewInfo* viewInfo);
bool UObjectGetViewportPosition(UObject* obj, FVector& loc);
bool ConvertWorldLocationToViewportLocation(APlayerController* PlayerController, UObject* cam, FVector& inputLoc, FVector2D& outputSpot);
bool SetStructFieldOrPropertyValue(StructHolder* sh, FString fieldName, void* v);
bool UObjectGetLocalPosition(UObject* obj, FVector& loc);
bool ConvertScreenToWorldLocation(APlayerController* PlayerController, FVector2D& inpos, FVector& outputSpot);
bool SetIntValueForField(UObject* obj, FString fieldToFind, int value);
bool SetIntValueForProperty(FProperty* prop, void* obj, int value);
bool SetInt64ValueForField(UObject* obj, FString fieldToFind, int64 value);
bool SetInt64ValueForProperty(FProperty* prop, void* obj, const int64& value);
bool SetBoolValueForField(UObject* obj, FString fieldToFind, bool value);
bool SetBoolValueForProperty(void* obj, FProperty* prop, bool value);
bool SetDoubleValueForField(UObject* obj, FString fieldToFind, double value);
bool SetDoubleValueForProperty(FProperty* prop, void* obj, double value);
bool SetFloatValueForField(UObject* obj, FString fieldToFind, float value);
bool SetFloatValueForProperty(FProperty* prop, void* obj, float value);
bool SetStringValueForField(UObject* obj, FString fieldToFind, String valueToSet);
bool SetStringValueForProperty(FProperty* prop, void* obj, String& valueToSet);
bool SetVectorValueForField(UObject* obj, FString fieldToFind, FVector* value);
bool SetVectorValueForProperty(FProperty* prop, void* obj, FVector* value);
bool SetColorValueForField(UObject* obj, FString fieldToFind, FLinearColor* value);
bool SetColorValueForProperty(FProperty* prop, void* obj, FLinearColor* value);
bool SetFieldOrPropertyValue(UObject* qObj, FString fieldName, void* value);
bool SetVector2DValueForField(UObject* obj, FString fieldToFind, FVector2D* value);
bool SetVector2DValueForProperty(FProperty* prop, void* obj, FVector2D* value);
bool SetQuaternionValueForField(UObject* obj, FString fieldToFind, FQuat* value);
bool SetQuaternionValueForProperty(FProperty* prop, void* obj, FQuat* value);
bool SetTransformValueForField(UObject* obj, FString fieldToFind, FTransform* value);
bool SetTransformValueForProperty(FProperty* prop, void* obj, FTransform* value);
bool setArrayElement(FArrayProperty* arrayProperty, UObject* obj, int index, void* value);
bool setMapElement(FMapProperty* mapProperty, UObject* obj, int index, void* value);

GAMEDRIVER_API TArray<UObject*>* GetAllChildUObjects(UObject* Actor, bool onlyFirstLevel = false);
void GetUserWidgetChildren(UObject* Actor, TArray<UObject*>* actors,bool onlyFirst);
TArray< FTouchInputControl>* GetAllChildTouchControls(UObject* Actor);
TArray<UObject*>* GetAllUObjects(UWorld* VMWorld);
GAMEDRIVER_API  TArray<UObject*>* GetAllWidgets(UWorld* VMWorld);
UObject* GetAttachParentUObject(UObject* actor);
bool UObject_GetRotation(UObject* obj, FQuat& rot);
FString GetHPath(UObject* obj, FString* CurrentItem);
TArray<FString> GetObjectTags(UObject* obj);
void AddWidgetParent(UWidgetTree* currentActor, TArray<UObject*>* actors);
void GetPanelWidgetChildren(UPanelWidget* Actor, TArray<UObject*>* actors, bool onlyfirst);
void GetWidgetChildren(UWidget* Actor, TArray<UObject*>* actors,bool onlyfirst);
void GetDynamicWidgetChildren(UDynamicEntryBoxBase* panelWidget, TArray<UObject*>* actors, bool onlyFirst);
void GetRecursivelyAttachedActors(AActor* Actor, TArray< AActor* >& OutActors);
