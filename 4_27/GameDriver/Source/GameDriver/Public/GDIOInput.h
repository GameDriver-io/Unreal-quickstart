// Copyright GameDriver, Inc. All Rights Reserved.

#pragma once

#include "InputMappingContext.h"
#include "Framework/Application/IInputProcessor.h"
#include "InputAction.h"
#include <printInterface.h>
#include "Runtime/Launch/Resources/Version.h"

#include "IXRTrackingSystem.h" 
#include "UnrealClient.h"
#include "Engine/GameViewportClient.h"

class FSlateApplication;
class FSlateUser;
class FViewPort;
struct FInputEvent;
struct FAnalogInputEvent;
struct FKeyEvent;
struct FPointerEvent;



class ControllerState {
public:
	ControllerState() {};
	bool ifDifferentChange(FVector p, FQuat o);
private:
	FVector position;
	FQuat orientation;
};
enum class VRActions {
	HUD,
	RIGHTGRIP,
	RIGHTAIM,
	LEFTGRIP,
	LEFTAIM
};
enum class ActionStateType {
	IDLE,
	PRESSED,
	RELEASED,
	MOVED
};

class ActionState {
public:
	ActionState() {};
	ActionState(ActionStateType t) { type = t; value = FVector::ZeroVector; }
	ActionStateType type;
	FVector value;
};

enum recordableEvent {
 KEYPRESS,
 MOUSECLICK,
 MOUSEDOUBLECLICK,
 MOUSEMOVE,
 MOUSEDRAG,//ONLY knows after the fact not when started a capture.  
 MOUSESCROLL,
 TOUCH, ANALOG
};
#define clickThreshold 20
class EventFragment {

public:
	EventFragment(uint32 frame, recordableEvent t, int key, int x = 0, int y = 0);
	recordableEvent GetType() { return type; }
	uint32 GetStartFrame() { return framestart; }
	uint32 GetEndFrame() { return frameend; }
	void setEndFrame(uint32 i) { frameend = i; }
	FVector2D GetXY() { return FVector2D(X, Y); }
	FVector2D GetEndXY() { return FVector2D(endX, endY); }
	void SetEndXY(int x, int y) { endset = true; endX = x; endY = y; }
	bool isEndSet() { return endset; }
	void SetXY(int x, int y) {  X = x; Y = y; }
	static FString getApiButtonName(FString x);
	static FString getButtonNameFromInt(int f);
	int GetKey() { return key; }
	FORCEINLINE bool operator==(const EventFragment Other) const { return ((key == Other.key) && (framestart == Other.framestart)); }

	FORCEINLINE bool operator<(const EventFragment Other) const {

			if (type == recordableEvent::MOUSEDOUBLECLICK && Other.type == recordableEvent::MOUSECLICK) {
				if (framestart - clickThreshold * 2 < Other.framestart) {
					return true;
				}
			}
			else if (Other.type == recordableEvent::MOUSEDOUBLECLICK && type == recordableEvent::MOUSECLICK) {
				return (framestart < Other.framestart - clickThreshold * 2);
			}
			else {
				return (framestart < Other.framestart);
			}
		return false;
	}
private:
	bool endset = false;
	uint32 framestart=0;
	uint32 frameend=0;
	recordableEvent type;
	int X = 0;
	int Y = 0;
	int endX = 0;
	int endY = 0;
	int key = 0;
};


class InputMaps {
public:
	GAMEDRIVER_API InputMaps() {};

#if ENGINE_MAJOR_VERSION == 4
	TMap<const UInputAction*, TArray<FString>*> mappings;
	TMap <const UInputAction*, ActionState> mappingStates;
#else
	TMap<TObjectPtr<const UInputAction>, TArray<FString>*> mappings;
	TMap < TObjectPtr<const UInputAction>, ActionState> mappingStates;
#endif
	TMap<FName, TArray<FString>*> legacyMappings;
	TMap <FName, ActionState> legacyStates;
};
/**
 * A class that simulates input and blocks hardware input. 
 */
class FGDIOInput : public IInputProcessor, public TSharedFromThis<FGDIOInput>
{


public:
	GAMEDRIVER_API FGDIOInput(IprintInterface*);

	/** Dtor */
	~FGDIOInput() { activeViewport = NULL; };

	UInputMappingContext* GetActiveContext();
	void HandleEnhancedPlayerInputMappings(UEnhancedPlayerInput* PlayerInput);
	void HandleLegacyPlayerInputMappings(FKey key, float value);
	void HandleEnhancedAnalogInput(const FAnalogInputEvent& event);
	FName GetLegacyActionForKey(FString f);
	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) ;
	void AddInWait();
	static void GenerateLegacyMap(InputMaps* IM, FWorldContext* world);
	static void makeMapping(FString& deviceCategory, InputMaps* IM);
	static FString GetDeviceCategory();
	int ClearMoves();
	 bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) ;
	 bool HandleKeyUpEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) ;
	 bool HandleAnalogInputEvent(FSlateApplication& SlateApp, const FAnalogInputEvent& InAnalogInputEvent) ;
	 const TCHAR* GetDebugName() const override { return TEXT("GDIOInput"); }
	bool HandleMouseMoveEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool slopesDifferInDirection(FVector2D slopeA, FVector2D slopeB);
	bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseButtonUpEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseButtonDoubleClickEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent);
	bool HandleMouseWheelOrGestureEvent(FSlateApplication& SlateApp, const FPointerEvent& WheelEvent, const FPointerEvent* GestureEvent);
	bool HandleMotionDetectedEvent(FSlateApplication& SlateApp, const FMotionEvent& MotionEvent);
	int MouseKeyToInt(FKey f);
	virtual int32 GetOwnerUserIndex() const { return 8; };
	FVector2D GetEditorMousePosition(const FPointerEvent& MouseEvent);
	int ProcessReadyEvents();
	uint32 getStartLowestFrame();
	bool anyOpenClickEvents();
	void graduateOldVREvents();
	void setupControllerMappings();
	void OnInputAction(const FInputActionInstance& ActionInstance);
	int frameModulo = 0;

	FString GetGoodValue(TArray<FString>* possibleKeys, EInputActionValueType type);

	FString GetPrintableVRDirection(FQuat rawQuat, FXRMotionControllerData* q,bool transform);//used to handle VR offsets from device in some unreal versions. 
protected:
	UWorld *World;
	bool everoutputVR = false;
	bool setupComplete = false;
	FViewport* activeViewport = NULL;
	int frameCount=0;
	InputMaps* inputMap;
	TMap< EInputActionValueType ,TArray<FString>> usedMappedKeys;
	TMap<FString, FString> controllerMappings;
	TMap<VRActions, ControllerState> VRStates;
	//RecorderToolPanel* panel;
	IprintInterface* panel;
	TMap<int32, EventFragment> StartedEvents;
	TArray<EventFragment> *EndingEvents = new TArray<EventFragment>();
};


