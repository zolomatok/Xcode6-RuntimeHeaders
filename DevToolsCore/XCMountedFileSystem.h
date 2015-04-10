//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCMountedFileSystem : NSObject
{
    int _deviceNumber;
    XCPath *_mountPath;
    NSMapTable *_inodesToVNodes;
}

+ (id)mountedFileSystemWithDeviceNumber:(int)arg1;
- (id)description;
- (void)removeVNode:(id)arg1;
- (void)addVNode:(id)arg1;
- (void)noteFileSystemWasUnmounted;
- (id)vnodeForInodeNumber:(unsigned long long)arg1;
- (id)mountPath;
- (int)deviceNumber;
- (void)dealloc;
- (id)initWithDeviceNumber:(int)arg1 statfsInfo:(const struct statfs *)arg2;

@end