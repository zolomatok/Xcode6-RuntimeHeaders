//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCPropertySimpleMacroExpansionValue : XCPropertyValue
{
    XCPropertyValue *_macroNameValue;
}

- (id)propertyValueDebugDescription;
- (id)description;
- (void)assertInternalConsistency;
- (id)evaluateAsStringInContext:(id)arg1 withNestingState:(const void *)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMacroNameValue:(id)arg1;

@end