//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface JKZipFileStore : JKClassStore
{
    NSString *_zipFilePath;
    struct zip_struct *_zipFile;
}

+ (BOOL)canGrokName:(id)arg1;
- (id)description;
- (id)allSourceAndClassFilesInPackage:(id)arg1 includingInnerClasses:(BOOL)arg2;
- (id)allSourceAndClassFilesIncludingInnerClasses:(BOOL)arg1;
- (BOOL)containsFileWithName:(id)arg1;
- (id)dataForFileWithName:(id)arg1;
- (id)subDirectoriesInDirectory:(id)arg1;
- (id)fileNamesInDirectory:(id)arg1;
- (id)dataForClassWithName:(id)arg1;
- (BOOL)containsPackageWithName:(id)arg1;
- (BOOL)containsClassWithName:(id)arg1;
- (id)packageNamesInPackage:(id)arg1;
- (id)classNamesInPackage:(id)arg1;
- (id)name;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end