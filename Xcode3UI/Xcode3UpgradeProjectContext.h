//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3UpgradeProjectContext : IDEUpgradeContainerContext <Xcode3UpgradeContext>
{
    Xcode3BuildSettingsContext *_buildSettings;
}

@property(readonly) Xcode3BuildSettingsContext *buildSettings; // @synthesize buildSettings=_buildSettings;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) Xcode3Project *project;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end