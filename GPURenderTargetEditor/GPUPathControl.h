//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUPathControl : NSPathControl
{
    NSArray *_representedItems;
}

+ (Class)cellClass;
+ (unsigned long long)defaultFocusRingType;
@property(retain, nonatomic) NSArray *representedItems; // @synthesize representedItems=_representedItems;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
@property int borderSides;
- (BOOL)isOpaque;
@property(nonatomic) int gradientStyle;
- (void)popUpMenuForComponentCell:(id)arg1;
- (void)_popUpMenuForComponentCell:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end