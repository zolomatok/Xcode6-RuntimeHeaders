//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBConfigurationValueRecord : NSObject
{
    IBMemberConfiguration *_configuration;
    IBMemberPropertyValue *_value;
}

+ (id)recordWithConfiguration:(id)arg1 value:(id)arg2;
@property(readonly) IBMemberPropertyValue *value; // @synthesize value=_value;
@property(readonly) IBMemberConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToConfigurationValueRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1 value:(id)arg2;

@end