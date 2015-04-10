//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMarshallingResult : NSObject <IBBinaryArchiving>
{
    id _value;
    NSArray *_warningMessages;
    NSError *_error;
}

+ (id)resultWithError:(id)arg1 warningMessages:(id)arg2;
+ (id)resultWithValue:(id)arg1 warningMessages:(id)arg2;
+ (id)resultWithValue:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *warningMessages; // @synthesize warningMessages=_warningMessages;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)resultBySettingValue:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithValue:(id)arg1 orError:(id)arg2 warningMessages:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end