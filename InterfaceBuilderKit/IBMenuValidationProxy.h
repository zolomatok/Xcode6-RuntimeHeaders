//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMenuValidationProxy : NSResponder <NSUserInterfaceValidations>
{
    NSMutableArray *validators;
}

- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)validatedTargetForUserIterfaceItem:(id)arg1;
- (id)targetForSelector:(SEL)arg1;
- (void)removeValidator:(id)arg1;
- (void)addValidator:(id)arg1;
- (void)insertValidator:(id)arg1 atIndex:(long long)arg2;
- (void)setValidators:(id)arg1;
- (long long)numberOfValidators;
- (id)validators;
- (void)dealloc;
- (id)init;

@end