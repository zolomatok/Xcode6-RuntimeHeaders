//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMockClassProvider : IBAbstractClassProvider
{
    NSMutableSet *_partialClassDescriptions;
}

- (void).cxx_destruct;
- (void)removePartialClassDescriptionsWithSourceIdentifiers:(id)arg1 andAddPartialClassDescriptionsInSameUpdateCycle:(id)arg2;
- (void)removePartialClassDescriptionsWithSourceIdentifiers:(id)arg1;
- (void)removePartialClassDescriptionsWithSourceIdentifier:(id)arg1;
- (void)addPartialClassDescriptions:(id)arg1;
- (void)addPartialClassDescription:(id)arg1;
- (id)partialClassDescriptions;
- (id)init;

// Remaining properties
@property BOOL isUpdating;

@end