//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBBinaryArchiverObjectIDTable : NSObject
{
    struct IBObjectIDHashEntry_tag *table;
    long long capacity;
    long long count;
}

- (void)addObject:(id)arg1 withObjectID:(long long)arg2;
- (long long)objectIDForObject:(id)arg1;
- (void)rehash;
- (void)dealloc;
- (id)initWithCapacity:(long long)arg1;

@end