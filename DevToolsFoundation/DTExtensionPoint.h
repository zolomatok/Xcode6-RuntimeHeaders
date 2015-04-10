//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTExtensionPoint : NSObject
{
    id _extensionPointData;
    DTPlugInManager *_plugInManager;
    void *reserved[2];
}

- (id)childExtensionPoints;
- (id)parentExtensionPoint;
- (id)plugIn;
- (id)sharedExtensions;
- (id)extensionSchema;
- (id)extensionProtocolName;
- (id)extensionClassName;
- (id)bundle;
- (id)name;
- (id)version;
- (id)identifier;
- (id)_extensionPointDescription;
- (void)dealloc;
- (id)initWithExtensionPointDescription:(id)arg1 plugInManager:(id)arg2;

@end