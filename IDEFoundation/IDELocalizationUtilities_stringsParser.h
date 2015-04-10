//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELocalizationUtilities_stringsParser : NSObject
{
    NSRegularExpression *_blockCommentStart;
    NSRegularExpression *_blockCommentEnd;
    NSRegularExpression *_lineCommentStart;
    NSRegularExpression *_lineCommentEnd;
    NSRegularExpression *_quotesStart;
    NSRegularExpression *_quotesEnd;
    NSRegularExpression *_unquotedStart;
    NSRegularExpression *_unquotedEnd;
    NSRegularExpression *_equalsSign;
    NSRegularExpression *_semicolon;
    NSRegularExpression *_whitespace;
    NSString *_fileContents;
    unsigned long long _offset;
    NSMutableString *_currentComment;
    NSMutableString *_currentKey;
    NSMutableString *_currentValue;
}

+ (BOOL)parseOpenStepFormat:(id)arg1 strings:(id *)arg2 comments:(id *)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (BOOL)_scanToSemiColon;
- (BOOL)_scanToUnquotedValueEnd;
- (BOOL)_scanToQuotedValueEnd;
- (BOOL)_scanToValueStart;
- (BOOL)_scanToUnquotedKeyEnd;
- (BOOL)_scanToQuotedKeyEnd;
- (BOOL)_scanToBlockCommentEnd;
- (BOOL)_scanToLineCommentEnd;
- (BOOL)_scanToCommentOrKeyStart;
- (BOOL)_scanData:(id)arg1 strings:(id *)arg2 comments:(id *)arg3 error:(id *)arg4;
- (id)init;

@end