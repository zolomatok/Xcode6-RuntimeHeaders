//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTProductVersionBinaryInfo : NSObject <DVTServicesJSONSerialization>
{
    NSDictionary *_archToBinaryUUID;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *archToBinaryUUID; // @synthesize archToBinaryUUID=_archToBinaryUUID;
- (void).cxx_destruct;
- (BOOL)containsUUID:(id)arg1;
- (id)JSONRepresentation;
- (id)binaryUUIDForArchitecture:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithArchToUUIDDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end