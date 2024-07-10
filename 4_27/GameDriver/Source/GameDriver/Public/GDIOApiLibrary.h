// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once


#include <InputCoreTypes.h>

#include "GameDriver/UnrealHierarchyPath/include/HierarchyPath/HierarchyPathVM.h"
#include "Protocol/Requests.h"
//#include "Engine/TimerHandle.h" // this worked iuntil I went to 5.1
#include "TimerManager.h"

 class  UGDIOApi : public UObject {
public:
	/// <summary>
	/// This method returns the field or property value of an object. (int, double, string & bool supported)
	/// </summary>
	/// <typeparam name="T">The <see cref="System.Type"/> of the field or property to be inspected.</typeparam>
	/// <param name="hierarchyPath">The HierarchyPath of the object and field/property to be inspected.</param>
	/// <param name="fieldName">The field/property name to retreieve the value for</param>
	/// <param name="value">Out parameter that will contain an object of type T</param>
	/// <returns> True on success, false on error.</returns>
	/// <example> // Searches for an object named 'Player1' and gets the value of a integer field named <i>coins</i>
	/// <code escaped="true">
	/// int numCoins = UGDIOApi::GetObjectFieldValue&lt;int&gt;("/Player1", "coins");
	/// </code> </example>

	template <typename T>
	static bool GetObjectFieldValue(FString hierarchyPath, FString fieldName, T& value);
	/// <summary>
    /// Set the field or property of an object. (int, double, string & bool supported)
    /// </summary>
    /// <param name="hierarchyPath">The HierarchyPath to the object to set the field/property value.</param>
    /// <param name="fieldName">The field or property name to set the value of.</param>
    /// <param name="value">The value to set for the field/property.</param>
    /// <returns> TRUE if the field/property was successfully set to the value.</returns>
    /// <example><code escaped="true">  // Change the newInt field to be 7.
    ///  UGDIOApi::SetObjectFieldValue&lt;int&gt;("//*[@tag='Player1']", "newInt", 7);</code></example>	
	template <typename T>
	static bool SetObjectFieldValue(FString hierarchyPath, FString fieldName, T value);

	/// <summary>
	/// Get the Object Reference matching the provided HierarchyPath argument, or NULL
	/// </summary>
	/// <param name="hierarchyPath"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>
	/// <param name="timeout"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>
	/// <returns> The matching UObject, if it exists.</returns>
	/// <example><code escaped="true">UGDIOApi::GetGameObject("//*[@name='MyObject']")</code></example>
	GAMEDRIVER_API static UObject* GetGameObject(FString hierarchyPath) ;

	/// <summary>
    /// This method returns a TArray of all Unreal UObject matching the passed in HPath.
    /// </summary>
    /// <param name="hierarchyPath">The Hpath to use for the query</param>
	/// <returns> a TArray of UObject* matching the query.</returns>
    /// <example> //Make sure only 1 object matches an HPath
    /// <code escaped="true">
	///TArray<UObject*> objects = UGDIOApi::GetObjectList("//mainCharacter");
	///if (objects.Num() == 1) { return true; }
	///return false;
    /// </code>
    /// </example>
	GAMEDRIVER_API static TArray<UObject*> GetObjectList(FString hierarchyPath);

	/// 
	/// <summary>
	/// Use this function to send arbitrary button states to the game. 
	/// </summary>
	/// <param name="key">FKey indicating which key</param>
	/// <param name="numberOfFrames">The number of frames to press and hold the keys for.</param>
	/// <returns> TRUE if the GameDriver agent successfully processed the request.</returns>
	/// <example><code escaped="true">//Send events for the common W,A keys, maybe as input to a player controller. 
	/// UGDIOApi::KeyPress(new KeyCode[] { KeyCode.W }, 15);
	/// UGDIOApi::KeyPress(new KeyCode[] { KeyCode.A }, 15);
	/// </code></example>

	GAMEDRIVER_API static bool KeyPress(TArray<FKey> keys, int numberOfFrames);
	/// <summary>
	/// Use this function to get the HierarchyPath of any vaid UObject.
	/// </summary>
	/// <param name="obj">The Object you want the HPath of</param>
	/// <param name="type">"Absolute" or "Relative"</param>
	/// <returns>The HierarchyPath of the Object as an FString</returns>
	/// <example><code>
	/// //UObject* object is defined and assigned somewhere....
	/// FString hpath = UGDIOApi::getHierarchyPath(object,"Absolute");</code>
	/// </example>
	GAMEDRIVER_API static FString getHierarchyPath(UObject* obj, FString type); 

	/// <summary>
	/// Use this function to perform in-game mouse-clicks.
	/// </summary>        
	/// <param name="MouseButton"> The mouse button to use for the click operation.</param>            
	/// <param name="location"> The <see cref="Vector2"/> position to perform the mouse click.</param>
	/// <param name="numberOfFrames"> The number of frames to click the specific position.</param>
	/// <returns> TRUE if the click was able to be simulated</returns>
	/// <example><code escaped="true">UGDIOApi::Click(MouseButtons.LEFT, new FVector2D (0, 0), 30); //Clicks the left mouse button at 0,0 for 30 frames</code></example>

	GAMEDRIVER_API static bool Click(FKey MouseButton, FVector2D location, int numberOfFrames);
	/// <summary>
	/// Use this function to interact with an in-game object using mouse-clicks.
	/// </summary>        
	/// <param name="buttonId"> The fKey for the mouse button to use for the click operation.</param>               
	/// <param name="HPath"> The HierarchyPath for the GameObject to perform a click on.</param>
	/// <param name="frameCount"> The number of frames to click the specific object.</param>
	/// <returns> TRUE if the HPath resolved and the click was able to be simulated</returns>
	/// <example><code escaped="true">
	/// UGDIOApi::ClickObject(MouseButtons.LEFT, "//*[@name='Cube']", 30);</code></example>
	GAMEDRIVER_API static bool ClickObject(FKey MouseButton, FString HPath, int numberOfFrames);
	/// <summary>
	/// Use this function to interact with an in-game object using mouse-clicks.
	/// </summary>        
	/// <param name="MouseButton"> The fKey for the mouse button to use for the click operation.</param>               
	/// <param name="object"> A refernece to the object to perform a click on </param>
	/// <param name="frameCount"> The number of frames to click the specific object.</param>
	/// <returns> TRUE if the click was able to be simulated</returns>
	/// <example><code escaped="true">
	/// //UObject* object is defined and assigned somewhere....
	/// UGDIOApi::ClickObject(MouseButtons.LEFT, object, 30);</code></example>
	GAMEDRIVER_API static bool ClickObject(FKey MouseButton, UObject* object, int numberOfFrames);
	/// <summary>
	/// Move the mouse to the destination vector.
	/// </summary>
	/// <param name="destination">Destination vector to move the mouse to.</param>
	/// <param name="frameCount">The number of frames to complete the operaiton over.</param>
	/// <param name="origin">The origin to start the mouse move operation.  If null, the mouse move operation will begin at the current position of Input.mousePosition.</param>
	/// <returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>
	/// <example><code escaped="true">//First get the position of an object named "Cube" on screen
	/// FVector2D dest(1080, 100);
	/// FVector2D origin(1080, 100);
	/// UGDIOApi::MouseMovetoPoint(dest, 1000, origin);
	/// </code></example>
	GAMEDRIVER_API static bool MouseMovetoPoint(FVector2D destination, int frameCount, FVector2D origin);
	/// <summary>
	/// Move the mouse to the center of a specific object, identified by the HPath.
	/// </summary>
	/// <param name="HPath">The HierarchyPath to move the mouse pointer to.</param>
	/// <param name="frameCount">The number of frames to compelte the mouse move over.</param>
	/// <returns> TRUE if the HPath is valid</returns>
	/// <example><code escaped="true">//Moves the mouse to the center of the object named "Cylinder" over 300 frames
	/// UGDIOApi::MouseMovetoObject("//Cylinder", 300);
	///</code></example>
	GAMEDRIVER_API static bool MouseMovetoObject(FString HPath, int frameCount);
	/// <summary>
	/// Move the mouse to the center of a specific object.
	/// </summary>
	/// <param name="obj">The obj to move the mouse pointer to.</param>
	/// <param name="frameCount">The number of frames to complete the mouse move over.</param>
	/// <returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>
	/// <example><code escaped="true">//Moves the mouse to the center of the object named "Cylinder" over 300 frames
	/// //UObject* object is defined and assigned somewhere....
	/// UGDIOApi::MouseMovetoObject(object, 300);
	///</code></example>
	GAMEDRIVER_API static bool MouseMovetoObject(UObject* obj, int frameCount);
	/// <summary>
	/// Perform a mouse drag operation.
	/// </summary>
	/// <param name="button">The mouse button as an FKey</param>
	/// <param name="destination">The destination vector to drag the mouse to.</param>
	/// <param name="frameCount">The number of frames taken to complete the drag operation.</param>
	/// <param name="origin">The origin to start the drag operation.  If null, the mouse drag operation will begin at the current position of Input.mousePosition.</param>
	/// <param name="waitForEmptyInput">Wait for the empty input event to be returned from the agent before returning from the method call.</param>
	/// <returns> TRUE if the requests was successfully processed by the GameDriver agent.</returns>
	/// <example><code escaped="true">//Drags the left mouse button to the position 180, 0 on the screen over 100 frames
	/// FVector2D origin(100, 100);
	/// FVector2D dest(180, 500);
	/// UGDIOApi::MouseDrag(EKeys::LeftMouseButton, dest, 100, origin);
	/// </code></example>
	GAMEDRIVER_API static bool MouseDrag(FKey MouseButton,FVector2D destination, int frameCount, FVector2D origin);
	/// <summary>
	/// Return the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.
	/// </summary>
	/// <param name="HPath">The HierarchyPath of the object to return the position of.</param>
	/// <param name="coordinateSpace">The coorindate space conversion to perform on the position before returning it. See <see cref="gdio.common.objects.CoordinateConversion"/> for more information.</param>
	/// <param name="valid">out param set to true if the HPath resolves and the call is possible.</param>
	/// <returns> The Vector3 position of the specific object.</returns>
	/// <example><code escaped="true"> 
	/// bool wasValid = false;
	/// FVector pos = UGDIOApi::GetObjectPosition("//ThirdPersonCharacter_167", CoordinateConversion::Local, wasValid);
	///	if (wasValid) {
	///	UE_LOG(LogGameDriver, Display, TEXT("%f %f %f"), pos.X, pos.Y, pos.Z);
	///}</code></example>
	GAMEDRIVER_API static FVector GetObjectPosition(FString HPath, CoordinateConversion coordinateSpace, bool& valid);
	/// <summary>
	/// Return the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.
	/// </summary>
	/// <param name="HPath">The HierarchyPath of the object to return the position of.</param>
	/// <param name="coordinateSpace">The coorindate space conversion to perform on the position before returning it. See <see cref="gdio.common.objects.CoordinateConversion"/> for more information.</param>
	/// <param name="valid">out param set to true if the HPath resolves and the call is possible.</param>
	/// <returns> The Vector3 position of the specific object.</returns>
	/// <example><code escaped="true"> 
	/// bool wasValid = false;
	/// //UObject* object is defined and assigned somewhere....
	/// FVector pos = UGDIOApi::GetObjectPosition(object, CoordinateConversion::Local, wasValid);
	///	if (wasValid) {
	///	UE_LOG(LogGameDriver, Display, TEXT("%f %f %f"), pos.X, pos.Y, pos.Z);
	///}</code></example>
	GAMEDRIVER_API static FVector GetObjectPosition(UObject* obj, CoordinateConversion coordinateSpace, bool& valid);

	/// <summary>
	/// Use this function to simulate a KeyAxis float input (axis). Pass 0 to stop sending the event.
	/// </summary>
	/// 
	///
	/// <param name="key"> The FKey that you want to iput a value for</param>    
	/// <param name="key"> The Value you want to inject</param>    
	/// <example><code escaped="true"> 
	/// UGDIOApiUGDIOApi::FloatInputEvent("OculusTouch_Right_Thumbstick_Y", 0.75f);
	/// //wait
	/// UGDIOApiUGDIOApi::FloatInputEvent("OculusTouch_Right_Thumbstick_Y", 0f);
	/// </code></example>
	GAMEDRIVER_API static bool FloatInputEvent(FKey key, double value);

private:
	static HPathVariant* ResolveOneObjectOrNull(FString hierarchyPath) ;
	GAMEDRIVER_API static int milisecondsWait;
	FTimerHandle TimerHandle_GDIOAPI;
};


