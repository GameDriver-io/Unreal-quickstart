// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "GDIOAgent.h"
#include "Protocol/ProtocolMessage.h"

namespace MessageHandlers
{
	bool WaitForObject(GDIOAgent* agent, ProtocolMessage pm);
	
	bool WaitForObjectValue(GDIOAgent* agent, ProtocolMessage pm);
	bool GetStatistics(GDIOAgent* agent, ProtocolMessage pm);
	bool KeyPress(GDIOAgent* agent, ProtocolMessage pm);
	bool Click(GDIOAgent* agent, ProtocolMessage pm);
	bool ClickObject(GDIOAgent* agent, ProtocolMessage pm);
	bool MouseMoveToPoint(GDIOAgent* agent, ProtocolMessage pm);
	bool MouseMoveToObject(GDIOAgent* agent, ProtocolMessage pm);
	bool MouseDrag(GDIOAgent* agent, ProtocolMessage pm);
	bool Touch(GDIOAgent* agent, ProtocolMessage pm);
	bool Tap(GDIOAgent* agent, ProtocolMessage pm);
	bool GetObjectPosition(GDIOAgent* agent, ProtocolMessage pm);
	bool GetObjectValue(GDIOAgent* agent, ProtocolMessage pm);
	bool GetObjectList(GDIOAgent* agent, ProtocolMessage pm);
	bool InputManagerState(GDIOAgent* agent, ProtocolMessage pm);//VR
	bool CreateInputDevice(GDIOAgent* agent, ProtocolMessage pm);//VR
	bool RemoveInputDevices(GDIOAgent* agent, ProtocolMessage pm);//VR
	bool SetObjectValue(GDIOAgent* agent, ProtocolMessage pm);
	bool CallMethod(GDIOAgent* agent, ProtocolMessage pm);
	bool LoadLevel(GDIOAgent* agent, ProtocolMessage pm);
	bool GetSceneName(GDIOAgent* agent, ProtocolMessage pm);
	bool ObjectDistance(GDIOAgent* agent, ProtocolMessage pm);
	bool Rotate(GDIOAgent* agent, ProtocolMessage pm);
	bool Raycast(GDIOAgent* agent, ProtocolMessage pm);
	bool CaptureScreenshot(GDIOAgent* agent, ProtocolMessage pm);
	bool NavAgentMoveToPoint(GDIOAgent* agent, ProtocolMessage pm);
	bool RegisterUnrealCollisionMonitor(GDIOAgent* agent, ProtocolMessage pm);
	bool UnregisterCollisionMonitor(GDIOAgent* agent, ProtocolMessage pm);
	bool ChangeObjectResolverCacheState(GDIOAgent* agent, ProtocolMessage pm);
	bool PingPong(GDIOAgent* agent, ProtocolMessage pm);
	bool SetTimeScale(GDIOAgent* agent, ProtocolMessage pm);
	bool GetPropertyList(GDIOAgent* agent, ProtocolMessage pm);
	bool GetMethodList(GDIOAgent* agent, ProtocolMessage pm);
	bool HandleBadLicense(GDIOAgent* agent, ProtocolMessage pm);
	bool StartRecording(GDIOAgent* agent, ProtocolMessage pm);
	bool StopRecording(GDIOAgent* agent, ProtocolMessage pm);
	bool ConsoleCommand(GDIOAgent* agent, ProtocolMessage pm);
	bool AutoplayCommand(GDIOAgent* agent, ProtocolMessage pm);
}

