//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBObjcGenerator : IBSourceCodeGenerator
{
}

+ (id)generateInterfaceForPartialClassDescription:(id)arg1;
+ (id)interfaceFileExtension;
+ (id)primaryFileExtension;
+ (id)languageDisplayName;
+ (id)languageIdentifier;
+ (id)frameworkImports;
- (id)commentPrefixString;
- (id)generateSourceFilesForPartialClassDescription:(id)arg1 baseFileName:(id)arg2 directory:(id)arg3;
- (id)generateImplementationForPartialClassDescription:(id)arg1 fileName:(id)arg2 withPreviousActionOrder:(id)arg3 previousToOneOutletOrder:(id)arg4 andPreviousToManyOutletOrder:(id)arg5 interfaceFileName:(id)arg6;
- (id)generateInterfaceForPartialClassDescription:(id)arg1 fileName:(id)arg2 withPreviousActionOrder:(id)arg3 previousToOneOutletOrder:(id)arg4 andPreviousToManyOutletOrder:(id)arg5;
- (id)generateSourceCodeDeclarationForNamedRelations:(id)arg1 ofRelationshipType:(long long)arg2 inClassDescription:(id)arg3;
- (id)generatePreferredSourceCodeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 inClassDescription:(id)arg3;
- (id)generateSourceCodeDeclarationForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 inClassDescription:(id)arg3;
- (id)generateSourceCodePrototypeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 inClassDescription:(id)arg3;
- (id)generateActionMethodForRelationName:(id)arg1 andObjCType:(id)arg2;

@end