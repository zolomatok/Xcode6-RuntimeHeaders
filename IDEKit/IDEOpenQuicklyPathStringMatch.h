//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEOpenQuicklyPathStringMatch : IDEOpenQuicklyMatch
{
    NSString *_path;
    DVTDocumentLocation *_linelessDocumentLocation;
    DVTLocale *_localization;
    BOOL _inFramework;
}

@property(retain) DVTLocale *localization; // @synthesize localization=_localization;
- (void).cxx_destruct;
- (BOOL)inFramework;
- (id)image;
- (id)pathString;
- (id)locationGivenMatchContext:(id)arg1;
- (BOOL)isEqualToOpenQuicklyMatch:(id)arg1;
- (BOOL)isEqualToOpenQuicklyPathStringMatch:(id)arg1;
- (id)initWithMatchedCandidate:(id)arg1 url:(id)arg2 provider:(id)arg3;

@end