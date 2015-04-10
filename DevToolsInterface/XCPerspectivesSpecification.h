//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPerspectivesSpecification : XCSpecification
{
    PBXProjectDocument *_nonRetainedProjectDocument;
    NSString *_classBaseName;
    NSMutableArray *_allowedModules;
    NSMutableArray *_perspectives;
    NSString *_activePerspective;
    NSMutableArray *_windowToolDefinitions;
    NSMutableDictionary *_originalPList;
    NSString *_windowString;
    NSMutableArray *_notifications;
    NSArray *_preferredWidths;
    BOOL _dockingSystemVisible;
    BOOL _perspectivesBarVisible;
    NSMutableDictionary *_windowToolImplementations;
    unsigned long long _toolbarDisplayMode;
    unsigned long long _toolbarSizeMode;
    BOOL _toolbarIsVisible;
    BOOL _statusBarIsVisible;
    BOOL _shelfIsVisible;
    NSString *_extension;
    BOOL _firstTimeWindowDisplayed;
    int _projectWindowJustification;
    double _timestamp;
    NSMutableDictionary *_sharedConfigurations;
    long long _majorVersion;
    long long _minorVersion;
    NSString *_updateMessage;
    NSString *_toolbarConfigUserDefaultsMinorVersion;
    NSString *_lastActivePerspective;
    id _pinnedNavigatorGroupIdentifier;
    NSDictionary *_favoritesConfiguration;
    BOOL _frozen;
    BOOL _isSavingConfiguration;
}

+ (id)projectDefaultsFileReferece;
+ (id)extension;
+ (id)identifier;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (id)restoreDefaultSpecificationForIdentifier:(id)arg1 forProjectDocument:(id)arg2 useUserDefaults:(BOOL)arg3;
+ (id)specificationForIdentifier:(id)arg1 forProjectDocument:(id)arg2;
+ (void)upgrade2xTo3x:(id)arg1;
@property(readonly) NSString *toolbarConfigUserDefaultsMinorVersion; // @synthesize toolbarConfigUserDefaultsMinorVersion=_toolbarConfigUserDefaultsMinorVersion;
- (id)createOpenEditorList;
- (id)restoreAppropriateWindows;
- (BOOL)toolbarIsVisible;
- (void)setToolbarIsVisible:(BOOL)arg1;
- (unsigned long long)toolbarSizeMode;
- (void)setToolbarSizeMode:(unsigned long long)arg1;
- (unsigned long long)toolbarDisplayMode;
- (void)setToolbarDisplayMode:(unsigned long long)arg1;
- (void)removeDefaultSpecification;
- (void)saveAsDefaultSpecification;
- (void)saveAndFreeze:(id)arg1;
- (BOOL)saveToFile:(id)arg1;
- (BOOL)isSavingConfiguration;
- (id)projectObjectForKey:(id)arg1;
- (id)createObservers;
- (void)removeNotificationEntryForGUID:(id)arg1 factoryGUID:(id)arg2 targetGUID:(id)arg3 trigger:(SEL)arg4 notification:(id)arg5;
- (void)addNotificationEntryForGUID:(id)arg1 factoryGUID:(id)arg2 targetGUID:(id)arg3 trigger:(SEL)arg4 notification:(id)arg5 definition:(id)arg6 validation:(id)arg7 autoDisconnect:(BOOL)arg8;
- (struct CGSize)defaultToolWindowMinSize;
- (void)awakenModuleWithObserver:(id)arg1;
- (id)windowOrderGUIDList;
- (id)persistentWindowToolDefinitions;
- (void)updateWindowToolDefinitions;
- (void)reconcileWithUpdatedTools;
- (void)_validateWindowToolsMenu:(id)arg1;
- (void)_showWindowTool:(id)arg1;
- (void)setupWindowToolMenu;
- (void)updateKeyBindingForMenuItem:(id)arg1;
- (id)duplicateToolForIdentifier:(id)arg1;
- (id)toolForIdentifier:(id)arg1;
- (BOOL)hasToolForIdentifier:(id)arg1;
- (id)toolForClass:(Class)arg1 onlyIfVisible:(BOOL)arg2;
- (id)toolForClass:(Class)arg1;
- (BOOL)isCreationPermittedForClassWithName:(id)arg1;
- (void)setFavoritesConfiguration:(id)arg1;
- (id)favoritesConfiguration;
- (BOOL)shelfIsVisible;
- (void)setShelfIsVisible:(BOOL)arg1;
- (BOOL)statusBarIsVisible;
- (void)setStatusBarIsVisible:(BOOL)arg1;
- (BOOL)perspectivesBarVisible;
- (void)setPerspectivesBarVisible:(BOOL)arg1;
- (BOOL)dockingSystemVisible;
- (void)setDockingSystemVisible:(BOOL)arg1;
- (void)setMatchCurrentToolbarConfigUserDefaultsMinorVersionForPerspectiveAtIndex:(long long)arg1;
- (BOOL)matchesCurrentToolbarConfigUserDefaultsMinorVersionForPerspectiveAtIndex:(long long)arg1;
- (void)changeToPreviousPerspective;
- (void)changeToNextPerspective;
- (BOOL)activatePerspectiveContainingService:(Class)arg1;
- (id)findPerspectiveContainingService:(Class)arg1 startingAtIndex:(long long)arg2;
- (id)findPerspectiveContainingService:(Class)arg1;
- (long long)indexOfActivePerspective;
- (void)setLastPerspective;
- (id)lastActivePerspective;
- (id)activePerspective;
- (BOOL)resetActivePerspective;
- (void)setActivePerspectiveAtIndex:(long long)arg1;
- (void)setActivePerspective:(id)arg1 recordLastPerspective:(BOOL)arg2;
- (void)setActivePerspective:(id)arg1;
- (BOOL)isValidPerspective:(id)arg1;
- (id)pinnedNavigatorGroupIdentifier;
- (id)pinnedNavigatorGroup;
- (void)setPinnedNavigatorGroup:(id)arg1;
- (id)withdrawalConfigurationForSharingKey:(id)arg1;
- (void)depositConfiguration:(id)arg1 forSharingKey:(id)arg2;
- (int)projectWindowJustification;
- (void)setFirstTimeWindowDisplayed:(BOOL)arg1;
- (BOOL)firstTimeWindowDisplayed;
- (id)perspectiveExtension;
- (void)setWindowFrameString:(id)arg1;
- (id)windowFrameString;
- (void)setPreferredWidths:(id)arg1;
- (id)preferredWidths;
- (id)updateMessage;
- (void)setMinorVersion:(long long)arg1;
- (long long)minorVersion;
- (void)setMajorVersion:(long long)arg1;
- (long long)majorVersion;
- (id)perspectives;
- (id)allowedModules;
- (id)classBaseName;
- (void)_clearProjectDocument:(id)arg1;
- (id)projectDocument;
- (void)setProjectDocument:(id)arg1;
- (void)closeAllModules;
- (void)dealloc;
- (id)deepCopy;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end