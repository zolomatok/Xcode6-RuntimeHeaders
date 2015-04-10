//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDiagnosticFixItItem : NSObject
{
    IDEDiagnosticActivityLogMessage *_diagnosticItem;
    NSString *_fixItString;
    DVTTextDocumentLocation *_replacementLocation;
}

@property(readonly) DVTTextDocumentLocation *replacementLocation; // @synthesize replacementLocation=_replacementLocation;
@property(readonly) NSString *fixItString; // @synthesize fixItString=_fixItString;
@property(nonatomic) __weak IDEDiagnosticActivityLogMessage *diagnosticItem; // @synthesize diagnosticItem=_diagnosticItem;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDiagnosticFixItItem:(id)arg1;
- (id)init;
- (id)initWithFixItString:(id)arg1 replacementLocation:(id)arg2;

@end