//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEAssetCatalog : NSObject
{
    NSMutableDictionary *_settings;
}

- (void).cxx_destruct;
@property BOOL usePVRTCIfAvailable;
@property BOOL interleaveGeometrySources;
@property BOOL forceYUp;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;

@end