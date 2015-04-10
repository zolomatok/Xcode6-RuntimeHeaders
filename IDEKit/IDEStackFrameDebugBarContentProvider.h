//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEStackFrameDebugBarContentProvider : IDEDebugBarContentProvider
{
    IDEPathControl *_pathControl;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigableItem;
    IDENavigableItem *_selectedItem;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_currentStackFrameObserverToken;
    DVTObservingToken *_selectedNavigableItemFrameObserverToken;
    DVTObservingToken *_debugSessionStateObserverToken;
    DVTObservingToken *_launchSessionStateObserverToken;
    BOOL _handlingSetSelectedItem;
}

+ (id)keyPathsForValuesAffectingNavigableDebugItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedItem;
+ (Class)debugSessionControllerClass;
+ (id)assetBundle;
@property(retain) IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(retain, nonatomic) IDENavigableItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (void).cxx_destruct;
- (double)xOffsetForSharedLibrariesPopUpAnchoredOnDebugBar:(id)arg1;
- (struct CGRect)additionalGrabRectOfDebugBar:(id)arg1 inTermsOfView:(id)arg2;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)_selectItemBasedOnDebugSessionState;
- (void)_handleDebugBarSelectedModelItemChanged;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)_forgetNavigableItems:(id)arg1;
- (void)currentStackFrameDidChange:(id)arg1;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (void)workspaceDidFinishLoading;
- (BOOL)_userIsCurrentlyCPUDebugging;
@property(readonly) NSArray *navigableDebugItems; // @dynamic navigableDebugItems;
- (void)_retrySetSelectedItem;
- (void)_simpleSetSelectedItemWithKVO:(id)arg1;
- (void)removeRootNavigableItemFromCoordinator;
- (void)updateBoundContent;
- (id)domainIdentifier;
- (id)init;

@end