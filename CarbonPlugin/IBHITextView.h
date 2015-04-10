//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHITextView : IBHIView
{
    BOOL readOnly;
    BOOL allowsSelection;
    BOOL outputTextInUnicode;
    BOOL installDragProcs;
    BOOL alwaysWrapAtViewEdge;
    BOOL drawCaretWhenInactive;
    BOOL drawSelectionWhenInactive;
    BOOL singleLineOnly;
    BOOL enableDragAndDrop;
    BOOL monoStyledText;
    BOOL doFontSubstitution;
}

- (BOOL)dontInstallDragProcs;
- (void)setDontInstallDragProcs:(BOOL)arg1;
- (BOOL)dontDrawCaretWhenInactive;
- (void)setDontDrawCaretWhenInactive:(BOOL)arg1;
- (BOOL)dontDrawSelectionWhenInactive;
- (void)setDontDrawSelectionWhenInactive:(BOOL)arg1;
- (BOOL)disallowsSelection;
- (void)setDisallowsSelection:(BOOL)arg1;
- (BOOL)disableDragAndDrop;
- (void)setDisableDragAndDrop:(BOOL)arg1;
- (void)setDoFontSubstitution:(BOOL)arg1;
- (BOOL)doFontSubstitution;
- (void)setMonoStyledText:(BOOL)arg1;
- (BOOL)monoStyledText;
- (void)setEnableDragAndDrop:(BOOL)arg1;
- (BOOL)enableDragAndDrop;
- (void)setSingleLineOnly:(BOOL)arg1;
- (BOOL)singleLineOnly;
- (void)setDrawSelectionWhenInactive:(BOOL)arg1;
- (BOOL)drawSelectionWhenInactive;
- (void)setDrawCaretWhenInactive:(BOOL)arg1;
- (BOOL)drawCaretWhenInactive;
- (void)setAlwaysWrapAtViewEdge:(BOOL)arg1;
- (BOOL)alwaysWrapAtViewEdge;
- (void)setInstallDragProcs:(BOOL)arg1;
- (BOOL)installDragProcs;
- (void)setOutputTextInUnicode:(BOOL)arg1;
- (BOOL)outputTextInUnicode;
- (void)setAllowsSelection:(BOOL)arg1;
- (BOOL)allowsSelection;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)readOnly;
- (void)drawRect:(struct _NSRect)arg1;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;

@end