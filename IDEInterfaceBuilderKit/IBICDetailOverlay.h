//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICDetailOverlay : NSView
{
    NSArray *_dropIndicatorPaths;
    struct CGRect _bandSelectionRect;
}

@property(nonatomic) struct CGRect bandSelectionRect; // @synthesize bandSelectionRect=_bandSelectionRect;
@property(copy, nonatomic) NSArray *dropIndicatorPaths; // @synthesize dropIndicatorPaths=_dropIndicatorPaths;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateDrawingForPath:(id)arg1;

@end