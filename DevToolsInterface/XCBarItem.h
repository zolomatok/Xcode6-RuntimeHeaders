//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBarItem : NSTextField <XCSelectionSource>
{
    long long _trackingTag;
    long long _value;
    BOOL _mouseIn;
    PBXReference *_ref;
    struct CGPoint _mouseDownLocation;
    BOOL _isEditing;
    BOOL _ceResizable;
    BOOL _ceWidthTracksView;
    struct CGSize _ceMaxSize;
    struct CGSize _ceContainerSize;
    BOOL _refDecoratesCell;
}

- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)savedDragItems;
- (void)mouseDragged:(id)arg1;
- (id)imageForDrag;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (BOOL)collapse;
- (void)expand:(double)arg1;
- (BOOL)isExpanded;
- (void)sizeToFit;
- (id)menuForEvent:(id)arg1;
- (BOOL)referenceIsEditable;
- (BOOL)referenceDecoratesCell;
- (id)reference;
- (void)setReference:(id)arg1;
- (BOOL)shouldDisplay;
- (BOOL)isEditing;
- (void)cancel:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isSelectable;
- (BOOL)acceptsFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)_timerBasedMenuAction:(id)arg1;
- (void)itemSelected:(id)arg1;
- (void)itemDoubleClicked:(id)arg1;
- (void)_menuItemSelected:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)_singleClick:(id)arg1;
- (BOOL)isMouseIn;
- (void)_mouseTrackingCompleted;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetCursorRects;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end