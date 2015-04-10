//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTTextAnnotationTheme : NSObject
{
    NSColor *_borderTopColor;
    NSColor *_borderBottomColor;
    NSColor *_highlightColor;
    NSGradient *_overlayGradient;
    NSGradient *_overlayTintedGradient;
    NSColor *_messageBubbleBorderColor;
    NSGradient *_messageBubbleGradient;
    NSColor *_caretColor;
    NSColor *_highlightedRangeBorderColor;
    NSColor *_textColor;
}

+ (id)defaultOverlayTintedGlassGradient;
+ (id)defaultOverlayGlassGradient;
+ (id)diffTextAnnotationThemeSelected:(BOOL)arg1 conflict:(BOOL)arg2 disabled:(BOOL)arg3 focused:(BOOL)arg4 inactive:(BOOL)arg5;
+ (id)grayGlassTextAnnotationThemeForVariant:(int)arg1;
+ (id)blueGlassTextAnnotationThemeForVariant:(int)arg1;
+ (id)greenGlassTextAnnotationThemeForVariant:(int)arg1;
+ (id)redGlassTextAnnotationThemeForVariant:(int)arg1;
+ (id)yellowGlassTextAnnotationThemeForVariant:(int)arg1;
+ (id)defaultTheme;
+ (id)_caretColor;
+ (BOOL)_hasDarkBackround;
+ (double)diffTextAnnotationAlphaAdjustmentForDarkTheme:(BOOL)arg1;
+ (void)initialize;
@property(readonly) NSColor *textColor; // @synthesize textColor=_textColor;
@property(readonly) NSColor *highlightedRangeBorderColor; // @synthesize highlightedRangeBorderColor=_highlightedRangeBorderColor;
@property(readonly) NSColor *caretColor; // @synthesize caretColor=_caretColor;
@property(readonly) NSColor *messageBubbleBorderColor; // @synthesize messageBubbleBorderColor=_messageBubbleBorderColor;
@property(readonly) NSGradient *messageBubbleGradient; // @synthesize messageBubbleGradient=_messageBubbleGradient;
@property(readonly) NSGradient *overlayTintedGradient; // @synthesize overlayTintedGradient=_overlayTintedGradient;
@property(readonly) NSGradient *overlayGradient; // @synthesize overlayGradient=_overlayGradient;
@property(readonly) NSColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(readonly) NSColor *borderBottomColor; // @synthesize borderBottomColor=_borderBottomColor;
@property(readonly) NSColor *borderTopColor; // @synthesize borderTopColor=_borderTopColor;
- (void).cxx_destruct;
@property(readonly) NSColor *messageBubbleFillColor;
- (id)_calculateTextColor;
- (id)initWithHighlightColor:(id)arg1 messageBubbleColor:(id)arg2 caretColor:(id)arg3;
- (id)initWithHighlightColor:(id)arg1 borderTopColor:(id)arg2 borderBottomColor:(id)arg3 overlayGradient:(id)arg4 overlayTintedGradient:(id)arg5 messageBubbleBorderColor:(id)arg6 messageBubbleGradient:(id)arg7 caretColor:(id)arg8 highlightedRangeBorderColor:(id)arg9;

@end