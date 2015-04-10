//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocSearchResult : NSObject
{
    DSANode *_searchResultNode;
    DSATextSearchResult *_textResult;
    DSMQuery *_searchQuery;
    NSURL *_overrideURL;
}

+ (id)searchResultForTextResult:(id)arg1 overrideURL:(id)arg2 fromQuery:(id)arg3;
+ (id)searchResultForTextResult:(id)arg1 fromQuery:(id)arg2;
+ (id)searchResultForNode:(id)arg1 fromQuery:(id)arg2;
@property(copy) NSURL *overrideURL; // @synthesize overrideURL=_overrideURL;
@property(retain) DSMQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain) DSATextSearchResult *textResult; // @synthesize textResult=_textResult;
@property(retain) DSANode *searchResultNode; // @synthesize searchResultNode=_searchResultNode;
- (void).cxx_destruct;
- (id)childItems;
- (id)description;
@property(readonly, copy) NSURL *URL;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSArray *children;

@end