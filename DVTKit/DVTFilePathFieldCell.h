//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTFilePathFieldCell : NSTextFieldCell
{
    NSButtonCell *_chooseButtonCell;
    NSButtonCell *_linkButtonCell;
    BOOL _alwaysShowChooser;
    BOOL _showLinkButton;
    BOOL _chooseFile;
    BOOL _chooseDir;
    BOOL _showChooserButton;
    NSString *_choosePathDefaultFilePath;
    NSString *_choosePathMessage;
    NSArray *_absoluteLinkPaths;
    id _delegate;
    unsigned long long _linkButtonBehavior;
}

@property unsigned long long linkButtonBehavior; // @synthesize linkButtonBehavior=_linkButtonBehavior;
@property BOOL showChooserButton; // @synthesize showChooserButton=_showChooserButton;
@property BOOL chooseDir; // @synthesize chooseDir=_chooseDir;
@property BOOL chooseFile; // @synthesize chooseFile=_chooseFile;
@property BOOL showLinkButton; // @synthesize showLinkButton=_showLinkButton;
@property BOOL alwaysShowChooser; // @synthesize alwaysShowChooser=_alwaysShowChooser;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(copy) NSArray *absoluteLinkPaths; // @synthesize absoluteLinkPaths=_absoluteLinkPaths;
@property(copy) NSString *choosePathMessage; // @synthesize choosePathMessage=_choosePathMessage;
@property(copy) NSString *choosePathDefaultFilePath; // @synthesize choosePathDefaultFilePath=_choosePathDefaultFilePath;
- (void).cxx_destruct;
- (BOOL)eventIsInSubCellArea:(id)arg1 ofView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)_configureSubCells;
- (void)_refreshEnabledStates;
- (struct CGRect)_linkButtonFrameForCellFrame:(struct CGRect)arg1;
- (struct CGRect)_chooserButtonFrameForCellFrame:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textBoundingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_maximumTextBoundsForBounds:(struct CGRect)arg1;
- (double)_claimedWidthForBounds:(struct CGRect)arg1;
- (BOOL)reserveSpaceForLinkButton;
- (BOOL)effectiveShowLinkButton;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (void)linkAction:(id)arg1;
- (void)chooseAction:(id)arg1;
- (BOOL)effectiveShowChooserButton;
- (void)_commonInitForFilePathCell;

@end