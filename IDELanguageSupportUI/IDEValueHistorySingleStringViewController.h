//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEValueHistorySingleStringViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    IDEValueHistorySingleValueTextField *_textField;
}

+ (id)displayableReflectionTags;
@property(retain) IDEValueHistorySingleValueTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (void)setResultDisplayDate:(id)arg1;
- (void)viewDidLayout;
- (id)toolTip;
- (id)alternateIconImage;
- (id)iconImage;
- (double)preferredVerticalInset;
- (double)preferredHorizontalInset;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (void)viewDidLoad;

@end