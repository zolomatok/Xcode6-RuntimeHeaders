//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSImageCell (IBNSImageViewCellIntegration)
- (void)ibSwizzledSetImage:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (Class)ibPreferredControlClass;
- (id)ibDefaultDataValueForTableView:(id)arg1;
- (id)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1;
@end