//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUDebuggerController : NSObject <DVTInvalidation, DYShaderProfilerDelegate>
{
    DVTObservingToken *_extensionsObserver;
    NSMutableArray *_debugStateObservers;
    int _postCaptureDebugState;
    double _appFrameRate;
    double _appTargetFrameRate;
    NSDictionary *_maxIssueSeverity;
    DYShaderProfiler *_shaderProfiler;
    NSObject<OS_dispatch_queue> *_shaderProfilerReplyQueue;
    DYShaderProfilerResult *_shaderProfilerResults;
    DYShaderProfilerResult *_shaderProfilerResultsBase;
    DYInvestigatorCaseConfigData *_investigatorCaseConfigData;
    BOOL _supportsInvestigator;
    BOOL _isInvestigatorReady;
    BOOL _archiveHasPendingChanges;
    BOOL _shouldDisableCaptureFrameButton;
    BOOL _shadersUpdatable;
    int _debugState;
    int _enableGPUValidationMode;
    id <GPUResourceManager> _resourceManager;
    GPUTraceModelFactory *_modelFactory;
    GPUInvestigatorReportItem *_reportItem;
    DYCaptureSessionInfo *_captureSessionInfo;
    GPUTraceSession *_traceSession;
    GPUInferiorSession *_inferiorSession;
    DYDeviceInfo *_deviceInfo;
    NSError *_error;
    NSString *_appName;
    NSArray *_appArguments;
    NSArray *_analyzerFindings;
    NSArray *_extensions;
    NSSet *_fenumsWithErrors;
    NSURL *_captureArchiveURL;
    NSObject<OS_dispatch_queue> *_synchronousJobQueue;
}

+ (void)initialize;
+ (id)logAspect;
@property(readonly) NSObject<OS_dispatch_queue> *synchronousJobQueue; // @synthesize synchronousJobQueue=_synchronousJobQueue;
@property(readonly) BOOL shadersUpdatable; // @synthesize shadersUpdatable=_shadersUpdatable;
@property int enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property BOOL shouldDisableCaptureFrameButton; // @synthesize shouldDisableCaptureFrameButton=_shouldDisableCaptureFrameButton;
@property(readonly) DYShaderProfilerResult *shaderProfilerResultsBase; // @synthesize shaderProfilerResultsBase=_shaderProfilerResultsBase;
@property(readonly) DYShaderProfilerResult *shaderProfilerResults; // @synthesize shaderProfilerResults=_shaderProfilerResults;
@property(retain) NSURL *captureArchiveURL; // @synthesize captureArchiveURL=_captureArchiveURL;
@property(retain) NSSet *fenumsWithErrors; // @synthesize fenumsWithErrors=_fenumsWithErrors;
@property(retain) NSArray *extensions; // @synthesize extensions=_extensions;
@property(retain) NSArray *analyzerFindings; // @synthesize analyzerFindings=_analyzerFindings;
@property(readonly) double appTargetFrameRate; // @synthesize appTargetFrameRate=_appTargetFrameRate;
@property(readonly) double appFrameRate; // @synthesize appFrameRate=_appFrameRate;
@property(retain) NSArray *appArguments; // @synthesize appArguments=_appArguments;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) DYDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) GPUInferiorSession *inferiorSession; // @synthesize inferiorSession=_inferiorSession;
@property(nonatomic) __weak GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
@property(retain) DYCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property BOOL archiveHasPendingChanges; // @synthesize archiveHasPendingChanges=_archiveHasPendingChanges;
@property(retain, nonatomic) GPUInvestigatorReportItem *reportItem; // @synthesize reportItem=_reportItem;
@property BOOL isInvestigatorReady; // @synthesize isInvestigatorReady=_isInvestigatorReady;
@property(readonly) BOOL supportsInvestigator; // @synthesize supportsInvestigator=_supportsInvestigator;
@property int debugState; // @synthesize debugState=_debugState;
@property(retain) GPUTraceModelFactory *modelFactory; // @synthesize modelFactory=_modelFactory;
@property(retain, nonatomic) id <GPUResourceManager> resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (void)updateShaders;
@property(readonly) BOOL supportsDebugBarShaderUpdate;
- (id)createProgramPerformanceReportProvider;
- (id)createInvestigatorReportProvider;
- (void)handleDocumentChanged:(id)arg1 currentAPIItem:(id)arg2;
- (id)runShaderProfiler;
- (void)loadShaderProfilerResults;
- (void)saveShaderProfilerResults;
@property(readonly) BOOL isDisassemblerAvailable; // @dynamic isDisassemblerAvailable;
@property(readonly) BOOL shaderProfilerResultsHaveBeenUpdated; // @dynamic shaderProfilerResultsHaveBeenUpdated;
@property(readonly) BOOL isShaderProfilerAvailable; // @dynamic isShaderProfilerAvailable;
@property(readonly) BOOL isRuntimeOSAppleInternal; // @dynamic isRuntimeOSAppleInternal;
- (id)queryShaderInfoWithPayload:(id)arg1;
- (void)createReportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetResourceManagerWithResourceStreamer:(id)arg1;
- (void)archiveReports;
- (int)maxIssueSeverity:(int)arg1;
- (BOOL)isDeviceBusy;
- (void)touchDebugState;
- (BOOL)relinquishAutomatedDebugState;
- (BOOL)requestAutomatedDebugState:(int)arg1;
- (void)_handleDebuggerStateChanges;
- (void)handleInferiorSessionActiveState;
- (void)onObservedDictionaryUpdated:(id)arg1 archiveKey:(id)arg2;
- (void)traceSessionEstablishedWithNewArchive:(BOOL)arg1;
- (id)unarchiveDictionaryForKey:(id)arg1;
- (void)handleUpdatedDictionary:(id)arg1 forKey:(id)arg2;
- (void)captureGPUTraceFromBreakpoint:(id)arg1;
- (id)copyAdjunctDataForFilename:(id)arg1 error:(id *)arg2;
- (BOOL)storeAdjunctData:(id)arg1 filename:(id)arg2 error:(id *)arg3;
- (id)retrieveArchivedDataForKey:(id)arg1 error:(id *)arg2;
- (BOOL)archiveData:(id)arg1 withKey:(id)arg2 replaceData:(BOOL)arg3 error:(id *)arg4;
- (void)handleCaptureSessionTearDown;
- (BOOL)handleCaptureSessionFinalization:(id)arg1;
- (void)_handleExtensions;
- (BOOL)analyzeStoredCaptureArchive;
- (void)setupCaptureSessionInfoWithArchive:(id)arg1;
- (void)setupCaptureSession:(id)arg1;
- (void)setupGuestAppSession:(id)arg1;
- (BOOL)archiveLastDisplayableRenderBufferImage;
@property(readonly) NSImage *archivedRenderbufferImage; // @dynamic archivedRenderbufferImage;
- (void)handleAppSessionTransportMessage:(id)arg1;
- (void)cancelAnalysis;
- (void)beginAnalysis;
- (id)captureArchive;
- (id)newGuestAppSessionWithGuestApp:(id)arg1 device:(id)arg2 deferLaunch:(BOOL)arg3;
- (void)createModelFactory;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end