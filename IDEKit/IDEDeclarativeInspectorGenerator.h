//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDeclarativeInspectorGenerator : NSObject
{
}

+ (id)generateInspectorInterfaceFromFile:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorInterfaceFromXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorSectionFromXMLElement:(id)arg1 boundTo:(id)arg2 withTitle:(id)arg3 withSliverInsets:(BOOL)arg4;
+ (id)generateInspectorLayoutGroupFromXMLElement:(id)arg1 boundTo:(id)arg2 withSectionSliverInsets:(BOOL)arg3;
+ (id)_visibilityKeyPathsFromXMLElement:(id)arg1;
+ (id)generateInspectorLayoutGroupFromXMLElement:(id)arg1 boundTo:(id)arg2;
+ (void)enumerateTopLevelElements:(id)arg1 boundTo:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)topLevelXMLElementsInReverseOrder:(id)arg1;
+ (id)inspectorXMLElementsFromIncludeElement:(id)arg1 boundTo:(id)arg2;
+ (id)rootInspectorXMLElementFromIncludeElement:(id)arg1 boundTo:(id)arg2;
+ (id)parseInterfaceXMLDocumentFromFile:(id)arg1;
+ (id)sectionHeaderTitleItemWithTitle:(id)arg1;
+ (id)localizedStringForAttributeNamed:(id)arg1 inXMLElement:(id)arg2 fromInspectorController:(id)arg3;

@end