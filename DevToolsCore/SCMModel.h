//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCMModel : SCMBasePathObject
{
    NSOperationQueue *_operationQueue;
    NSMutableArray *_runningRequests;
    NSString *_name;
    SCMActivity *_rootActivity;
    SCMNode *_root;
    SCMRequest *_finishedRequest;
    BOOL _busy;
    BOOL _disconnected;
}

+ (void)startPendingRequests;
+ (long long)runningRequests;
+ (long long)runningCriticalRequests;
+ (void)initialize;
@property BOOL disconnected; // @synthesize disconnected=_disconnected;
@property(readonly) BOOL busy; // @synthesize busy=_busy;
@property(retain) SCMRequest *finishedRequest; // @synthesize finishedRequest=_finishedRequest;
@property(retain) SCMNode *root; // @synthesize root=_root;
@property(retain) SCMActivity *rootActivity; // @synthesize rootActivity=_rootActivity;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)logOperation;
- (void)diffOperation;
- (void)blameOperation;
- (void)catOperation;
- (void)unlockOperation;
- (void)lockOperation;
- (void)moveOperation;
- (void)copyOperation;
- (void)deleteOperation;
- (void)mkdirOperation;
- (void)handleFinishedRequest:(id)arg1;
- (id)requestLogForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (id)requestDiffForPath:(id)arg1 revision:(id)arg2 secondRevision:(id)arg3;
- (id)requestBlameForPath:(id)arg1 revision:(id)arg2;
- (id)requestCatForPath:(id)arg1 revision:(id)arg2;
- (id)requestCatForPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (id)requestLockForPaths:(id)arg1 withMessage:(id)arg2;
- (id)requestUnlockForPaths:(id)arg1;
- (id)requestMoveFromPaths:(id)arg1 toPaths:(id)arg2 withMessage:(id)arg3;
- (id)requestCopyFromPaths:(id)arg1 toPaths:(id)arg2 revision:(id)arg3 withMessage:(id)arg4;
- (id)requestDeleteForPaths:(id)arg1 withMessage:(id)arg2;
- (id)requestMkdirForPaths:(id)arg1 withMessage:(id)arg2;
- (id)createRequestWithSelector:(SEL)arg1;
- (void)queueRequest:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)suddenTerminationClientName;
- (void)addRunningRequest:(id)arg1;
- (Class)requestClass;
- (void)setPath:(id)arg1;
- (id)path;
- (id)tempFileName:(id)arg1 forRevision:(id)arg2;
- (id)dictionaryRepresentation;
- (void)disconnect;
- (void)dealloc;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2;

@end