//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDETestingSpecifier <NSObject>
@property(readonly) NSMutableArray *mutableSkippedTests;
@property(copy) NSArray *skippedTests;
@property BOOL skipped;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
- (id <IDETestable>)testable;
@end