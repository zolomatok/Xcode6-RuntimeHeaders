//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEHexEditorNavigable : NSObject
{
    CDStruct_91ee6ea3 _range;
    IDEHexEditorDocument *_document;
}

@property(retain) IDEHexEditorDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (id)navigableItem_fileReference;
- (id)navigableItem_documentType;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)navigableItem_contentDocumentLocation;
- (void)setRange:(CDStruct_91ee6ea3)arg1;
- (CDStruct_91ee6ea3)range;

@end