//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTBloomFilter : NSObject <DVTPropertyListEncoding>
{
    CDStruct_d703e233 _specification;
    struct {
        char *bytes;
        unsigned long long byteCount;
    } _bitVector;
    CDUnknownBlockType _hashProvider;
}

@property(copy) CDUnknownBlockType hashProvider; // @synthesize hashProvider=_hashProvider;
- (void).cxx_destruct;
- (long long)indexSize;
@property(readonly) NSString *usageDescription;
- (BOOL)mightContainKey:(const CDStruct_f444e920 *)arg1;
- (void)addKey:(const CDStruct_f444e920 *)arg1;
- (void)dealloc;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithSpecification:(CDStruct_d703e233)arg1 hashProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end