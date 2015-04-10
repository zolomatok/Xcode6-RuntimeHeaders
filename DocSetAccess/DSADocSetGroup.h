//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DSADocSetGroup : NSObject
{
    NSString *_name;
    NSString *_publisherName;
    id _subscription;
    NSString *_defaultFeedName;
    NSURL *_defaultFeedURL;
    NSMutableArray *_docSetItems;
}

+ (id)_docSetDictionaryForPSObject:(id)arg1;
+ (BOOL)isVersion:(CDStruct_6df46f26)arg1 compatibleWithKeys:(id)arg2;
+ (id)subscribedGroups;
+ (void)refreshAll;
+ (void)setRefreshInterval:(double)arg1;
+ (CDStruct_6df46f26)currentXcodeVersion;
+ (void)setCurrentXcodeVersion:(CDStruct_6df46f26)arg1;
+ (void)setDefaultFeedClient:(id)arg1;
+ (id)defaultFeedClient;
@property(retain) DSASubscription *subscription; // @synthesize subscription=_subscription;
- (void)_updateChanged:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)hasNewDocSets;
- (BOOL)hasUpdatedDocSets;
- (BOOL)refreshDocSetItems;
- (id)bestFeedEntryFromList:(id)arg1 forUpdate:(id)arg2;
- (id)feedEntriesByIdentifier:(id)arg1;
- (id)_feedEntries;
- (void)refreshNow;
- (id)docSets;
- (id)docSetItems;
- (void)addDocSet:(id)arg1;
- (id)docSetUpdateForDocSet:(id)arg1;
- (id)_docSetItemForDocSet:(id)arg1;
@property(readonly) NSString *publisherIdentifier;
@property(readonly) NSString *localizedPublisherName;
- (id)name;
- (void)_resetName;
- (void)unsubscribe;
- (void)subscribe;
- (BOOL)subscribeWithError:(id *)arg1;
- (BOOL)_subscribeToURL:(id)arg1 error:(id *)arg2;
- (id)_validateFeedURL:(id)arg1 error:(id *)arg2;
- (id)_docSetNamespacePrefixForFeed:(id)arg1;
- (id)_loadFeedURL:(id)arg1 error:(id *)arg2;
- (id)_errorForSubscriptionFailure:(id)arg1 URL:(id)arg2;
- (id)feedURL;
- (id)feed;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_postChangeNotificationForModifiedItems:(id)arg1 andRemovedItems:(id)arg2;
- (void)dealloc;
- (id)initWithDocSet:(id)arg1;
- (id)initWithFeedURL:(id)arg1;
- (id)initWithFeedURL:(id)arg1 error:(id *)arg2;
- (id)initWithFeedURL:(id)arg1 name:(id)arg2 subscribe:(BOOL)arg3 error:(id *)arg4;
- (id)initWithSubscription:(id)arg1;
- (id)init;

@end