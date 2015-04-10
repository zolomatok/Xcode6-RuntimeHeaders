//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXWizardChooserWizard : PBXWizard <NSSplitViewDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate, NSMatrixDelegate>
{
    PBXGestureSplitView *_outerSplitView;
    PBXGestureSplitView *_innerSplitView;
    PBXExtendedOutlineView *_outlineView;
    NSMatrix *_templateView;
    NSTextField *_descriptionTextField;
    PBXWizardChooserWizardDescriptionView *_descriptionBox;
    NSScrollView *_descriptionBoxScrollView;
    NSTextField *_descriptionLabelTextField;
    NSImageView *_descriptionImageView;
    NSTextField *_optionsLabelTextField;
    NSButton *_checkbox1;
    NSButton *_checkbox2;
    NSButton *_checkbox3;
    NSPopUpButton *_popupButton;
    NSTextField *_popupButtonOnlyChoiceTextField;
    PBXWizardChooserWizardBackgroundView *_optionsBackgroundView;
    NSString *_messageString;
    PBXStringTree *_wizardProxies;
    NSMutableArray *_templates;
    XCMultiWizardProxy *_currentMultiWizard;
}

+ (id)defaultModuleNibName;
+ (BOOL)allowsWizardDescriptions;
+ (id)matrixPrototype;
+ (id)imageRescaledForWizard:(id)arg1;
- (void)addWizardProxiesForRegisteredWizardClasses;
- (void)addAppleInternalWizardProxiesFromDefaultSearchPaths;
- (void)addWizardProxiesFromDefaultSearchPaths;
- (void)_addWizardProxiesFromDefaultSearchPathsAppleInternal:(BOOL)arg1;
- (void)addWizardProxiesFromPlatformSearchPaths;
- (void)_addWizardProxiesFromBaseSearchPath:(id)arg1 subpath:(id)arg2;
- (BOOL)checkForWizardProxiesAtBaseSearchPath:(id)arg1 subpath:(id)arg2;
- (id)directoryEntriesToSkip;
- (id)wizardPlatformSearchPaths;
- (id)wizardSearchDomainSubpath;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)popupButtonAction:(id)arg1;
- (void)checkboxAction:(id)arg1;
- (void)templateClicked:(id)arg1;
- (void)_updateDescription:(id)arg1;
- (void)_showOptions:(id)arg1;
- (void)_hideOptions;
- (void)sizeToFit;
- (void)layoutDetailView;
- (struct CGSize)descriptionSize;
- (struct CGSize)descriptionTextFieldSize;
- (double)desiredHeightOfOptionsView;
- (void)rebuildTemplateView;
- (void)removeAllTemplates;
- (void)templateViewDoubleClick:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)preferredSortOrders;
- (void)addTemplatesForNode:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)addWizardProxies:(id)arg1;
- (void)addWizardProxy:(id)arg1;
- (void)removeAllWizardProxies;
- (id)nextPage;
- (BOOL)canFinish;
- (BOOL)canProceed;
- (void)saveSelection;
- (void)restoreSelection;
- (void)setDefaultSelection;
- (id)label;
- (void)setInfoMessage:(id)arg1;
- (id)infoMessage;
- (id)firstKeyView;
- (void)_templateViewFrameChanged:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3 parentNextPageSelector:(SEL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end