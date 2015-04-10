//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELogAndTestsEditor : IDEEditor <DVTReplacementViewDelegate>
{
    DVTObservingToken *_logTestsViewControllerDocLocObserver;
    DVTObservingToken *_logEditorDocLocObserver;
    NSArray *_currentSelectedDocumentLocations;
    DVTReplacementView *_replacementView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)takeFocus;
- (id)logTestsViewController;
- (void)installTestsViewController;
- (id)logEditor;
- (void)installLogEditor;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)selectDocumentLocations:(id)arg1;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end