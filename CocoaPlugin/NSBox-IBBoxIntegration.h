//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSBox (IBBoxIntegration)
- (void)ibAwakeInDesignableDocument:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)isClippingDesignableContent;
- (double)ibBaselineAtIndex:(long long)arg1;
- (long long)ibBaselineCount;
- (struct IBInsetTag)ibInsetToDesignableContentArea;
- (struct IBInsetTag)ibLayoutInset;
- (struct CGSize)ibPreferredDesignSize;
- (struct CGSize)sizeWithoutClippingTitle;
- (Class)ibEditorClass;
- (id)widgetType;
- (id)ibDesignableContentView;
- (id)ibDesignableFontKeyPath;
- (id)ibDesignableColorKeyPath;
- (BOOL)ibIsTitled;
- (id)ibDefaultLabel;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
@end