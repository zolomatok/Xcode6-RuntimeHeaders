//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGLLDBDataValue : DBGDataValue <DBGLLDBInvalidation>
{
    DBGLLDBDataValue *_parent;
    DBGLLDBDataType *_dbgStaticType;
    struct SBValue _lldbValueObject;
    struct SBValue _lldbValueObject_masked;
    struct SBValue _lldbValueObject_masked2;
    NSMutableArray *_childValues;
    BOOL _childValuesCountValid;
    NSString *_name_str;
    NSString *_value_str;
    NSString *_masked_value_str;
    NSString *_summary_str;
    NSString *_expr_path_str;
    int _lldbFormat;
    BOOL _value_has_changed;
    BOOL _uses_masked_value;
    BOOL _in_scope;
    BOOL _hasChildValues;
    BOOL _requested_children;
    BOOL _requestedSummary;
    BOOL _representsNilObjectiveCObject;
    BOOL _representsNullObjectPointer;
    BOOL _mightRespondToSelectors;
    NSArray *_classNameHierarchy;
    BOOL _markedForInvalidationFromTheSessionThread;
    BOOL _isDictionarySynthesizedParent;
    BOOL _shouldUsePlaceholderChildDataValues;
}

+ (id)_dataValueWithDisplayName:(id)arg1 tag:(unsigned long long)arg2;
+ (id)supportedDataValueFormats;
+ (int)dynamicValueType;
+ (id)_persistenceKeyForValueWithName:(id)arg1 inStackFrame:(id)arg2;
+ (int)_persistedLLDBFormatForValueName:(id)arg1 inStackFrame:(id)arg2;
+ (void)initialize;
@property(readonly) BOOL shouldUsePlaceholderChildDataValues; // @synthesize shouldUsePlaceholderChildDataValues=_shouldUsePlaceholderChildDataValues;
@property BOOL markedForInvalidationFromTheSessionThread; // @synthesize markedForInvalidationFromTheSessionThread=_markedForInvalidationFromTheSessionThread;
- (id)parent;
- (id)staticType;
@property BOOL childValuesCountValid; // @synthesize childValuesCountValid=_childValuesCountValid;
@property(retain, nonatomic) NSArray *childValues; // @synthesize childValues=_childValues;
- (BOOL)hasChildValues;
- (BOOL)inScope;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary_str;
- (BOOL)valueHasChanged;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_dataValueFormatForLLDBFormat:(int)arg1;
- (void)_persistLLDBFormat:(id)arg1;
- (id)_classNameHierarchyStartingWithType:(struct SBType)arg1;
- (void)classNameHierarchy:(CDUnknownBlockType)arg1;
- (void)ensureAllDisplayablePropertiesAreLoaded:(CDUnknownBlockType)arg1;
- (BOOL)mightRespondToSelectors;
- (BOOL)_calculateRepresentsNullObjectPointer;
- (BOOL)representsNullObjectPointer;
- (BOOL)_calculateRepresentsNilObjectiveCObject;
- (BOOL)representsNilObjectiveCObject;
- (void)watch;
- (id)realName;
- (BOOL)wantsToProvideSummary;
- (id)_createNSStringForCString:(const char *)arg1;
@property(readonly, copy) NSString *description;
- (id)_lldbValueObjectDescription;
- (id)_lldbValueDescription;
- (id)lldbDescription;
- (void)setFormat:(id)arg1;
- (id)format;
- (const char *)valueAsCString;
- (id)primitiveChildValues;
- (void)_childValueDidFault:(id)arg1 childIndex:(unsigned long long)arg2;
- (void)_setChildValuesToArrayOfPlaceholders;
- (void)_setChildValuesToArrayOfActualChildren;
- (void)_fetchChildValuesFromLLDBOnSessionThreadIfNecessary;
- (void)childWithName:(id)arg1 foundChild:(CDUnknownBlockType)arg2;
- (id)_calculateSummaryForDictionaryElement;
- (id)_calculateSummary;
- (void)_fetchSummaryFromLLDBOnSessionThreadIfNecessary;
- (id)value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name_str;
- (BOOL)dynamicTypeHasChanged;
- (BOOL)summaryHasChanged;
- (void)setValue:(id)arg1;
- (id)blockStartAddress;
- (id)expressionPath;
- (void)_addSessionThreadAction:(CDUnknownBlockType)arg1;
- (id)_weakSelf;
- (id)_lldbSession;
- (BOOL)_isSessionThread;
- (void)_assertNotMarkedForInvalidationAndOnSessionThread;
@property(readonly) DBGLLDBStackFrame *lldbStackFrame;
- (id)initWithLLDBValueObject:(struct SBValue)arg1 forStackFrame:(id)arg2 withParent:(id)arg3 updateSummary:(BOOL)arg4;
- (id)initWithLLDBValueObject:(struct SBValue)arg1 forStackFrame:(id)arg2 withParent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end