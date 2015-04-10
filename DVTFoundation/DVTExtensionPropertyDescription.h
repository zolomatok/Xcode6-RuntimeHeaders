//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTExtensionPropertyDescription : NSObject <DVTPropertyListEncoding>
{
    NSString *_name;
    BOOL _isOptional;
}

@property(getter=isOptional) BOOL optional; // @synthesize optional=_isOptional;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeIntoPropertyList:(id)arg1;
- (void)awakeWithPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithName:(id)arg1 isOptional:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end