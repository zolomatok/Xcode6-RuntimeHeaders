//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEIndexNewFileBase
- (IDEIndexNewSymbol *)newSymbolWithName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 role:(int)arg3 language:(DVTSourceCodeLanguage *)arg4 resolution:(NSString *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(NSString *)arg8 receiver:(NSString *)arg9 completionString:(void *)arg10 container:(IDEIndexNewSymbol *)arg11;
- (void)addSymbolWithName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 role:(int)arg3 language:(DVTSourceCodeLanguage *)arg4 resolution:(NSString *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(NSString *)arg8 receiver:(NSString *)arg9 completionString:(void *)arg10 container:(IDEIndexNewSymbol *)arg11;
@end