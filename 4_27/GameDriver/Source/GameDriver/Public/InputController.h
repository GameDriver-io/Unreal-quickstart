// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <map>
#include <string>
#include "InputCoreTypes.h"
#include "GameFramework/PlayerController.h"

enum class KeyTypeEnum
{
	Key = 0,
	Mouse = 1,
	Gamepad = 2,
	MouseDrag = 3,
	MouseMove = 4,
	MouseDouble = 5,
	Touch = 6,
	MouseWheel = 7
};

class GDIOAgent;
class InternalState
{
public:
	InternalState() {};
	InternalState(FKey key, int64 frames, KeyTypeEnum kt, FString dictKey, FVector2D* pos, FVector2D* dest = NULL, float depressedValue = 1.0f, bool gamePad = false, int t = 1, UWorld* W = NULL, GDIOAgent* A = NULL, int del = 0);
	int taps = 0;
	float DepressedValue = 1.0f;
	int64 Frames = 0;
	int64 FirstFrame = 0;
	bool GamePad = false;
	FKey Key = FKey();
	KeyTypeEnum KeyType;
	FString DictKey = "";
	UWorld* World = NULL;
	GDIOAgent* Agent = NULL;
	FVector2D* Position;
	FVector2D* DesiredPosition;
	FVector2D* delta;
	int tapModulo = 0;
	bool infiniteTouch = false;
	bool infiniteStop = false;

	bool Update(int c = 0);
	void resetDidFire() { didFireDown = false; };
	bool finished = false;
	int delay = 0;
private:

	bool didFireDown = false;

};

class InputController {
public:
	InputController();
	InputController(UWorld* W);
	int GetActiveTouches();
	void AddOrUpdate(FString strKey, int64 frames, KeyTypeEnum kt, FVector2D* position = NULL, FVector2D* destinationPosition = NULL, float depressedValue = 1.0f, bool gamePad = false, int t = 1, int delay =0);
	void Update();
	UWorld* World = NULL;
	GDIOAgent* Agent = NULL;
	 std::map<FString, InternalState*>* KeyState;// = new std::map<std::string, InternalState>();
	 bool didSendEnmptyInput; //= true;
};