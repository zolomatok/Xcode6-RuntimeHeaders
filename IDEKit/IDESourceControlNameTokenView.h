//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlNameTokenView : NSView <NSMenuDelegate>
{
    NSString *_value;
    struct CGRect _tokenRect;
    struct CGRect _stringRect;
    BOOL _showToken;
    BOOL _forceHideToken;
    BOOL _hideMenuButton;
    BOOL _selected;
    NSObject<IDESourceControlNameTokenViewDelegate> *_delegate;
    NSMutableDictionary *_textAttributes;
    double _fontSize;
    BOOL _isBold;
    unsigned long long _alignment;
    CDUnknownBlockType _clickCallbackBlock;
}

@property(copy) CDUnknownBlockType clickCallbackBlock; // @synthesize clickCallbackBlock=_clickCallbackBlock;
@property __weak NSObject<IDESourceControlNameTokenViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawWholeTokenWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawInteriorWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawTextWithFrame:(struct CGRect)arg1;
- (void)_drawTokenWithFrame:(struct CGRect)arg1;
- (id)tokenForegroundGradient;
- (id)tokenBackgroundColor;
- (void)_drawTokenWithContext:(id)arg1 frame:(struct CGRect)arg2 clip:(BOOL)arg3;
- (id)_pullDownImage;
- (struct CGRect)_pullDownRectForTokenFrame:(struct CGRect)arg1;
- (struct CGRect)_tokenRectForStringRect:(struct CGRect)arg1;
@property BOOL hideMenuButton; // @synthesize hideMenuButton=_hideMenuButton;
@property BOOL forceHideToken; // @synthesize forceHideToken=_forceHideToken;
@property(copy) NSString *value;
@property(readonly) struct CGRect textFrame;
- (void)_resetTokenRect;
- (struct CGRect)_rectForString:(id)arg1 withRect:(struct CGRect)arg2;
- (double)_widthOfRightMenuWithPadding;
- (void)mouseUp:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setTrackingRectWithRect:(struct CGRect)arg1;
@property unsigned long long alignment; // @synthesize alignment=_alignment;
@property double fontSize; // @synthesize fontSize=_fontSize;
- (void)_setFontSize:(double)arg1 bold:(BOOL)arg2;
@property BOOL isBold; // @synthesize isBold=_isBold;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end