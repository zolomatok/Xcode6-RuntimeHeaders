//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSourceCodeLanguage : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_languageName;
    NSString *_languageSpecificationIdentifier;
    DVTLanguageSpecification *_languageSpecification;
    NSString *_documentationAbbreviation;
    NSArray *_fileDataTypeIdentifiers;
    NSArray *_fileDataTypes;
    NSArray *_conformedToLanguageIdentifiers;
    NSArray *_conformedToLanguages;
    Class _nativeSourceModelParserClass;
    BOOL _supportsIndentation;
    NSArray *_commentSyntaxes;
    NSArray *_lineCommentPrefixes;
    NSArray *_blockCommentCircumfixes;
    BOOL _isHidden;
}

+ (id)sourceCodeLanguageForFileDataType:(id)arg1;
+ (id)sourceCodeLanguageWithIdentifier:(id)arg1;
+ (id)sourceCodeLanguages;
+ (id)_sourceCodeLanguageForExtension:(id)arg1;
+ (void)initialize;
@property(readonly) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(readonly) BOOL supportsIndentation; // @synthesize supportsIndentation=_supportsIndentation;
@property(readonly) Class nativeSourceModelParserClass; // @synthesize nativeSourceModelParserClass=_nativeSourceModelParserClass;
@property(readonly, copy) NSString *documentationAbbreviation; // @synthesize documentationAbbreviation=_documentationAbbreviation;
@property(readonly, copy) NSString *languageName; // @synthesize languageName=_languageName;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)blockCommentCircumfixes;
- (id)lineCommentPrefixes;
- (BOOL)conformsToLanguage:(id)arg1;
@property(readonly, copy) NSArray *conformedToLanguages;
@property(readonly, copy) NSArray *fileDataTypes;
@property(readonly) DVTLanguageSpecification *languageSpecification;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSourceCodeLanguageExtension:(id)arg1;

@end