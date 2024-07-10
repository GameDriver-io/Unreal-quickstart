// Copyright GameDriver, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"

#include "HeadMountedDisplayBase.h"


#include "XRTrackingSystemBase.h"

#include "Components/InputComponent.h"
#include "IMotionTrackingSystemManagement.h"
#include "GenericPlatform/IInputInterface.h"//for haptic

#include <MotionControllerComponent.h>

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputSubsystemInterface.h"
#include "EnhancedPlayerInput.h"
#include "IHeadMountedDisplay.h"
#include "InputMappingContext.h"

#include <XRInput/GDIOXRInput.h>

class APlayerController;
class FSceneView;
class FSceneViewFamily;
class UCanvas;

struct TrackedDevice
{
	int Node;
	EXRTrackedDeviceType Type;
};

static TrackedDevice TrackedDevices[] =
{
{ 0, EXRTrackedDeviceType::HeadMountedDisplay },
{ 1, EXRTrackedDeviceType::Controller },
{ 2, EXRTrackedDeviceType::Controller },
};

static uint32 TrackedDeviceCount = sizeof(TrackedDevices) / sizeof(TrackedDevices[0]);
/**
 * Simulated  Head Mounted Display
 */


class FGdioHMD :
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
 	public FHeadMountedDisplayBase,
#else
	public FHeadMountedDisplayBase,
#endif
#if ENGINE_MAJOR_VERSION == 4
	public FSceneViewExtensionBase,
#else
	public FHMDSceneViewExtension, 
#endif
	public IXRInput//public FSceneViewExtensionBase
{
public:
#if ENGINE_MAJOR_VERSION == 4
	static bool	ProcessSimKey(FKey ip, EInputEvent e, APlayerController* pc);
#else
	static bool ProcessSimKey(FInputKeyParams* ip, APlayerController* pc);
#endif
	void ProcessInputFloat(FKey ip, float value, APlayerController* pc);
	void ProcessInputVector2D(FKey ip, FVector2D* value, APlayerController* pc);
	void ProcessInputVector3D(FKey ip, FVector* value, APlayerController* pc);
	virtual bool HandleInputKey(class UPlayerInput* p, const struct FKey& Key, EInputEvent EventType, float AmountDepressed, bool bGamepad);

	/**
	* Passing touch events to HMD.
	* If returns 'false' then touch will be handled by PlayerController;
	* otherwise, touch won't be handled by the PlayerController.
	*/
	virtual bool HandleInputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D& TouchLocation, FDateTime DeviceTimestamp, uint32 TouchpadIndex);
#if ENGINE_MAJOR_VERSION == 4
	TMap<FKey, const UInputAction*> getMappings() { return mappings; }
#else
	 TMap<FKey, TObjectPtr<const UInputAction>> getMappings() { return mappings; }
#endif
	/** IXRTrackingSystem interface */

 FName GetSystemName() const override
	{
		static FName DefaultName(TEXT("GDIOHMD"));
		return DefaultName;
	}

	int32 GetXRSystemFlags() const
	{
		return EXRSystemFlags::IsHeadMounted;
	}
	virtual bool HasValidTrackingPosition() override {
		return true;
	}
	virtual bool IsHeadTrackingAllowedForWorld(UWorld& World) const override {//specifically for PIE to work. 
		return true;
	}
	virtual uint32 CountTrackedDevices(EXRTrackedDeviceType Type) override { 
		return 3; 
	}
	/*
	void SetHapticFeedbackValues
	(
		int32 ControllerId,
		int32 Hand,
		const FHapticFeedbackValues& Values
	) 
	;
	*/

	virtual IXRInput* GetXRInput() { //important to nullify plugin in headset?
		return this; 
	}
	virtual FVector2D GetPlayAreaBounds(EHMDTrackingOrigin::Type Origin) const;
	virtual bool IsValid() { 
		return true; 
	}
	virtual bool IsTracking(int32 DeviceId) override { return true; }
	virtual bool DoesSupportPositionalTracking() const override { return true; }
	virtual bool IsHeadTrackingAllowed() const override { return true; }
	virtual bool EnumerateTrackedDevices(TArray<int32>& OutDevices, EXRTrackedDeviceType Type = EXRTrackedDeviceType::Any) override;

	virtual void SetInterpupillaryDistance(float NewInterpupillaryDistance) override;
	virtual float GetInterpupillaryDistance() const override;
	virtual void GetMotionControllerData(UObject* WorldContext, const EControllerHand Hand, FXRMotionControllerData& MotionControllerData) override;

	virtual void ResetOrientationAndPosition(float yaw = 0.f) override;
	virtual void ResetOrientation(float Yaw = 0.f) override;
	virtual void ResetPosition() override;

	virtual bool GetCurrentPose(int32 DeviceId, FQuat& CurrentOrientation, FVector& CurrentPosition) override;
	virtual void SetBaseRotation(const FRotator& BaseRot) override;
	virtual FRotator GetBaseRotation() const override;

	virtual void SetBaseOrientation(const FQuat& BaseOrient) override;
	virtual FQuat GetBaseOrientation() const override;

	virtual class IHeadMountedDisplay* GetHMDDevice() override
	{
		return this;
	}

	virtual class TSharedPtr< class IStereoRendering, ESPMode::ThreadSafe > GetStereoRenderingDevice() override
	{
		return SharedThis(this);
	}

	bool AddMotionController(FName motionKey, UMotionControllerComponent* controllerName);

protected:
	/** FXRTrackingSystemBase protected interface */
	virtual float GetWorldToMetersScale() const override;
	TMap<FName, UMotionControllerComponent*> *capturedControllers;
	//TMap<FString, UMotionControllerComponent*> controllers;
#if ENGINE_MAJOR_VERSION == 4
	TMap<FKey, const UInputAction*> mappings;
#else
	TMap<FKey, TObjectPtr<const UInputAction>> mappings;
#endif
public:
//#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 3
//#else
	/** IHeadMountedDisplay interface */
	virtual bool IsHMDConnected() override { return true; }
	virtual bool IsHMDEnabled() const override;
	virtual void EnableHMD(bool allow = true) override;
	virtual bool GetHMDMonitorInfo(MonitorInfo&) override;
	virtual void GetFieldOfView(float& OutHFOVInDegrees, float& OutVFOVInDegrees) const override;
	virtual bool IsChromaAbCorrectionEnabled() const override;

	/** IStereoRendering interface */
	virtual bool IsStereoEnabled() const override;
	virtual bool EnableStereo(bool stereo = true) override;
//#endif
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
	virtual void AdjustViewRect(const int32 ViewIndex, int32& X, int32& Y, uint32& SizeX, uint32& SizeY) const override;
	virtual void CalculateStereoViewOffset(const int32 ViewIndex, FRotator& ViewRotation, const float WorldToMeters, FVector& ViewLocation) override;
	virtual FMatrix GetStereoProjectionMatrix(const int32 ViewIndex) const override;
	virtual void GetEyeRenderParams_RenderThread(const FHeadMountedDisplayPassContext& Context, FVector2D& EyeToSrcUVScaleValue, FVector2D& EyeToSrcUVOffsetValue) const override;
#else
//#if ENGINE_MAJOR_VERSION == 4
	virtual void AdjustViewRect(EStereoscopicPass StereoPass, int32& X, int32& Y, uint32& SizeX, uint32& SizeY) const override;
	virtual void CalculateStereoViewOffset(const enum EStereoscopicPass StereoPassType, FRotator& ViewRotation,
	const float InWorldToMeters, FVector& ViewLocation) override;
	virtual FMatrix GetStereoProjectionMatrix(const enum EStereoscopicPass StereoPassType) const override;
	virtual void GetEyeRenderParams_RenderThread(const struct FRenderingCompositePassContext& Context, FVector2D& EyeToSrcUVScaleValue, FVector2D& EyeToSrcUVOffsetValue) const override;
#endif
	/** ISceneViewExtension interface */

	virtual void SetupViewFamily(FSceneViewFamily& InViewFamily) override;
	virtual void SetupView(FSceneViewFamily& InViewFamily, FSceneView& InView) override;
	virtual void BeginRenderViewFamily(FSceneViewFamily& InViewFamily) {}
	virtual void PreRenderView_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneView& InView) override;
	virtual void PreRenderViewFamily_RenderThread(FRHICommandListImmediate& RHICmdList, FSceneViewFamily& InViewFamily) override;
	virtual bool IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const;
	

	//void SetHapticFeedbackValues(int32 ControllerId, int32 Hand, const FHapticFeedbackValues& Values) override;
public:
	void GetAllActionsFromContexts(FString device,FString commaContexts);
	/** Constructor */
	FGdioHMD(const FAutoRegister&);

	/** Destructor */
	virtual ~FGdioHMD();

	/** @return	True if the HMD was initialized OK */
	bool IsInitialized() const;
	void updateLocationAndOrientation(FString key, FVector loc, FQuat orient, int type);
	int GetMotionControllerCount();
	  GDIOXRInput* GetSimulatedInput() { return SimulatedInput; };
	 void SetValueForKey(FKey ip, float value, EInputEvent state);

private:

	GDIOXRInput*			SimulatedInput;
	FVector					CurLocation;
	FQuat					CurHmdOrientation;
	FQuat					LastHmdOrientation;

	FRotator				DeltaControlRotation;    // same as DeltaControlOrientation but as rotator
	FQuat					DeltaControlOrientation; // same as DeltaControlRotation but as quat

	double					LastSensorTime;
	float					WorldToMeters;

	FVector					CurLeftLocation;
	FQuat					CurLeftOrientation;
	FVector					CurRightLocation;
	FQuat					CurRightOrientation;
	
	void GetHMDOrientation(FQuat& CurrentOrientation);
};

//\extern FGdioHMD* gdioHMD = NULL;

