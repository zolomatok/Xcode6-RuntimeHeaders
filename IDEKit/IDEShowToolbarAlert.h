//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEShowToolbarAlert : IDEAlert
{
    id _observationToken;
    int _action;
}

@property(nonatomic) int action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)performAction:(int)arg1 onWindow:(id)arg2 afterDelay:(double)arg3;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)valuesForProperty:(id)arg1;
- (id)actions;

@end