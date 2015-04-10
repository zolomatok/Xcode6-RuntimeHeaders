//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSTabView (IBTabViewIntegration)
- (BOOL)xmlCoder:(id)arg1 shouldDelayEncodingObject:(id)arg2 forKey:(id)arg3 context:(id)arg4;
- (id)xmlCoderEncodingCallbackContext:(id)arg1;
- (BOOL)hasVerticalTabLayout;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviewsWhileGrowingFromKnob:(long long)arg1 inDocument:(id)arg2;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (id)ibDefaultLabel;
- (struct CGSize)ibPreferredDesignSize;
- (struct CGPoint)ibPreferredDesignOriginForSize:(struct CGSize)arg1;
- (void)ibDidSuggestLayout:(id)arg1;
- (id)ibWillSuggestLayout:(struct CGRect)arg1;
- (struct CGRect)ibContentRectForBoundsRect:(struct CGRect)arg1;
- (BOOL)isClippingDesignableContent;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibDefaultChildren;
- (void)setTabViewItemsCopy:(id)arg1;
- (id)tabViewItemsCopy;
- (void)setSelectedTabViewItem:(id)arg1;
- (id)initialTabViewItem;
- (void)setInitialTabViewItem:(id)arg1;
- (id)initialTabViewItemAttribute;
- (id)widgetType;
- (Class)ibTabViewItemClass;
- (id)ibObjectAtLocation:(struct CGPoint)arg1 inWindowController:(id)arg2;
- (struct CGRect)ibRectForChild:(id)arg1 inWindowController:(id)arg2;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (Class)ibEditorClass;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (id)ibLabelQualifierForChild:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)displayNameForDesignableKeyPath:(id)arg1;
- (id)orderedDesignableAttributesKeyPaths;
- (void)ibPopulateKeyPaths:(id)arg1;
@end