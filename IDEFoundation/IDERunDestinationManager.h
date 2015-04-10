//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDERunDestinationManager : NSObject
{
    NSMapTable *_runDestinationsByDeviceCache;
    NSMutableSet *_availableRunDestinations;
    DVTObservingToken *_deviceManagerObservation;
    IDERunDestination *_fallbackRunDestination;
}

+ (id)sharedRunDestinationManager;
+ (void)initialize;
@property(readonly) IDERunDestination *fallbackRunDestination; // @synthesize fallbackRunDestination=_fallbackRunDestination;
- (void).cxx_destruct;
- (id)genericDeploymentRunDestinationForRunDestination:(id)arg1 scheme:(id)arg2 schemeCommands:(id)arg3 executionEnvironment:(id)arg4;
- (id)deploymentRunDestinationForRunDestination:(id)arg1 scheme:(id)arg2 schemeCommands:(id)arg3 executionEnvironment:(id)arg4;
- (id)validRunDestinationsForBuildables:(id)arg1 executionEnvironment:(id)arg2;
- (id)validRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3;
- (id)validRunDestinationsForScheme:(id)arg1 executionEnvironment:(id)arg2;
- (id)visibleRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3;
- (id)visibleRunDestinationsForScheme:(id)arg1 executionEnvironment:(id)arg2;
- (id)_validRunDestinationsForScheme:(id)arg1 schemeCommands:(id)arg2 executionEnvironment:(id)arg3 forPresentation:(BOOL)arg4;
- (id)_validRunDestinationsForScheme:(id)arg1 executionEnvironment:(id)arg2 forPresentation:(BOOL)arg3;
- (id)defaultRunDestinationForScheme:(id)arg1 fromRunDestinations:(id)arg2 preferGenericDestination:(BOOL)arg3 supportingSDK:(id)arg4;
- (id)defaultRunDestinationForScheme:(id)arg1 fromRunDestinations:(id)arg2 preferGenericDestination:(BOOL)arg3;
- (id)runDestinationWithIneligibleTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3 deviceIneligibilityError:(id)arg4;
- (id)runDestinationWithTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3;
- (id)runDestinationForDeviceType:(id)arg1 options:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
- (void)_uncacheRunDestinationsForDevice:(id)arg1;
- (id)_cachedRunDestinationForDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3;
- (void)_cacheRunDestination:(id)arg1;
- (id)init;
- (void)_startWatchingDeviceManager;
- (void)_adjustKnownRunDestinationsForChangeKind:(unsigned long long)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (void)_removeRunDestinationsForDevice:(id)arg1;
- (void)_addRunDestinationsForDevice:(id)arg1;
- (void)_setUpFallbackRunDestination;
- (id)_fallbackSDK;
- (id)_fallbackDevice;

// Remaining properties
@property(copy) NSSet *availableRunDestinations; // @dynamic availableRunDestinations;
@property(readonly, copy) NSMutableSet *mutableAvailableRunDestinations; // @dynamic mutableAvailableRunDestinations;

@end