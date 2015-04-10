//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundQuickLookForColor : IDEBasicPlaygroundQuickLookForObjectReflection
{
    NSView *_naturalView;
    DVTColorSwatchWithComponentsView *_naturalColorSwatchWithComponentsView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

@property __weak NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property __weak NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property __weak DVTColorSwatchWithComponentsView *naturalColorSwatchWithComponentsView; // @synthesize naturalColorSwatchWithComponentsView=_naturalColorSwatchWithComponentsView;
@property __weak NSView *naturalView; // @synthesize naturalView=_naturalView;
- (void).cxx_destruct;
- (id)iconOnlyViewForCollectionView;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
- (void)loadView;
- (id)initWithObjectReflection:(id)arg1;

@end