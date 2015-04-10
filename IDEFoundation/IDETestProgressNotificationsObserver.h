//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETestProgressNotificationsObserver : NSObject <IDEUnitTestsObserver>
{
    IDETestRunSession *_testRunSession;
    NSString *_currentSuite;
    NSString *_currentTestClass;
    NSString *_currentTestMethod;
}

@property(copy, nonatomic) NSString *currentTestMethod; // @synthesize currentTestMethod=_currentTestMethod;
@property(copy, nonatomic) NSString *currentTestClass; // @synthesize currentTestClass=_currentTestClass;
@property(copy, nonatomic) NSString *currentSuite; // @synthesize currentSuite=_currentSuite;
@property(retain, nonatomic) IDETestRunSession *testRunSession; // @synthesize testRunSession=_testRunSession;
- (void).cxx_destruct;
- (void)_postDistributedProgressNotification;
- (id)identifierForTestClass:(id)arg1 method:(id)arg2;
- (void)testOperationGroupDidFinish;
- (void)testOperation:(id)arg1 willFinishWithSuccess:(BOOL)arg2 withError:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3;
- (void)testDidOutput:(id)arg1;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(id)arg1 method:(id)arg2 performanceMetric:(id)arg3 rawOutput:(id)arg4;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3;
- (void)testOperationDidStartExecution:(id)arg1;
- (id)initWithTestRunSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end