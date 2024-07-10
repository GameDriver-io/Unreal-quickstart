// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "../ExampleTabToolBase.h"

class ReplTool : public FExampleTabToolBase
{
public:
	virtual ~ReplTool() {}
	virtual void OnStartupModule() override;
	virtual void OnShutdownModule() override;
	virtual void Initialize() override;
	virtual TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& TabSpawnArgs) override;
};