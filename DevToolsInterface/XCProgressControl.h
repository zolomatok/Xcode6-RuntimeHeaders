//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCProgressControl
- (void)setOpenActivityViewer:(BOOL)arg1;
- (BOOL)openActivityViewer;
- (void)setDisplayedWhenStopped:(BOOL)arg1;
- (BOOL)isDisplayedWhenStopped;
- (void)sizeToFit;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void)stopAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (void)setUsesThreadedAnimation:(BOOL)arg1;
- (BOOL)usesThreadedAnimation;
- (void)setAnimationDelay:(double)arg1;
- (double)animationDelay;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (double)maxValue;
- (double)minValue;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)isIndeterminate;
@end