//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDevice (IDEFoundationAdditions)
- (id)actualRunnablePathForRunnableLocation:(id)arg1;
- (id)testingFrameworkPathsForBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
- (id)deviceForRunningUnitTestsWithHost:(id)arg1 error:(id *)arg2;
- (void)modifyTestingEnvironmentVariables:(id)arg1 host:(id)arg2 testBundlePath:(id)arg3;
- (id)testArchitectureForBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
- (id)testHostPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2 outError:(id *)arg3;
@property(readonly) BOOL supportsFileSpecifyingTestScopes;
@property(readonly) BOOL supportsInverseTestScopes;
@property(readonly) BOOL supportsMultipleTestScopes;
- (id)analysisOperationWithAnalysisToolService:(id)arg1 location:(id)arg2 workingDirectory:(id)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 outError:(id *)arg6;
- (void)createInstallWithName:(id)arg1 path:(id)arg2 buildables:(id)arg3 buildParameters:(id)arg4 killProcesses:(id)arg5 workspace:(id)arg6;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (id)scriptingEnvironment;
- (id)closestRelativeOfTargetArchitecture:(id)arg1 forBuildArchitectures:(id)arg2;
- (BOOL)supportsRunningExecutableAtPath:(id)arg1 usingArchitecture:(id)arg2 error:(id *)arg3;
- (BOOL)supportsExecutionForArchitecture:(id)arg1 launchSession:(id)arg2 error:(id *)arg3;
- (id)deviceSpecificOverridingPropertiesForBuildable:(id)arg1 withBaselineParameters:(id)arg2;
- (void)didBecomeActiveDeviceForRunContext:(id)arg1;
- (id)supportedSDKsForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)supportedArchitecturesForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForPathRunnableWithArchitecture:(id)arg1;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)displayNameAdditionsWhenUsingArchitecture:(id)arg1 withSDK:(id)arg2;
- (id)displayNameWhenUsingArchitecture:(id)arg1 withSDK:(id)arg2;
@end