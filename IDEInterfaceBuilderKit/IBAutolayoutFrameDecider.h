//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutFrameDecider : NSObject
{
    id <IBAutolayoutFrameDeciderDelegate> _delegate;
    IBAbstractAutolayoutFrameDecisionDriver *_driver;
    IBAutolayoutArbitrationUnit *_arbitrationUnit;
}

+ (void)decideAndSetFramesOfAllViewHierarchiesWithLayoutInfo:(id)arg1 delegate:(id)arg2 statusInitializationBlock:(CDUnknownBlockType)arg3;
+ (void)decideAndSetFramesOfEntireViewHierarchyToReflectChangeInConstraintsOfObjectHierarchy:(id)arg1 layoutInfo:(id)arg2 delegate:(id)arg3 forcingFramesForViewsInIllegalStatesPassingTest:(CDUnknownBlockType)arg4;
+ (id)frameDeciderForViewHierarchyOfObject:(id)arg1 layoutInfo:(id)arg2 delegate:(id)arg3 options:(id)arg4;
@property(readonly) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit=_arbitrationUnit;
@property(readonly) IBAbstractAutolayoutFrameDecisionDriver *driver; // @synthesize driver=_driver;
@property(readonly) id <IBAutolayoutFrameDeciderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isEdge:(unsigned long long)arg1 ofAncestor:(id)arg2 fixedDuringResizeOfSubview:(id)arg3 fromKnob:(long long)arg4;
- (BOOL)isEdge:(unsigned long long)arg1 ofSiblingView:(id)arg2 changingOneToOneWhenResizingView:(id)arg3 fromEdge:(unsigned long long)arg4 coordinateSpaceView:(id)arg5;
- (BOOL)isEdge:(unsigned long long)arg1 ofDescendant:(id)arg2 fixedInPositionOnWindowDuringResizeOfAncestor:(id)arg3 fromKnob:(long long)arg4;
- (BOOL)isDistanceFromEdge:(unsigned long long)arg1 ofDescendant:(id)arg2 toSameEdgeOfAncestor:(id)arg3 changingOneToOneWithKnob:(long long)arg4;
- (void)decideAndSetFramesOfEntireViewHierarchyToReflectChangeInConstraintsOfObjectHierarchy:(id)arg1 forcingFramesForViewsInIllegalStatesPassingTest:(CDUnknownBlockType)arg2;
- (void)stopFrameDeciderSession;
- (void)startFrameDeciderSession;
- (void)propagateAllLayoutEngineFramesToCanvasForcingFramesForViewsInIllegalStatesPassingTest:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)defaultFramePropagationBlockForcingFramesForViewsInIllegalStatesPassingTest:(CDUnknownBlockType)arg1;
- (void)_propagateSize:(struct CGSize)arg1 toCanvasForItem:(id)arg2 forceFramesForIllegalStates:(BOOL)arg3;
- (void)_propagateFrame:(struct CGRect)arg1 toCanvasForItem:(id)arg2 forceFramesForIllegalStates:(BOOL)arg3;
- (struct CGRect)_frameToPropagateToCanvasItem:(id)arg1 suggestedFrame:(struct CGRect)arg2;
- (BOOL)shouldPropagateFrameForFixedFrameItem:(id)arg1;
- (id)layoutInfo;
@property(readonly) IBAutolayoutEngine *engine;
- (id)initWithArbitrationUnit:(id)arg1 driverOptions:(id)arg2 delegate:(id)arg3 statusInitializationBlock:(CDUnknownBlockType)arg4;

@end