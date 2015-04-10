//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBuildFileRefDGSnapshot : NSObject
{
    XCBuildPhaseDGSnapshot *_buildPhaseSnapshot;
    PBXGlobalID *_referenceGlobalID;
    NSString *_path;
    PBXFileType *_fileType;
    NSDictionary *_fileProperties;
    NSDictionary *_buildSettings;
    XCBuildInfo *_buildInfo;
    NSString *_buildFilePrimaryAttrString;
    BOOL _isInVariantGroup;
    BOOL _linkUsingSearchPath;
    NSString *_regionVariantName;
    NSString *_sourceTree;
}

- (BOOL)linkUsingSearchPath;
- (id)description;
- (BOOL)boolValueOfAttributeNamed:(id)arg1;
- (BOOL)hasValue:(id)arg1 inPropertiesArrayForKey:(id)arg2;
- (id)propertiesArrayForKey:(id)arg1;
- (id)valueForPropertyKey:(id)arg1;
- (id)pathForWrapperPart:(int)arg1;
- (id)subpathForWrapperPart:(int)arg1;
- (id)sourceTree;
- (id)regionVariantName;
- (BOOL)isInVariantGroup;
- (id)buildSettings;
- (id)fileProperties;
- (id)fileType;
- (id)path;
- (id)referenceGlobalID;
- (id)stringValueForPrimaryAttribute;
- (id)buildInfo;
- (id)buildPhaseSnapshot;
- (void)printForDebugging;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 fileType:(id)arg2 buildSettings:(id)arg3 forBuildPhaseSnapshot:(id)arg4;
- (id)initWithInformationFromBuildFile:(id)arg1 fileReference:(id)arg2 forBuildPhaseSnapshot:(id)arg3;

@end