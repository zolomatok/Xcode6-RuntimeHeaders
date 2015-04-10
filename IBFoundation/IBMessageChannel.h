//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMessageChannel : NSObject
{
    int _writeFD;
    int _readFD;
    BOOL _shutdown;
    NSDictionary *_remoteCapabilities;
    NSNumber *_protocolVersion;
}

+ (id)negociateProtocolVersionFromLocalCapabilities:(id)arg1 remoteCapabilities:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (long long)binaryArchiveVersion;
- (void)shutdown;
- (BOOL)startupReturningError:(id *)arg1;
- (id)initWithSocket:(int)arg1 error:(id *)arg2;
- (id)initWithWriteDescriptor:(int)arg1 readDescriptor:(int)arg2 error:(id *)arg3;

@end