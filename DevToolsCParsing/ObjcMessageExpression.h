//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ObjcMessageExpression : Expression
{
    NSString *_messageName;
    NSMutableArray *_keywordLocations;
    SourceLocation *_lbracket;
    SourceLocation *_rbracket;
}

- (id)prettyPrint;
- (id)overallLocation;
- (id)rightBracketLocation;
- (id)leftBracketLocation;
- (void)setRightBracketLoc:(id)arg1;
- (void)setLeftBracketLoc:(id)arg1;
- (id)keywordLocations;
- (id)messageName;
- (void)dealloc;
- (void)setMessageName:(id)arg1;
- (id)init;

@end