//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSystemActivityToken : NSObject <DVTInvalidation>
{
    unsigned int _displaySleepAssertionID;
    unsigned int _systemSleepAssertionID;
    NSString *_reason;
    unsigned long long _activityOptions;
    id _processInfoToken;
}

+ (id)_descriptionOfOutstandingTokens:(id)arg1 withActivityOptions:(unsigned long long)arg2 logLevel:(int)arg3;
+ (void)initialize;
+ (id)_stringForActivityOptions:(unsigned long long)arg1;
+ (void)_accessSystemActivityTokensWithBlock:(CDUnknownBlockType)arg1;
@property(retain) id processInfoToken; // @synthesize processInfoToken=_processInfoToken;
@property unsigned long long activityOptions; // @synthesize activityOptions=_activityOptions;
@property(copy) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end