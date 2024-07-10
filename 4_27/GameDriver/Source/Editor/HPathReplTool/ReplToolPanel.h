// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#include "Widgets/Text/SRichTextBlock.h"
#endif
#include "Framework/Application/SlateApplication.h"
#include "ReplTool.h"
#include "../../GameDriver/UnrealHierarchyPath/include/HierarchyPath/HierarchyPathVM.h"

#include <GameDriver/UnrealHierarchyPath/include/HierarchyPath/XPathParserExceptions.h>
namespace HPathUtility {
	FORCEINLINE static size_t Strcpy(char* Destination, const char* Source, size_t Length);
	FORCEINLINE static size_t Strlen(const char* Source);
}


class ReplToolPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(ReplToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class ReplTool>, Tool)

		//	SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)
		SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

public:
	FReply RunClicked();
	void startGameWarning();
	bool ButtonsEnabled() const;
	bool GameIsRunning();
	void OnTextChanged(const FText& InText);
	void OnTextCommitted(const FText& InText, ETextCommit::Type);
	FText GetText() const;
	FString getHighlightText(FString val);
	FReply Reset();
	
	void XPathExceptionToGUI(XPathParserException e);
	//color
	const FSlateBrush* GetErrorIcon() const;
	const FSlateBrush* GetBoxColor() const;
	FLinearColor* mycolor;
protected:
	FSlateColorBrush* brush;
	bool error;
	bool allowClicks;
	TSharedPtr<STextBlock> errorPath;
	HierarchyPathVM* HPVM;
	FText enteredText;
	TWeakPtr<ReplTool> tool;
	
	TSharedPtr<STextBlock> outputCount;
	/* The list of strings */
	TArray<TSharedPtr<FString>> ReturnedItems;
	TArray<TSharedPtr<FString>> StackItems;

	/* The actual UI list */
	TSharedPtr<SEditableTextBox> userTextBlock;
};