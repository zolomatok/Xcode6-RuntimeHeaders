//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDebuggerExpression : NSObject
{
    NSString *_expressionString;
    NSString *_result;
}

@property(copy) NSString *result; // @synthesize result=_result;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (void).cxx_destruct;
- (void)resetResult;
- (BOOL)hasBeenEvaluated;
- (id)initWithExpressionString:(id)arg1;

@end