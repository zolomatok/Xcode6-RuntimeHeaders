//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYPVRTCEncoder : DYEncoder
{
    int m_alpha_option;
    int m_punchthrough_option;
    int m_channel_weighting;
}

- (id)decode:(id)arg1 format:(unsigned int)arg2 level:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 options:(id)arg6;
- (id)encode:(id)arg1 level:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 options:(id)arg5 errorCode:(int *)arg6;
- (void)parseOptions:(id)arg1;
- (id)describeOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)options;
- (id)name;

@end