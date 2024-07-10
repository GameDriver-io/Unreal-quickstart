// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <msgpack.hpp>

class IGDIOMessage
{
public:
    IGDIOMessage() {}
    virtual ~IGDIOMessage() {}
    int MessageType = 0;
    virtual std::string* GetName() {
        return NULL;
    }
    MSGPACK_DEFINE(MessageType);
};

struct ProtocolMessage {
    ProtocolMessage* clone() const { return new ProtocolMessage(*this); }
    std::string ClientUID;
    std::string RequestId;
    std::string CorrelationId;
    std::shared_ptr<IGDIOMessage> GDIOMsg;
    bool IsAsync;
    timespec Timestamp;
    MSGPACK_DEFINE_MAP(ClientUID, RequestId, CorrelationId, GDIOMsg, IsAsync, Timestamp);
};

enum class GDIOMessageType : std::int64_t
{
    GetClientListRequest = 0,
    HandshakeRequest = 1,
    Ping = 2,
    GetClientListResponse = 3,
    HandshakeResponse = 4,
    Pong = 5,
    Broadcast = 6,
    DirectMessage = 7,
    WaitForObjectRequest = 8,
    WaitForObjectResponse = 9,
    WaitForObjectValueRequest = 10,
    WaitForObjectValueResponse = 11,
    SetTimeScaleRequest = 12,
    SetObjectValueRequest = 13,
    SetInputFieldTextRequest = 14,
    CaptureScreenshotRequest = 15,
    CaptureScreenshotResponse = 16,
    RotateRequest = 17,
    RaycastRequest = 18,
    RaycastResponse = 19,
    NavAgentMoveToPointRequest = 20,
    MouseMoveToObjectRequest = 21,
    MouseMoveRequest = 22,
    MouseDragRequest = 23,
    LoadSceneRequest = 24,
    KeyPressRequest = 25,
    GetObjectValueRequest = 26,
    GetSceneNameRequest = 27,
    GetObjectPositionRequest = 28,
    GetObjectListRequest = 29,
    GetMousePositionRequest = 30,
    ClickObjectRequest = 31,
    ClickRequest = 32,
    CallMethodRequest = 33,
    TransferFileRequest = 34,
    GetObjectInterfacesList = 35,
    GetObjectValueResponse = 36,
    VectorResponse = 37,
    GetObjectListResponse = 38,
    PeekResponse = 39,
    ChangeHookStatusRequest = 40,
    PeekRequest = 41,
    PokeRequest = 42,
    TouchEventRequest = 43,
    TapRequest = 44,
    ObjectDistanceRequest = 45,
    FlushCacheRequest = 46,
    ChangeObjectResolverCacheStateRequest = 47,
    InputManagerStateRequest = 48,
    RegisterCollisionMonitorRequest = 49,
    GetStatisticsRequest = 50,
    UnregisterCollisionMonitorRequest = 51,
    GetGameObjectRequest = 52,
    CreateInputDeviceRequest = 53,
    RemoveInputDevicesRequest = 54,
    MapInputControlPathsUsedRequest = 55,
    CreateInputDeviceFromDescriptionRequest = 56,
    ExecuteScriptRequest = 57,
    ClickUIElementRequest = 58,
    GenericRequest = 59,
    RegisterUnrealCollisionMonitorRequest = 70,
    Evt_EmptyInput = 80,
    Evt_SceneLoaded = 81,
    Evt_SceneInformation = 82,
    Evt_Collision = 83,
    Evt_Recording = 84,
    Evt_UnityLoggedMessage = 85,
    GenericResponse = 99,
};

enum class GDIO_RESPONSE_CODE
{
    OK,
    WARNING,
    EERROR,
    INFORMATION
};

/*
class GenericResponse : public IGDIOMessage
{
public:
    GenericResponse() {};
    std::string StackTrace = "";
    std::string ErrorMessage = "";
    std::string InformationMessage = "";
    std::string WarningMessage = "";
   // GDIO_RESPONSE_CODE RC = GDIO_RESPONSE_CODE::OK;
    bool IsError() { return ErrorMessage.size() > 0; }
    bool IsInformation() { return InformationMessage.size() > 0; }
     bool IsWarning() { return WarningMessage.size() > 0; }

    std::map<std::string, char*>* ReturnedValues;// = new std::map<std::string, double>();
    MSGPACK_DEFINE_MAP(StackTrace, ErrorMessage, InformationMessage, WarningMessage);
};
*/