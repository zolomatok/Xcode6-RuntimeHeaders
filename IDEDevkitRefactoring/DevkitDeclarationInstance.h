//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DevkitDeclarationInstance : NSObject
{
    DevkitLocation *_nameLoc;
    DevkitDeclSet *_declSet;
    BOOL _isDefinition;
    BOOL _isSynthesized;
}

@property BOOL isSynthesized; // @synthesize isSynthesized=_isSynthesized;
- (void).cxx_destruct;
- (long long)compareLocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setIsDefinition;
- (BOOL)isDefinition;
- (id)declSet;
- (id)declNameLocation;
- (void)setDeclNameLocation:(id)arg1;
- (void)cleanup;
- (id)initWithLocation:(id)arg1 declSet:(id)arg2;

@end