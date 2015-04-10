//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCHUDModule : PBXProjectModule
{
    XCMouseOverButton *masterPauseButton;
    id enableBreakpointsButton;
    XCMouseOverButton *showXcodeButton;
    XCMouseOverButton *closeHUDButton;
    XCMouseOverButton *stopButton;
    id executableName;
    XCHUDView *hudView;
    id sourceView;
    PBXDebugSessionModule *_debugSessionModule;
    PBXNavigatorGroup *_editorModule;
    struct CGRect _editorModuleFrame;
    int _mode;
    BOOL _shouldAnimateMode;
    struct CGRect _runningFrame;
    struct CGRect _pausedFrame;
}

- (void)setWantsModuleWindow:(BOOL)arg1;
- (id)moduleWindowFrameAutosaveName;
- (void)show;
- (void)hide;
- (struct CGRect)getHUDRect;
- (void)saveHUDRect:(struct CGRect)arg1;
- (void)movedHUDFrames:(struct CGRect)arg1;
- (void)updateHUDFrames:(struct CGRect)arg1;
- (struct CGRect)constrainHudFrame:(struct CGRect)arg1;
- (void)setMode:(int)arg1 animate:(BOOL)arg2;
- (void)_delayedSetMode;
- (void)becomeActive;
- (void)viewDidLoad;
- (id)navigatorGroup;
- (void)isSteppableNotification:(id)arg1;
- (void)isRunningNotification:(id)arg1;
- (void)setDebugSessionModule:(id)arg1;
- (void)setBreakpointsButtonEnabled:(BOOL)arg1;
- (BOOL)breakpointsButtonEnabled;
- (Class)moduleWindowClass;
- (void)hudDebuggerAction:(id)arg1;
- (void)hudShowProjectAction:(id)arg1;
- (void)hudStopAction:(id)arg1;
- (void)hudRestartAction:(id)arg1;
- (void)debuggingWillStop:(id)arg1;
- (void)switchRestartToPause;
- (void)switchPauseToRestart;
- (void)hudPauseAction:(id)arg1;
- (void)hudEnableBreakpoints:(id)arg1;
- (void)hudHideAction:(id)arg1;
- (void)closeModule;
- (void)_removeObserversAndBindings;
- (void)viewWillBeRemoved;
- (void)dealloc;

@end