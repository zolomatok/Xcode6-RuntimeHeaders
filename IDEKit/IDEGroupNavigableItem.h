//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEGroupNavigableItem : IDENavigableItem
{
    NSString *_name;
    NSArray *_subitems;
    NSString *_scmLocalStatus;
    NSString *_scmServerStatus;
}

+ (id)keyPathsForValuesAffectingToolTip;
+ (id)_createExtraInfoObject;
- (void).cxx_destruct;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (unsigned long long)conflictStateForUpdateOrMerge;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;
- (id)documentType;
- (BOOL)isMajorGroup;
- (id)fileReference;
- (id)contentDocumentLocation;
- (id)toolTip;
- (id)image;
- (id)name;
- (void)updateAttributes;
- (void)updateChildRepresentedObjects;
- (id)textColor;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (id)_group;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end