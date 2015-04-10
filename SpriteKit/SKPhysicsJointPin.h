//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKPhysicsJointPin : SKPhysicsJoint
{
    BOOL _shouldEnableLimits;
    double _lowerAngleLimit;
    double _upperAngleLimit;
    double _frictionTorque;
    double _rotationSpeed;
    struct CGPoint _anchor;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) double rotationSpeed; // @synthesize rotationSpeed=_rotationSpeed;
@property(nonatomic) double frictionTorque; // @synthesize frictionTorque=_frictionTorque;
@property(nonatomic) double upperAngleLimit; // @synthesize upperAngleLimit=_upperAngleLimit;
@property(nonatomic) double lowerAngleLimit; // @synthesize lowerAngleLimit=_lowerAngleLimit;
@property(nonatomic) BOOL shouldEnableLimits; // @synthesize shouldEnableLimits=_shouldEnableLimits;
- (id).cxx_construct;

@end