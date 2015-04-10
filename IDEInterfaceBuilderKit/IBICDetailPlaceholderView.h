//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICDetailPlaceholderView : DVTLayoutView_ML
{
    DVTLozengeTextField *_textField;
    IBImageButton *_imageButton;
    BOOL _imagesNeedsUpdate;
    id <IBViewDragDelegate> _delegate;
    NSView *_overlayView;
    NSColor *_backgroundColor;
    NSString *_actionText;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <IBViewDragDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutTopDown;
- (id)effectiveAttributedActionText;
- (id)buttonBackgroundImageWithWhite:(double)arg1 actionText:(id)arg2;
@property(retain, nonatomic) id target;
@property(nonatomic) SEL action;
@property(copy, nonatomic) NSString *placeholderString;
- (void)invalidateImage;
- (void)layoutBottomUp;
- (id)initWithFrame:(struct CGRect)arg1;

@end