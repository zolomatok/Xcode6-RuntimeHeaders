//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUtilities : NSObject
{
}

+ (void)removeValueForKeyPath:(id)arg1 rootObject:(id)arg2;
+ (unsigned long long)sanitizeOperationFromObject:(id)arg1;
+ (void)sanitizeRootObject:(id)arg1 traversingObject:(id)arg2 usingKey:(id)arg3 index:(unsigned long long)arg4;
+ (id)sanitizeDictionary:(id)arg1;
+ (id)object:(id)arg1 JSONParseWithError:(id *)arg2;
+ (id)object:(id)arg1 toJSONDataWithError:(id *)arg2;
+ (id)object:(id)arg1 toJSONWithError:(id *)arg2;
+ (id)errorFromException:(id)arg1 domain:(id)arg2 code:(long long)arg3;
+ (id)userInfoWithDescription:(id)arg1 method:(SEL)arg2;
+ (id)timestampUSLocale;
+ (id)urlEncode:(id)arg1;
+ (id)MIMETypeForExtension:(id)arg1;
+ (id)convertDateToString:(id)arg1 usingFormat:(id)arg2;
+ (id)convertStringToDate:(id)arg1 usingFormat:(id)arg2;
+ (id)convertStringToDate:(id)arg1;
+ (id)convertStringToNumber:(id)arg1;

@end