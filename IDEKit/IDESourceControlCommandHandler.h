//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
    NSAlert *_waitingOnInitialScanAlert;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
@property(readonly) NSAlert *waitingOnInitialScanAlert; // @synthesize waitingOnInitialScanAlert=_waitingOnInitialScanAlert;
@property(readonly) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void).cxx_destruct;
- (void)upgradeWorkingCopyCommand:(id)arg1;
- (void)configureWorkingCopyCommand:(id)arg1;
- (void)checkOutWorkingCopyCommand:(id)arg1;
- (void)mergeIntoBranchWorkingCopyCommand:(id)arg1;
- (void)mergeFromBranchWorkingCopyCommand:(id)arg1;
- (void)_mergeBranch:(id)arg1 byLandingBranch:(BOOL)arg2;
- (void)switchBranchWorkingCopyCommand:(id)arg1;
- (void)newBranchWorkingCopyCommand:(id)arg1;
- (id)workingCopyMenuObjectForMenuItem:(id)arg1;
- (void)viewPatchesCommand:(id)arg1;
- (void)createPatchCommand:(id)arg1;
- (void)viewSourceControl:(id)arg1;
- (void)quickCheckoutCommand:(id)arg1;
- (void)forceRefreshLocalAndRemoteStatusChecking;
- (void)refreshFileStatusCommand:(id)arg1;
- (void)resolvedCommand:(id)arg1;
- (void)ignoreCommand:(id)arg1;
- (void)revertSelectedFilesCommand:(id)arg1;
- (void)addCommand:(id)arg1;
- (void)_commitSelectedFilePaths:(id)arg1;
- (void)commitSelectedFilesCommand:(id)arg1;
- (void)updateFiles:(id)arg1 showingVersionEditor:(BOOL)arg2;
- (void)revertWorkingCopiesCommand:(id)arg1;
- (void)mergeBranchesCommand:(id)arg1;
- (void)switchBranchesCommand:(id)arg1;
- (void)pushCommand:(id)arg1;
- (void)updateSelectedFilesWithVECommand:(id)arg1;
- (void)updateSelectedFilesCommand:(id)arg1;
- (void)updateWithVECommand:(id)arg1;
- (void)updateCommand:(id)arg1;
- (void)updateSelectedFiles:(BOOL)arg1 showingVersionEditor:(BOOL)arg2;
- (void)commitCommand:(id)arg1;
- (void)presentWaitingForInitialScanToCompleteWithContinuationBlock:(CDUnknownBlockType)arg1;
- (void)presentInvalidSelectionError;
- (void)presentNoSelectionError;
- (void)presentBranchesNotConfiguredError:(SEL)arg1;
- (void)presentWorkingCopyUnreachableError;
- (void)presentRepositoryUnreachableError;
- (void)presentNoWorkingCopiesError;
- (BOOL)hasSelection;
- (BOOL)hasBranchesConfigured;
- (BOOL)hasValidWorkingCopy;
- (BOOL)hasValidWorkspace;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)filePathsOfSelectedItems;
- (id)filePathsOfSelectedNavigableItemsWithStatus:(int)arg1;
- (id)selectedNavigableItemArchivableRepresentations;
- (void)displayError:(id)arg1;
- (void)addWindowController:(id)arg1;
- (BOOL)initialWorkspaceScanIsComplete;
- (CDUnknownBlockType)continuationBlock;
- (id)workspace;
- (id)workspaceDocument;
- (id)_initWithSelectionSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end