//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCTestExpectation : NSObject
{
    id _internalImplementation;
}

+ (id)expectationForTestCase:(id)arg1 withDescription:(id)arg2;
@property(readonly) _XCTestExpectationImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void)cleanup;
- (void)fulfill;
- (id)description;
- (id)_initForTestCase:(id)arg1 withDescription:(id)arg2;
- (void)dealloc;

@end