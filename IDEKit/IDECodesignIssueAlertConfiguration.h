//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECodesignIssueAlertConfiguration : NSObject <DVTInvalidation>
{
    BOOL _primaryButtonEnabled;
    BOOL _secondaryButtonEnabled;
    NSString *_title;
    NSString *_message;
    NSString *_primaryButtonTitle;
    CDUnknownBlockType _primaryAction;
    NSString *_secondaryButtonTitle;
    CDUnknownBlockType _secondaryAction;
}

+ (void)initialize;
@property(copy) CDUnknownBlockType secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property BOOL secondaryButtonEnabled; // @synthesize secondaryButtonEnabled=_secondaryButtonEnabled;
@property(copy) CDUnknownBlockType primaryAction; // @synthesize primaryAction=_primaryAction;
@property(retain) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property BOOL primaryButtonEnabled; // @synthesize primaryButtonEnabled=_primaryButtonEnabled;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end