//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCDiffComparatorCustomizer : XCCustomizer
{
}

+ (void)initialize;
- (void)_customizingObjectDefaultsDidChange:(id)arg1;
- (id)modificationColor;
- (void)setModificationColor:(id)arg1;
- (id)selectedDiffHunkColor;
- (void)setSelectedDiffHunkColor:(id)arg1;
- (id)diffHunkColor;
- (void)setDiffHunkColor:(id)arg1;
- (BOOL)showsModification;
- (void)setShowsModification:(BOOL)arg1;
- (BOOL)showsMergeDirection;
- (void)setShowsMergeDirection:(BOOL)arg1;
- (BOOL)showsChangeNumbers;
- (void)setShowsChangeNumbers:(BOOL)arg1;
- (long long)numberOfContextTokens;
- (void)setNumberOfContextTokens:(long long)arg1;
- (long long)maxNumberOfContextTokens;
- (long long)minNumberOfContextTokens;
- (double)autoupdatingDelay;
- (void)setAutoupdatingDelay:(double)arg1;
- (double)maxAutoupdatingDelay;
- (double)minAutoupdatingDelay;
- (BOOL)ignoresLineEnds;
- (void)setIgnoresLineEnds:(BOOL)arg1;
- (BOOL)ignoresTrailingSpaces;
- (void)setIgnoresTrailingSpaces:(BOOL)arg1;
- (BOOL)ignoresSpacesInRuns;
- (void)setIgnoresSpacesInRuns:(BOOL)arg1;
- (BOOL)ignoresLeadingSpaces;
- (void)setIgnoresLeadingSpaces:(BOOL)arg1;
- (BOOL)ignoresCase;
- (void)setIgnoresCase:(BOOL)arg1;
- (void)revertToDefaults;
- (void)didChange;
- (id)_diffContext;
- (id)_diffComparatorView;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end