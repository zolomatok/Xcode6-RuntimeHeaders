//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYMTLFunction : DYMTLResourceObject
{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _libraryID;
}

@property(readonly, nonatomic) unsigned long long libraryID; // @synthesize libraryID=_libraryID;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

@end