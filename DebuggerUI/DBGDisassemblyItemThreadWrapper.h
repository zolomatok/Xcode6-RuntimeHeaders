//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGDisassemblyItemThreadWrapper : NSObject <DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTObservingToken *_stackFramesObservingToken;
    BOOL _temporarilyCreatedForGeniusFinder;
    DBGThread *_thread;
    NSArray *_disassemblyItems;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(nonatomic) BOOL temporarilyCreatedForGeniusFinder; // @synthesize temporarilyCreatedForGeniusFinder=_temporarilyCreatedForGeniusFinder;
@property(copy, nonatomic) NSArray *disassemblyItems; // @synthesize disassemblyItems=_disassemblyItems;
@property(readonly) DBGThread *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)geniusDisassemblyItemForStackFrame:(id)arg1;
- (void)_handleStackFramesChanged;
- (id)initWithThread:(id)arg1 temporarilyCreatedForGeniusFinder:(BOOL)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end