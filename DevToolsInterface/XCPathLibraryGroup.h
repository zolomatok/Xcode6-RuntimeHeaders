//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPathLibraryGroup : NSObject <XCLibraryGroupProtocol>
{
    NSArray *_libraries;
    NSString *_path;
    NSString *_displayName;
    NSArray *_linkerPaths;
}

@property(readonly) NSArray *linkerPaths; // @synthesize linkerPaths=_linkerPaths;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSString *path; // @synthesize path=_path;
- (id)librariesForType:(id)arg1;
- (id)objectfiles;
- (id)dylibs;
- (id)frameworks;
- (id)libraries;
- (void)setLibraries:(id)arg1;
- (int)libraryCount;
- (BOOL)isLinked;
- (void)dealloc;
- (id)initWithPath:(id)arg1 displayName:(id)arg2;
- (id)initWithPath:(id)arg1 displayName:(id)arg2 linkerPaths:(id)arg3;
- (BOOL)isLeaf;

@end