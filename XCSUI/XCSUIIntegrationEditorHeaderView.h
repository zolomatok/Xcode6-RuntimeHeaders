//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIIntegrationEditorHeaderView : NSView
{
    NSTextField *_integrationLabelField;
    NSTextField *_integrationSecondaryLabelField;
    DVTTabChooserView *_tabChooserView;
    NSButton *_editBotButton;
    NSButton *_integrateNowButton;
}

@property __weak NSButton *integrateNowButton; // @synthesize integrateNowButton=_integrateNowButton;
@property __weak NSButton *editBotButton; // @synthesize editBotButton=_editBotButton;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property __weak NSTextField *integrationSecondaryLabelField; // @synthesize integrationSecondaryLabelField=_integrationSecondaryLabelField;
@property __weak NSTextField *integrationLabelField; // @synthesize integrationLabelField=_integrationLabelField;
- (void).cxx_destruct;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (void)centerTabChooserView;

@end