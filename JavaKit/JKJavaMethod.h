//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface JKJavaMethod : JKJavaMember
{
    JKJavaType *_returnType;
    NSArray *_argumentTypes;
}

+ (BOOL)_parseMethodSignature:(id)arg1 methodReturnType:(id *)arg2 methodArguments:(id *)arg3;
+ (BOOL)parseMethodSignature:(id)arg1 methodReturnType:(id *)arg2 methodArguments:(id *)arg3;
- (id)shortDescription;
- (id)description;
- (id)exceptions;
- (BOOL)isNative;
- (BOOL)isSynchronized;
- (BOOL)isAbstract;
- (id)arguments;
- (id)argumentTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfArguments;
- (id)returnType;
- (void)dealloc;
- (id)initWithName:(id)arg1 signature:(id)arg2 accessMask:(unsigned long long)arg3 attributes:(id)arg4;

@end