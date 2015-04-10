//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICImageMediaResource : IDEImageMediaResource
{
    IBICImageSetRep *_imageSetRep;
    IBICImageResizingBehavior *_resizingBehavior;
    NSString *_variantSetName;
}

+ (id)resourceWithImageSetRep:(id)arg1;
@property(retain, nonatomic) NSString *variantSetName; // @synthesize variantSetName=_variantSetName;
@property(retain, nonatomic) IBICImageResizingBehavior *resizingBehavior; // @synthesize resizingBehavior=_resizingBehavior;
@property(retain, nonatomic) IBICImageSetRep *imageSetRep; // @synthesize imageSetRep=_imageSetRep;
- (void).cxx_destruct;
- (id)variantSetNameWithFoldingStrategy:(id)arg1;
- (id)variantWithFoldingStrategy:(id)arg1;
- (void)setIbResizingBehavior:(id)arg1;
- (id)ibResizingBehavior;
- (id)generateContentForFilePath:(id)arg1 contentType:(id)arg2;

@end