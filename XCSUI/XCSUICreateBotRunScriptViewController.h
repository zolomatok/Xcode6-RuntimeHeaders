//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUICreateBotRunScriptViewController : NSViewController <NSTextDelegate, XCSUICreateBotTriggerChildViewController>
{
    XCSTrigger *_trigger;
    DVTScriptSourceTextView *_scriptView;
}

@property DVTScriptSourceTextView *scriptView; // @synthesize scriptView=_scriptView;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (void)saveTrigger;
@property(retain) XCSTrigger *trigger;
- (id)titleForDisplay;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end