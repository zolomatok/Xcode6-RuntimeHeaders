//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXIndexEntry : NSObject
{
    PBXProjectIndex *_projectIndex;
    union _pbxsymbollocation _location;
    NSString *_sourceFile;
}

- (id)sourceFile;
- (unsigned long long)lineNumber;
- (unsigned int)rawLocation;
- (union _pbxsymbollocation)location;
- (id)project;
- (id)projectIndex;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithProjectIndex:(id)arg1 location:(union _pbxsymbollocation)arg2;

@end