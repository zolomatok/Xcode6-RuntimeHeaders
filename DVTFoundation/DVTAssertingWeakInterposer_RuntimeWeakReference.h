//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTAssertingWeakInterposer_RuntimeWeakReference : DVTWeakInterposer_RuntimeWeakReference
{
    Class representedObjectClass;
    void *representedObjectAddress;
}

@property void *representedObjectAddress; // @synthesize representedObjectAddress;
@property Class representedObjectClass; // @synthesize representedObjectClass;
- (void)_customSetup;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;

@end