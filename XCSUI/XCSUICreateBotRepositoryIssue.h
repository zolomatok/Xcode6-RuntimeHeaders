//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUICreateBotRepositoryIssue : NSObject
{
    BOOL _selected;
    NSError *_issue;
    DVTSourceControlRemoteRepository *_repository;
    NSString *_workingCopyLocation;
    unsigned long long _resolution;
}

@property unsigned long long resolution; // @synthesize resolution=_resolution;
@property BOOL selected; // @synthesize selected=_selected;
@property(readonly) NSString *workingCopyLocation; // @synthesize workingCopyLocation=_workingCopyLocation;
@property(readonly) __weak DVTSourceControlRemoteRepository *repository; // @synthesize repository=_repository;
@property(readonly) NSError *issue; // @synthesize issue=_issue;
- (void).cxx_destruct;
@property(readonly) NSString *issueDisplayString;
@property(readonly) NSString *repositoryDisplayString;
- (id)initWithRepository:(id)arg1 workingCopyLocation:(id)arg2 issue:(id)arg3;

@end