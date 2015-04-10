//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBWindowLayoutView : NSView
{
    struct CGRect screenFrame;
    struct CGRect contentFrame;
    long long struts;
    NSEvent *mouseDown;
    struct CGRect preDragContentFrame;
    long long strutForMouseDown;
    double strutProgress[4];
    BOOL enabled;
    id target;
    SEL action;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)drawWindow:(struct CGRect)arg1;
- (void)drawDesktop:(struct CGRect)arg1;
- (void)drawFrame:(struct CGRect)arg1;
- (id)colorForStrut:(long long)arg1;
- (id)buttonPathForStrut:(long long)arg1;
- (struct CGPoint)centerPointForStrutButton:(long long)arg1 progress:(double)arg2;
- (struct CGSize)buttonSize;
- (struct CGRect)windowDisplayFrame;
- (struct CGRect)screenDisplayFrame;
- (double)scale;
- (struct CGRect)designableBounds;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setMouseDown:(id)arg1;
- (id)backgroundImage;
- (void)setStruts:(long long)arg1;
- (long long)struts;
- (void)setContentFrame:(struct CGRect)arg1;
- (void)setScreenFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (struct CGRect)screenFrame;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end