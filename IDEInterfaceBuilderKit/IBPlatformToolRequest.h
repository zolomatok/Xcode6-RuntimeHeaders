//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBPlatformToolRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSString *_requestID;
    id _requestData;
    id _resultData;
}

@property(retain) id resultData; // @synthesize resultData=_resultData;
@property(readonly) id requestData; // @synthesize requestData=_requestData;
@property(readonly, copy) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)runCompletionBlock;
- (id)initWithRequestID:(id)arg1 data:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end