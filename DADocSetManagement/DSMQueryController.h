//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DSMQueryController : NSObject
{
}

+ (id)tokenQueryDictionaryFromQuery:(id)arg1;
+ (id)sharedQueryController;
- (void)cancelQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (id)runSynchronousTitleQuery:(id)arg1;
- (id)managedObjectContextForDocSet:(id)arg1;
- (void)runAsynchronousFullTextQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (id)runSynchronousFullTextQuery:(id)arg1 maximumRelevance:(double *)arg2;
- (void)runAsynchronousAPIQuery:(id)arg1 delegate:(id)arg2 contextInfo:(void *)arg3;
- (id)runSynchronousAPIQuery:(id)arg1 returnManagedObjects:(BOOL)arg2;

@end