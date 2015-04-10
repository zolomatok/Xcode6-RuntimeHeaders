//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTTabButton : DVTRolloverTrackingButton <NSAnimationDelegate, NSTextFieldDelegate>
{
    DVTTabbedWindowTabViewItem *_tabViewItem;
    DVTRolloverImageButton *_closeButton;
    SEL _closeAction;
    NSImageView *_errorIndicator;
    struct CGRect _stackingFrame;
    NSMutableArray *_fadeInAnimations;
    NSString *_toolTip;
    NSTextField *userRenameTabField;
    NSText *editor;
    NSImage *_tabDragImage;
    NSImage *_miniWindowDragImage;
    struct CGRect _miniWindowStartFrame;
    struct CGRect _miniWindowEndFrame;
    NSWindow *_miniWindowDragWindow;
    NSWindow *_miniWindowTabbedWindow;
    struct CGAffineTransform _originalBrowserTransform;
    int _leftSeparatorMode;
    int _rightSeparatorMode;
    int _leftSeparatorDirection;
    int _rightSeparatorDirection;
    BOOL _settingCellTitle;
    BOOL _drawsDetached;
    BOOL _windowBackgroundMightBeStale;
}

+ (id)_etchedBoldTextColor;
+ (id)_backgroundTabBoldTextColor;
+ (id)_toolTipTextAttributes;
+ (id)_lightSeparatorLineColor;
+ (id)_imageForEmptyWindowOfSize:(struct CGSize)arg1;
+ (id)_darkSeparatorLineColor;
+ (id)rightInactiveTabSeparatorImageForNonMainWindow;
+ (id)rightInactiveTabSeparatorImageForMainWindow;
+ (id)rightActiveTabSeparatorImageForNonMainWindow;
+ (id)rightActiveTabSeparatorImageForMainWindow;
+ (id)leftInactiveTabSeparatorImageForNonMainWindow;
+ (id)leftInactiveTabSeparatorImageForMainWindow;
+ (id)leftActiveTabSeparatorImageForNonMainWindow;
+ (id)leftActiveTabSeparatorImageForMainWindow;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_useRolloverAppearance;
- (void)_updateToolTip;
- (void)_updateFrames;
- (void)_updateControlsVisibility;
- (void)_fadableControl:(id)arg1 setHidden:(BOOL)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)_fadeInView:(id)arg1;
- (BOOL)_shouldHideCloseButton;
- (void)_updateControlImages;
- (void)_updateAccessibilityAttributes;
- (double)_titleWidth;
- (void)_titleWillChange;
- (BOOL)_titleIsTruncated;
- (void)_titleDidChange;
- (struct CGRect)_textRect;
- (id)_tabBarView;
- (struct CGRect)_clipRectWhenSliding;
- (void)_setDrawsDetached:(BOOL)arg1;
- (id)_selectedTab;
- (double)_rightTextMargin;
- (double)_miniWindowDragImageWidth;
- (double)_leftTextMargin;
- (BOOL)_isShowingErrorIndicator;
- (void)_growMiniWindowForDetachedTabWithDragController:(id)arg1;
- (void)_customGrowMiniWindowForDetachedTabWithDragController:(id)arg1 newTabbedWindowController:(id)arg2;
- (void)_growMiniWindow:(id)arg1;
- (void)_drawWindowBackgroundFromFrame:(struct CGRect)arg1 operation:(unsigned long long)arg2;
- (void)_drawSeparatorsForUnselectedTabInRect:(struct CGRect)arg1;
- (void)_drawBackgroundAndSeparatorsInRect:(struct CGRect)arg1 withActiveAppearance:(BOOL)arg2;
- (id)_dragImageForImage:(id)arg1;
- (void)_detachFadeInAnimations;
- (void)_considerDragFromMouseDown:(id)arg1;
- (struct CGSize)currentEventOffsetFromEvent:(id)arg1;
- (BOOL)dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2 xHysteresis:(double)arg3 yHysteresis:(double)arg4;
- (void)windowBackgroundDidChange;
- (id)tabViewItem;
- (id)tabDragImage;
- (void)tabButtonsClipRectDidChange;
- (struct CGSize)roundSizeInWindowCoordinates:(struct CGSize)arg1;
- (struct CGRect)stackingFrame;
- (struct CGRect)slidingFrame;
- (void)setStackingFrame:(struct CGRect)arg1;
- (void)setSlidingFrame:(struct CGRect)arg1;
- (void)setRightSeparatorMode:(int)arg1;
- (void)setRightSeparatorDirection:(int)arg1;
- (void)setLeftSeparatorMode:(int)arg1;
- (void)setLeftSeparatorDirection:(int)arg1;
- (void)setCloseAction:(SEL)arg1;
- (int)rightSeparatorMode;
- (double)maximumTextWidth;
- (id)miniWindowDragImage;
- (int)leftSeparatorMode;
- (unsigned long long)lastMouseDownModifierFlagsForCloseButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tabViewItem:(id)arg2;
- (void)destroy;
- (void)closeTab:(id)arg1;
- (id)closeButton;
- (SEL)closeAction;
- (void)morphingDragImageEnded:(id)arg1;
- (void)morphingDragImage:(id)arg1 wasDroppedAtPointOnScreen:(struct CGPoint)arg2;
- (void)morphingDragImage:(id)arg1 movedToPointOnScreen:(struct CGPoint)arg2;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)shouldUseRolloverAppearance;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (void)viewDidMoveToWindow;
- (void)setToolTip:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)resetCursorRects;
- (id)menuForEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)stopEditingTabName;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_stopEditingAndUninstallEditor;
- (void)mouseDown:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end