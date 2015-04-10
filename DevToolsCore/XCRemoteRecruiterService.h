//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRemoteRecruiterService : NSObject
{
    XCRecruiterConnection *_pConn;
    NSMutableDictionary *_volunteerStatus;
    NSTimer *_statusLoop;
    BOOL _forceVolunteerStat;
}

+ (id)defaultService;
- (id)newRecruiterConnection;
- (void)executeBuildOperation:(id)arg1 againstHostSet:(id)arg2;
- (void)ensureConnectionToHostSet:(id)arg1;
- (void)statusForHostSet:(id)arg1;
- (id)_spaceSeparatedHostNamesForHostSet:(id)arg1;
- (void)_recruiterPersistentConnectionLost:(id)arg1;
- (id)hostWithSpec:(id)arg1;
- (void)removeHosts:(id)arg1;
- (void)removeHostWithSpec:(id)arg1;
- (id)addHostWithSpec:(id)arg1;
- (void)addHosts:(id)arg1;
- (void)_recruiterMessageReceived:(id)arg1;
- (void)updateHostStatus:(id)arg1;
- (void)connectionMade:(id)arg1;
- (void)_recruiterPersistentConnectionMade:(id)arg1;
- (void)dealloc;
- (id)volunteerStatus;
- (void)synchronizeWithRecruiter:(id)arg1;
- (void)synchronizeWithRecruiter;
- (void)connect;
- (void)stopSynchronizationLoop;
- (void)startSynchronizationLoop;
- (id)init;

@end