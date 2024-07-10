// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "ProtocolMessage.h"
#include <GameDriver/UnrealHierarchyPath/include/HierarchyPath/HierarchyPathVM.h>
#include <GDIOTypes.h>

#include <iostream>
#include "time.h"
#include <msgpack.hpp>




class HandshakeRequest :
    public IGDIOMessage
{    
public:
    HandshakeRequest() {
        this->MessageType = (int)GDIOMessageType::HandshakeRequest;
    };
    HandshakeRequest(std::string protocolVersion, std::string clientUID = "");
    std::string ProtocolVersion = "2024.04.30";//"2.03.11.2024";
    std::string ClientUID;
    uint64 channel = 0;
    bool Recording = false;
   
    std::string* GetName() override { return new std::string("HandshakeRequest"); }
    MSGPACK_DEFINE_MAP(ProtocolVersion,ClientUID,Recording);
};

class Ping :
    public IGDIOMessage
{
public:
    Ping() {
    };
    timespec    CreatedTimestamp;
    std::string* GetName() override { return new std::string("Ping"); }
    MSGPACK_DEFINE_MAP(CreatedTimestamp);
};

class WaitForObjectRequest :
    public IGDIOMessage
{
public:
    WaitForObjectRequest() {};    
    std::string HierarchyPath = "";
    int Timeout = 30;

    std::string* GetName() override { return new std::string("WaitForObjectRequest"); }
    MSGPACK_DEFINE_MAP(HierarchyPath, Timeout);
};


class WaitForObjectValueRequest :
    public IGDIOMessage
{
public:
    WaitForObjectValueRequest() {};
    std::string HierarchyPath = "";
    std::string ObjectFieldOrPropertyName = "";
    std::string ValueType = "";
    HPathVariant* Value=NULL;
    int Timeout = 30;
    //serializers?

    std::string* GetName() override { return new std::string("WaitForObjectValueRequest"); }
    MSGPACK_DEFINE_MAP(HierarchyPath, Timeout, ObjectFieldOrPropertyName);
};

class GetStatisticsRequest :
    public IGDIOMessage
{
public:
    GetStatisticsRequest() {};
    std::string HierarchyPath = "";

    std::string* GetName() override { return new std::string("GetStatisticsRequest"); }
    MSGPACK_DEFINE_MAP(HierarchyPath);
};

class KeyPressRequest : public IGDIOMessage
{
public:
    std::list<int> KeyCodes = std::list<int>();
    std::list<int> Modifiers = std::list<int>();
    uint64 NumberOfFrames = 0;

    //  std::string GetHandlerClass()
     //{
    //     return GetName().Substring(0, GetName().Length - "Request".Length);
     //}

    std::string* GetName() override {
        return new std::string("KeyPressRequest");

    }
    MSGPACK_DEFINE_MAP(KeyCodes, Modifiers, NumberOfFrames);
};

class ClickRequest : public IGDIOMessage
{
public:
    bool IsDoubleClick = false;
    int64 FrameCount = 5;
    int MouseButtonId = 0;
    float X = 0;
    float Y = 0;
    float Scroll_X;
    float Scroll_Y;
    std::string HierarchyPath = "";
    std::string CameraHierarchyPath = "";
    //int[] modifiers.

    std::string* GetName() override {
        return new std::string("ClickRequest");

    }
    MSGPACK_DEFINE_MAP(IsDoubleClick, FrameCount, MouseButtonId,X,Y,Scroll_X,Scroll_Y, HierarchyPath,CameraHierarchyPath);
};

class MouseMoveRequest : public IGDIOMessage
{
public:
    Vector2* Destination = NULL;
    Vector2* Origin = NULL;
    uint64 FrameCount = 0;


    std::string* GetName() override {
        return new std::string("MouseMoveRequest");

    }
    MSGPACK_DEFINE_MAP(FrameCount);
};

class MouseMoveToObjectRequest : public IGDIOMessage
{
public:
    std::string Object_HierarchyPath = "";
    int Timeout = 30;
    int FrameCount = 5;
    bool WaitForObject = true;

    std::string* GetName() override {
        return new std::string("MouseMoveToObjectRequest");

    }
    MSGPACK_DEFINE_MAP(Object_HierarchyPath, Timeout, FrameCount, WaitForObject);
};

class MouseDragRequest : public IGDIOMessage
{
public:
    Vector2* Destination = NULL;
    Vector2* Origin = NULL;
    uint64 FrameCount = 0;
    int ButtonId = 0;

    std::string* GetName() override {
        return new std::string("MouseDragRequest");

    }
    MSGPACK_DEFINE_MAP(FrameCount, ButtonId);
};


class ClickObjectRequest : public IGDIOMessage
{
public:
    int MouseButtonId = 0;
    std::string HierarchyPath = "";
    std::string CameraHierarchyPath = "";
    bool isDoubleClick=false;
    int FrameCount = 5;

    std::string* GetName() override {
        return new std::string("ClickObjectRequest");

    }
    MSGPACK_DEFINE_MAP(MouseButtonId, HierarchyPath,CameraHierarchyPath,isDoubleClick,FrameCount);
};



class TouchEventRequest : public IGDIOMessage
{
public:
    int FingerId = 0;
    float AltitudeAngle = 0;
    float AzmulthAngle = 0;
    float Pressure = 1.0f;
    float MaximumPossiblePressure = 1.0f;
    Vector2* StartPosition = NULL;
    Vector2* DestinationPosition = NULL;
    int TapCount;
    float Radius = 20.0f;
    int64 FrameCount = 5;

    std::string* GetName() override {
        return new std::string("TouchEventRequest");

    }
    MSGPACK_DEFINE_MAP(FingerId,AltitudeAngle,AzmulthAngle,Pressure,MaximumPossiblePressure, TapCount, Radius, FrameCount);
};

class TapEventRequest : public IGDIOMessage
{
public:
    int TapCount = 1;
    uint64 FrameCount = 5;
    float X = 0;
    float Y = 0;
    std::string HierarchyPath = "";
    std::string HierarchyPathDevice = "";
    std::string CameraHierarchyPath = "";
    uint64 MoveToPressDelay = 10;
    uint64 FrameCountButtonPress = 0;
    std::string* GetName() override {
        return new std::string("TapEventRequest");

    }
    MSGPACK_DEFINE_MAP(TapCount, FrameCount,X, Y, HierarchyPath, HierarchyPathDevice, CameraHierarchyPath, MoveToPressDelay, FrameCountButtonPress);
};


enum class CoordinateConversion
{
    /// <summary>
    /// None returns the gameObject.transform.position without any conversion
    /// </summary>
    None,
    /// <summary>
    /// Local returns the gameObject.transform.localposition without any conversion
    /// </summary>
    Local,
    /// <summary>
    /// WorldToScreenPoint returns the coordinates of the object transformed from World-To-Screen by the specified Camera.  The default is Camera.main.
    /// </summary>
    WorldToScreenPoint,
    /// <summary>
    /// WorldToViewPortPoint returns the coordinates of the object in the screen space of the specified Camera.  The default is Camera.main.
    /// </summary>
    WorldToViewportPoint,
    /// <summary>
    /// ScreenToWorldPoint returns the coordinates of the object in the world space of the specified Camera.  The default is Camera.main.
    /// </summary>
    ScreenToWorldPoint,
    /// <summary>
    /// ScreenToViewPortPoint returns the coordinates of the object in the viewport space of the specified Camera.  The default is Camera.main.
    /// </summary>
    ScreenToViewportPoint,
    /// <summary>
    /// ScreenToWorldPoint returns the coordinates of the object in the world space of the specified Camera.  The default is Camera.main.
    /// </summary>
    ViewportToWorldPoint,
    /// <summary>
    /// ScreenToViewPortPoint returns the coordinates of the object in the viewport space of the specified Camera.  The default is Camera.main.
    /// </summary>
    ViewportToScreenPoint
};

class GetObjectPositionRequest : public IGDIOMessage
{
public:

    std::string ObjectHierarchyPath = "";
    std::string CameraHierarchyPath = "";
    int SpaceConversion = 0;
    std::string* GetName() override {
        return new std::string("GetObjectPositionRequest");

    }
    MSGPACK_DEFINE_MAP(ObjectHierarchyPath, CameraHierarchyPath, SpaceConversion);
};

class GetObjectValueRequest : public IGDIOMessage
{
public:
    std::string HierarchyPath = "";
    std::string ObjectFieldOrPropertyName = "";
    std::string TypeFullName = "";

    std::string* GetName() override {
        return new std::string("GetObjectValueRequest");
    }
    MSGPACK_DEFINE_MAP(HierarchyPath, ObjectFieldOrPropertyName, TypeFullName);
};


class InputManagerStateRequest : public IGDIOMessage 
{
public:
    std::string IdName = "";
    uint64 NumberOfFrames = 0;
    int InputType = 0; // 0 == Button, 1 == Axis, 2 == Mouse Button, 3 == Input Plugin ButtonPress, 4 == Input Plugin AxisPress, 5 == Vector2, 6 == Vector3, 7 == Quaternion, 8 == Integer
    float ChangeValue = 0.0f;
    Vector2 *vector2Val = NULL;
    Vector3 *vector3Val = NULL;
//    Quaternion *quaternionVal = NULL;
    std::vector<Quaternion*>* quaternionList = NULL;
    std::string* GetName() override {
        return new std::string("InputManagerStateRequest");

    }
    MSGPACK_DEFINE_MAP(IdName,NumberOfFrames,InputType,ChangeValue);
};

class CreateInputDeviceRequest : public IGDIOMessage
{
public:
    std::string DeviceType = "";
    std::string DeviceName = "";
    //std::string[] DeviceTags;

    std::string* GetName() override {
        return new std::string("CreateInputDeviceRequest");
    }
    MSGPACK_DEFINE_MAP(DeviceType,DeviceName);
};


class RemoveInputDevicesRequest : public IGDIOMessage
{
public:
    std::string* GetName() override {
        return new std::string("RemoveInputDevicesRequest");
    }
};


class GetObjectListRequest : public IGDIOMessage
{
public:
    bool IncludeHPath = false;
    std::string HierarchyPath = "";

    std::string* GetName() override {
        return new std::string("GetObjectListRequest");
    }
    MSGPACK_DEFINE_MAP(IncludeHPath, HierarchyPath);
};


class SetObjectValueRequest : public IGDIOMessage
{
public:
    int Timeout = 30;
    std::string HierarchyPath = "";
    std::string ObjectFieldOrPropertyName = "";
    bool WaitForObject = true;
    HPathVariant* Value = NULL;
    bool CustomSerialization = false;
    std::string SerializeObjectType = "";
   // public Type Serializer = null;

    std::string* GetName() override {
        return new std::string("SetObjectValueRequest");
    }
    MSGPACK_DEFINE_MAP(Timeout, HierarchyPath, ObjectFieldOrPropertyName, WaitForObject,CustomSerialization,SerializeObjectType);
};


class CallMethodRequest : public IGDIOMessage
{
public:
    std::string HierarchyPath = "";
    std::string MethodName = "";
    //std::vector<SerializedObject> Arguments2;
    std::vector<HPathVariant*> Arguments;
    std::string* GetName() override {
        return new std::string("CallMethodRequest");
    }
    MSGPACK_DEFINE_MAP(HierarchyPath, MethodName);
};

class LoadSceneRequest : public IGDIOMessage
{
public:
    std::string SceneName = "";
   
    std::string* GetName() override {
        return new std::string("LoadSceneRequest");
    }
    MSGPACK_DEFINE_MAP(SceneName);
};

class GetSceneNameRequest : public IGDIOMessage
{
public:
    std::string* GetName() override {
        return new std::string("GetSceneNameRequest");
    }
};


class ObjectDistanceRequest : public IGDIOMessage
{
public:
    std::string ObjectA_HierarchyPath = "";
    std::string ObjectB_HierarchyPath = "";

    std::string* GetName() override {
        return new std::string("ObjectDistanceRequest");
    }
    MSGPACK_DEFINE_MAP(ObjectA_HierarchyPath, ObjectB_HierarchyPath);
};

class RotateRequest : public IGDIOMessage
{
public:
    std::string HierarchyPath = "";
    bool WaitForObject = true;
    int Timeout = 30;
    Quaternion* Quant = NULL;
    Vector3* Eulers = NULL;
    float XAngle = 0;
    float YAngle = 0;
    float ZAngle = 0;
    bool useXYZ = false;
    Vector3* Axis = NULL;
    float Angle = 0;
    std::string* GetName() override {
        return new std::string("RotateRequest");
    }
    MSGPACK_DEFINE_MAP(HierarchyPath, WaitForObject, Timeout);
};


class RaycastRequest : public IGDIOMessage
{
public:
    Vector3* RaycastPoint = NULL;
    std::string Camera_HierarchyPath = "";
    std::string* GetName() override {
        return new std::string("RaycastRequest");
    }
    MSGPACK_DEFINE_MAP(Camera_HierarchyPath);
};

class CaptureScreenshotRequest : public IGDIOMessage
{
public:
    bool StoreInGameFolder = false;
    std::string Filename = "";
    int SuperSize = 1;
    int Mode = 1;//left eye?
    std::string* GetName() override {
        return new std::string("CaptureScreenshotRequest");
    }
    MSGPACK_DEFINE_MAP(StoreInGameFolder, Filename, SuperSize, Mode);
};

class NavAgentMoveToPointRequest : public IGDIOMessage
{
public:
    Vector3* Point = NULL;
    std::string NavAgent_HierarchyPath = "";
    std::string NavMesh_HierarchyPath = "";
    std::string* GetName() override {
        return new std::string("NavAgentMoveToPointRequest");
    }
    MSGPACK_DEFINE_MAP(NavAgent_HierarchyPath, NavMesh_HierarchyPath);
};
class RegisterUnrealCollisionMonitorRequest : public IGDIOMessage
{
public:
    std::string HierarchyPath = "";
    int hitType = 0;
    std::string* GetName() override {
        return new std::string("RegisterUnrealCollisionMonitorRequest");
    }
    MSGPACK_DEFINE_MAP(HierarchyPath, hitType);
};

class UnregisterCollisionMonitorRequest : public IGDIOMessage
{
public:
    std::string HierarchyPath = "";
    std::string* GetName() override {
        return new std::string("UnregisterCollisionMonitorRequest");
    }
    MSGPACK_DEFINE_MAP(HierarchyPath);
};


class ChangeObjectResolverCacheStateRequest : public IGDIOMessage
{
public:
    bool STATE = 0;
    std::string* GetName() override {
        return new std::string("ChangeObjectResolverCacheStateRequest");
    }
    MSGPACK_DEFINE_MAP(STATE);
};

class SetTimeScaleRequest : public IGDIOMessage
{
public:
    float Value = 0;
    std::string* GetName() override {
        return new std::string("SetTimeScaleRequest");
    }
    MSGPACK_DEFINE_MAP(Value);
};

class GenericRequest : public IGDIOMessage
{
public:
    std::map<std::string, HPathVariant*> Arguments = std::map<std::string, HPathVariant*>();
    std::string APIName = "";
    std::string* GetName() override {
        return new std::string("GenericRequest");
    }
    MSGPACK_DEFINE_MAP(APIName);
    //Manually msgunpack the arguments.  
};