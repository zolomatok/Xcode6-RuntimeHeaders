//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDPMEntityScriptingWrapper : IDEScriptingWrapper
{
}

- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)relationships;
- (id)fetchedProperties;
- (id)fetchRequests;
- (id)attributes;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setObjectClass:(id)arg1;
- (id)objectClass;
- (id)name;
- (void)setAbstract:(BOOL)arg1;
- (BOOL)abstract;

@end