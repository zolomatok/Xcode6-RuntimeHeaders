//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESimulatorPlaygroundAppBundleCreator : IDEAbstractPlaygroundAppBundleCreator
{
}

+ (id)supportedPlatform;
- (id)playgroundAppBundleForAppAtPath:(id)arg1 withExecutableSubpath:(id)arg2 bundleIdentifier:(id)arg3;
- (id)constructPlaygroundAppBundleInDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)createFileWrapperForPlaygroundAppReturningRelativeExecutablePath:(id *)arg1 bundleIdentifier:(id *)arg2 error:(id *)arg3;
- (id)playgroundStubPath;

@end