//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDERunOperationWorkerGroup : IDERunOperationWorker <IDERunOperationWorkerDelegate, IDERunOperationWorkerTracker>
{
    NSArray *_subworkers;
    unsigned long long _finishedSubworkers;
    BOOL _shouldStartNextWorker;
    unsigned long long _currentWorkerIndex;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (void)allSubworkersDidFinishWithError:(id)arg1;
- (void)runningDidFinish:(id)arg1 withError:(id)arg2;
- (void)workerDidComplete:(id)arg1 withError:(id)arg2;
- (void)terminate;
- (void)start;
- (void)_startNextWorker;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;
- (id)initWithWorkers:(id)arg1 launchSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end