//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundDocument : IDESourceCodeDocument <IDEToyboxDelegate>
{
    NSMutableArray *_cachedSourceCodeSections;
    unsigned long long _playgroundResultsGeneration;
    id <NSObject> _sectionCharactersDidChangeNotificationObserver;
    DVTMapTable *_registeredEditorsToPreparationParametersWrappers;
    BOOL _shouldClearCachedPlaygroundDataOnEdit;
    BOOL _isReadingContent;
    BOOL _preserveSerializedPlaygroundDataOnSave;
    BOOL _isQuarantined;
    BOOL _isRichPlaygroundTransitioningToNewFormat;
    BOOL _sourcesModuleIsCurrent;
    BOOL _executionIsInProgress;
    BOOL _isReplayingSerializedResults;
    BOOL _playgroundExpressionIsComplete;
    BOOL _lastExpressionDidComplete;
    BOOL _allowsReset;
    BOOL _runsInFullSimulator;
    BOOL _sourcesModuleNeedsCompilation;
    NSArray *_playgroundSections;
    NSArray *_sourceCodePlaygroundSectionCharacterRanges;
    NSArray *_executionIssues;
    IDEToybox *_toybox;
    unsigned long long _displayMode;
    unsigned long long _autoTerminationDelay;
    IDEPlaygroundDocumentSharedContext *_playgroundContext;
    NSError *_nonFatalReadError;
    NSURL *_originalContentURLDuringSaving;
    DVTFilePath *_frameworkSearchPath;
    DVTFilePath *_auxSourcesTemporaryBuildPath;
    NSOperationQueue *_auxSourcesCompilationQueue;
    NSDictionary *_auxSourcesFileContentsHashes;
    NSUUID *_currentUUID;
}

+ (id)keyPathsForValuesAffectingSourceLanguageServiceContext;
+ (id)keyPathsForValuesAffectingBuildSettings;
+ (id)directoryForPlaygroundAppConstructionWithAppUniquingString:(id *)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingSourceCodePlaygroundSectionCharacterRanges;
+ (id)keyPathsForValuesAffectingSourceCodePlaygroundSections;
+ (BOOL)shouldTrackFileSystemChanges;
+ (BOOL)autosavesInPlace;
+ (id)playgroundDocumentContainingFilePath:(id)arg1;
+ (BOOL)_quarantinePlaygroundOpenIsCanceledByUser:(id)arg1;
+ (id)_quarantineDocumentsOpenAttempts;
+ (BOOL)playgroundAuxiliarySourceEnabled;
+ (BOOL)playgroundUsesInlineToys;
+ (void)initialize;
+ (id)availablePlaygroundSectionClasses;
+ (id)keyPathsForValuesAffectingRenderDocumentationForInspector;
+ (id)keyPathsForValuesAffectingShowRenderDocumentationChoice;
+ (id)keyPathsForValuesAffectingShowRunInFullSimulatorChoice;
+ (id)keyPathsForValuesAffectingPlatformForInspector;
@property(readonly, copy) NSUUID *currentUUID; // @synthesize currentUUID=_currentUUID;
@property(retain) NSDictionary *auxSourcesFileContentsHashes; // @synthesize auxSourcesFileContentsHashes=_auxSourcesFileContentsHashes;
@property BOOL sourcesModuleNeedsCompilation; // @synthesize sourcesModuleNeedsCompilation=_sourcesModuleNeedsCompilation;
@property(retain, nonatomic) NSOperationQueue *auxSourcesCompilationQueue; // @synthesize auxSourcesCompilationQueue=_auxSourcesCompilationQueue;
@property(copy) DVTFilePath *auxSourcesTemporaryBuildPath; // @synthesize auxSourcesTemporaryBuildPath=_auxSourcesTemporaryBuildPath;
@property(nonatomic) BOOL runsInFullSimulator; // @synthesize runsInFullSimulator=_runsInFullSimulator;
@property(retain, nonatomic) DVTFilePath *frameworkSearchPath; // @synthesize frameworkSearchPath=_frameworkSearchPath;
@property(copy, nonatomic) NSURL *originalContentURLDuringSaving; // @synthesize originalContentURLDuringSaving=_originalContentURLDuringSaving;
@property(retain) NSError *nonFatalReadError; // @synthesize nonFatalReadError=_nonFatalReadError;
@property(readonly) IDEPlaygroundDocumentSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
@property unsigned long long autoTerminationDelay; // @synthesize autoTerminationDelay=_autoTerminationDelay;
@property(nonatomic) BOOL allowsReset; // @synthesize allowsReset=_allowsReset;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property BOOL lastExpressionDidComplete; // @synthesize lastExpressionDidComplete=_lastExpressionDidComplete;
@property BOOL playgroundExpressionIsComplete; // @synthesize playgroundExpressionIsComplete=_playgroundExpressionIsComplete;
@property BOOL isReplayingSerializedResults; // @synthesize isReplayingSerializedResults=_isReplayingSerializedResults;
@property BOOL executionIsInProgress; // @synthesize executionIsInProgress=_executionIsInProgress;
@property(readonly) IDEToybox *toybox; // @synthesize toybox=_toybox;
@property(copy, nonatomic) NSArray *executionIssues; // @synthesize executionIssues=_executionIssues;
@property(copy, nonatomic) NSArray *sourceCodePlaygroundSectionCharacterRanges; // @synthesize sourceCodePlaygroundSectionCharacterRanges=_sourceCodePlaygroundSectionCharacterRanges;
@property(copy, nonatomic) NSArray *playgroundSections; // @synthesize playgroundSections=_playgroundSections;
- (void).cxx_destruct;
- (BOOL)dvt_hasBeenEditedSinceLastUserInitiatedSave;
- (id)willPresentError:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
- (id)indexCompatibleLocationFromLocation:(id)arg1;
- (id)editorCompatibleLocationFromLocation:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)editorDocumentWillClose;
- (id)playgroundSectionsFromXMLElement:(id)arg1 enclosingFileWrapper:(id)arg2 error:(id *)arg3;
- (id)xmlElementConstructingFileWrapper:(id)arg1;
- (id)dataOfType:(id)arg1 contructingFileWrapper:(id)arg2 error:(id *)arg3;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (id)contentPathsToPreserveOnSave;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)readContentFromLegacyXMLElement:(id)arg1 enclosingFileWrapper:(id)arg2 error:(id *)arg3;
- (BOOL)readContentFromXMLElement:(id)arg1 enclosingFileWrapper:(id)arg2 error:(id *)arg3;
- (BOOL)readContentFromData:(id)arg1 ofType:(id)arg2 enclosingFileWrapper:(id)arg3 error:(id *)arg4;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)toyboxArchivableStateDidChange;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (void)_clearSerializedPlaygroundResultsIfNeeded;
- (BOOL)_shouldSavePlaygroundResultsToWrapperAndQuit;
- (BOOL)_shouldSavePlaygroundResultsToWrapper;
- (id)sourceLanguageServiceContext;
@property(readonly) NSDictionary *buildSettings;
- (void)cancelExecutionInWorkspace:(id)arg1;
- (BOOL)executeInWorkspace:(id)arg1 fromEditor:(id)arg2 replayFromSerializedData:(BOOL)arg3 error:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)compileAuxiliarySourceModuleForPlayground:(id)arg1;
- (BOOL)updatedAuxiliarySourceFileHashesHaveChanges;
- (BOOL)_shouldHandlePlaygroundEventFromGeneration:(unsigned long long)arg1;
- (void)unregisterEditor:(id)arg1;
- (void)registerEditor:(id)arg1;
- (id)_preparationParametersForWorkspace:(id)arg1 outAppBundle:(id *)arg2 error:(id *)arg3;
- (id)regeneratePlaygroundAppBundleForDevice:(id)arg1 error:(id *)arg2;
- (id)sourceCodePreambleForExecution;
- (id)sourceCodeForExecution;
- (void)executionGenerationDidEnd;
- (void)playgroundExpressionCompleted;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGenerationIsReplayingSerializedResults:(BOOL)arg1;
- (void)addPlaygroundLoggerResult:(id)arg1;
- (void)removeAllPlaygroundResults;
- (void)resetPlayground;
@property(readonly, copy, nonatomic) NSArray *sourceCodePlaygroundSections;
- (void)_upgradeInteractiveLearningPlaygroundToModernFormat;
- (void)_upgradeSimpleCodePlaygroundToModernFormat;
- (void)upgradeFormat:(id)arg1;
- (void)_managedPlaygroundContainerAccessInBlock:(CDUnknownBlockType)arg1;
- (id)contentsURL;
- (void)toggleDisplayMode:(id)arg1;
- (void)_setTargetPlatformIdentifier:(id)arg1;
@property BOOL sourcesModuleIsCurrent; // @synthesize sourcesModuleIsCurrent=_sourcesModuleIsCurrent;
- (void)_closeWindowHostingURL:(id)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)init;
- (BOOL)renderDocumentationForInspector;
- (void)setRenderDocumentationForInspector:(BOOL)arg1;
- (BOOL)showRenderDocumentationChoice;
- (BOOL)showRunInFullSimulatorChoice;
@property(nonatomic) unsigned long long platformForInspector;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end