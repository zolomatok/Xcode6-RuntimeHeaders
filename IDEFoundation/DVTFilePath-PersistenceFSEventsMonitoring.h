//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTFilePath (PersistenceFSEventsMonitoring)
- (BOOL)subpathsChangedSinceDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)relativePathOnVolume;
- (void)doneAddingChangedFilesFromStream:(struct __FSEventStream *)arg1;
- (void)addChangedFilePath:(char *)arg1;
@end