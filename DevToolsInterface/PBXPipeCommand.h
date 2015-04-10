//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXPipeCommand : NSObject
{
    NSString *_commandString;
    int _inputSource;
    int _outputDestination;
    int _errorDestination;
    NSString *_workingDirectory;
    NSArray *_arguments;
    id _context;
    NSTask *_runningTask;
    NSString *_shellScriptPath;
    NSTextView *_outputTextView;
    struct _NSRange _outputRange;
    NSMutableData *_outputData;
    NSMutableData *_errorData;
    BOOL _stdErrDone;
    BOOL _stdOutDone;
}

+ (void)cleanupOutputDirectory;
+ (id)_xcUserScriptOutputDirectory:(BOOL)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (void)initialize;
+ (BOOL)isPipeRunningWithContext:(id)arg1;
+ (void)_setPipeIsRunning:(BOOL)arg1 withContext:(id)arg2;
+ (void)setShellPath:(id)arg1;
+ (id)shellPath;
@property BOOL stdOutDone; // @synthesize stdOutDone=_stdOutDone;
@property BOOL stdErrDone; // @synthesize stdErrDone=_stdErrDone;
@property(retain) NSMutableData *errorData; // @synthesize errorData=_errorData;
@property(retain) NSMutableData *outputData; // @synthesize outputData=_outputData;
@property struct _NSRange outputRange; // @synthesize outputRange=_outputRange;
@property(retain) NSTextView *outputTextView; // @synthesize outputTextView=_outputTextView;
@property(copy) NSString *shellScriptPath; // @synthesize shellScriptPath=_shellScriptPath;
@property(retain) NSTask *runningTask; // @synthesize runningTask=_runningTask;
@property(retain) id context; // @synthesize context=_context;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property int errorDestination; // @synthesize errorDestination=_errorDestination;
@property int outputDestination; // @synthesize outputDestination=_outputDestination;
@property int inputSource; // @synthesize inputSource=_inputSource;
@property(copy) NSString *commandString; // @synthesize commandString=_commandString;
@property(readonly) int effectiveErrorDestination; // @dynamic effectiveErrorDestination;
- (BOOL)runWithContext:(id)arg1;
- (BOOL)canRunWithContext:(id)arg1;
- (BOOL)_runWithInputString:(id)arg1;
- (BOOL)_writeTempScriptFile;
- (id)_scriptData;
- (id)_expansionForPipeRuntimeVariableName:(id)arg1 inputString:(id)arg2 variableNameRange:(struct _NSRange)arg3 fullVariableRange:(struct _NSRange)arg4 context:(void *)arg5;
- (id)_documentForTextView:(id)arg1;
- (void)_executeBinaryWithInputString:(id)arg1;
- (void)_writeInputStream:(id)arg1;
- (void)_stdoutNowAvailable:(id)arg1;
- (void)_stderrNowAvailable:(id)arg1;
- (void)_checkForEndOfOutput;
- (void)_finishExecuteBinary;
- (void)_handleOutputData:(id)arg1;
- (void)_handleErrorData:(id)arg1;
- (BOOL)_replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 withContext:(id)arg3;
- (id)_expansionForPipeOutputVariableName:(id)arg1 inputString:(id)arg2 variableNameRange:(struct _NSRange)arg3 fullVariableRange:(struct _NSRange)arg4 context:(void *)arg5;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end