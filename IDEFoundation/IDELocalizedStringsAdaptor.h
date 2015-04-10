//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELocalizedStringsAdaptor : IDELocalizedResourceAdaptor
{
    NSString *_tableName;
    NSDictionary *_baseStrings;
    NSDictionary *_baseComments;
    NSMutableDictionary *_stringsCache;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
- (void).cxx_destruct;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)tableName;
- (id)commentsByKey;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (void)updateBaseStrings:(id)arg1 updateBaseComments:(id)arg2;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5;

@end