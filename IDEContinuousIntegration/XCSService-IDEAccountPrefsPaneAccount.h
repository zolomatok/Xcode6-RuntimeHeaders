//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSService (IDEAccountPrefsPaneAccount) <IDEKeyDrivenNavigableItemRepresentedObject, XCSServiceErrorDelegate>
+ (id)keyPathsForValuesAffectingAccountReachability;
+ (id)keyPathsForValuesAffectingAccountEnabled;
+ (id)keyPathsForValuesAffectingAccountImage;
+ (id)keyPathsForValuesAffectingAccountSubTitle;
+ (id)keyPathsForValuesAffectingAccountTitle;
- (void)loginWithStoredCredentials:(CDUnknownBlockType)arg1;
- (void)service:(id)arg1 didEncounterError:(id)arg2 withRequest:(id)arg3 proceed:(CDUnknownBlockType)arg4;
- (void)deactivateXcodeSessionManagement;
- (void)activateXcodeSessionManagementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)setCurrentUsername:(id)arg1 andPassword:(id)arg2 withError:(id *)arg3;
@property(readonly, nonatomic) BOOL isReachable;
@property(retain, nonatomic) XCSVersionInfo *lastKnownVersionInfo;
@property(retain, nonatomic) NSError *lastKnownConnectionError;
@property BOOL attemptGuestAuthentication;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *displayName;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) long long accountReachability;
- (BOOL)accountEnabled;
@property(readonly, nonatomic) NSImage *accountImage;
@property(readonly, copy, nonatomic) NSString *accountSubTitle;
@property(readonly, copy, nonatomic) NSString *accountTitle;
@property(readonly, nonatomic) NSImage *computerImage;
@property(readonly) NSString *navigableItem_name;
@property(readonly, copy, nonatomic) NSString *serverCompatibilityErrorText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end