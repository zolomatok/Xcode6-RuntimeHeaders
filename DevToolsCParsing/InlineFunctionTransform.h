//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface InlineFunctionTransform : Transform
{
    NSMutableArray *_functionCallsToChange;
    BOOL _willBeDeletingFunction;
    BOOL _sawFunctionCalls;
    BOOL _sawAddrOf;
    BOOL _checkedFunctionBody;
    BOOL _changedFunctionBody;
    SourceLocation *_addrOfLocation;
    BOOL _returnTypeIsNull;
    BOOL _needsParams;
    BOOL _needsReturnTemp;
    unsigned long long _paramCount;
    unsigned long long *_usesPerParam;
    char *_paramIsModified;
}

- (BOOL)performFinal;
- (BOOL)performFirstFile;
- (void)inlineAtFunctionCall:(id)arg1 bodyLocation:(id)arg2 returnExpression:(id)arg3;
- (BOOL)checkPerFile;
- (BOOL)checkFinal;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;

@end