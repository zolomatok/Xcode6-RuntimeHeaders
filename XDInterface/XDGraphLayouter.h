//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDGraphLayouter : NSObject <XDComponentIdentifying>
{
    NSString *_identifier;
    NSMutableArray *_graphNodes;
    NSMutableArray *_graphEdges;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void)layoutGraph;
- (void)endLayouting;
- (void)processLayouting;
- (void)beginLayouting;
- (void)removeAllGraphEdges;
- (void)removeGraphEdgeAtIndex:(long long)arg1;
- (void)removeGraphEdge:(id)arg1;
- (void)insertGraphEdge:(id)arg1 atIndex:(long long)arg2;
- (void)addGraphEdge:(id)arg1;
- (id)graphEdges;
- (void)removeAllGraphNodes;
- (void)removeGraphNodeAtIndex:(long long)arg1;
- (void)removeGraphNode:(id)arg1;
- (void)insertGraphNode:(id)arg1 atIndex:(long long)arg2;
- (void)addGraphNode:(id)arg1;
- (id)graphNodes;
- (SEL)action;
- (id)target;
- (unsigned long long)keyEquivalentModifierMask;
- (id)keyEquivalent;
- (id)label;
- (id)identifier;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end