//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEViewController : DVTViewController <IDESelectionSource, DVTStatefulObject>
{
    IDEWorkspaceTabController *_workspaceTabController;
    id <IDEWorkspaceDocumentProvider> _workspaceDocumentProvider;
    id _outputSelection;
    DVTStateToken *_stateToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (long long)version;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (id)keyPathsForValuesAffectingWorkspaceDocument;
@property(readonly) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(copy) IDESelection *outputSelection; // @synthesize outputSelection=_outputSelection;
- (void).cxx_destruct;
- (void)setStateToken:(id)arg1;
- (BOOL)_knowsAboutInstalledState;
- (void)revertState;
- (void)commitState;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly) BOOL automaticallyInvalidatesChildViewControllers;
- (void)_invalidateSubViewControllersForView:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(readonly, copy) IDESelection *contextMenuSelection;
@property(readonly) IDEWorkspace *workspace;
@property(readonly) IDEWorkspaceDocument *workspaceDocument;
- (id)workspaceDocumentProvider;
- (void)_resolveWorkspaceDocumentProvider;
- (void)_resolveWorkspaceTabController;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end