//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlAuthenticationWindowController : NSWindowController
{
    NSTextField *messageTextField;
    NSTextField *infoTextField;
    NSTextField *usernameTextField;
    NSTextField *statusTextField;
    NSSecureTextField *passwordTextField;
    NSProgressIndicator *progressIndicator;
    NSButton *OKButton;
    IDESourceControlRepository *_repository;
    IDESourceControlCredentialsValidator *_validator;
    CDUnknownBlockType _completionBlock;
    NSTimer *_autodismissTimer;
    long long _count;
    BOOL _isCheckingPassword;
    NSString *_username;
    NSString *_password;
}

+ (id)keyPathsForValuesAffectingAddressContainsUser;
@property(retain) IDESourceControlRepository *repository; // @synthesize repository=_repository;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property BOOL isCheckingPassword; // @synthesize isCheckingPassword=_isCheckingPassword;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dontAsk:(id)arg1;
- (void)cancel:(id)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)ok:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)cancelAutodismiss;
- (void)autodismiss;
- (void)beginAutodismissCountdown;
- (void)startAutodismissTimer;
- (void)validateCredentialsWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL addressContainsUser;
- (void)presentWindow;
- (id)_openWindowTerminationDisablingReason;
- (void)presentAuthenticationWindowForRepository:(id)arg1;
- (id)windowNibName;

@end