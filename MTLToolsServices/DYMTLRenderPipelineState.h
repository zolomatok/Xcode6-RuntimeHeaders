//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYMTLRenderPipelineState : DYMTLResourceObject
{
    unsigned long long _vertexFunction;
    unsigned long long _fragmentFunction;
}

@property(readonly, nonatomic) unsigned long long fragmentFunction; // @synthesize fragmentFunction=_fragmentFunction;
@property(readonly, nonatomic) unsigned long long vertexFunction; // @synthesize vertexFunction=_vertexFunction;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

@end