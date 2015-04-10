//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESharedTestResultsPerfMetricBadgeView : NSView <NSPopoverDelegate>
{
    NSPopover *_iterationPopover;
    BOOL _showsPopover;
    BOOL _suppressBadgeBorder;
    id <IDESharedTests_PerfMetric> _perfMetric;
    id <IDESharedTests_TestRun> _testRun;
    id _representedItem;
    IDESharedTestResultsViewController *_hostTestResultsViewController;
    CDUnknownBlockType _badgeClickedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType badgeClickedBlock; // @synthesize badgeClickedBlock=_badgeClickedBlock;
@property BOOL suppressBadgeBorder; // @synthesize suppressBadgeBorder=_suppressBadgeBorder;
@property BOOL showsPopover; // @synthesize showsPopover=_showsPopover;
@property __weak IDESharedTestResultsViewController *hostTestResultsViewController; // @synthesize hostTestResultsViewController=_hostTestResultsViewController;
@property(retain) id representedItem; // @synthesize representedItem=_representedItem;
@property(retain, nonatomic) id <IDESharedTests_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain, nonatomic) id <IDESharedTests_PerfMetric> perfMetric; // @synthesize perfMetric=_perfMetric;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_showPopover;
- (void)popoverDidClose:(id)arg1;
@property(readonly, nonatomic) BOOL isShowingPopover;
- (void)mouseDown:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end