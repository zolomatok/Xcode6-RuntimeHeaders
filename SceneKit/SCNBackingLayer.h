//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNBackingLayer : NSOpenGLLayer
{
    SCNView *_parentView;
    BOOL _needsRedrawForJittering;
}

@property(nonatomic) SCNView *parentView; // @synthesize parentView=_parentView;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)canDrawInOpenGLContext:(id)arg1 pixelFormat:(id)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)_cancelJitterRedisplay;
- (void)_jitterRedisplayWithContext:(struct _CGLContextObject *)arg1;
- (id)openGLContextForPixelFormat:(id)arg1;
- (id)openGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (BOOL)canDrawConcurrently;

@end