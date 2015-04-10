//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBLayoutManager : NSObject <DVTInvalidation>
{
    DVTDelayedInvocation *clearingPolicy;
    unsigned long long currentDisplayToken;
    IBLayoutGuideGenerator *layoutGuideGenerator;
    IBLayoutGuideDrawingHandler *layoutDrawingHandler;
}

+ (void)setGuidesAreEnabled:(BOOL)arg1;
+ (BOOL)guidesAreEnabled;
+ (void)initialize;
@property(readonly) IBLayoutGuideDrawingHandler *layoutDrawingHandler; // @synthesize layoutDrawingHandler;
- (void).cxx_destruct;
- (long long)displayGuidesForViews:(id)arg1 usingContainerResizingRules:(BOOL)arg2 draggedKnobInSuperview:(long long)arg3 andReturningLayoutGuideMatches:(id *)arg4;
- (long long)suggestGuidesForViews:(id)arg1 withSuggestedFrame:(struct CGRect)arg2 returningX:(double *)arg3 andReturningY:(double *)arg4 andReturningLayoutGuideMatches:(id *)arg5 fromKnobPositionInSuperview:(long long)arg6 usingContainerResizingRules:(BOOL)arg7 snaps:(BOOL)arg8;
- (long long)applyGuidesForViews:(id)arg1 withSuggestedFrame:(struct CGRect)arg2 andSiblings:(id)arg3 returningX:(double *)arg4 andReturningY:(double *)arg5 andReturningLayoutGuideMatches:(id *)arg6 fromKnobPositionInTargetSuperview:(long long)arg7 usingContainerResizingRules:(BOOL)arg8 displayOnly:(BOOL)arg9 maxSnapDistance:(double)arg10;
- (long long)applyGuidesForViews:(id)arg1 withSuggestedFrame:(struct CGRect)arg2 targetSuperview:(id)arg3 andSiblings:(id)arg4 returningX:(double *)arg5 andReturningY:(double *)arg6 andReturningLayoutGuideMatches:(id *)arg7 fromKnobPositionInTargetSuperview:(long long)arg8 usingContainerResizingRules:(BOOL)arg9 displayOnly:(BOOL)arg10 maxSnapDistance:(double)arg11 baselines:(id)arg12;
- (void)clearLiveGuides;
- (void)clearLiveGuidesDirectly;
- (void)clearLiveGuidesAfterDelay:(double)arg1;
- (BOOL)isCurrentDisplayToken:(unsigned long long)arg1;
- (unsigned long long)currentDisplayToken;
- (void)invalidateCurrentDisplayToken;
@property(readonly) NSView *guideOverlay;
- (struct CGRect)boundingLayoutFrameForViews:(id)arg1;
- (CDStruct_c519178c)insetFromContainer:(id)arg1 toViews:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithLayoutDrawingHandler:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end