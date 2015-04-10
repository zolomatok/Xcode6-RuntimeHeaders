//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBPathControlInspector : IBBoundControlInspector
{
    NSPopUpButton *pathStylePopUp;
    NSTextField *pathField;
    NSTableView *allowedTypesTableView;
    NSButton *addTypeButton;
    NSButton *removeTypeButton;
    IBColorPickerPopUpButton *backgroundColorPicker;
}

- (void)removeRow:(id)arg1;
- (void)addRow:(id)arg1;
- (void)refresh;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)itemsAreEditable;
- (id)pathCell;
- (void)takePathStyle:(id)arg1;
- (id)affectedKeyPathsOfInspectedObjectsForView:(id)arg1;
- (void)awakeFromNib;

@end