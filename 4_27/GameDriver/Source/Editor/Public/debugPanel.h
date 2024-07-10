// Copyright GameDriver, Inc. All Rights Reserved.

#include "Widgets/Docking/SDockTab.h"
#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#endif
#include "Framework/Application/SlateApplication.h"
#include "HPathDebugger.h"
#include "Widgets/Layout/SScrollBox.h"

class debugPanel : public SCompoundWidget
{
    SLATE_BEGIN_ARGS(debugPanel)
    {}
    SLATE_ARGUMENT(TWeakPtr<class FHPathDebugger>, Tool)
        SLATE_END_ARGS()

        void Construct(const FArguments& InArgs);

protected:
    TWeakPtr<FHPathDebugger> tool;
   
};