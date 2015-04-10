//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEBatchFindStrategiesController : DVTViewController <NSPopoverDelegate>
{
    NSPanel *_locationEditorPanel;
    NSPopUpButton *_locationPopupButton;
    NSImageView *_topShadow;
    DVTReplacementView *_locationEditorContentView;
    NSArray *_customFindScopes;
    IDEWorkspace *_workspace;
    NSString *_findScopeUUID;
    NSString *_findWorkspacePath;
    int _findType;
    int _matchStyle;
    BOOL _ignoresCase;
    CDUnknownBlockType _scopeEditorCompletionBlock;
    BOOL _isEditingScope;
    NSPopover *_popover;
    IDEBatchFindScopeEditor *_scopeEditor;
    NSString *_findWorkspacePathDescription;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)newScopeImage;
+ (id)scopeImage;
+ (void)initialize;
+ (id)sharedStrategiesController;
@property(retain) NSString *findWorkspacePathDescription; // @synthesize findWorkspacePathDescription=_findWorkspacePathDescription;
@property(retain, nonatomic) IDEBatchFindScopeEditor *scopeEditor; // @synthesize scopeEditor=_scopeEditor;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) BOOL isEditingScope; // @synthesize isEditingScope=_isEditingScope;
@property(copy, nonatomic) NSString *findWorkspacePath; // @synthesize findWorkspacePath=_findWorkspacePath;
@property(copy, nonatomic) NSString *findScopeUUID; // @synthesize findScopeUUID=_findScopeUUID;
@property(nonatomic) BOOL ignoresCase; // @synthesize ignoresCase=_ignoresCase;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property(nonatomic) int findType; // @synthesize findType=_findType;
- (void).cxx_destruct;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)_validateCustomScopeSelection;
- (id)getCustomScopes;
- (id)descriptionForCriteriaForAttributedString:(id)arg1;
@property(readonly) NSString *customScopeDescription;
- (void)setParametersFromCriteria:(id)arg1;
- (id)findCriteriaForAttributedString:(id)arg1 containerScopes:(id)arg2 error:(id *)arg3;
- (id)_predicateForScope;
- (BOOL)_findScopeUUIDValid:(id)arg1;
- (id)selectedScopeName;
- (BOOL)doneLocationEditor;
- (void)showScopeEditor:(id)arg1 inRect:(struct CGRect)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)addScope;
- (void)deleteScopeWithUUID:(id)arg1;
- (void)loadView;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_loadDefaultValues;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end