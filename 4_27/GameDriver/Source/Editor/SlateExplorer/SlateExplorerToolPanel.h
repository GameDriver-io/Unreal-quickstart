// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#if ENGINE_MAJOR_VERSION == 4
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Docking/SDockableTab.h"
#include "Widgets/Docking/SDockTabStack.h"
#include "Widgets/Text/SRichTextBlock.h"
#endif
#include "Framework/Application/SlateApplication.h"
#include "ISCSEditorUICustomization.h"
#include "SlateExplorerTool.h"

#include "SSCSEditor.h"
#include "Widgets/Input/SSearchBox.h"
#include "Misc/TextFilter.h"

#include <Editor/DetailsCommon.h>


namespace SlateColumns
{
	static const FName Type("Type");
	static const FName Name("Name");
	static const FName Value("Value");
};

namespace HPathUtility {
	FORCEINLINE static size_t Strcpy(char* Destination, const char* Source, size_t Length);
	FORCEINLINE static size_t Strlen(const char* Source);
}

class SlateObjectHolder {
public:
	SlateObjectHolder(UObject* o) { name = o->GetName(); object = o; };
	FString name;
	FString hpath;
	UObject* object;
	TArray<TSharedPtr<SlateObjectHolder>> Children;
	TSharedPtr<SlateObjectHolder> Parent;
};

class SlateExplorerToolPanel : public SCompoundWidget
{

	SLATE_BEGIN_ARGS(SlateExplorerToolPanel)
	{}

	SLATE_ARGUMENT(TWeakPtr<class SlateExplorerTool>, Tool)

		SLATE_END_ARGS()

		FReply refreshWorldSource();

		void loadUpChildren(TSharedPtr<SlateObjectHolder> ttt);

		void Construct(const FArguments& InArgs);

		void TickWorld(UWorld* World, ELevelTick TickType, float DeltaSeconds);
	void MakeDetailSubMenu(FMenuBuilder& menuBuilder);
	void MakeDetailSubMenuNoDetail(FMenuBuilder& menuBuilder);
	bool SelfOrChildrenContain(UObject* o, FString s);
	~SlateExplorerToolPanel();
	TSharedRef<ITableRow> OnGenerateRowForField(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	TSharedRef<ITableRow> OnGenerateRowForMethod(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase>& OwnerTable);
	void OnFieldSelectionChanged(TSharedPtr < FString>  Entry, ESelectInfo::Type SelectInfo);
	void OnMethodSelectionChanged(TSharedPtr < FString>  Entry, ESelectInfo::Type SelectInfo);
	void RegisterSubMenu(UToolMenu* InMenu, FToolMenuSection* InSection);
public:
	int numUserWidgets = 0;
	void OnSlateSelectionChanged(TSharedPtr<SlateObjectHolder> InItem, ESelectInfo::Type InSelectInfo);
	TSharedPtr<SWidget> OnConstructContextMenu();
	TSharedPtr<SWidget> OnConstructContextMenuField();
	TSharedPtr<SWidget> OnConstructContextMenuMethod();
	TSharedPtr<SWidget> GetContextMenu();
	void DetailCommand(FString* type);
	void DetailCommandHPath();
	void DetailCommandDetails();
	void DetailCommandRelative();
	void MapCommands();
	void ClearLists();
FString InjectBold(FString raw, bool& wasFound);
	bool isTypeValid(FProperty* p);
	FString GetCSharpType(FProperty* p);
	void FilterFields();
	void FilterMethods();
	void FilterWidgets();
	void RefreshExtraDetailsPanel(bool comp=false);
	void OnSearchTextCommitted(const FText& InFilterText, ETextCommit::Type CommitType);
	void OnSearchTextChanged(const FText& InFilterText);
	void OnMethodSearchTextCommitted(const FText& InFilterText, ETextCommit::Type CommitType);
	void OnMethodSearchTextChanged(const FText& InFilterText);
	void OnWidgetSearchTextCommitted(const FText& InFilterText, ETextCommit::Type CommitType);
	void OnWidgetSearchTextChanged(const FText& InFilterText);
	// Generate a row widget for an item
	TSharedRef<ITableRow> HandleGenerateRow(TSharedPtr<SlateObjectHolder> Item, const TSharedRef<STableViewBase>& OwnerTable);

	void HandleGetChildren(TSharedPtr<SlateObjectHolder> InItem, TArray<TSharedPtr<SlateObjectHolder>>& OutChildren);
	void WorldChanged(UWorld* World, const UWorld::InitializationValues InitializationValues);
	void OnSetExpansionRecursive(TSharedPtr<SlateObjectHolder>  InItem, bool bShouldBeExpanded);
	void SetExpansionRecursive(TSharedPtr<SlateObjectHolder>  InElement, bool bShouldBeExpanded);

protected:
	FTimerHandle RefreshingTimerHandle;
	UObject* lockedObject;
	UActorComponent* lockedComponent;
	FProperty* lockedField;
	UFunction* lockedMethod;
	TWeakPtr<SlateExplorerTool> tool;
	TSharedPtr<IDetailsView> DetailsView;
	TSharedPtr<STreeView<TSharedPtr<SlateObjectHolder>>> SlateTree;
	TArray<TSharedPtr<SlateObjectHolder>> SlateObjects;
	TArray<TSharedPtr<FString>>  Components;
	TArray <UActorComponent*> RawComponents;
	TArray<TSharedPtr<FString>> Methods;
	TArray<TSharedPtr<FString>> MethodsToDisplay;
	TArray<UFunction*> RawMethods;
	TArray<TSharedPtr<FString>> Fields;
	TArray<TSharedPtr<FString>> FieldsToDisplay;
	TArray<FProperty*> RawFields;
	TSharedPtr<FUICommandList> CommandList;
	RightMenuContexts menuContext;

	//search related fields
	TSharedPtr<SSearchBox> SearchBox;
	TSharedPtr<SSearchBox> MethodSearchBox;
	//TSharedPtr<TTextFilter<const FString&>> SearchTextFilter;
	FString SearchedText;
	FString MethodSearchedText;
	FString WidgetSearchedText;

	TSharedPtr< SListView< TSharedPtr<FString> > > FieldViewWidget;
	TSharedPtr< SListView< TSharedPtr<FString> > > MethodViewWidget;

	/** The first actor in the currently selected objects */
	UObject* SelectedWidget;
	/** The splitter that divides object properties and components tree */
	TSharedPtr<SSplitter> DetailsSplitter;
	/** Border widget that wraps a dynamic context-sensitive widget for editing objects that the property window is displaying */
	TSharedPtr<SBorder> ContextualEditingBorderWidget;

	FDelegateHandle worldChangedDelegate;

};