//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutolayoutAffectingConstraintsRequest : IBAutolayoutOperationRequest
{
    NSObject<IBAutolayoutItem> *_view;
    unsigned long long _orientationMask;
}

@property(readonly, nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)debugDescription;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(CDUnknownBlockType)arg1;
- (id)initWithRepresentation:(id)arg1 layoutInfoClass:(Class)arg2 objectForObjectRepresentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithArbitrationUnit:(id)arg1 view:(id)arg2 orientationMask:(unsigned long long)arg3;

@end