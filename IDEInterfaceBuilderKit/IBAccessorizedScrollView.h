//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAccessorizedScrollView : NSScrollView
{
    IBAccessorizedScrollViewButtonBar *_buttonBar;
}

@property(readonly) IBAccessorizedScrollViewButtonBar *buttonBar; // @synthesize buttonBar=_buttonBar;
- (void).cxx_destruct;
- (void)bringButtonBarToFront;
- (void)tile;
- (id)verticalScroller;
- (id)horizontalScroller;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end