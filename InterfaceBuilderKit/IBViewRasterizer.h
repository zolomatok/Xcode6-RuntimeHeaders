//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBViewRasterizer : NSObject
{
    NSView *cachedView;
    NSAffineTransform *transformToWindowSpace;
}

+ (id)maskOfCell:(id)arg1 withSize:(struct CGSize)arg2 andColor:(id)arg3;
+ (id)imageOfCell:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)viewOfCell:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)maskOfView:(id)arg1 withColor:(id)arg2;
+ (id)dragImageOfViews:(id)arg1;
+ (id)dragImageOfViews:(id)arg1 withTransformToWindowSpace:(id)arg2;
+ (double)dragImageOpacity;
+ (id)imageOfViews:(id)arg1 withOpacity:(double)arg2;
+ (id)imageOfViews:(id)arg1 withTransformToWindowSpace:(id)arg2 andOpacity:(double)arg3;
+ (id)imageOfView:(id)arg1;
+ (id)imageOfView:(id)arg1 withTransformToWindowSpace:(id)arg2;
- (id)image;
- (void)dealloc;
- (id)initWithView:(id)arg1 andTransformToWindowSpace:(id)arg2;

@end