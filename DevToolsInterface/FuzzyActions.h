//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FuzzyActions <NSObject>
- (void)identifier:(NSString *)arg1 onLine:(long long)arg2 atPosition:(long long)arg3 withContext:(int)arg4;
- (void)selector:(NSString *)arg1 beginLocation:(long long)arg2:(long long)arg3 endLocation:(long long)arg4:(long long)arg5 withContext:(int)arg6;
- (void)stringConstant:(NSString *)arg1 onLine:(long long)arg2;
- (void)comment:(NSString *)arg1 onLine:(long long)arg2;
- (void)header:(NSString *)arg1 onLine:(long long)arg2;
@end