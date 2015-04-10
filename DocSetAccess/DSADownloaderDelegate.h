//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DSADownloaderDelegate
- (void)downloaderDidFinish:(DSADownloader *)arg1;
- (void)downloader:(DSADownloader *)arg1 didFailWithError:(NSError *)arg2;

@optional
- (void)downloader:(DSADownloader *)arg1 willDownloadFile:(NSString *)arg2 ofSize:(long long)arg3;
- (NSURLCredential *)downloader:(DSADownloader *)arg1 needsCredentialForChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)downloader:(DSADownloader *)arg1 didMakeProgress:(float)arg2;
@end