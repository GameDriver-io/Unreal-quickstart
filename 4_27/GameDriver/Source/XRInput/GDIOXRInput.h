// Copyright GameDriver, Inc. All Rights Reserved.

#pragma once

#include <InputCoreTypes.h>
#include "Runtime/Launch/Resources/Version.h"

#include "XRMotionControllerBase.h"

#include "IInputDevice.h"
#include "IInputDeviceModule.h"
#include "IXRTrackingSystem.h"

#include "IInputDeviceModule.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "InputAction.h"

GDIOXRINPUT_API DECLARE_LOG_CATEGORY_EXTERN(LogGameDriverXR, Log, All);

class FTCPServer;

struct  guiMemory {
	int32 port;
	int32 numConnections;
	bool licenceValid;
	int32 daysLeft;
	bool cacheEnabled;
	UWorld* World = NULL;
	FTCPServer* Server = NULL;
	int32 x;
	int32 y;
	bool showGUI;
};


class FGdioHMD;

enum InputActionState {
	IDLE,
	PRESSED,
	RELEASED,
	MOVED,
	REPEAT
};


struct InputValue {
	InputActionState State;
	FVector Value;
	EInputActionValueType Type;
	UInputAction *Action;
};


class GDIOAgent;

/** Input device to simulate input */
class FBasicStateManagement : public IInputDevice, public TSharedFromThis<FBasicStateManagement>
{
public:
	GDIOXRINPUT_API FBasicStateManagement()
	{ };
	GDIOXRINPUT_API ~FBasicStateManagement();
	// IInputDevice overrides
	GDIOXRINPUT_API void Tick(float DeltaTime) override;
	GDIOXRINPUT_API void SendControllerEvents() override;
	GDIOXRINPUT_API void SetController(APlayerController* PlayerController);
	GDIOXRINPUT_API void ProcessInputFloat(FKey ip, float value, APlayerController* pc);
	GDIOXRINPUT_API void SetValueForKey(FKey ip, float value, EInputEvent state);
	GDIOXRINPUT_API void ProcessInputVector2D(FKey ip, FVector2D* value, APlayerController* pc);
	GDIOXRINPUT_API void ProcessInputVector3D(FKey ip, FVector* value, APlayerController* pc);
#if ENGINE_MAJOR_VERSION == 4
	static  const UInputAction* findAction(FString needle);
#else
	static  TObjectPtr<const UInputAction>  findAction(FString needle);
#endif

#if ENGINE_MAJOR_VERSION == 4
	TMap<FKey, const UInputAction*> mappings;
#else
	TMap<FKey, TObjectPtr<const UInputAction>> mappings;
#endif

private:
	TMap <FKey, InputValue> keyStates;

	// Inherited via IInputDevice
	GDIOXRINPUT_API void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;
	GDIOXRINPUT_API bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
	GDIOXRINPUT_API void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;
	GDIOXRINPUT_API void SetChannelValues(int32 ControllerId, const FForceFeedbackValues& values) override;
	APlayerController* PlayerController = nullptr;
};

class GDIOXRInput : public IInputDevice,  
	public FXRMotionControllerBase,

	public TSharedFromThis<GDIOXRInput>//,  public TSharedFromThis<GDIOXRInput>//, public TSharedFromThis<GDIOXRInput>//, public FXRMotionControllerBase, public IHapticDevice
	{

		//friend class FOculusHandTracking;

	public:
		GDIOXRINPUT_API GDIOXRInput(FGdioHMD* hmd) {
			HMD = hmd; 
			keyStates	= new FBasicStateManagement();
		}
		
		// Inherited via IInputDevice
		GDIOXRINPUT_API void Tick(float DeltaTime) override;
		GDIOXRINPUT_API void SendControllerEvents() override;

		GDIOXRINPUT_API void setHMD(FGdioHMD* hmd) { HMD = hmd; }
		GDIOXRINPUT_API void Reset();
		GDIOXRINPUT_API void SetController(APlayerController* pc);
		GDIOXRINPUT_API void ProcessInputFloat(FKey ip, float value, APlayerController* pc);
		GDIOXRINPUT_API void SetValueForKey(FKey ip, float value, EInputEvent state);
		GDIOXRINPUT_API void ProcessInputVector2D(FKey ip, FVector2D* value, APlayerController* pc);
		GDIOXRINPUT_API void ProcessInputVector3D(FKey ip, FVector* value, APlayerController* pc);
		//GDIOXRInput(GDIOXRInputPlugin* InPlugin) : ThePlugin(InPlugin) { }
		/** Constructor that takes an initial message handler that will receive motion controller events */
		//GDIOXRInput(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler);

		//GDIOXRINPUT_API void SetMessageHandler(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;

		/** Clean everything up */
		virtual ~GDIOXRInput();

		static void PreInit();

		/** Loads any settings from the config folder that we need */
		static void LoadConfig();


		
		virtual void SetMessageHandler(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;
		virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
		virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;
		virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues& Values) override;
		virtual bool SupportsForceFeedback(int32 ControllerId) override {
			return false;
		};

		GDIOXRINPUT_API virtual FName GetMotionControllerDeviceTypeName() const override;
		// IMotionController overrides
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
		GDIOXRINPUT_API virtual bool GetControllerOrientationAndPosition(const int32 ControllerIndex, const FName MotionSource, FRotator& OutOrientation, FVector& OutPosition, float) const override;
		GDIOXRINPUT_API virtual bool GetControllerOrientationAndPosition(const int32 ControllerIndex, const FName MotionSource, FRotator& OutOrientation, FVector& OutPosition, bool& OutbProvidedLinearVelocity, FVector& OutLinearVelocity, bool& OutbProvidedAngularVelocity, FVector& OutAngularVelocityAsAxisAndLength, bool& OutbProvidedLinearAcceleration, FVector& OutLinearAcceleration, float WorldToMetersScale) const override;
		virtual bool GetControllerOrientationAndPositionForTime(const int32 ControllerIndex, const FName MotionSource, FTimespan Time, bool& OutTimeWasUsed, FRotator& OutOrientation, FVector& OutPosition, bool& OutbProvidedLinearVelocity, FVector& OutLinearVelocity, bool& OutbProvidedAngularVelocity, FVector& OutAngularVelocityAsAxisAndLength, bool& OutbProvidedLinearAcceleration, FVector& OutLinearAcceleration, float WorldToMetersScale) const override { return false; }
		virtual ETrackingStatus GetControllerTrackingStatus(const int32 ControllerIndex, const FName MotionSource) const override;
		GDIOXRINPUT_API virtual void EnumerateSources(TArray<FMotionControllerSource>& SourcesOut) const override;

#else
		//virtual FName GetMotionControllerDeviceTypeName() const override;
		virtual bool GetControllerOrientationAndPosition(const int32 ControllerIndex, const EControllerHand DeviceHand, FRotator& OutOrientation, FVector& OutPosition, float WorldToMetersScale) const override;
		virtual ETrackingStatus GetControllerTrackingStatus(const int32 ControllerIndex, const EControllerHand DeviceHand) const override;
#endif
		/*
		// IHapticDevice overrides
		IHapticDevice* GetHapticDevice() override { return (IHapticDevice*)this; }
		virtual void SetHapticFeedbackValues(int32 ControllerId, int32 Hand, const FHapticFeedbackValues& Values) override;

		virtual void GetHapticFrequencyRange(float& MinFrequency, float& MaxFrequency) const override;
		virtual float GetHapticAmplitudeScale() const override;

		uint32 GetNumberOfTouchControllers() const;
		uint32 GetNumberOfHandControllers() const;
		*/

		FBasicStateManagement* keyStates;
	private:

		//TMap <FKey, InputValue> keyStates;
		/** Applies force feedback settings to the controller */
		//void UpdateForceFeedback(const FOculusControllerPair& ControllerPair, const EControllerHand Hand);

		//bool OnControllerButtonPressed(const FOculusButtonState& ButtonState, FPlatformUserId UserId, FInputDeviceId DeviceId, bool IsRepeat);
		//bool OnControllerButtonReleased(const FOculusButtonState& ButtonState, FPlatformUserId UserId, FInputDeviceId DeviceId, bool IsRepeat);

		

	private:
		//APlayerController* PlayerController = nullptr;
		FGdioHMD* HMD = nullptr;
	//	void* OVRPluginHandle;

		/** The recipient of motion controller input events */
		//TSharedPtr< FGenericApplicationMessageHandler > MessageHandler;

		/** List of the connected pairs of controllers, with state for each controller device */
		//TArray< FOculusControllerPair > ControllerPairs;

		//FOculusRemoteControllerState Remote;

		/** Threshold for treating trigger pulls as button presses, from 0.0 to 1.0 */
		static float TriggerThreshold;

		/** Are Remote keys mapped to gamepad or not. */
		static bool bRemoteKeysMappedToGamepad;

		/** Repeat key delays, loaded from config */
		static float InitialButtonRepeatDelay;
		static float ButtonRepeatDelay;

		//ovrpHapticsDesc OvrpHapticsDesc;

		int LocalTrackingSpaceRecenterCount;

		// Maintain a cache of resampled raw data so we don't resample it on every play.  This is a map of OriginalRawData pointers, used only as a key, to ResampledRawData buffers.
		// The values are pointers because the map could be reallocated and we cache raw pointers to the uint8 array data elsewhere.
		TMap<const uint8*, TSharedPtr<TArray<uint8>>> ResampledRawDataCache;

		FGenericApplicationMessageHandler MessageHandler;


};

	
//} // namespace 
	class FGDIOXRInputPlugin : public IInputDeviceModule
	{
	public:
		FGDIOXRInputPlugin();
		virtual TSharedPtr< class IInputDevice > CreateInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;
		void OnWorldCleanup(UWorld* World, bool SessionEnded, bool CleanupResources);
		TSharedPtr<GDIOXRInput> InputDevice;

	public:
		FDelegateHandle OnWorldCleanupHandle;
		static FGdioHMD* GetXRHMD();
		TSharedPtr<GDIOXRInput> GetRawInputDevice() { return InputDevice; }

		virtual void StartupModule() override;
		virtual void ShutdownModule() override;

		static inline FGDIOXRInputPlugin& Get()
		{
			return FModuleManager::LoadModuleChecked<FGDIOXRInputPlugin>("GDIOXRInput");
		}

		GDIOXRINPUT_API  static inline bool IsAvailable()
		{
			return FModuleManager::Get().IsModuleLoaded("GDIOXRInput");
		}
	};
	
