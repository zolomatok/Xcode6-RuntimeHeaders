//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSScreen (IBScreenAdditions)
+ (struct CGPoint)convertWindowServerPointToPoint:(struct CGPoint)arg1;
+ (struct CGPoint)convertPointToWindowServerPoint:(struct CGPoint)arg1;
+ (struct CGRect)convertWindowServerRectToRect:(struct CGRect)arg1;
+ (struct CGRect)convertRectToWindowServerRect:(struct CGRect)arg1;
- (struct CGRect)layoutFrame;
@end