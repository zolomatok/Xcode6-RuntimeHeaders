//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDERoundPlaqueView : NSBox
{
    NSCell *_contentCell;
    NSCell *_backgroundCell;
}

@property(retain, nonatomic) NSCell *backgroundCell; // @synthesize backgroundCell=_backgroundCell;
@property(retain) NSCell *contentCell; // @synthesize contentCell=_contentCell;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRect;
- (void)setTitle:(id)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_oneTimeInitWithFrame:(struct CGRect)arg1;

@end