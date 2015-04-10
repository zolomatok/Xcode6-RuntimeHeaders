//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEWorkspaceIntegrityIssueProvider : IDEIssueProvider
{
    id _modelObjectDidChangeObserver;
    DVTObservingToken *_referencedContainersObserverToken;
    DVTMapTable *_referencedContainersToIssueObserverTokensMapTable;
    DVTMapTable *_referencedContainersToProviderContextsMapTable;
    DVTObservingToken *_blueprintsObserverToken;
    DVTMapTable *_blueprintsToIssueObserverTokensMapTable;
    DVTMapTable *_blueprintsToProviderContextsMapTable;
}

+ (int)providerType;
+ (void)initialize;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)_blueprintsDidChange;
- (void)_referencedContainersDidChange;
- (id)_integrityIssuesForDataSource:(id)arg1;
- (id)_issueForMessage:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end