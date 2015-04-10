//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEiPhoneOrganizerConsoleViewController : DTDKDetailViewController <DVTWindowActivationStateObserver, DVTDevicesWindowConsoleViewController, DVTScopeBarHost, DVTFindBarHostable, DVTFindBarFindable>
{
    NSView *consoleView;
    IDEiPhoneConsoleTextView *consoleTextView;
    DVTiOSDevice *_device;
    NSObject<OS_dispatch_source> *_consoleTimer;
    unsigned int shouldWrapLines:1;
    unsigned int reserved:31;
    DVTSystemActivityToken *_activityToken;
    id <DVTCancellable> _windowActivationStateObserverCancellable;
    DVTScopeBarsManager *_scopeBarsManager;
    DVTScopeBarController *_findBarScopeBarController;
    DVTIncrementalFindBar *_findBar;
}

+ (id)defaultViewNibName;
+ (id)nibName;
@property(retain) DVTiOSDevice *device; // @synthesize device=_device;
@property _Bool shouldWrapLines; // @synthesize shouldWrapLines;
- (void).cxx_destruct;
- (void)find:(id)arg1;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
- (BOOL)isFindBarInstalled;
- (id)findBar;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
@property(readonly) NSView *scopeBarsBaseView;
- (void)save:(id)arg1;
- (void)clear:(id)arg1;
- (void)detailViewDidDisappear;
- (void)detailViewDidAppear;
- (void)saveConsole;
@property(readonly) NSString *saveConsoleButtonTitle;
- (void)clearConsole;
- (id)consoleFont;
- (void)primitiveInvalidate;
- (void)stopUpdatingConsoleText;
- (void)startUpdatingConsoleText;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)stopSuppressingAppNap;
- (void)suppressAppNapIfNeeded;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end