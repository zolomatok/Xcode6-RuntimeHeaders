//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBuildStateStoreEntry : NSObject
{
    XCBuildStateStore *_store;
    NSString *_ident;
}

- (void)writeToFileHandle:(struct __sFILE *)arg1;
- (id)initFromFileHandle:(struct __sFILE *)arg1 withIdentifier:(id)arg2 inBuildStateStore:(id)arg3;
- (void)readPropertiesFromFileHandle:(struct __sFILE *)arg1;
- (BOOL)readPropertyFromTypeCode:(BOOL)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3;
- (BOOL)isValid;
- (void)invalidate;
- (id)longDescription;
- (id)description;
- (id)identifier;
- (id)buildStateStore;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1 inBuildStateStore:(id)arg2;

@end