// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include <TCPServer.h>
#include "Protocol/ProtocolMessage.h"
#include "ChannelQueue.h"
#pragma once
#include "Internal/WaitForObjectDesc.h"
#include <InputController.h>

#include "CoreMinimal.h"
#include "GDIOGUI.h"
#include "printInterface.h"
#include <GDIOInput.h>
#include <XRInput/GDIOXRInput.h>
class XPathParserException;
class GDIOAgent {

public:
	GDIOAgent();
	GDIOAgent(ChannelQueue<ProtocolMessage*> *channel, UWorld* W);
	void clearTrackedItems();
	~GDIOAgent();

	double GetLastFPS();
	void ChangeWorld(UWorld* w);
	void ChangeCacheConfig(bool value);
	void ProcessQueue();
	void Tick(float DeltaSeconds);
	void KeyPressMonitor() { if (InputControl != NULL) InputControl->Update(); };
	std::list<std::unique_ptr<WaitForObjectDesc>> waitForObjects;
	std::list<std::unique_ptr<ObjectValueRequest>> waitForObjectValues;
	std::list<std::unique_ptr<MovToAgent>> MovingAgents; 
	bool bRunning;
	InputController* InputControl; 
	UWorld* World;
	std::list<XPathParserException*>* exceptions;
	//TSharedRef<GDIOPanel> panel;
	bool noPanel = true;
	bool licenceValid = false;
		//The IInputProcessor
#if ENGINE_MAJOR_VERSION == 4
	SharedPointerInternals::FRawPtrProxy< FGDIOInput > inputProcessor = NULL;
#else
	TSharedPtr<  FGDIOInput > inputProcessor = NULL;
#endif
	internalRecording* recording = NULL;


	TSharedPtr<FBasicStateManagement> basicInput = NULL;
	bool usingWebSockets = false;
private:
    // internal static Dictionary<string, object> GDIO_CONFIG = new Dictionary<string, object>(); use unreal settings. 
	// Inherited via FRunnable
	//virtual uint32 Run() override;
	ChannelQueue<ProtocolMessage*>* messageQueue = nullptr;
	FRunnableThread* ClientThread = NULL;

};


//bool WaitForObject(GDIOAgent* agent, ProtocolMessage pm);