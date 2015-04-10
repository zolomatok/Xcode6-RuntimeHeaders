//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAnalyzeSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    NSString *_buildConfiguration;
}

+ (void)insertsynthesizedMacrosIntoOverridingProperties:(id)arg1;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (BOOL)shouldAllowCustomPhaseActions;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)buildOperationForExecutionEnvironment:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 schemeCommand:(id)arg4 filePath:(id)arg5 buildConfiguration:(id)arg6 buildLog:(id)arg7 overridingProperties:(id)arg8 activeRunDestination:(id)arg9 activeArchitecture:(id)arg10 dontActuallyRunCommands:(BOOL)arg11 restorePersistedBuildResults:(BOOL)arg12 schemeActionRecord:(id)arg13 error:(id *)arg14;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (id)mutablePostPhaseExecutionActions;
- (id)postPhaseExecutionActions;
- (id)mutablePrePhaseExecutionActions;
- (id)prePhaseExecutionActions;
- (void)_commonInit;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end