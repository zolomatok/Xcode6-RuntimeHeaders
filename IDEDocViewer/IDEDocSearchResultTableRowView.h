//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocSearchResultTableRowView : NSTableRowView
{
    BOOL mouseInside;
    BOOL _representsSelectableRow;
    BOOL _representsSeparatorRow;
}

@property BOOL representsSeparatorRow; // @synthesize representsSeparatorRow=_representsSeparatorRow;
@property BOOL representsSelectableRow; // @synthesize representsSelectableRow=_representsSelectableRow;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (long long)selectionHighlightStyle;
@property BOOL mouseInside; // @dynamic mouseInside;

@end