//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICMultipartImageRepSlotDetailAreaKey : NSObject <NSCopying, IBICPseudoXMLGeneration, NSCoding>
{
    Class _slotClass;
    id <IBICDetailAreaKeySection> _section;
    id <IBICDetailAreaKeyGroup> _group;
    id <IBICDetailAreaKeySubgroup> _subgroup;
}

+ (id)keyWithSlotClass:(Class)arg1 section:(id)arg2 group:(id)arg3 subgroup:(id)arg4;
+ (id)keyWithSlotClass:(Class)arg1 sectionComponents:(id)arg2 groupComponents:(id)arg3 subgroupComponents:(id)arg4;
@property(readonly) id <IBICDetailAreaKeySubgroup> subgroup; // @synthesize subgroup=_subgroup;
@property(readonly) id <IBICDetailAreaKeyGroup> group; // @synthesize group=_group;
@property(readonly) id <IBICDetailAreaKeySection> section; // @synthesize section=_section;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void).cxx_destruct;
- (long long)ibic_compareForPseudoXML:(id)arg1;
- (id)ibic_pseudoXMLWithIndent:(unsigned long long)arg1;
- (id)ibic_pseudoXML;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDetailAreaKey:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlotClass:(Class)arg1 section:(id)arg2 group:(id)arg3 subgroup:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end