//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEIndexNewMainFile : IDEIndexNewFile
{
    IDEIndexImportSession *_session;
    NSString *_target;
    NSString *_source;
    DVTFilePath *_pchPath;
    NSMutableArray *_files;
    NSSet *_dirtyFiles;
    long long _unitId;
    BOOL _deferred;
}

@property(nonatomic, getter=isDeferred) BOOL deferred; // @synthesize deferred=_deferred;
@property(nonatomic) long long unitId; // @synthesize unitId=_unitId;
@property(retain, nonatomic) NSSet *dirtyFiles; // @synthesize dirtyFiles=_dirtyFiles;
@property(readonly, nonatomic) NSArray *files; // @synthesize files=_files;
@property(retain, nonatomic) DVTFilePath *pchPath; // @synthesize pchPath=_pchPath;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) IDEIndexImportSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)didSubmit;
- (void)submit;
- (long long)realGroupIdForId:(long long)arg1;
- (long long)realFileIdForId:(long long)arg1;
@property(readonly, nonatomic) long long realUnitId;
- (id)importer;
- (void)addFile:(id)arg1;
- (id)initWithPath:(id)arg1 modified:(id)arg2;

@end