//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXLSDebuggingPlugin : PBXLSPlugin
{
}

- (void)registerDebuggableFileTypes;
- (BOOL)isFileTypeDebuggable:(id)arg1;
- (id)typeControllerModule;
- (BOOL)hasTypeControllerModule;
- (id)breakpointsModule;
- (BOOL)hasBreakpointsModule;
- (id)sharedLibraryModule;
- (BOOL)hasSharedLibraryModule;
- (id)init;

@end