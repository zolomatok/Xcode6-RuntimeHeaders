//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3Target (Xcode3TargetUIAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)iconForPBXTarget:(id)arg1;
@property(readonly) NSArray *modernizerPropertyDefinitions;
- (void)convertToUseModernUnitTests;
@property(readonly) BOOL isXPCServiceTarget;
@property(readonly) BOOL isAutomatorActionTarget;
- (BOOL)_isProductBundleWithExtension:(id)arg1;
- (id)capabilitiesContextCreateIfNil:(BOOL)arg1;
- (void)createEntitlementsFileWithDefaultEntitlements:(id)arg1;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end