//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCBuildLogTargetSection : XCBuildLogSection
{
    id <XCBuildables> _buildable;
}

+ (Class)logRecorderClass;
- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (id)buildable;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 buildable:(id)arg2;
- (BOOL)isTargetSection;
- (BOOL)isTargetHeadingItem;

@end