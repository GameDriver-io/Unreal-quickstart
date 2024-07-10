// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <msgpack.hpp>


class Color {
public:
    Color() { r = 0; g = 0; b = 0; a = 0; };
    Color(float X, float Y, float Z, float W) { r = X; g = Y; b = Z; a = W; };
    Color(FQuat q) { r = q.X; g = q.Y; b = q.Z; a = q.W; };
    float r;
    float g;
    float b;
    float a;
    MSGPACK_DEFINE_MAP(r, g, b, a);
    FLinearColor* ToLinearColor() { return new FLinearColor(r, g, b, a); }
};

class Vector3 {
public:
	Vector3() { x = 0; y = 0; z = 0; };
	Vector3(float X, float Y, float Z) { x = X; y = Y; z = Z; };
    Vector3(FVector a) { x = a.X; y = a.Y; z = a.Z; };
	float x;
	float y;
	float z;
	MSGPACK_DEFINE_MAP(x, y, z);
	FVector* ToFVector() { return new FVector(x, y, z); }
};



class Vector2 {
public:
	Vector2() { x = 0; y = 0; };
	Vector2(float X, float Y) { x = X; y = Y; };
    Vector2(FVector2D a) { x = a.X; y = a.Y;  };
	float x;
	float y;

	MSGPACK_DEFINE_MAP(x, y);
	FVector2D* ToFVector2D() { return new FVector2D(x, y); }
};


class Quaternion {
public:
	Quaternion() { x = 0; y = 0; z = 0; w = 0; };
	Quaternion(float X, float Y, float Z, float W) { x = X; y = Y; z = Z; w = W; };
    Quaternion(FQuat q) { x = q.X; y = q.Y; z = q.Z; w = q.W; };
	float x;
	float y;
	float z;
	float w;
	MSGPACK_DEFINE_MAP(x, y, z,w);
	FQuat* ToQuat() { return new FQuat(x, y, z, w); }
};

class Transform
{
    public:
        Transform() {};
        Transform(FQuat rot, FVector pos, FVector scale) { localScale = Vector3(scale); position = Vector3(pos); rotation = Quaternion(rot); };
	//int childCount;
	//Vector3* eulerAngles = NULL;
	//Vector3* forward = NULL;
	//bool hasChanged;
	//int hierarchyCapacity;
	//int hierarchyCount;
	////Vector3* localEulerAngles = NULL;
	//Vector3* localPosition = NULL;
	//Quaternion* localRotation = NULL;
	Vector3 localScale = Vector3();
	//Matrix4x4 localToWorldMatrix;
	//Vector3* lossyScale = NULL;
	//Transform* pparent = NULL;//won't let me call it paretn...
	Vector3 position = Vector3();
	//Vector3* right = NULL;
	//Transform* root = NULL;
	Quaternion rotation = Quaternion();
	//Vector3* up = NULL;
	//Matrix4x4 worldToLocalMatrix;
    MSGPACK_DEFINE_MAP(rotation, localScale, position);
    FTransform* ToTransform() {
        return new FTransform(*rotation.ToQuat(),*position.ToFVector(),*localScale.ToFVector()); }
};

class LiteObject
{
public:
    /// <summary>
    /// The name of the object.
    /// </summary>
    std::string name;
    /// <summary>
    /// The instanceId of the object.
    /// </summary>
    int instanceId;
    //MSGPACK_DEFINE_MAP(name, instanceId);//needs to be implemented in decendants. 
};

class LiteGameObject;

class LiteComponent : public LiteObject
{
public:
   
    /// <summary>
    /// The lite version of the gameObject the component is attached to.
    /// </summary>
    LiteGameObject* gameObject;
    /// <summary>
    /// The tag of the gameObject
    /// </summary>
    std::string tag = "";
    /// <summary>
    /// The transform attached to the gameObject.
    /// </summary>
    FTransform transform;
    /// <summary>
    /// The Type fullname of the class.
    /// </summary>
    std::string  typeFullName = "";
    /// <summary>
    /// The HierarchyPath of the component.
    /// </summary>
    std::string  hierarchyPath = "";
    MSGPACK_DEFINE_MAP(name, instanceId, tag, typeFullName, hierarchyPath);
};

class LiteGameObject : public  LiteObject
{
public:
    /// <summary>
    /// The Tag of the object.
    /// </summary>
    std::string  tag = "";
    /// <summary>
    /// A boolean indicating whether the object is active in the scene.
    /// </summary>
    bool activeSelf = false;
    /// <summary>
    /// The Name of the Scene.
    /// </summary>
    std::string  sceneName = "";
    /// <summary>
    /// The Path of the Scene.
    /// </summary>
    std::string  scenePath = "";
    /// <summary>
    /// The Scene ID.
    /// </summary>
    int sceneId = -1;
    /// <summary>
    /// The Hash Code of the object.
    /// </summary>
    int hashCode = -1;
    /// <summary>
    /// The Hash Code of the Parent object.
    /// </summary>
    int parentHashCode = -1;
    /// <summary>
    /// The Absolute Position of the object.
    /// </summary>
    Vector3 position = Vector3();
    /// <summary>
    /// The Local Position of the object.
    /// </smmary>
    Vector3 localPosition = Vector3();
    /// <summary>
    /// The Rotation of the object.
    /// </summary>
    Quaternion rotation = Quaternion();
    /// <summary>
    /// The Full Type the object.
    /// </summary>
    std::string  typeFullName = "";
    /// <summary>
    /// The HierarchyPath to the GameObject.
    /// </summary>
    std::string hierarchyPath = "";
    /// <summary>
    /// A list of the Component Types associated with the object.
    /// </summary>
    std::list<LiteComponent> Components = std::list<LiteComponent>();
    /// <summary>
    /// Position, rotation, and scale of the object.
    /// </summary>
    Transform transform;
   MSGPACK_DEFINE_MAP(name,instanceId,tag,activeSelf,sceneName,scenePath,sceneId, hashCode,parentHashCode, position, localPosition,rotation,typeFullName, hierarchyPath, Components);
};


class RaycastResult
{
public:
    RaycastResult() {};
    /// <summary>
    /// The Type of object hit by the raycase (e.g. Physics).
    /// </summary>
    std::string type = "";
    /// <summary>
    /// The Tag of the object hit by the raycast.
    /// </summary>
    std::string tag = "";
    /// <summary>
    /// The Name of the object hit by the raycast.
    /// </summary>
    std::string name = "";
    /// <summary>
    /// Boolean of whether the object hit by the raycast has a Button component.
    /// </summary>
    bool hasButton = false;
    /// <summary>
    /// The impact point in world space where the ray hit the collider.
    /// </summary>
    Vector3  point = Vector3();
    /// <summary>
    /// The name of the object class (e.g. UnityEngine.GameObject)
    /// </summary>
    std::string typeFullName = "";
    MSGPACK_DEFINE_MAP(type, tag, name, hasButton, point, typeFullName);
};

class Hit
{
public:
    Hit() {};
    /*Hit(FHitResult x) {
        Location = Vector3(x.Location);
        Normal = Vector3(x.Normal);
        //gameObject = *(ToLiteGameObject(x.GetActor(), true));
        BlockingHit = x.bBlockingHit;
    };
    */
    /// <summary>
    /// THe HierarchyPath of the GameObject that recieved the OnCollision event
    /// </summary>
    std::string HierarchyPath = "";
    /// <summary>
    /// The timestamp of when the collision occured
    /// </summary>
    //public DateTime Timestamp = DateTime.Now;
    /// <summary>
    /// The enumeration value of the collision type <see cref="COLLISION_EVENT"/>
    /// </summary>
    int CollisionType = 0;
    /// <summary>
    /// The location in world space where the moving shape would end up against the impacted object, if there is a hit. 
    /// </summary>
    Vector3 Location = Vector3();
    /// <summary>
    /// Normal of the hit in world space, for the object that was swept.
    /// </summary>
    Vector3 Normal = Vector3();
    /// <summary>
    /// The LiteGameObject of the collision, <see cref="LiteGameObject"/>
    /// </summary>
    LiteGameObject gameObject;
    /// <summary>
    /// PrimitiveComponent hit by the trace.
    /// </summary>
    bool BlockingHit;
    /// <summary>
    /// If this test started in penetration (bStartPenetrating is true) and a depenetration vector can be computed, this value is the distance along Normal that will result in moving out of penetration.
    /// </summary>
    float PenetrationDepth;
  MSGPACK_DEFINE_MAP(HierarchyPath,CollisionType,Location, Normal, gameObject, BlockingHit,PenetrationDepth);
};

class GameConnectionDetails
{
public:
    GameConnectionDetails() {};
    /// <summary>
    /// The <see cref="System.Net.IPAddress"/> of the connected game./>
    /// </summary>
    std::string Addr = "";
    /// <summary>
    /// The port number of the connected game.
    /// </summary>
    int Port = 0;
    /// <summary>
    /// The Application.DataPath of the connected game.
    /// </summary>
    std::string GamePath = "";
    /// <summary>
    /// Boolean value if the game is running in an Unity editor instance.
    /// </summary>
    bool IsEditor = false;
    /// <summary>
    /// The Application.Platform of the connected game.
    /// </summary>
    std::string Platform = "";
    MSGPACK_DEFINE_MAP(Addr, Port, GamePath, IsEditor, Platform);
};

class HPathObject {
public:
    std::string HierarchyPath = "";
    MSGPACK_DEFINE_MAP(HierarchyPath);
};