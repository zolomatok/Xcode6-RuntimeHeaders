//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DVTBasicFindBarFindable <DVTFindBarFindable>
- (BOOL)basicFindBar:(DVTBasicFindBar *)arg1 findPreviousByWrapping:(BOOL)arg2;
- (BOOL)basicFindBar:(DVTBasicFindBar *)arg1 findNextByWrapping:(BOOL)arg2;
- (long long)basicFindBar:(DVTBasicFindBar *)arg1 findString:(NSString *)arg2 caseSensitive:(BOOL)arg3 withFindType:(unsigned long long)arg4 andMatchStyle:(int)arg5;
- (BOOL)basicFindBar:(DVTBasicFindBar *)arg1 supportsMatchStyle:(int)arg2;
- (BOOL)basicFindBar:(DVTBasicFindBar *)arg1 supportsFindType:(unsigned long long)arg2;

@optional
- (void)basicFindBarLostFocus:(DVTBasicFindBar *)arg1;
@end