//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStoryboardGlobalEntryPointIndicator : NSObject <IBStoryboardEntryPointIndicator, NSCoding>
{
    IBTargetRuntime *_targetRuntime;
}

+ (id)ibDefaultImageForInstance:(id)arg1;
@property(retain, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (id)init;
- (id)ibStoryboardIndicatedEntryPointKeyPath;
- (id)ibIndicatedEntryPointInStoryboard:(id)arg1;
- (id)ibTypeNameForDefaultLabel;
- (void)ibTransferToObject:(id)arg1 fromObject:(id)arg2 inDocument:(id)arg3;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (id)ibTopLevelObjectToSelectInCanvasForDocument:(id)arg1;
- (BOOL)ibTopLevelSceneObjectWantsInclusionInCompiledStoryboard;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibStoryboardEntryPointIndicatorCanvasTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end