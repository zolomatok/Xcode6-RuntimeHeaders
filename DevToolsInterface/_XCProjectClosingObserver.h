//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _XCProjectClosingObserver : NSObject
{
    BOOL _projectDidClose;
}

+ (id)observerForProject:(id)arg1;
- (BOOL)projectDidClose;
- (void)_projectDidClose:(id)arg1;
- (void)dealloc;
- (id)initWithProject:(id)arg1;

@end