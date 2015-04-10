//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUICreateBotNotificationsAssistant : IDEAssistant <NSTableViewDataSource, NSTableViewDelegate, XCSUICreateBotTriggerCreateCellViewDelegate, XCSUICreateBotTriggerViewControllerDelegate>
{
    BOOL _viewIsInstalled;
    NSMutableArray *_preIntegrationTriggers;
    NSMutableArray *_postIntegrationTriggers;
    NSMapTable *_allTriggerViewControllers;
    NSMutableSet *_disclosedTriggers;
    NSTableView *_triggersTableView;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(nonatomic) __weak NSTableView *triggersTableView; // @synthesize triggersTableView=_triggersTableView;
@property(retain, nonatomic) NSMutableSet *disclosedTriggers; // @synthesize disclosedTriggers=_disclosedTriggers;
@property(retain, nonatomic) NSMapTable *allTriggerViewControllers; // @synthesize allTriggerViewControllers=_allTriggerViewControllers;
@property(retain, nonatomic) NSMutableArray *postIntegrationTriggers; // @synthesize postIntegrationTriggers=_postIntegrationTriggers;
@property(retain, nonatomic) NSMutableArray *preIntegrationTriggers; // @synthesize preIntegrationTriggers=_preIntegrationTriggers;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (unsigned long long)rowForTrigger:(id)arg1;
- (void)triggerViewControllerRemovedTrigger:(id)arg1;
- (void)triggerViewController:(id)arg1 disclosed:(BOOL)arg2;
- (void)triggerCreateCell:(id)arg1 addTriggerOfType:(unsigned long long)arg2;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)finishButtonTitle;
- (id)nextAssistantIdentifier;
- (id)createBotAssistantContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end