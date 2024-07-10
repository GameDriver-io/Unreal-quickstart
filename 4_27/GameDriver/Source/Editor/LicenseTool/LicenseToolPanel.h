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
#include "LicenseTool.h"
//#include "SlateBasics.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Templates/SharedPointer.h"

#include "Blueprint/WidgetTree.h"
#include "GenericPlatform/GenericPlatformProcess.h"

#include "printInterface.h"

class LicenseToolPanel : public SCompoundWidget, public IprintInterface
{

	SLATE_BEGIN_ARGS(LicenseToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class LicenseTool>, Tool)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	const FSlateBrush* GetGamedriverIcon() const;
	FReply HomeClicked();
	FReply GetStartedClicked();
	FReply ApiRefClicked();
	FReply YoutubeClicked();
	FReply SupportClicked();
	FReply UpdatesClicked();
	FReply ReviewLicenseClicked();
	FText GetCurrentLicenceLabel() const;
protected:
	FString* email = NULL;
	int days = 0;
	TWeakPtr<LicenseTool> tool;

};