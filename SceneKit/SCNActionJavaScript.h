//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNActionJavaScript : SCNAction
{
    NSString *_script;
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isCustom;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end