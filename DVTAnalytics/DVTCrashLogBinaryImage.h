//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTCrashLogBinaryImage : NSObject
{
    DVTCrashLogParsedBinaryImage *_parsedBinaryImage;
    NSString *_rawText;
}

@property(readonly) NSString *rawText; // @synthesize rawText=_rawText;
- (void).cxx_destruct;
- (id)description;
@property(readonly) DVTCrashLogParsedBinaryImage *parsedBinaryImage; // @synthesize parsedBinaryImage=_parsedBinaryImage;
- (id)_binaryImageParsers;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithText:(id)arg1;

@end