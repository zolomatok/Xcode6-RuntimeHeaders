//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSTest (IDESharedTestModelObjects) <IDESharedTests_TestRun>
- (void)ide_sharedTests_schemeActionsInvocationRecord:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL ide_sharedTests_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, nonatomic) id <IDESharedTests_Device> ide_sharedTests_testedDevice;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetrics;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_failureSummaries;
- (void)setTestClassName:(id)arg1;
- (id)testClassName;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testClassName;
- (void)setTestName:(id)arg1;
- (id)testName;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testName;
@property(readonly, nonatomic) NSImage *ide_sharedTests_statusImage;
@property(readonly, nonatomic) BOOL ide_sharedTests_passed;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_UUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_sharedTests_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_sharedTests_schemeActionsInvocationRecord;
@property(readonly) Class superclass;
@end