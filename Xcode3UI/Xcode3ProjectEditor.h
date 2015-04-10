//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3ProjectEditor : IDEEditor <NSTextFieldDelegate, DVTSourceExpressionSource, IDEFilterControlBarTarget>
{
    DVTSplitView *_splitView;
    DVTTabChooserView *_tabChooserView;
    DVTReplacementView *_replacementView;
    DVTBorderedView *_leftBorderedView;
    DVTBorderedView *_rightBorderedView;
    DVTOutlineView *_outlineView;
    NSTableColumn *_mainTableColumn;
    NSTreeController *_treeController;
    IDEFilterControlBar *_filterBar;
    NSArray *_tabChoices;
    DVTChoice *_selectedChoice;
    Class _previousProjectEditorClass;
    Class _previousTargetEditorClass;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    NSMutableArray *_contents;
    DVTImageAndTextCell *titleCell;
    DVTImageAndTextCell *itemCell;
    NSArray *_draggingTreeNodes;
    NSArray *_currentSelectedItems;
    Xcode3TargetEditingGroup *_targetEditingGroup;
    DVTObservingToken *_selectionIndexPathsObservingToken;
    DVTObservingToken *_projectBlueprintsObservingToken;
    NSArray *_sourceListItemEditorClasses;
    NSViewController *_currentSourceListItemEditor;
    IDEUpgradeTaskWindowController *_upgradeTasksController;
    BOOL _restoringState;
    BOOL _loadingView;
    NSArray *_previousSourceListSelection;
    long long _previousSourceListPopUpSelectedIndex;
    NSMutableArray *_contentsBeforeFiltering;
    BOOL _sourceListVisible;
    BOOL _filtered;
    DVTGradientImageButton *_sourceListVisiblityToggleButton;
    NSPopUpButton *_sourceListPopUp;
    Xcode3ProjectEditorTopBarView *_topBarView;
    DVTGradientImageButton *_addTargetButton;
    DVTGradientImageButton *_removeTargetButton;
    NSString *_filterString;
    NSView *_filterBarContainerView;
    DVTScrollView *_sourceListScrollView;
}

+ (id)keyPathsForValuesAffectingSelectedExpression;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)metricLogAspect;
@property(retain) DVTScrollView *sourceListScrollView; // @synthesize sourceListScrollView=_sourceListScrollView;
@property(retain) NSView *filterBarContainerView; // @synthesize filterBarContainerView=_filterBarContainerView;
@property(getter=isFiltered) BOOL filtered; // @synthesize filtered=_filtered;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(nonatomic, getter=isSourceListVisible) BOOL sourceListVisible; // @synthesize sourceListVisible=_sourceListVisible;
@property(retain) DVTGradientImageButton *removeTargetButton; // @synthesize removeTargetButton=_removeTargetButton;
@property(retain) DVTGradientImageButton *addTargetButton; // @synthesize addTargetButton=_addTargetButton;
@property(retain) Xcode3ProjectEditorTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain) NSPopUpButton *sourceListPopUp; // @synthesize sourceListPopUp=_sourceListPopUp;
@property(retain) DVTGradientImageButton *sourceListVisiblityToggleButton; // @synthesize sourceListVisiblityToggleButton=_sourceListVisiblityToggleButton;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(copy) NSArray *draggingTreeNodes; // @synthesize draggingTreeNodes=_draggingTreeNodes;
@property(retain, nonatomic) DVTChoice *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(copy, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)localizationImport:(id)arg1;
- (void)localizationExport:(id)arg1;
- (void)addTargetToProject:(id)arg1;
- (void)showUpgradeTestingSheet:(id)arg1;
- (void)showUpgradeProjectSheet:(id)arg1;
- (void)contextMenu_delete:(id)arg1;
- (void)contextMenu_duplicate:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)selectSourceListItem:(id)arg1;
- (void)setSourceListPopUpSelectionIndex:(long long)arg1;
- (void)toggleSourceList:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(float)arg2 ofSubviewAt:(int)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(float)arg2 ofSubviewAt:(int)arg3;
- (void)outlineView:(id)arg1 concludeDragOperation:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_handleCancelAction:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)_sourceListItemEditorClassesForItem:(id)arg1;
- (id)openingPerformanceMetric;
- (id)_contextMenuSelectedSourceListItems;
- (id)_contextMenuClickedItem;
- (id)_selectedSourceListItems;
- (id)allowedProjectFormatsSortDescriptors;
- (id)allowedProjectFormats;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@property(retain) DVTStateToken *stateToken; // @dynamic stateToken;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)takeFocus;
- (void)_selectSourceListItems:(id)arg1 sourceListItemEditorOrNil:(id)arg2;
- (void)_selectDefaultSourceListItem;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (BOOL)canBecomeMainViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (void)_populateSourceList;
- (void)_populateSourceListPopUp;
- (void)_showMultipleSelectionSourceListPopUpItem:(BOOL)arg1;
- (id)pbxProject;
- (id)project;
- (id)projectDocument;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@property(readonly) DVTSDK *sdk;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end