//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDeveloperPaths : DVTDeveloperPaths
{
    DVTFilePath *_distributionArchivesLocation;
    id _distributionArchivesLocationNotificatonToken;
    id _distributionArchivesSourceTreesNotificationToken;
    DVTFilePath *_snapshotsDirectory;
    id _snapshotsDirectoryNotificatonToken;
    id _snapshotsDirectorySourceTreesNotificationToken;
}

- (void).cxx_destruct;
- (id)templateSearchPath;
- (id)defaultWorkspaceDerivedDataLocation;
- (id)defaultDistributionArchivesLocation;
- (id)distributionArchivesLocation;
- (id)defaultSnapshotsDirectory;
- (id)snapshotsDirectory;
- (id)corePlugInSearchPathForPlatform:(id)arg1;

@end