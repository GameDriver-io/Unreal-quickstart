//Copyright GameDriver Inc. 2023 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "printInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UprintInterface : public UInterface
{
    GENERATED_BODY()
};

class IprintInterface
{
    GENERATED_BODY()

public:
    /** Add interface function declarations here */
    GAMEDRIVER_API virtual void AddOutput(FString newline, int specialCode = 0, FString key = "") {  };
    GAMEDRIVER_API virtual void AddWaitOutput(int time) {  };
    GAMEDRIVER_API virtual bool GetFPS() { return false; };
    GAMEDRIVER_API virtual bool GetMouseMove() { return false; };
    GAMEDRIVER_API static UObject* GetAttachParentUObject(UObject* actor);
    GAMEDRIVER_API static int GetIndexOfSimilarChildren(UObject* obj);
    GAMEDRIVER_API static TArray<FString> GetObjectTags(UObject* obj);
    GAMEDRIVER_API static FString GetHPath(UObject* obj, FString* CurrentItem);
    uint32 lastFrame;
};

class internalRecording : public IprintInterface {
public:
    //functions defined in interface
    internalRecording();
    void AddOutput(FString newline, int specialCode = 0, FString key = "") override;
    void AddWaitOutput(int time) override;
    bool GetFPS() override { return useFPS; }
    bool GetMouseMove() override { return useMouseMove; }
    FString  GetRecording();
    int GetVRModuloFromFile();
private:
    bool recording;
    bool useFPS=false;
    bool useMouseMove=false;
    TArray<FString>* outputArray;
    TMap<FString, int>* delayedVREvents;
};