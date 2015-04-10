//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSearchFieldCell : NSSearchFieldCell
{
    BOOL _showsProgress;
    NSTextView *_fieldEditor;
    NSTextFieldCell *_numberOfMatchesCell;
    BOOL _filterField;
    BOOL _hasText;
    int _visualStyle;
    long long _numberOfMatches;
}

+ (id)leftEdgeRoundedStyleBorderColor;
+ (id)textFieldPathForFrame:(struct CGRect)arg1 usingRadius:(double)arg2;
+ (void)drawBackgroundForLeftEdgeRoundedRectStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
+ (void)drawFocusRingMaskForLeftEdgeRoundedRectStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property BOOL hasText; // @synthesize hasText=_hasText;
@property long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property int visualStyle; // @synthesize visualStyle=_visualStyle;
@property(retain) NSTextView *fieldEditor; // @synthesize fieldEditor=_fieldEditor;
@property BOOL showsProgress; // @synthesize showsProgress=_showsProgress;
- (void).cxx_destruct;
- (struct CGRect)_accessibilitySearchFieldCellBounds;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)_numberOfMatchessCellAttribute;
- (id)accessibilityChildrenAttribute;
- (struct CGRect)_numberOfMatchesRectForBounds:(struct CGRect)arg1;
- (BOOL)_shouldShowNumberOfMatches;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawBackgroundForFlatStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2 hasFocus:(BOOL)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)searchButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)cancelButtonRectForBounds:(struct CGRect)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)showSearchMenu;
@property(getter=isFilterField) BOOL filterField;
- (void)setObjectValue:(id)arg1;
- (void)_updateSearchButtonImages;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)searchTextRectForBounds:(struct CGRect)arg1;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (void)_dvtFindBarSearchFieldCellCommonInit;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end