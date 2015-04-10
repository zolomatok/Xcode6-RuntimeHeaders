//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTAppIDRecord : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingIsWildcard;
+ (id)keyPathsForValuesAffectingDisplayIdentifier;
+ (id)keyPathsForValuesAffectingFeatures;
+ (id)featureKeys;
@property(readonly, nonatomic) _Bool isWildcard;
@property(readonly, nonatomic) NSString *displayIdentifier;
- (void)setFeatures:(id)arg1;
- (id)features;

// Remaining properties
@property(retain, nonatomic) NSString *appIdId; // @dynamic appIdId;
@property(retain, nonatomic) NSString *appIdPlatform; // @dynamic appIdPlatform;
@property(nonatomic) BOOL applicationGroups; // @dynamic applicationGroups;
@property(nonatomic) BOOL associatedDomains; // @dynamic associatedDomains;
@property(retain, nonatomic) NSSet *cloudContainers; // @dynamic cloudContainers;
@property(retain, nonatomic) NSString *dataProtection; // @dynamic dataProtection;
@property(nonatomic) BOOL featureHK421J6T7P; // @dynamic featureHK421J6T7P;
@property(nonatomic) BOOL gameCenter; // @dynamic gameCenter;
@property(nonatomic) BOOL homeKit; // @dynamic homeKit;
@property(nonatomic) BOOL iCloud; // @dynamic iCloud;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) BOOL inAppPurchase; // @dynamic inAppPurchase;
@property(nonatomic) BOOL interAppAudio; // @dynamic interAppAudio;
@property(nonatomic) BOOL maps; // @dynamic maps;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) BOOL omc; // @dynamic omc;
@property(nonatomic) BOOL passbook; // @dynamic passbook;
@property(retain, nonatomic) NSString *prefix; // @dynamic prefix;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @dynamic provisioningProfiles;
@property(nonatomic) BOOL push; // @dynamic push;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;
@property(nonatomic) BOOL vpnLite; // @dynamic vpnLite;
@property(nonatomic) BOOL wac; // @dynamic wac;

@end