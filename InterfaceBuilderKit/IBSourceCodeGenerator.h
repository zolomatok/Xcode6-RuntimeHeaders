//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSourceCodeGenerator : NSObject
{
}

+ (id)interfaceFileExtension;
+ (id)primaryFileExtension;
+ (id)languageDisplayName;
+ (id)languageIdentifier;
- (id)commentPrefixString;
- (id)generateFileInformationHeaderForFileNamed:(id)arg1;
- (id)generateSourceFilesForPartialClassDescription:(id)arg1 baseFileName:(id)arg2 directory:(id)arg3;
- (id)generatePreferredSourceCodeForNamedRelations:(id)arg1 ofRelationshipType:(long long)arg2 inClassDescription:(id)arg3;
- (id)generatePreferredSourceCodeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 inClassDescription:(id)arg3;

@end