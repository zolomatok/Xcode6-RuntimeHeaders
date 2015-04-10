//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlOperationWindow : NSWindow
{
    NSImageView *_statusImageView;
    NSTextField *_statusTextView;
    NSProgressIndicator *_progressView;
    int _state;
    BOOL _showDeterminateProgress;
    double _progress;
    DVTBindingToken *_progressBindingToken;
    DVTBindingToken *_statusTextBindingToken;
    long long _onceToken;
    NSString *_statusText;
    IDESourceControlRepository *_repository;
    NSButton *_leftMostButton;
}

@property __weak NSButton *leftMostButton; // @synthesize leftMostButton=_leftMostButton;
@property(retain) IDESourceControlRepository *repository; // @synthesize repository=_repository;
@property(retain) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (void)close;
@property double progress;
@property BOOL showDeterminateProgress;
@property int statusState;
- (id)_stringForAuthenticationState:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (void)_setupStatusComponents;

@end