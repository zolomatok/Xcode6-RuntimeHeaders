//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESimulateLocationMacService : IDESimulateLocationService <iCloudMonitorLineProcessor>
{
}

- (void)monitor:(id)arg1 didReceiveResponseCode:(unsigned long long)arg2 response:(id)arg3 forToken:(id)arg4 responseContinues:(BOOL)arg5;
- (BOOL)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2 error:(id *)arg3;
- (BOOL)stopLocationSimulationWithError:(id *)arg1;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end