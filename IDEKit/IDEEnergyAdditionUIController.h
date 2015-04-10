//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEEnergyAdditionUIController : NSObject <IDEDebuggingAdditionUIController>
{
    DVTExtension *_extension;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEDebugGaugeTrayCell *_trayCell;
    IDEEnergyAddition *_addition;
    unsigned long long _lastMetricsDeltaCount;
}

+ (void)initialize;
@property(nonatomic) unsigned long long lastMetricsDeltaCount; // @synthesize lastMetricsDeltaCount=_lastMetricsDeltaCount;
@property(retain, nonatomic) IDEEnergyAddition *addition; // @synthesize addition=_addition;
@property(retain, nonatomic) IDEDebugGaugeTrayCell *trayCell; // @synthesize trayCell=_trayCell;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_handleMetricsUpdate:(id)arg1;
- (void)openSelectedNavigableItem:(id)arg1 withEventType:(unsigned long long)arg2;
- (id)launchSessionForSelectedRepresentedObject:(id)arg1;
- (id)trayCellForNavigationProcessHeader;
- (BOOL)wantsTrayAreaForNavigationProcessHeader;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end