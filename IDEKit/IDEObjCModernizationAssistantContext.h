//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEObjCModernizationAssistantContext : IDEMigrationAssistantContext
{
    NSMutableArray *_targets;
    NSMutableArray *_selectedTargets;
    unsigned long long _currentConversionStage;
    DVTMapTable *_convertedFilePathForOriginalFilePathMapTable;
    NSMutableArray *_modernizerBuildOptions;
}

+ (BOOL)allowParallelBuild;
+ (void)initialize;
@property(copy) NSArray *targets; // @synthesize targets=_targets;
@property unsigned long long currentConversionStage; // @synthesize currentConversionStage=_currentConversionStage;
- (void).cxx_destruct;
- (id)convertedFilePathForOriginalFilePath:(id)arg1;
- (unsigned long long)numberOfConvertedFilePaths;
- (id)_convertedFilePathForOriginalFilePathMapTableParallel;
- (id)_convertedFilePathForOriginalFilePathMapTable;
- (void)setWorkspaceTabController:(id)arg1;
- (id)buildActionEntries;
- (id)runPhase;
- (id)runContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(copy) NSArray *modernizerBuildOptions; // @dynamic modernizerBuildOptions;
@property(readonly, copy) NSMutableArray *mutableModernizerBuildOptions; // @dynamic mutableModernizerBuildOptions;
@property(readonly, copy) NSMutableArray *mutableSelectedTargets; // @dynamic mutableSelectedTargets;
@property(copy) NSArray *selectedTargets; // @dynamic selectedTargets;

@end