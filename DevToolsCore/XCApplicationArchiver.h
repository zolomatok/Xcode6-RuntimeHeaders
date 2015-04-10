//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCApplicationArchiver <NSObject>
- (_Bool)archiveApplicationAtURL:(NSURL *)arg1 error:(id *)arg2;
- (id)initWithExtension:(DTExtension *)arg1;

@optional
@property(readonly, copy) NSArray *actionNames;
- (void)performAction:(unsigned long long)arg1 onBuild:(XCArchivedApplicationBuild *)arg2 onQueue:(NSOperationQueue *)arg3 withProgressCallback:(void (^)(double, NSString *))arg4;
@end