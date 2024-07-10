// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#include "Widgets/Text/SRichTextBlock.h"
#endif
#include "Framework/Application/SlateApplication.h"
#include "TabTool.h"
#include "SlateBasics.h"
#include "../../GameDriver/UnrealHierarchyPath/include/HierarchyPath/HierarchyPathVM.h"

#include <GameDriver/UnrealHierarchyPath/include/HierarchyPath/XPathParserExceptions.h>
namespace HPathUtility {
	FORCEINLINE static size_t Strcpy(char* Destination, const char* Source, size_t Length);
	FORCEINLINE static size_t Strlen(const char* Source);
}


class TabToolPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(TabToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class TabTool>, Tool)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	FReply RunClicked();
	void FormatStepOutput();
	FReply StepInClicked();
	void XPathExceptionToGUI(XPathParserException e);
	void startGameWarning();
	FReply StepOverClicked();
	FReply Reset();
	bool ButtonsEnabled() const;
	const FSlateBrush* GetErrorIcon() const;
	bool GameIsRunning();
	void OnTextChanged(const FText& InText);
	void copyFieldToBuffer();
	void OnTextCommitted(const FText& InText, ETextCommit::Type);
	FText GetText() const;
	void ProcessResponse();
	FString getHighlightText(FString val);

	void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

	TSharedRef<ITableRow> OnGenerateRowForList(TSharedPtr<FString> Item, const TSharedRef<STableViewBase>& OwnerTable);
	TSharedRef<ITableRow> OnGenerateRowForStack(TSharedPtr<FString> Item, const TSharedRef<STableViewBase>& OwnerTable);

	FSlateColor GetHPathColor() const;

	void RawReset();

protected:

	HierarchyPathVM* HPVM;
	bool error;
	bool allowClicks;
	FLinearColor* mycolor;
	FText enteredText;
	TWeakPtr<TabTool> tool;
	TSharedPtr<SRichTextBlock> resultPath;
	TSharedPtr<STextBlock> errorPath;
	TSharedPtr<STextBlock> operationText;
	TSharedPtr<STextBlock> nodeText;
	TSharedPtr<STextBlock> StackLabel;
	TSharedPtr<STextBlock> ContextLabel;
	TSharedPtr<STextBlock> DurationLabel;
	
	/* The list of strings */
	TArray<TSharedPtr<FString>> ReturnedItems;
	TArray<TSharedPtr<FString>> StackItems;

	/* The actual UI list */
	TSharedPtr< SListView< TSharedPtr<FString> > > ListViewWidget;
	TSharedPtr< SListView< TSharedPtr<FString> > > StackViewWidget;
	TSharedPtr<SEditableTextBox> userTextBlock;
};