//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSPredicateViewDataSource
- (void)dataChangedForPredicateView:(NSPredicateView *)arg1;
- (id <NSPredicateTypeController>)predicateView:(NSPredicateView *)arg1 customControllerForType:(NSString *)arg2 forKey:(NSString *)arg3;
- (NSString *)predicateView:(NSPredicateView *)arg1 additionalTextForKeyPath:(NSString *)arg2;
- (NSArray *)predicateView:(NSPredicateView *)arg1 displayNamesForKeyPath:(NSString *)arg2;
- (id)objectValueForPredicateView:(NSPredicateView *)arg1;
- (void)predicateView:(NSPredicateView *)arg1 setObjectValue:(id)arg2;
- (NSString *)predicateView:(NSPredicateView *)arg1 typeForKeyPath:(NSString *)arg2;
- (NSArray *)predicateView:(NSPredicateView *)arg1 keysForKeyPath:(NSString *)arg2;
@end