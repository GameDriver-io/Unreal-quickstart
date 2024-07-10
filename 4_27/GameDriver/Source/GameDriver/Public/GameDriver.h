// Copyright GameDriver, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

//THIRD_PARTY_INCLUDES_START
#include <GDIOAgent.h>
#include "ChannelQueue.h"
#include "Protocol/ProtocolMessage.h"
#include "Engine/World.h"
#include "Log.h"



#if PLATFORM_ANDROID || PLATFORM_IOS || PLATFORM_MAC || PLATFORM_SWITCH
#define CONVERT_STRING(X,Y) std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv; Y = conv.to_bytes(X);
#else
#define CONVERT_STRING(X,Y) std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> conv; Y = conv.to_bytes(X);
#endif

#if PLATFORM_ANDROID || PLATFORM_MAC || PLATFORM_LINUX  || PLATFORM_SWITCH || PLATFORM_IOS
	#define MAKETIME(X) clock_gettime(CLOCK_REALTIME, &X);
#else
	#define MAKETIME(X) std::timespec_get(&X, TIME_UTC);
#endif
class FGameDriverModule : public IModuleInterface
{
public:
	void TickWebSocket();
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	void OnWorldPostInitialization(UWorld* World, const UWorld::InitializationValues InitializationValues);
	void OnWorldCleanup(UWorld* World, bool SessionEnded, bool CleanupResources);
	void TickWorld(UWorld* World, ELevelTick TickType, float DeltaSeconds);
	void HandleWebSocketData(const void* Data, SIZE_T Length, SIZE_T BytesRemaining);
	
	static ChannelQueue<ProtocolMessage*> InMessageQueue;
	static ChannelQueue<ProtocolMessage*> OutMessageQueue;
	GDIOAgent* getAgent();
	TSharedPtr<IXRTrackingSystem, ESPMode::ThreadSafe> oldXR;
	GAMEDRIVER_API static bool traceLogging;
	GAMEDRIVER_API static int websocketRetryCount;
	GAMEDRIVER_API static int websocketRetryTime;
private:

	bool hasEverBegun = false;
	FTCPServer* SocketListener = NULL;
	FDelegateHandle OnWorldPostInitializationHandle;
	FDelegateHandle OnWorldCleanupHandle;
	GDIOAgent* Agent = NULL;
	bool cleanup;
	bool m_UseWebSockets = false;
	bool WebsocketInitialized = false;
};
