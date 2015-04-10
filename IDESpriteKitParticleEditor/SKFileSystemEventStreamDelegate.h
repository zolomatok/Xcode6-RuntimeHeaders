//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SKFileSystemEventStreamDelegate <NSObject>
- (void)fileSystemEventStream:(SKFileSystemEventStream *)arg1 notedChangeAtPath:(NSString *)arg2 scanRecursively:(BOOL)arg3;

@optional
- (void)historyWrappedForFileSystemEventStream:(SKFileSystemEventStream *)arg1;
- (void)historyCompleteForFileSystemEventStream:(SKFileSystemEventStream *)arg1;
- (void)fileSystemEventStream:(SKFileSystemEventStream *)arg1 notedVolumeUnmount:(NSString *)arg2;
- (void)fileSystemEventStream:(SKFileSystemEventStream *)arg1 notedVolumeMount:(NSString *)arg2;
- (void)fileSystemEventStream:(SKFileSystemEventStream *)arg1 notedChangeOfRootPath:(NSString *)arg2;
@end