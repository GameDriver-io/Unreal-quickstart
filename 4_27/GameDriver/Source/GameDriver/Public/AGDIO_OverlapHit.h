// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
//#include "CoreUObject.h"
#include "GameFramework/Actor.h"
#include "Runtime/Launch/Resources/Version.h"
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 2
#include "Engine/HitResult.h"
#endif
#include "AGDIO_OverlapHit.generated.h"


UCLASS(BlueprintType, Blueprintable)
class AGDIO_OverlapHit : public AActor {
	GENERATED_BODY()

public:
	GAMEDRIVER_API AGDIO_OverlapHit();

	AGDIO_OverlapHit(FString id);

public:
	UPROPERTY(EditAnywhere, Category = "gamedriver")
	FString id;

	UPROPERTY(EditAnywhere, Category = "gamedriver")
	bool hit;

	UPROPERTY(EditAnywhere, Category = "gamedriver")
	FHitResult hitResult;
};
