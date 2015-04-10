//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUSharedInferiorSessionUIState : GPUSharedUIState
{
    GPUInferiorSession *_inferiorSession;
    NSMutableDictionary *_textStorageDict;
    NSMutableDictionary *_resourceAttributesDict;
    DVTObservingToken *_traceSessionObservation;
    BOOL _displayedOnceInNavigator;
}

@property(nonatomic) BOOL displayedOnceInNavigator; // @synthesize displayedOnceInNavigator=_displayedOnceInNavigator;
- (void).cxx_destruct;
- (id)attributesForResourceWithID:(unsigned int)arg1 type:(unsigned int)arg2 containerID:(unsigned long long)arg3;
- (BOOL)programHasBeenEdited:(id)arg1;
- (id)textStorageForProgram:(unsigned int)arg1 shaderType:(unsigned int)arg2 sharegroup:(unsigned long long)arg3;
- (id)createTextStorageForProgram:(unsigned int)arg1 shaderType:(unsigned int)arg2 source:(id)arg3 sharegroup:(unsigned long long)arg4;
- (id)rootItem;
- (void)primitiveInvalidate;
- (id)initWithInferiorSession:(id)arg1;
- (void)_createObservers;

@end