//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment *_authoringEnvironment;
    SCNNode *_target;
}

@property(nonatomic) SCNNode *target; // @synthesize target=_target;
- (BOOL)mouseUp:(CDStruct_811921b8)arg1;
- (BOOL)mouseDown:(CDStruct_811921b8)arg1;
- (BOOL)mouseDragged:(CDStruct_811921b8)arg1;
- (BOOL)mouseMoved:(CDStruct_811921b8)arg1;
- (void)draw;
- (void)_setAuthoringEnvironment:(id)arg1;
@property(readonly) SCNAuthoringEnvironment *authoringEnvironment;

@end