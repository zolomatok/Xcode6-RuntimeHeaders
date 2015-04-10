//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECodeSnippetCompletionScopeRowController : DVTViewController
{
    NSPopUpButton *_scopesPopupButton;
    NSButton *_addButton;
    NSButton *_deleteButton;
    IDECodeSnippetLibraryDetailEditorController *_detailController;
    NSString *_completionScope;
}

@property(retain) IDECodeSnippetLibraryDetailEditorController *detailController; // @synthesize detailController=_detailController;
@property(copy, nonatomic) NSString *completionScope; // @synthesize completionScope=_completionScope;
- (void).cxx_destruct;
- (void)removeScope:(id)arg1;
- (void)addNewScope:(id)arg1;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
@property(readonly) NSView *lastKeyView;
@property(readonly) NSView *firstKeyView;
- (void)primitiveInvalidate;
- (void)_setupButton:(id)arg1 usingImage:(id)arg2;
- (void)awakeFromNib;
- (id)initWithCompletionScope:(id)arg1 detailController:(id)arg2;

@end