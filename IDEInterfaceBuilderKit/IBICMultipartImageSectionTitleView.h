//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICMultipartImageSectionTitleView : NSView
{
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)heightThatFits;
- (id)borderColor;
- (id)attributedTitle;
- (id)titleAttributes;
- (id)titleParagraphStyle;
- (id)effectiveTitleColor;
- (id)font;

@end