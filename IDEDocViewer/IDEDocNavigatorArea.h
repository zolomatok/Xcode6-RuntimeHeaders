//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocNavigatorArea : IDEViewController <DVTReplacementViewDelegate, DVTStatefulObject>
{
    DVTChooserView *_chooserView;
    DVTBorderedView *_borderedView;
    DVTReplacementView *_replacementView;
    NSArrayController *_choicesController;
    DVTExtension *_currentExtension;
    DVTObservingToken *_selectedItemToken;
    NSIndexSet *_chooserViewSelectionIndexes;
    NSString *_UUID;
    id _selectedItem;
    IDEDocContentAreaViewController *_contentAreaViewController;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentNavigator;
@property __weak IDEDocContentAreaViewController *contentAreaViewController; // @synthesize contentAreaViewController=_contentAreaViewController;
@property(retain) id selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy) NSIndexSet *chooserViewSelectionIndexes; // @synthesize chooserViewSelectionIndexes=_chooserViewSelectionIndexes;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) DVTChooserView *chooserView; // @synthesize chooserView=_chooserView;
@property(retain, nonatomic) DVTExtension *currentExtension; // @synthesize currentExtension=_currentExtension;
@property(retain) NSArrayController *choicesController; // @synthesize choicesController=_choicesController;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_setCurrentExtensionIdentifier:(id)arg1;
- (id)_currentExtensionIdentifier;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)setStateToken:(id)arg1;
- (void)showBookmarksArea:(id)arg1;
- (void)showExploreAreaAndSelectDocSetNode:(id)arg1;
- (void)showSearchArea:(id)arg1;
- (void)showExploreArea:(id)arg1;
- (void)updateWithURL:(id)arg1 node:(id)arg2 webView:(id)arg3;
- (void)primitiveInvalidate;
- (id)currentNavigator;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end