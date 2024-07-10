// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once


#include "CoreMinimal.h"
#include <string>
#include "Sockets.h"
#include "Misc/DateTime.h"
#include "Async/AsyncWork.h"
#include "Sockets.h"

#include "Runtime/Launch/Resources/Version.h"
#if ENGINE_MAJOR_VERSION == 4
#include "Runtime/Networking/Public/Common/TcpListener.h"
#include "Runtime/Networking/Public/Interfaces/IPV4/IPv4Endpoint.h"
#else
#include "Common/TcpListener.h"
#endif
#include "Containers/Queue.h"
#include "Common/UdpSocketReceiver.h"
#include "Common/TcpSocketBuilder.h"
#include "FNetworkUtilities.h"
#include "Engine/EngineBaseTypes.h"
#include "HAL/Runnable.h"

#include <map>

#include "WebSocketsModule.h"
#include "IWebSocket.h"
//#include "Misc/Optional.h"
//#include "Protocol/ProtocolMessage.h"
#define DEFAULT_ENDPOINT FIPv4Endpoint(FIPv4Address(0, 0, 0, 0), 15505)

void pack_uint32_t(uint8* ptr, uint32_t value);

class FTCPServer :  public FRunnable
{
public:	
	FTCPServer(bool websockets = false, FString weburl = "", bool ever = false);

	void SetupWebsockets();
	~FTCPServer();

	//	struct FAfterTickFunction ExtraLateActorTick;
	//virtual void BeginPlay() override;
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//virtual void Tick(float DeltaTime)  override;
	//bool RecvMessage(FSocket *Socket, uint32 DataSize, FString& Message);
	bool HandleListenerConnectionAccepted(class FSocket *ClientSocket, const FIPv4Endpoint& ClientEndpoint);
	bool everConnected = false;
	virtual bool Init() override;
	virtual uint32 Run() override;

	void removeDeadClient(FSocket*& Client);

	virtual void Stop() override
	{
		//serverNode->Shutdown();
		StopRequested.Set(true);
	}
	void setDelay(float x);
	int GetNumClients();
	//FSocket* ListenerSocket;
	FString LocalHostIP = "0.0.0.0";
	int32 PortNum = 15505; 
	int32 ConnectionTimeout;
	TArray<class FSocket*> Clients;

	//void HandleIncomingSocket(FSocket* IncomingConnection);
	//static TQueue<FString> ImportQueue;

	void TickSocket(UWorld* World, ELevelTick TickType, float DeltaSeconds);
	void HandleWebSocketData(const void* Data, SIZE_T Length, SIZE_T BytesRemaining);
	void OnWebSocketConnect();
	int getListenerPort();

protected:
	int reattemptCount = 0;
private:

	float delay = 0.0;
	void InitializeDefaults();

	TQueue<class FSocket*, EQueueMode::Mpsc> PendingClients;
	//FCommandQueue CommandIO;
	bool Stopping;
	FRunnableThread* ClientThread = NULL;
	class FTcpListener *Listener = NULL;	
	//TArray<int32> ConnectionTimer;

	// Holds the list of all client connections.
	//TArray< class FNetworkFileServerClientConnectionThreaded*> Connections;

	// Holds a flag indicating whether the thread should stop executing
	FThreadSafeCounter StopRequested;

	// Is the Listner thread up and running. 
	FThreadSafeCounter Running;

	/** Holds a pointer to the socket sub-system. */
	ISocketSubsystem* SocketSubsystem;

	std::map<std::string, FSocket*> ClientMap;
	std::map<std::string, int> ClientMapTimeouts;

	//websockets
	int m_ListeningPort = 7071;
	bool m_UseWebSockets = false;
	FString m_WebSocketsURL = "ws://localhost:80/";
	FString url = "";
	TSharedPtr<IWebSocket> WebSocket;
	bool usingWebSockets = false;;

};


