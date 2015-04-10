//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBEditableWindow : NSWindow
{
}

+ (void)makeWindowEditable:(id)arg1;
- (BOOL)_isIBEditableWindow;
- (BOOL)_containedMenusAreEligibleForKeyEquivalents;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_enableEnablingKeyEquivalentForDefaultButtonCell;
- (void)_disableEnablingKeyEquivalentForDefaultButtonCell;
- (BOOL)_addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3;
- (void)reallyResetCursorRects;
- (void)resetCursorRects;
- (void)_setCursorForMouseLocation:(struct CGPoint)arg1;
- (void)sendEvent:(id)arg1;
- (void)reallySendEvent:(id)arg1;
- (void)_endLiveResize;
- (void)_startLiveResize;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;

@end