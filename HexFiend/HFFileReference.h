//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HFFileReference : NSObject
{
    int fileDescriptor;
    int device;
    unsigned long long fileLength;
    unsigned long long inode;
    BOOL isWritable;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)setLength:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)length;
- (void)dealloc;
- (void)finalize;
- (void)close;
- (int)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)readBytes:(char *)arg1 length:(unsigned long long)arg2 from:(unsigned long long)arg3;
- (id)initWritableWithPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWritableWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)sharedInitWithPath:(id)arg1 error:(id *)arg2;

@end