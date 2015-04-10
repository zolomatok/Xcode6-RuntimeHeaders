//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPURenderBufferView : DVTLayerHostingView <DYOpenGLLayerContentProvider>
{
    CAScrollLayer *_scrollLayer;
    DYOpenGLLayer *_imageLayer;
    CATextLayer *_titleLayer;
    CALayer *_titleHighlightLayer;
    struct CGSize _scaledImageSize;
    NSString *_title;
    id <DYResource> _currentResource;
    struct CGPoint _scrollPoint;
    struct CGSize _scrollPadding;
    struct CGPoint _transactionScrollPoint;
    struct CGPoint _dragRange;
    NSObject<OS_dispatch_source> *_snapbackTimer;
    struct CGPoint _scrollMomentumVelocity;
    double _scrollMomentumLastTimestamp;
    CDUnknownBlockType _swipeHandler;
    double _zRotation;
    double _oldZRotation;
    double _maxScale;
    double _savedScaleFactor;
    double _scaleToFitFactor;
    double _uniformScale;
    double _relativeScale;
    double _oldUniformScale;
    struct CGPoint _trackedAnchorPoint;
    struct CGPoint _trackedCursorPoint;
    struct CGRect _scrollLayerBounds;
    struct CGColor *_titleLayerForegroundColor;
    struct CGColor *_titleLayerForegroundColorDark;
    id <GPURenderBufferViewStateCoordinationProtocol> _coordinator;
    unsigned int _stateFlags;
    GPURenderJob *_renderJob;
    struct CGSize _titleSize;
}

@property(nonatomic) double relativeScale; // @synthesize relativeScale=_relativeScale;
@property(copy, nonatomic) CDUnknownBlockType swipeHandler; // @synthesize swipeHandler=_swipeHandler;
@property(nonatomic) __weak id <GPURenderBufferViewStateCoordinationProtocol> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) GPURenderJob *renderJob; // @synthesize renderJob=_renderJob;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dumpImage:(id)arg1 asRaw:(BOOL)arg2;
- (void)layout;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGRect)imageRectScreen;
- (void)dispatchInTransaction:(CDUnknownBlockType)arg1;
- (void)synchronizeWithView:(id)arg1;
@property(readonly, nonatomic) struct CGRect usableViewRect; // @dynamic usableViewRect;
@property(readonly, nonatomic) struct CGSize scaledImageSize; // @dynamic scaledImageSize;
@property(nonatomic) _Bool useFastShadows; // @dynamic useFastShadows;
@property(nonatomic) _Bool flipAboutY; // @dynamic flipAboutY;
@property(nonatomic) _Bool flipAboutX; // @dynamic flipAboutX;
@property(readonly, nonatomic) struct CATransform3D imageTransform; // @dynamic imageTransform;
@property(nonatomic) double zRotation; // @dynamic zRotation;
@property(nonatomic) double scale; // @dynamic scale;
@property(nonatomic) _Bool clampScaleToPowersOfTwo; // @dynamic clampScaleToPowersOfTwo;
- (_Bool)clampZoomToPowersOfTwo;
@property(nonatomic) _Bool clampScaleToIntegers; // @dynamic clampScaleToIntegers;
@property(nonatomic) _Bool scaleToFit; // @dynamic scaleToFit;
- (void)_setStateFlag:(unsigned int)arg1 testingBool:(_Bool)arg2;
@property(readonly, nonatomic) double minimumScale; // @dynamic minimumScale;
@property(readonly, nonatomic) double maximumScale; // @dynamic maximumScale;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) id <DYResource> resource;
- (BOOL)isOpaque;
- (BOOL)wantsDepth;
- (id)overlay;
- (id)renderingAttributes;
- (BOOL)flipped;
- (BOOL)isColor;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)setupOrTearDown;
- (void)tearDown;
- (void)setup;
- (void)teardownLayers;
- (void)setupLayers;
- (BOOL)useLayerHosting;
- (id)makeBackingLayer;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_buildLayerTree:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)_handleScrollEvent:(id)arg1 usingMomentumPhase:(unsigned long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_handleSmartZoomEvent:(id)arg1;
- (void)_handleZoomEvent:(id)arg1 factor:(double)arg2 animate:(_Bool)arg3;
- (void)_handleDragEvent:(id)arg1 usingPoint:(struct CGPoint)arg2 asAnOffsetVector:(_Bool)arg3;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (struct CGSize)_resourceImageSize;
- (void)_updateContentsScale:(double)arg1 forLayer:(id)arg2;
- (void)_layoutLayers;
- (void)_updateTitleForegroundColor;
- (_Bool)_layer:(id)arg1 intersectsLayer:(id)arg2;
- (void)_updateScaleToFitFactor;
- (double)_clampScale:(double)arg1 withDelta:(double)arg2;
- (double)_clampScale:(double)arg1;
- (struct CGPoint)_clampAnchor:(struct CGPoint)arg1;
- (void)_applyTransform;
- (struct CATransform3D)_getCurrentLinearTransformApplyingScale:(_Bool)arg1 flippingZRotation:(_Bool)arg2 adjustingForContentScale:(_Bool)arg3;
- (struct AABB)_calculateAABBWithTransform:(struct CATransform3D)arg1;
- (struct CGPoint)_getUsableCenter;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end