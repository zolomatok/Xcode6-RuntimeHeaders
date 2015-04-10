//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCColoredBox : NSBox
{
    NSColor *_color;
    BOOL _useWindowBackgroundColor;
    BOOL _isOpaque;
    NSShadow *_focusedFrameShadowTool;
    double _xShadowInset;
    double _yShadowInset;
    BOOL _blockMouseDown;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setShadowXInset:(double)arg1 yInset:(double)arg2;
- (BOOL)drawShadowBorder;
- (void)setDrawShadowBorder:(BOOL)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)useWindowBackgroundColor;
- (void)setUseWindowBackgroundColor:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)blockMouseDown;
- (void)setBlockMouseDown:(BOOL)arg1;
- (BOOL)isOpaque;
- (void)setIsOpaque:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end