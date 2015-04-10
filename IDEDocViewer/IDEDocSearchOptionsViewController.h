//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocSearchOptionsViewController : DVTViewController
{
    NSButtonCell *_automaticOption;
    NSButtonCell *_allOption;
    NSButtonCell *_iOSOption;
    NSButtonCell *_OSXOption;
    NSMatrix *_optionsMatrix;
}

+ (BOOL)useOSXSDKs;
+ (BOOL)useiOSSDKs;
+ (BOOL)useAllSDKs;
+ (BOOL)useSDKsForActiveWorkspace;
+ (void)initialize;
@property __weak NSMatrix *optionsMatrix; // @synthesize optionsMatrix=_optionsMatrix;
@property __weak NSButtonCell *OSXOption; // @synthesize OSXOption=_OSXOption;
@property __weak NSButtonCell *iOSOption; // @synthesize iOSOption=_iOSOption;
@property __weak NSButtonCell *allOption; // @synthesize allOption=_allOption;
@property __weak NSButtonCell *automaticOption; // @synthesize automaticOption=_automaticOption;
- (void).cxx_destruct;
- (void)optionChanged:(id)arg1;
- (void)refresh;
- (void)viewDidInstall;

@end