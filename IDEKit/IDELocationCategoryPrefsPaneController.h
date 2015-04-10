//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELocationCategoryPrefsPaneController : IDEViewController
{
    DVTReplacementView *replacementView;
    DVTBorderedView *_borderedView;
    DVTTabChooserView *_tabChooserView;
}

+ (id)cachedExtensionsByIdentifier;
+ (id)cachedExtensions;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)_handleTabChanged;
- (void)_initTabChooserView;
- (void)loadView;

@end