//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TSOutputStream : NSObject <TSOutputStreams>
{
}

- (void)writeData:(id)arg1;
- (void)close;
- (void)flush;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end