//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEExecutionTracker : NSObject <IDEExecutionTrackerReporting>
{
    NSString *_statusDisplayName;
    DVTFilePath *_statusImageFilePath;
    IDELaunchSession *_launchSession;
    NSMutableArray *_subtrackers;
    BOOL _isFinished;
    int _serviceTier;
    int _cancellationReason;
    NSError *_error;
    NSString *_debugName;
}

+ (void)initialize;
@property(copy) NSString *debugName; // @synthesize debugName=_debugName;
@property int cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(retain) NSError *error; // @synthesize error=_error;
@property int serviceTier; // @synthesize serviceTier=_serviceTier;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain) DVTFilePath *statusImageFilePath; // @synthesize statusImageFilePath=_statusImageFilePath;
@property(retain) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setStatusDisplayName:(id)arg1 statusImageFilePath:(id)arg2;
- (void)addSubtracker:(id)arg1;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (void)_updateIsFinished;
- (void)cancel;
- (void)cancelWithReason:(int)arg1;
@property(readonly) BOOL statusChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableSubtrackers; // @dynamic mutableSubtrackers;
@property(readonly) NSArray *subtrackers; // @dynamic subtrackers;
@property(readonly) Class superclass;

@end