// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "../IExampleModuleInterface.h"
#include "EditorStyleSet.h"
#include "LevelEditor.h"
class MenuTool : public IExampleModuleListenerInterface, public TSharedFromThis<MenuTool>
{
public:
	virtual ~MenuTool() {}

	virtual void OnStartupModule() override;
	virtual void OnShutdownModule() override;

 void MakeMenuEntry(FMenuBuilder &menuBuilder);
 void MakeSubMenu(FMenuBuilder& menuBuilder);


protected:
	TSharedPtr<FUICommandList> CommandList;

	void MapCommands();

	void HPathCommand(FString* param);

	//************************
	// UI Command functions
	void MenuCommand1();
	void MenuCommand2();
	void MenuCommand3();
	void RegisterMenuExtensions();

	TSharedRef<FExtender> OnExtendLevelEditorMenu(const TSharedRef<FUICommandList> CommandList, TArray<AActor*> SelectedActors);
private:
 TSharedRef<FExtender> OnExtendLevelEditorViewMenu(const TSharedRef<FUICommandList> CommandList);
	FLevelEditorModule::FLevelViewportMenuExtender_SelectedActors LevelEditorMenuExtenderDelegate;

};