//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlMergeOperationInfo : IDESourceControlOperationInfo <IDESourceControlBranchingOperationInfoProtocol>
{
    IDESourceControlBranch *_mergeBranch;
    IDESourceControlBranch *_targetBranch;
    NSString *_currentRevisionIdentifier;
    NSString *_branchRevisionIdentifier;
    NSString *_ancestorRevisionIdentifier;
    NSString *_remoteURLToMerge;
    NSMutableDictionary *_itemsWithConflicts;
    BOOL _landingMerge;
}

@property BOOL landingMerge; // @synthesize landingMerge=_landingMerge;
@property(readonly) NSMutableDictionary *itemsWithConflicts; // @synthesize itemsWithConflicts=_itemsWithConflicts;
@property(readonly) NSString *remoteURLToMerge; // @synthesize remoteURLToMerge=_remoteURLToMerge;
@property(copy) NSString *ancestorRevisionIdentifier; // @synthesize ancestorRevisionIdentifier=_ancestorRevisionIdentifier;
@property(copy) NSString *branchRevisionIdentifier; // @synthesize branchRevisionIdentifier=_branchRevisionIdentifier;
@property(copy) NSString *currentRevisionIdentifier; // @synthesize currentRevisionIdentifier=_currentRevisionIdentifier;
@property(retain) IDESourceControlBranch *mainBranch; // @synthesize mainBranch=_targetBranch;
@property(retain) IDESourceControlBranch *otherBranch; // @synthesize otherBranch=_mergeBranch;
- (void).cxx_destruct;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)processMergeInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)processDistributedMergeInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) unsigned long long conflictCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end