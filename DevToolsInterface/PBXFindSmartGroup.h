//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXFindSmartGroup : PBXSmartGroup
{
}

+ (id)globalID;
+ (id)flattenIntoFindResults:(id)arg1;
- (BOOL)openWithProjectDocument:(id)arg1;
- (void)deleteApplicableElements:(id)arg1 fromOutlineView:(id)arg2;
- (BOOL)allowsEditingOfChildren;
- (void)observeBatchFinder:(id)arg1;
- (void)addBatchFindObserver:(id)arg1;
- (void)setOwningModule:(id)arg1;
- (Class)datasourceClass;
- (id)datasource;
- (void)dealloc;
- (id)initWithBinding:(id)arg1;

@end