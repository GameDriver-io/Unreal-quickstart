// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <iostream>
#include "time.h"
#if PLATFORM_ANDROID || PLATFORM_SWITCH || PLATFORM_IOS || PLATFORM_MAC
#include <time.h>
#endif
#include <msgpack.hpp>


#include "ProtocolMessage.h"
#include "../GDIOTypes.h"
#include <GameDriver.h>


enum class HANDSHAKE_REASON_CODE : std::uint8_t
{
    OK,
    ERROR_Z,
    VERSION_MISMATCH,
    DUPLICATE_CLIENTUID
};


enum class OBJECT_RESOLUTION
{
    OBJECT_FOUND,
    OBJECT_NOT_FOUND,
    OBJECT_NOT_FOUND_WAITING,
    OBJECT_NOT_FOUND_EXPIRED,
    MULTIPLE_OBJECT_MATCHES,
    INVALID_HIERARCHY_PATH,
    FIELD_OR_PROPERTY_NOT_FOUND,
    UNKNOWN
};


class HandshakeResponse :
    public IGDIOMessage
{
public:
    HandshakeResponse() { 
    MAKETIME(ReceivedTimestamp)
        this->MessageType = (int)GDIOMessageType::HandshakeResponse;

    };
    HandshakeResponse(HANDSHAKE_REASON_CODE rc) : HandshakeResponse() { RC = rc; }

    enum HANDSHAKE_REASON_CODE RC = HANDSHAKE_REASON_CODE::OK;
    timespec ReceivedTimestamp;
    GameConnectionDetails GCD = GameConnectionDetails();
    std::string* GetName() override { return new std::string("HandshakeResponse"); }
    MSGPACK_DEFINE_MAP(RC, ReceivedTimestamp, GCD);
};
class Pong :
    public IGDIOMessage
{
public:
    Pong() {
        MAKETIME(ReceivedTimestamp)
        MAKETIME(SentTimestamp)

        this->MessageType = (int)GDIOMessageType::Pong;

    };
    timespec ReceivedTimestamp;
    timespec SentTimestamp;
    std::string* GetName() override { return new std::string("Pong"); }
    MSGPACK_DEFINE_MAP(ReceivedTimestamp);
};

class WaitForObjectResponse :
    public IGDIOMessage
{
public:
    WaitForObjectResponse() { 
        MAKETIME(ReceivedTimestamp)
        this->MessageType = (int)GDIOMessageType::WaitForObjectResponse;
    };
    WaitForObjectResponse(OBJECT_RESOLUTION rc) : WaitForObjectResponse() { ObjectResolutionResult = rc; }
   // WaitForObjectResponse(GDIO_RESPONSE_CODE rc) : WaitForObjectResponse() { RC = rc; }
    enum GDIO_RESPONSE_CODE RC = GDIO_RESPONSE_CODE::OK;
    std::string ErrorMessage = "";
    enum OBJECT_RESOLUTION ObjectResolutionResult = OBJECT_RESOLUTION::OBJECT_NOT_FOUND;
    timespec ReceivedTimestamp;
    std::string* GetName() override { return new std::string("WaitForObjectResponse"); }
    MSGPACK_DEFINE_MAP(RC,ObjectResolutionResult, ErrorMessage);
};

class WaitForObjectValueResponse :
    public IGDIOMessage
{
public:
    WaitForObjectValueResponse() { 
        MAKETIME(ReceivedTimestamp)
        this->MessageType = (int)GDIOMessageType::WaitForObjectValueResponse;
    };
    WaitForObjectValueResponse(GDIO_RESPONSE_CODE rc) : WaitForObjectValueResponse() { RC = rc; }
    std::string ErrorMessage = "";
    enum GDIO_RESPONSE_CODE RC = GDIO_RESPONSE_CODE::OK;
    enum OBJECT_RESOLUTION ObjectResolutionResult = OBJECT_RESOLUTION::OBJECT_NOT_FOUND;
    timespec ReceivedTimestamp;
    std::string* GetName() override { return new std::string("WaitForObjectValueResponse"); }
    MSGPACK_DEFINE_MAP(RC, ErrorMessage, ObjectResolutionResult);
};

class GenericResponse :
    public IGDIOMessage
{
public:
    GenericResponse() { 
        MAKETIME(ReceivedTimestamp)
        this->MessageType = (int)GDIOMessageType::GenericResponse; 
    };
    GenericResponse(GDIO_RESPONSE_CODE rc) : GenericResponse() { RC = rc; }
    std::string StackTrace = "";
    std::string ErrorMessage = "";
    std::string InformationMessage = "";
    std::string WarningMessage = "";
    enum GDIO_RESPONSE_CODE RC = GDIO_RESPONSE_CODE::OK;
    timespec ReceivedTimestamp;
    std::string* GetName() override { return new std::string("GenericResponse"); }
    bool IsError() { return ErrorMessage.size() > 0; }
    bool IsInformation() { return InformationMessage.size() > 0; }
    bool IsWarning() { return WarningMessage.size() > 0; }

    std::map<std::string, HPathVariant*> ReturnedValues = std::map<std::string, HPathVariant*>();
    //MSGPACK_DEFINE_MAP(RC, StackTrace, ErrorMessage, InformationMessage, WarningMessage);
};

/*
class GetObjectValueResponse :
    public IGDIOMessage
{
public:
    GetObjectValueResponse() { std::timespec_get(&ReceivedTimestamp, TIME_UTC); this->MessageType = (int)GDIOMessageType::GetObjectValueResponse; };
    GetObjectValueResponse(GDIO_RESPONSE_CODE rc) : GetObjectValueResponse() { RC = rc; }

    enum GDIO_RESPONSE_CODE RC = GDIO_RESPONSE_CODE::OK;
    timespec ReceivedTimestamp;
    std::string* GetName() override { return new std::string("GetObjectValueResponse"); }
    MSGPACK_DEFINE_MAP(RC);
};
*/



class Evt_EmptyInput :
    public IGDIOMessage
{
public:
    Evt_EmptyInput() {
        this->MessageType = (int)GDIOMessageType::Evt_EmptyInput;
    };
    std::string InputPath = "";
    std::string* GetName() override { return new std::string("Evt_EmptyInput"); }
};


class VectorResponse :
    public GenericResponse
{
public:
    VectorResponse() : GenericResponse()
    {
        this->MessageType = (int)GDIOMessageType::VectorResponse;
    };
    VectorResponse(GDIO_RESPONSE_CODE rc) : VectorResponse() { RC = rc; }
    Vector3* Value3 = NULL;
    Vector2* Value2 = NULL;
    uint64 Value3UTR = 0;
    uint64 Value2UTR = 0;

    std::string* GetName() override { return new std::string("VectorResponse"); }
};



class GetObjectValueResponse :
    public GenericResponse
{
public:
    GetObjectValueResponse() : GenericResponse()
    {
        this->MessageType = (int)GDIOMessageType::GetObjectValueResponse;
    };
    GetObjectValueResponse(GDIO_RESPONSE_CODE rc) : GetObjectValueResponse() { RC = rc; }
   
    HPathVariant* Value = NULL;
    std::string SerializeObjectType = "";
    std::string* GetName() override { return new std::string("GetObjectValueResponse"); }
    //Manual MSGPACK in Serializer. 
};





class GetObjectListResponse :
    public GenericResponse
{
public:
    GetObjectListResponse() : GenericResponse()
    {
        this->MessageType = (int)GDIOMessageType::GetObjectListResponse;
    };
    GetObjectListResponse(GDIO_RESPONSE_CODE rc) : GetObjectListResponse() { RC = rc; }

    std::list<LiteGameObject*> Objects = std::list<LiteGameObject*>();
    std::string* GetName() override { return new std::string("GetObjectListResponse"); }
    //Manual MSGPACK in Serializer. 
};



class Evt_SceneLoaded :
    public IGDIOMessage
{
public:
    std::string SceneName = "";
    Evt_SceneLoaded() {
        this->MessageType = (int)GDIOMessageType::Evt_SceneLoaded;
    };
    std::string* GetName() override { return new std::string("Evt_SceneLoaded"); }
    MSGPACK_DEFINE_MAP(SceneName);
};

class RaycastResponse :
    public GenericResponse
{
public:
    RaycastResponse() : GenericResponse()
    {
        this->MessageType = (int)GDIOMessageType::RaycastResponse;
    };
    RaycastResponse(GDIO_RESPONSE_CODE rc) : RaycastResponse() { RC = rc; }

    std::list<RaycastResult*> RaycastResults = std::list<RaycastResult*>();
    std::string* GetName() override { return new std::string("RaycastResponse"); }
    //Manual MSGPACK in Serializer. 
};


class CaptureScreenshotResponse :
    public GenericResponse
{
public:
    CaptureScreenshotResponse() : GenericResponse()
    {
        this->MessageType = (int)GDIOMessageType::CaptureScreenshotResponse;
    };
    CaptureScreenshotResponse(GDIO_RESPONSE_CODE rc) : CaptureScreenshotResponse() { RC = rc; }

    uint8* ImageData;
    int size = 0;
    std::string ImagePath = "";
    std::string* GetName() override { return new std::string("CaptureScreenshotResponse"); }
    //Manual MSGPACK in Serializer. 
};

MSGPACK_ADD_ENUM(HANDSHAKE_REASON_CODE);
MSGPACK_ADD_ENUM(OBJECT_RESOLUTION);
MSGPACK_ADD_ENUM(GDIO_RESPONSE_CODE);
