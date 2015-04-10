//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSplitViewAnimation : NSAnimation <NSAnimationDelegate>
{
    DVTSplitViewItem *_splitViewItemToToggle;
    DVTSplitViewItem *_adjacentSplitViewItem;
    NSView *_viewToToggle;
    NSView *_adjacentView;
    long long _animatedFrames;
    NSMutableArray *_animatingViews;
    NSMutableArray *_startFrames;
    NSMutableArray *_stopFrames;
    struct CGRect _windowStartFrame;
    struct CGRect _windowStopFrame;
    BOOL _isCollapseAnimation;
    BOOL _viewToToggleIsOnLeftOrTop;
    BOOL _adjacentViewIsOnLeftOrTop;
    BOOL _adjacentSplitViewItemVisibilityChanged;
}

- (void).cxx_destruct;
- (void)_computeStopFrames;
- (void)_computeStartFrames;
- (void)animationDidEnd:(id)arg1;
- (void)_adjustViewToShowsFrameForAnimationStart;
- (BOOL)private_animationShouldStart:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (id)initWithSplitView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end