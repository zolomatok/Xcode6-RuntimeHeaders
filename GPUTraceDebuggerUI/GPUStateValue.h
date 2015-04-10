//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUStateValue : NSObject <IDEDataValue>
{
    NSString *_name;
    NSString *_value;
    BOOL _valueHasChanged;
    NSString *_logicalValue;
    BOOL _logicalValueHasChanged;
    NSString *_type;
    BOOL _typeHasChanged;
    NSString *_itemDescription;
    BOOL itemDescriptionHasChanged;
    NSMutableArray *_childValues;
    BOOL _itemDescriptionHasChanged;
    NSString *_itemSummary;
}

@property(copy) NSString *itemSummary; // @synthesize itemSummary=_itemSummary;
@property(retain) NSArray *childValues; // @synthesize childValues=_childValues;
@property BOOL itemDescriptionHasChanged; // @synthesize itemDescriptionHasChanged=_itemDescriptionHasChanged;
@property(copy) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property BOOL typeHasChanged; // @synthesize typeHasChanged=_typeHasChanged;
@property(copy) NSString *type; // @synthesize type=_type;
@property(readonly) BOOL logicalValueHasChanged; // @synthesize logicalValueHasChanged=_logicalValueHasChanged;
@property(copy) NSString *logicalValue; // @synthesize logicalValue=_logicalValue;
@property BOOL valueHasChanged; // @synthesize valueHasChanged=_valueHasChanged;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)formattedSummary;
- (long long)compareName:(id)arg1;
- (id)_contentDescription;
- (id)_contentDescriptionWithChildValuesAtLevel:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isMemoryFault;
@property(readonly) BOOL childValuesCountValid;
@property(readonly) BOOL hasChildValues;
@property(readonly) BOOL inScope;
@property(readonly) BOOL isValueEditable;
@property(readonly, copy) NSString *primitiveLogicalValue;
- (void)replaceChildValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (void)addChildValues:(id)arg1;
- (void)addChildValue:(id)arg1;
- (void)setStateValue:(id)arg1 withName:(id)arg2 withType:(id)arg3 withItemDescription:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end