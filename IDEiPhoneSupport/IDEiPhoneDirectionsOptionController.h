//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEiPhoneDirectionsOptionController : IDELaunchActionOptionViewController
{
    NSPopUpButton *_directionsPopUpButton;
    IDEiPhoneDirectionsMenuController *_directionsMenuController;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateMenuSelection:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (id)_computeAbsolutePathForWorkspaceRelativePath:(id)arg1;
- (id)_computeIdentifierForFileReference:(id)arg1;

@end