//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBLayoutConstraintConstantEditingController : IBLayoutConstraintPropertyEditingController
{
    NSMenu *_constantMenu;
}

- (void).cxx_destruct;
- (void)decrementValue;
- (void)incrementValue;
- (void)syncUIFromModel;
- (void)syncModelFromUI;
- (void)_applyConstantUsingBlock:(CDUnknownBlockType)arg1;
- (void)didSelectUseCurrentCanvasValue:(id)arg1;
- (void)didSelectUseStandardValue:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)populateMenu:(id)arg1;
- (void)populateObservingTokens:(id)arg1;

@end