//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDMCommandLineConnection : XDMCommandConnection
{
    id <XDMCommandLineConnectionDelegate> _commandDelegate;
}

@property(nonatomic) id <XDMCommandLineConnectionDelegate> commandDelegate; // @synthesize commandDelegate=_commandDelegate;
- (unsigned long long)parseCommandData:(id)arg1;
- (void)didReceiveCommandLine:(id)arg1;
- (void)sendCommandLines:(id)arg1;
- (void)sendCommandLine:(id)arg1;
- (void)sendString:(id)arg1;
- (void)logAtLevel:(unsigned char)arg1 withFormat:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (void)willCloseWithError:(id)arg1;

@end