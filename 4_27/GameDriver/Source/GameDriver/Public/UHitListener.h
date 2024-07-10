// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

class AGDIO_OverlapHit;
#include "UHitListener.generated.h"


UCLASS(BlueprintType, Blueprintable)
class UHitListener : public UObject {
	GENERATED_BODY()

public:
	GAMEDRIVER_API UHitListener();

	GAMEDRIVER_API UHitListener(FString id);

	UFUNCTION()
		GAMEDRIVER_API void OnActorOverlap(AActor* overlappedActor, AActor* OtherActor);
	UFUNCTION()
		GAMEDRIVER_API void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		GAMEDRIVER_API void onActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
		GAMEDRIVER_API void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		GAMEDRIVER_API void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
		GAMEDRIVER_API void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
public:
	FString id;
	bool hit;
	AGDIO_OverlapHit* broadcaster;
};
