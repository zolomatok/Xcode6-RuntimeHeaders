//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESharedTestResultsPerfMetricTableCellView : NSTableCellView
{
    BOOL _showPerfBadge;
    BOOL _suppressBadgeBorder;
    BOOL _showsPopoverOnClick;
    IDESharedTestResultsPerfMetricBadgeView *_badgeView;
    NSString *_tableColumnIdentifier;
    id <IDESharedTests_PerfMetric> _perfMetric;
    id <IDESharedTests_TestRun> _testRun;
    IDESharedTestResultsViewController *_hostTestResultsViewController;
    id _representedItem;
    CDUnknownBlockType _badgeClickedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType badgeClickedBlock; // @synthesize badgeClickedBlock=_badgeClickedBlock;
@property(retain, nonatomic) id representedItem; // @synthesize representedItem=_representedItem;
@property(nonatomic) BOOL showsPopoverOnClick; // @synthesize showsPopoverOnClick=_showsPopoverOnClick;
@property(nonatomic) BOOL suppressBadgeBorder; // @synthesize suppressBadgeBorder=_suppressBadgeBorder;
@property(nonatomic) BOOL showPerfBadge; // @synthesize showPerfBadge=_showPerfBadge;
@property __weak IDESharedTestResultsViewController *hostTestResultsViewController; // @synthesize hostTestResultsViewController=_hostTestResultsViewController;
@property(retain, nonatomic) id <IDESharedTests_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain, nonatomic) id <IDESharedTests_PerfMetric> perfMetric; // @synthesize perfMetric=_perfMetric;
@property(copy) NSString *tableColumnIdentifier; // @synthesize tableColumnIdentifier=_tableColumnIdentifier;
@property(retain) IDESharedTestResultsPerfMetricBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)layoutView;

@end