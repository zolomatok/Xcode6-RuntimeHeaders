//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTComparisonScrollCoordinator : NSObject <NSScrollerImpPairDelegate, DVTSourceTextScrollViewDelegate, DVTComparisonScrollContentAreaDelegate>
{
    DVTSourceTextScrollView *_leftScrollView;
    struct CGRect _leftContentViewPreviousBounds;
    DVTSourceTextScrollView *_rightScrollView;
    struct CGRect _rightContentViewPreviousBounds;
    DVTComparisonScroller *_globalScroller;
    NSScrollerImpPair *_scrollerImpPair;
    DVTBorderedView *_contentAreaView;
    NSArray *_diffDescriptors;
    NSIndexSet *_modifiedDiffDescriptorIndexes;
    id _leftContentViewBoundsObserver;
    id _rightContentViewBoundsObserver;
    id _leftContentViewFrameObserver;
    id _rightContentViewFrameObserver;
    id _fontAndColorThemeObserver;
    BOOL _recursing;
    BOOL _computingTotalScrollSize;
    BOOL _isRevertingState;
}

+ (id)logAspect;
+ (void)initialize;
@property(retain) DVTBorderedView *contentAreaView; // @synthesize contentAreaView=_contentAreaView;
@property(retain) NSIndexSet *modifiedDiffDescriptorIndexes; // @synthesize modifiedDiffDescriptorIndexes=_modifiedDiffDescriptorIndexes;
@property(copy) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property(retain, nonatomic) DVTComparisonScroller *globalScroller; // @synthesize globalScroller=_globalScroller;
@property(retain, nonatomic) DVTSourceTextScrollView *rightScrollView; // @synthesize rightScrollView=_rightScrollView;
@property(retain, nonatomic) DVTSourceTextScrollView *leftScrollView; // @synthesize leftScrollView=_leftScrollView;
- (void).cxx_destruct;
- (void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2;
- (void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(struct CGRect)arg2;
- (struct CGPoint)scrollerImpPair:(id)arg1 convertContentPoint:(struct CGPoint)arg2 toScrollerImp:(id)arg3;
- (struct CGPoint)mouseLocationInContentAreaForScrollerImpPair:(id)arg1;
- (BOOL)inLiveResizeForScrollerImpPair:(id)arg1;
- (struct CGRect)contentAreaRectForScrollerImpPair:(id)arg1;
- (void)contentAreaWindowOrderedOut;
- (void)contentAreaWindowOrderedIn;
- (void)contentAreaMovedToNewWindow;
- (void)contentAreaRemovedFromSuperview;
- (void)contentAreaDidHide;
- (void)mouseExitedContentArea;
- (void)mouseMovedInContentArea;
- (void)mouseEnteredContentArea;
- (void)contentAreaWillDraw;
- (void)updateDiffMarks;
- (void)_doUpdateDiffMarks;
- (void)notifyScroll:(double)arg1;
- (void)notifyScroll:(double)arg1 leftScrollView:(BOOL)arg2 rightScrollView:(BOOL)arg3;
- (void)computeTotalScrollSize;
- (double)getTargetPositionFromSide:(long long)arg1;
- (double)getTargetPositionFromRight:(double)arg1 ensureLayout:(BOOL)arg2;
- (double)getTargetPositionFromLeft:(double)arg1 ensureLayout:(BOOL)arg2;
- (void)notifyScrollAction:(id)arg1;
- (void)rescindObservations;
- (void)setupObservations;
- (void)_doSetupObservations;
- (BOOL)didRevertState;
- (void)willStartStateRestoration;
- (id)scrollView:(id)arg1 pointInVisibleScroller:(struct CGPoint)arg2;
- (void)scrollViewDidSetFrameSize:(id)arg1;
- (void)scrollViewDidEndLiveResize:(id)arg1;
- (void)scrollViewWillStartLiveResize:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldHandleScrollWheelEvent:(id)arg2;
- (void)scrollWheel:(id)arg1;
@property(readonly) DVTSourceTextView *rightTextView;
@property(readonly) DVTSourceTextView *leftTextView;
- (void)updateScrollerKnobStyle;
- (void)updateBoundSelectedIndex;
- (void)updateBoundContentArray;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end