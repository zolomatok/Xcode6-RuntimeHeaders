//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXCodeAssistantIncludedFrameworksBasedStrategy : PBXCodeAssistantStrategy
{
    PBXFileReference *_associatedFileReference;
    PBXNativeTarget *_associatedTarget;
    PBXHeaderFileSearchContext *_headerFileSearchContext;
    NSArray *_frameworkSearchPaths;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (id)_importLineStringUnderCursor;
- (id)_completionItemsFromSubPath:(id)arg1;
- (id)_uniqueCompletionItemsAtPath:(id)arg1 insideFramework:(BOOL)arg2 privateHeaders:(BOOL)arg3;
- (id)frameworkSearchPaths;
- (id)headerFileSearchContext;
- (id)associatedTarget;
- (id)associatedProject;
- (id)associatedFileReference;
- (void)dealloc;

@end