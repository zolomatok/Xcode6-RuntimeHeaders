//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKFade : SKAction
{
    struct SKCFade *_mycaction;
}

+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end