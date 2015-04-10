//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIIntegrationSummaryInflightViewController : DVTViewController <NSTableViewDelegate, NSTableViewDataSource, XCSUIIntegrationSteppedProgressViewLabelProvider>
{
    XCSIntegration *_integration;
    NSTextField *_progressMessageField;
    NSProgressIndicator *_progressBar;
    XCSUIIntegrationSteppedProgressView *_progressView;
    NSButton *_cancelButton;
    long long _currentStep;
    double _stepPartialProgress;
    NSString *_lastKnownAdvisoryStatus;
}

@property(retain) NSString *lastKnownAdvisoryStatus; // @synthesize lastKnownAdvisoryStatus=_lastKnownAdvisoryStatus;
@property double stepPartialProgress; // @synthesize stepPartialProgress=_stepPartialProgress;
@property long long currentStep; // @synthesize currentStep=_currentStep;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak XCSUIIntegrationSteppedProgressView *progressView; // @synthesize progressView=_progressView;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSTextField *progressMessageField; // @synthesize progressMessageField=_progressMessageField;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)cancelIntegration:(id)arg1;
- (id)informativeStringForSteppedProgressView:(id)arg1 integrationStep:(long long)arg2;
- (id)labelForSteppedProgressView:(id)arg1 integrationStep:(long long)arg2;
- (void)updateProgressBar;
@property(readonly) double progressBarValue;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end