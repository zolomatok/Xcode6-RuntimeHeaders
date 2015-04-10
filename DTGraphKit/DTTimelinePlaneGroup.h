//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTTimelinePlaneGroup : DTTimelinePlane
{
    NSArray *_subplanes;
    DTTimelinePlaneGroupLayoutManager *_layoutManager;
    long long _layoutMode;
    double _interplanePadding;
}

@property(nonatomic) double interplanePadding; // @synthesize interplanePadding=_interplanePadding;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(readonly, nonatomic) NSArray *subplanes; // @synthesize subplanes=_subplanes;
- (void).cxx_destruct;
- (unordered_map_c1fbcd3c)_populatePlaneLayoutMap:(unordered_map_c1fbcd3c)arg1 offsetFromTop:(double)arg2;
- (void)_didMoveOutOfView;
- (void)_willMoveIntoView;
- (void)setTimelineGraph:(id)arg1;
- (id)_planeAtPoint:(struct CGPoint)arg1 currentDepth:(unsigned long long)arg2 maxDepth:(unsigned long long)arg3;
- (void)_invalidateTimeRange:(struct XRTimeRange)arg1;
- (void)_setPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)_setSubplanesBackgroundColor;
- (double)height;
- (void)_removeFromContext;
- (id)_decoratedPlanes;
- (void)_contextChanged;
- (void)_setContext:(struct TimelineViewContext *)arg1 layer:(id)arg2 anchorPoint:(struct CGPoint)arg3;
- (void)_setSubplanes:(id)arg1;
- (id)init;

@end