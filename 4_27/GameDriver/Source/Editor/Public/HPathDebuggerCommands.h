// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "EditorStyleSet.h"


class FHPathDebuggerCommands : public TCommands<FHPathDebuggerCommands>
{
public:

	FHPathDebuggerCommands()
		: TCommands<FHPathDebuggerCommands>
		(
			TEXT("HPathDebugger"),
			NSLOCTEXT("Contexts", "HPathDebugger", "HPathDebugger Plugin"),
			NAME_None,
#if ENGINE_MAJOR_VERSION == 4
			FEditorStyle::GetStyleSetName() // Icon Style Set
#else
			FAppStyle::GetAppStyleSetName()
#endif
			) {}

	virtual void RegisterCommands() override;

public:

	TSharedPtr<FUICommandInfo> TestCommand;
};