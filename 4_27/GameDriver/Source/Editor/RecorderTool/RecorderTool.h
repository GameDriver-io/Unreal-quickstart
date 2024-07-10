// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "../ExampleTabToolBase.h"

class RecorderTool : public FExampleTabToolBase
{
public:
	virtual ~RecorderTool() {}
	virtual void OnStartupModule() override;
	virtual void OnShutdownModule() override;
	virtual void Initialize() override;
	virtual TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& TabSpawnArgs) override;
};