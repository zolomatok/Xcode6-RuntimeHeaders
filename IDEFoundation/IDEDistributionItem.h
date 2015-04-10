//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDistributionItem : NSObject <NSCopying>
{
    BOOL _canHaveProvisioningProfile;
    DVTFilePath *_path;
    DVTFilePath *_machOPath;
    IDEDistributionItem *_parent;
    NSArray *_childItems;
    NSString *_teamID;
    NSString *_appID;
    NSString *_appIDWithoutPrefix;
    NSDictionary *_infoDictionary;
    NSDictionary *_entitlements;
    NSDictionary *_archivedUserEntitlements;
}

+ (id)topLevelDistributionItemsFromProductsRoot:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
+ (id)_distributionItemForPath:(id)arg1 pathsToItems:(id)arg2 pathsToChildPaths:(id)arg3 logAspect:(id)arg4 error:(id *)arg5;
+ (id)flattenDistributionItems:(id)arg1;
+ (id)embeddedProvisioningProfileForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)canHaveProvisioningProfileForItemAtPath:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
+ (unsigned int)machOFileTypeAtPath:(id)arg1 error:(id *)arg2;
+ (id)archivedUserEntitlementsForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)infoDictionaryForItemAtPath:(id)arg1 error:(id *)arg2;
+ (id)itemWithPath:(id)arg1 childItems:(id)arg2 logAspect:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) BOOL canHaveProvisioningProfile; // @synthesize canHaveProvisioningProfile=_canHaveProvisioningProfile;
@property(readonly, nonatomic) NSDictionary *archivedUserEntitlements; // @synthesize archivedUserEntitlements=_archivedUserEntitlements;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly, nonatomic) NSString *appIDWithoutPrefix; // @synthesize appIDWithoutPrefix=_appIDWithoutPrefix;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property __weak IDEDistributionItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) DVTFilePath *machOPath; // @synthesize machOPath=_machOPath;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *bundleID;
- (id)initWithPath:(id)arg1 infoDictionary:(id)arg2 canHaveProvisioningProfile:(BOOL)arg3 teamID:(id)arg4 appID:(id)arg5 appIDWithoutPrefix:(id)arg6 entitlements:(id)arg7 archivedUserEntitlements:(id)arg8 childItems:(id)arg9;

@end