//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBIntraprocessPasteboard : NSPasteboard
{
    NSString *name;
    DVTMutableOrderedDictionary *datastore;
    long long changeCount;
    NSMutableDictionary *owners;
    DVTMutableOrderedSet *types;
}

+ (id)typesFilterableTo:(id)arg1;
+ (id)pasteboardByFilteringTypesInPasteboard:(id)arg1;
+ (id)pasteboardByFilteringFile:(id)arg1;
+ (id)pasteboardByFilteringData:(id)arg1 ofType:(id)arg2;
+ (id)generalPasteboard;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)canReadObjectForClasses:(id)arg1 options:(id)arg2;
- (BOOL)canReadItemWithDataConformingToTypes:(id)arg1;
- (unsigned long long)indexOfPasteboardItem:(id)arg1;
- (id)pasteboardItems;
- (BOOL)writeObjects:(id)arg1;
- (id)stringForType:(id)arg1;
- (id)propertyListForType:(id)arg1;
- (id)dataForType:(id)arg1;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (BOOL)setData:(id)arg1 forType:(id)arg2;
- (BOOL)isPromisedType:(id)arg1;
- (id)availableTypeFromArray:(id)arg1;
- (id)types;
- (long long)addTypes:(id)arg1 owner:(id)arg2;
- (long long)declareTypes:(id)arg1 owner:(id)arg2;
- (void)setOwner:(id)arg1 forTypes:(id)arg2;
- (long long)clearContents;
- (long long)changeCount;
- (void)releaseGlobally;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)init;

@end