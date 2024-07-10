// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "Containers/Queue.h"
#include "HAL/CriticalSection.h"
#include "Sockets.h"
#include "Engine/EngineBaseTypes.h"


enum class ECommandId : uint8
{
	Invalid,
	Ping,
	BackPing,
	RunTask,
	NotifyEndTask,
	ImportParams,
	Terminate,
	Last
};

struct FTask
{
	FTask() = default;

	int32 Index = -1;
	//ETaskState State = ETaskState::Unknown;
};

class ICommand
{
public:
	virtual ~ICommand() = default;

	virtual ECommandId GetType() const = 0;

	friend void operator<<(FArchive& Ar, ICommand& C) { C.SerializeImpl(Ar); }

protected:
	virtual void SerializeImpl(FArchive&) {}
};
	


// Create a new command from its type
TSharedPtr<ICommand> CreateCommand(ECommandId CommandType);

// Converts a command into a byte buffer
void SerializeCommand(ICommand& Command, TArray<uint8>& OutBuffer);

// Converts byte buffer back into a Command
// returns nullptr in case of error
TSharedPtr<ICommand> DeserializeCommand(const TArray<uint8>& InBuffer);



class FTerminateCommand : public ICommand
{
public:
	virtual ECommandId GetType() const override { return ECommandId::Terminate; }
};


class FPingCommand : public ICommand
{
public:
	virtual ECommandId GetType() const override { 
		return ECommandId::Ping; 
	}
};


class FBackPingCommand : public ICommand
{
public:
	virtual ECommandId GetType() const override { return ECommandId::BackPing; }
};


class FRunTaskCommand : public ICommand
{
public:
	FRunTaskCommand() = default;
	FRunTaskCommand(const FTask& Task) :  JobIndex(Task.Index) {}
	virtual ECommandId GetType() const override { return ECommandId::RunTask; }

protected:
	virtual void SerializeImpl(FArchive&) override;

public:
	//CADLibrary::FFileDescriptor JobFileDescription;
	int32 JobIndex = -1;
};

class FCompletedTaskCommand : public ICommand
{
public:
	virtual ECommandId GetType() const override { return ECommandId::NotifyEndTask; }

protected:
	virtual void SerializeImpl(FArchive&) override;

public:
	//TArray<CADLibrary::FFileDescriptor> ExternalReferences;
	FString SceneGraphFileName;
	FString GeomFileName;
	//ETaskState ProcessResult = ETaskState::Unknown;
	TArray<FString> WarningMessages;
};

class FImportParametersCommand : public ICommand
{
public:

	FImportParametersCommand()
	{
	}

	virtual ECommandId GetType() const override { return ECommandId::ImportParams; }

protected:
	virtual void SerializeImpl(FArchive&) override;

public:
	//CADLibrary::FImportParameters ImportParameters;
};
enum class GDSocketErrorCode
{
	NoError = 0,
	Error_Create,
	Error_Bind,
	Error_Listen,
	UnableToReadOnSocket,
	UnableToSendData,
	CouldNotStartWSA,
	UnableToGetLocalAddress,
	ConnectionToServerFailed,
};

struct FMessageHeader
{
	int32 ByteSize = -1;

	friend void operator<< (FArchive& Ar, FMessageHeader& H)
	{
		FString Guard = Ar.IsLoading() ? TEXT("") : TEXT("guard");
		Ar << Guard;
		Ar << H.ByteSize;
		ensure(Guard == TEXT("guard"));
	}
};
class FNetworkNode
{
public:
	virtual ~FNetworkNode();

	// Send a byte buffer as an atomic message
	// returns true when a message is successfully sent
	bool SendMessage(const TArray<uint8>& Buffer, double Timeout_s);

	// Receive a byte buffer as an atomic message
	// returns true when a message is fetched. In that case, OutBuffer contains the message.
	bool ReceiveMessage(TArray<uint8>& OutBuffer, double Timeout_s);

	bool IsValid() const { return !bReadError && !bWriteError; }
	bool IsConnected();

	FSocket* GetConnectedSocket() { return ConnectedSocket; }
protected:
	struct FMessage
	{
		FMessageHeader Header;
		TArray<uint8> Content;
	};
	FSocket* CreateInternalSocket(const FString& Description);
	void CloseSocket(FSocket*& Socket);
	

protected:
	FSocket* ConnectedSocket = nullptr;
	GDSocketErrorCode ConnectedSocketError = GDSocketErrorCode::NoError;

	FMessage IncommingMessage;

	bool bReadError = false;
	bool bWriteError = false;

	FCriticalSection SendReceiveCriticalSection;
};





// Create, Connect sequence
class FNetworkClientNode : public FNetworkNode
{
public:
	bool Connect(const FString& Description, int32 ServerPort, double Timeout_s);
};


// Create, Bind, Listen, Accept sequence
class  FNetworkServerNode : public FNetworkNode
{
public:
	FNetworkServerNode();
	~FNetworkServerNode();
	int32 GetListeningPort();
	bool Accept(const FString& Description, double Timeout_s);
	bool Listen();
	bool Shutdown();
	bool ListenerConnected();
	bool IsConnected();
	

private:
	FSocket* ListeningSocket;
};



class FCommandQueue
{
public:
	void SetNetworkInterface(FNetworkNode* InNetworkInterface);

	TSharedPtr<ICommand> GetNextCommand(double Timeout_s);
	bool SendCommand(ICommand& Commmand, double Timeout_s);

	bool IsValid() { return NetworkInterface ? NetworkInterface->IsValid() : true; }

	void Disconnect(double Timeout_s);

private:
	bool Poll(double Timeout_s);
	TQueue<TSharedPtr<ICommand>> InCommands;

private:
	FNetworkNode* NetworkInterface = nullptr;
};
