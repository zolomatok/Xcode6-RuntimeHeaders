//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStoryboardCanvasFrame : IBBorderlessEditorCanvasFrame <IBStoryboardCanvasFrameTitleCapsuleDelegate>
{
    IBStoryboardCanvasFrameTitleCapsule *titleCapsule;
    BOOL showingDock;
    BOOL _fillsContentRect;
}

@property(nonatomic, getter=isShowingDock) BOOL fillsContentRect; // @synthesize fillsContentRect=_fillsContentRect;
- (void).cxx_destruct;
- (struct CGSize)sizeForKnob:(long long)arg1;
- (struct CGRect)knobPerimeter;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveStrokeColor;
- (void)hasKeyLookDidChange;
- (id)dockLabelContainerForTitleCapsule:(id)arg1;
- (id)representedSceneViewControllerForTitleCapsule:(id)arg1;
- (id)documentEditorForTitleCapsule:(id)arg1;
- (struct CGPoint)pointForCanvasLink:(id)arg1 withIndex:(long long)arg2 inSeriesOfSeguesWithCount:(long long)arg3 atEdge:(unsigned long long)arg4;
- (BOOL)shouldDragFrameWithMouseDown:(id)arg1;
- (id)boundingRectsForBandSelectionHitTesting;
- (void)layoutBottomUp;
- (CDStruct_c519178c)contentInset;
- (double)canvasFrameTitleCapsuleHeight;
@property(nonatomic, getter=isShowingDock) BOOL showingDock; // @synthesize showingDock;
- (void)setShowSelectionRing:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)storyboardCanvasViewController;
- (void)willRemoveFromCanvas;
- (id)initWithFrame:(struct CGRect)arg1;

@end