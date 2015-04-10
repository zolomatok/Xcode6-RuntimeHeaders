//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlWorkingCopyConfiguration : NSObject
{
    NSString *_relativeTrunkLocation;
    NSString *_relativeBranchesLocation;
    NSString *_relativeTagsLocation;
    NSMutableArray *_branches;
    DVTDispatchLock *_branchesLock;
    NSDate *_branchesInvalidationDate;
    IDESourceControlRepository *_repository;
    NSString *_name;
    NSString *_uniqueIdentifier;
    IDESourceControlExtension *_sourceControlExtension;
    NSString *_remoteDistributedOrigin;
}

@property(copy) NSString *remoteDistributedOrigin; // @synthesize remoteDistributedOrigin=_remoteDistributedOrigin;
@property(retain) IDESourceControlExtension *sourceControlExtension; // @synthesize sourceControlExtension=_sourceControlExtension;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) IDESourceControlRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (id)removeBranchWithName:(id)arg1 message:(id)arg2 force:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)newBranchWithName:(id)arg1 source:(id)arg2 message:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)branchesForRemote:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)branchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_branchesWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)defaultBranchStartingPoint;
- (void)setBranches:(id)arg1;
@property(readonly) NSMutableArray *branches;
- (id)automaticallyConfigureSVNLocationsForOrigin:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_automaticallyConfigureSVNLocationsForOrigin:(id)arg1 withToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_searchRelativeLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(copy) NSString *relativeTagsLocation; // @synthesize relativeTagsLocation=_relativeTagsLocation;
@property(copy) NSString *relativeTrunkLocation; // @synthesize relativeTrunkLocation=_relativeTrunkLocation;
@property(copy) NSString *relativeBranchesLocation; // @synthesize relativeBranchesLocation=_relativeBranchesLocation;
- (id)_stripBaseURLOrStartingSlash:(id)arg1;
- (id)tagsLocation;
- (id)trunkLocation;
- (id)branchesLocation;
- (id)_createBranchingURLWithRelativePath:(id)arg1;
- (id)removeRemoteWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)newRemoteWithName:(id)arg1 location:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)remotesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)description;
@property(readonly) BOOL needsConfiguring;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 sourceControlManager:(id)arg2;
- (id)initWithName:(id)arg1 identifier:(id)arg2 sourceControlExtension:(id)arg3 relativeBranchesLocation:(id)arg4 relativeTrunkLocation:(id)arg5 relativeTagsLocation:(id)arg6 sourceControlManager:(id)arg7;
- (id)init;

@end