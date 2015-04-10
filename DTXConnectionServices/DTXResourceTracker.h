//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTXResourceTracker : NSObject
{
    unsigned long long _total;
    unsigned long long _maxChunk;
    unsigned long long _used;
    unsigned int _waiting;
    unsigned int _acquireNum;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_acqSem;
    DTXResourceTracker *_parentTracker;
    BOOL _log;
}

@property(nonatomic) BOOL log; // @synthesize log=_log;
- (void)resumeLimits;
- (void)suspendLimits;
- (void)releaseSize:(unsigned long long)arg1;
- (void)forceAcquireSize:(unsigned long long)arg1;
- (unsigned int)acquireSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long maxChunkSize;
@property(nonatomic) unsigned long long totalSize;
- (void)dealloc;
- (id)init;

@end