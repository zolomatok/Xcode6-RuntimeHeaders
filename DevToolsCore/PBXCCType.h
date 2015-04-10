//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXCCType : NSObject <NSCopying>
{
    PBXProjectIndex *_projectIndex;
    PBXSymbol *_symbol;
    NSMutableArray *_protocols;
    long long _indirection;
    BOOL _isId;
    BOOL _isClass;
}

+ (id)ccTypeWithIndex:(id)arg1;
+ (id)ccTypeWithIndexedSymbol:(id)arg1;
+ (id)ccTypeWithResolvedTypeOfSymbol:(id)arg1;
+ (id)ccTypeWithMemberContainerSymbol:(id)arg1;
- (void)removeIndirection;
- (void)addIndirection;
- (id)typeName;
- (id)resolvedType;
- (id)messageTypeWithName:(id)arg1;
- (id)messageSymbolWithName:(id)arg1;
- (id)memberTypeWithName:(id)arg1;
- (id)memberSymbolWithName:(id)arg1;
- (id)cppMembersIncludingInstance:(BOOL)arg1;
- (id)allFields;
- (id)objCMethods;
- (id)_objCInstanceMethods;
- (id)protocols;
- (void)addProtocol:(id)arg1;
- (id)indexedSymbol;
- (void)setIndexedSymbol:(id)arg1;
- (void)setIsClass:(BOOL)arg1;
- (BOOL)isClass;
- (void)setIsId;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProjectIndex:(id)arg1;

@end