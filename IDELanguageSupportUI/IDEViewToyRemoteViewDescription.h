//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEViewToyRemoteViewDescription : NSObject
{
    long long _windowNumber;
    struct CGSize _remoteViewSize;
}

@property(readonly) long long windowNumber; // @synthesize windowNumber=_windowNumber;
@property(readonly) struct CGSize remoteViewSize; // @synthesize remoteViewSize=_remoteViewSize;
- (id)initWithRemoteViewSize:(struct CGSize)arg1 windowNumber:(long long)arg2;

@end