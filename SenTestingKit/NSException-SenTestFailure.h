//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSException (SenTestFailure)
+ (id)failureInRaise:(id)arg1 inFile:(id)arg2 atLine:(int)arg3 withDescription:(id)arg4;
+ (id)failureInRaise:(id)arg1 exception:(id)arg2 inFile:(id)arg3 atLine:(int)arg4 withDescription:(id)arg5;
+ (id)failureInEqualityBetweenValue:(id)arg1 andValue:(id)arg2 withAccuracy:(id)arg3 inFile:(id)arg4 atLine:(int)arg5 withDescription:(id)arg6;
+ (id)failureInEqualityBetweenObject:(id)arg1 andObject:(id)arg2 inFile:(id)arg3 atLine:(int)arg4 withDescription:(id)arg5;
+ (id)failureInCondition:(id)arg1 isTrue:(BOOL)arg2 inFile:(id)arg3 atLine:(int)arg4 withDescription:(id)arg5;
+ (id)failureInFile:(id)arg1 atLine:(int)arg2 withDescription:(id)arg3;
- (id)lineNumber;
- (id)filePathInProject;
- (id)pathForFilename:(id)arg1;
- (id)currentDirectoryPath;
- (id)ignoredSubdirectories;
- (id)filename;
@end