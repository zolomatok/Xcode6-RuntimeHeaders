//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEBatchFindActivityReporter : IDEActivityReporter
{
    DVTMapTable *_queryToObservers;
    id _queryCreationObserer;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_observerQuery:(id)arg1 inWorkspace:(id)arg2;
- (id)_patternAttributes;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end