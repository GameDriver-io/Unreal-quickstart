// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"

#include "UscreenGrabber.generated.h"


UCLASS(BlueprintType, Blueprintable)
class UscreenGrabber : public UObject {
	GENERATED_BODY()

public:
	GAMEDRIVER_API UscreenGrabber();

	GAMEDRIVER_API UscreenGrabber(FString inscreenshotname);

	GAMEDRIVER_API void HandleScreenshotData(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);
public:
	FString DeterminedPath;
	TArray<uint8> CompressedBitmap;
	bool isCaptured;
};
