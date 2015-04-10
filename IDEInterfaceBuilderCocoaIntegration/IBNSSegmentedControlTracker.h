//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNSSegmentedControlTracker : IBNSViewTracker
{
    BOOL stretch;
    long long targetWidth;
    long long roundRobin;
    BOOL wasGrowing;
}

- (void)trackWithEvent:(id)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2;
- (void)growViewToSize:(struct CGSize)arg1;
- (long long)lastSegment;
- (void)stretchViewToSize:(struct CGSize)arg1;
- (void)setWidth:(double)arg1 forSegment:(long long)arg2;
- (double)widthForSegment:(long long)arg1;
- (long long)nextResizableSegment:(long long)arg1 wasGrowing:(BOOL)arg2 isGrowing:(BOOL)arg3;
- (void)fixFrame;
- (struct CGSize)bestSize;
- (long long)numberOfSizeableSegments;
- (long long)segmentCount;
- (id)segmentedControl;

@end