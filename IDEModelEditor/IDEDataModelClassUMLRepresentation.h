//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDataModelClassUMLRepresentation : NSObject
{
    IDEIndexClassSymbol *_classSymbol;
    NSArray *_ownedAttributes;
    NSArray *_ownedOperations;
}

@property(readonly) IDEIndexClassSymbol *classSymbol; // @synthesize classSymbol=_classSymbol;
@property(readonly) NSArray *ownedOperations; // @synthesize ownedOperations=_ownedOperations;
@property(readonly) NSArray *ownedAttributes; // @synthesize ownedAttributes=_ownedAttributes;
- (void).cxx_destruct;
@property(readonly) IDEDataModelClassUMLRepresentation *parentClass;
@property(readonly) NSString *name;
- (id)initWithClassSymbol:(id)arg1;
- (id)_generateOwnedAttributes;
- (id)_generateOwnedOperations;

@end