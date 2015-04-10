//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICMultipartImageRepSlotComponent : NSObject <NSCopying, NSCoding, IBICPseudoXMLGeneration>
{
    NSString *_title;
    NSString *_identifier;
    NSString *_fileNameComponent;
    double _displayOrder;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4;
+ (id)contentsJSONKey;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *fileNameComponent; // @synthesize fileNameComponent=_fileNameComponent;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibic_pseudoXMLWithIndent:(unsigned long long)arg1;
- (void)ibic_appendAdditionalPseudoXMLAttrbutes:(id)arg1;
- (id)ibic_pseudoXML;
- (long long)compareDisplayOrder:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSchemaImageRepIDComponent:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end