//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RightClickableButton : DVTGradientImageButton
{
    SEL _leftButtonAction;
    SEL _rightButtonAction;
    id _target;
}

- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)setRightAction:(SEL)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end