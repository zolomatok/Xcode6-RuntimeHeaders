//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXObject : NSObject
{
    PBXGlobalID *_globalID;
}

+ (id)longDescription;
+ (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
+ (id)description;
+ (id)innerDescription;
+ (void)setChangeNotificationsEnabled:(BOOL)arg1;
+ (BOOL)changeNotificationsEnabled;
+ (BOOL)relationshipIsWeak:(id)arg1 forPListArchiver:(id)arg2;
+ (BOOL)hasUserKeys;
+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableKeysToBeSkippedByPListArchiver:(id)arg1;
+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableUserRelationships;
+ (id)archivableUserAttributes;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (void)_clearFallbackClassNameCache:(id)arg1;
+ (id)_classNameToFallbackClassNameDict;
- (void)appendSpotlightDescriptionToString:(id)arg1;
- (id)longDescription;
- (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)description;
- (id)innerDescription;
- (void)willChange;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)readUserSettingsFromPListUnarchiver:(id)arg1;
- (id)readFromPListUnarchiver:(id)arg1;
- (void)writeUserSettingsToPListArchiver:(id)arg1;
- (void)writeToPListArchiver:(id)arg1;
- (void)_unarchiveValuesForArchiveMask:(int)arg1 fromPListUnarchiver:(id)arg2;
- (void)_archiveValuesForArchiveMask:(int)arg1 toPListArchiver:(id)arg2;
- (id)fallbackClassNameForPListArchive;
- (id)gidCommentForArchive;
- (id)classNameForPListArchive;
- (id)globalID;
- (id)globalIDCreateIfNeeded:(BOOL)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 getUnretainedObjectMappings:(id *)arg2;
- (id)init;
- (SEL)selectorForArchiveMask:(int)arg1;
- (void)_setUnarchivedGlobalIDFromHexString:(id)arg1;
- (id)appleScriptID;

@end