//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEPortalEntitlementsCoordinatorPlatform <NSObject>
- (NSDictionary *)willRequestProfileWithFeatures:(NSDictionary *)arg1 usingWildcardAppID:(BOOL)arg2;
- (NSDictionary *)didReadProfileFeatures:(NSDictionary *)arg1;
- (id)initWithCapabilitiesContext:(id <IDECapabilitiesContextProviding>)arg1;
@end