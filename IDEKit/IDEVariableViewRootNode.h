//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEVariableViewRootNode : IDEVariablesViewNode
{
}

- (long long)numberOfChildren;
- (BOOL)childValuesCountValid;
- (BOOL)hasChildren;
- (id)name;
- (void)removeChildnode:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end