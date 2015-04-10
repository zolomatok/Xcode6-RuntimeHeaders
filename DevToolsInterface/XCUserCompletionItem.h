//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCUserCompletionItem : NSObject <PBXCompletionItem>
{
    unsigned short _type;
    NSString *_name;
    NSString *_text;
    NSString *_desc;
}

- (long long)priority;
- (id)icon;
- (id)description;
- (id)descriptionText;
- (id)completionTextWithMacroExpansionDictionary:(id)arg1;
- (id)completionText;
- (id)displayType;
- (id)displayText;
- (id)name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned short)arg1 name:(id)arg2 text:(id)arg3 description:(id)arg4;

@end