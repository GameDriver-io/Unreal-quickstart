// Copyright GameDriver, Inc. All Rights Reserved.


#pragma once
#include "HPathDebugger.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPGDIOAgent.generated.h"

/**
 * 
 */



UCLASS()
class HPATHDEBUGGER_API UBPGDIOAgent : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		 static bool importDLL(FString folder, FString name);
};
