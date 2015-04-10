//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSString (TSStringAdditions)
+ (BOOL)isFileUTF8WithBOM:(id)arg1 fileData:(id)arg2;
+ (BOOL)isFileUnicode:(id)arg1 fileData:(id)arg2;
+ (void)setTSDefaultCStringEncoding:(unsigned long long)arg1;
+ (unsigned long long)TSDefaultCStringEncoding;
- (BOOL)writeUsingFileSystemEncodingToFile:(id)arg1 atomically:(BOOL)arg2;
- (long long)versionNumberComparison:(id)arg1;
- (struct _NSRange)rangeNotHavingLiteralPrefixAndSuffixInCommonWithRange:(struct _NSRange)arg1 ofString:(id)arg2;
- (void)getLineStartOffsets:(unsigned long long **)arg1 count:(unsigned long long *)arg2;
- (id)lineStartOffsets;
- (id)initWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2 stopAtTrailingIncompleteUTF8Sequence:(BOOL)arg3 getUsedLength:(unsigned long long *)arg4 getNumberOfMalformedSequences:(unsigned long long *)arg5;
- (id)initWithUnicodeOrMacOSRomanContentsOfFile:(id)arg1 getStringEncoding:(unsigned long long *)arg2;
- (id)initWithContentsOfFile:(id)arg1 defaultCStringEncoding:(unsigned long long)arg2 getStringEncoding:(unsigned long long *)arg3;
- (id)stringByEscapingPercents;
- (id)uniqueStringAmongStrings:(id)arg1;
- (id)stringByUnescapingFromXML;
- (id)stringByEscapingForXML;
- (id)stringByManglingToLegalCIdentifier;
- (id)stringByManglingToLegalRFC1034Identifier;
- (BOOL)isLegalCIdentifier;
- (id)stringByAbbreviatingWithEllipsisInMiddleToLength:(unsigned long long)arg1;
- (id)stringByConvertingWhitespaceRunsToSingleSpaces;
- (id)stringByDeletingAllWhitespace;
- (id)stringByDeletingTrailingWhitespace;
- (id)stringByDeletingLeadingWhitespace;
- (id)TS_stringByExpandingEnvironmentVariables;
- (id)TS_stringByExpandingVariables:(id)arg1 options:(unsigned long long)arg2;
- (id)TS_stringByExpandingVariables:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3;
- (id)namesOfExpandableVariables;
- (void)testMacroExpansion;
- (BOOL)_getVariableNameRange:(struct _NSRange *)arg1 openDelimiterRange:(struct _NSRange *)arg2 closeDelimiterRange:(struct _NSRange *)arg3 ofFirstVariableReferenceInRange:(struct _NSRange)arg4;
- (id)componentsSeparatedByUnquotedWhitespace;
- (id)arrayByParsingAsStringList;
- (id)arrayByParsingAsCommandLineArguments;
- (id)_componentsSeparatedByUnquotedWhitespacePreservingQuotes:(BOOL)arg1;
@end