//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGViewSurfaceNavigableItem : IDEKeyDrivenNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
}

@property(retain, nonatomic) DBGViewDebuggerAdditionUIController *viewDebuggingUIController; // @synthesize viewDebuggingUIController=_viewDebuggingUIController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)childRepresentedObjects;
- (void)recursivelyInvalidateChildItems;
- (void)invalidateChildItems;
- (BOOL)isLeaf;

@end