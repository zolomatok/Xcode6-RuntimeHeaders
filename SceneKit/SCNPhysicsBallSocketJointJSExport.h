//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SCNPhysicsBallSocketJointJSExport <JSExport>
+ (id)jointWithBody:(SCNPhysicsBody *)arg1 anchor:(struct SCNVector3)arg2;
+ (id)jointWithBodyA:(SCNPhysicsBody *)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 anchorB:(struct SCNVector3)arg4;
@property(nonatomic) struct SCNVector3 anchorB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
@end