//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSBox (IBNSBoxIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedContentViewMarginsWidth;
+ (id)keyPathsForValuesAffectingIbInspectedContentViewMarginsHeight;
- (void)setIbInspectedContentViewMarginsWidth:(double)arg1;
- (double)ibInspectedContentViewMarginsWidth;
- (void)setIbInspectedContentViewMarginsHeight:(double)arg1;
- (double)ibInspectedContentViewMarginsHeight;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (BOOL)ibVerifyFrameAndBoundsIntegrality;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)ibAwakeInDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
- (long long)ibBaselineCount;
- (CDStruct_d2b197d1)ibInsetToDesignableContentArea;
- (unsigned long long)ibOrientationsForSizingToFitFromLibrary;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibSizeWithoutClippingTitle;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (id)ibWidgetType;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibDefaultFontKeyPath;
- (BOOL)ibIsTitled;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
- (id)ibArchivedDesignableContentView;
- (id)ibDesignableContentView;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
@end