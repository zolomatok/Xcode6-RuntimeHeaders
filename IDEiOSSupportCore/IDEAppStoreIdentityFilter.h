//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAppStoreIdentityFilter : IDEArchiveIdentityFilter
{
    NSSet *_types;
    CDUnknownBlockType identityComparator;
    CDUnknownBlockType filterBlock;
}

@property(copy) CDUnknownBlockType filterBlock; // @synthesize filterBlock;
@property(copy) CDUnknownBlockType identityComparator; // @synthesize identityComparator;
- (void).cxx_destruct;
- (_Bool)shouldIncludeIdentity:(id)arg1;
- (id)allowedCertificateTypes;
- (id)initWithExtension:(id)arg1;

@end