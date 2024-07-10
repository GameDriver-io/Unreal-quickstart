// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#include "Widgets/Text/SRichTextBlock.h"
#else
#include "Templates/SharedPointerInternals.h"
#include "Templates/SharedPointer.h"
#endif

#include "GDIOInput.h"
#include "Framework/Application/SlateApplication.h"
#include "RecorderTool.h"
//#include "SlateBasics.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Templates/SharedPointer.h"

#include "Blueprint/WidgetTree.h"
#include "GenericPlatform/GenericPlatformProcess.h"

#include "printInterface.h"

class RecorderToolPanel : public SCompoundWidget, public IprintInterface
{

	SLATE_BEGIN_ARGS(RecorderToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class RecorderTool>, Tool)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	int GetVRModuloFromFile();
	bool DownloadEnabled() const;
	bool RecordEnabled() const;
	const FSlateBrush* GetRecordIcon() const;
	const FSlateBrush* GetInfoIcon() const;
	const FSlateBrush* GetResetIcon() const;
	FReply RecordClicked();
	FReply ResetClicked();
	FReply InfoClicked();
	FReply DownloadClicked();
	FReply LoadScene();
	FReply GetObjectPosition();
	FReply SetObjectPosition();
	FReply WaitForObject();
	FReply ClickObject();
	void SetFPS(ECheckBoxState);
	void SetMouseMove(ECheckBoxState);
	FText GetRecordTooltip() const;
	
	//functions defined in interface
	 void AddOutput(FString newline, int specialCode = 0, FString key = "") override;
	 void AddWaitOutput(int time) override;
	 bool GetFPS() override{ return useFPS; }
	 bool GetMouseMove() override { return useMouseMove; }
	
	TSharedRef<SWidget> MakeWidgetForOption(TSharedPtr<FString> InOption)
	{
		return SNew(STextBlock).Text(FText::FromString(*InOption));
	}

	void OnSelectionChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type)
	{
		CurrentItem = NewValue;
	}

	FText GetCurrentItemLabel() const
	{
		
		if (CurrentItem.IsValid())
		{
			return FText::FromString(*CurrentItem);
		}

		return  FText::FromString( "<<Invalid option>>");
		
	}

	TSharedPtr<FString> CurrentItem;
	TArray<TSharedPtr<FString>> Options;

	bool IsRecording() { return recording; }

	void OnBrowseWorld(UWorld* InWorld);
protected:
	bool recording;
	bool useFPS;
	bool useMouseMove;
	TWeakPtr<RecorderTool> tool;

	TArray<TSharedPtr<FString>> SourceHPathComboList;
	
	/* The actual UI list */
	TSharedPtr<SMultiLineEditableText> outputText;
	TSharedPtr<SScrollBox> outputScroll;
	TArray<FString> *outputArray;
	TMap<FString,int>* delayedVREvents;
	//The IInputProcessor
#if ENGINE_MAJOR_VERSION == 4
	SharedPointerInternals::FRawPtrProxy< FGDIOInput > inputProcessor = NULL;
#else
	TSharedPtr< class FGDIOInput > inputProcessor = NULL;
#endif
};