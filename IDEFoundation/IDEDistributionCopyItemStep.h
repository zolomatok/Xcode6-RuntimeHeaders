//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDistributionCopyItemStep : IDEDistributionProcessingStep
{
}

+ (id)destinationPathForItem:(id)arg1 fromProductsRoot:(id)arg2 inDestinationRoot:(id)arg3;
+ (id)processingStepWithDistributionItem:(id)arg1;
- (_Bool)processWithContext:(id)arg1 andError:(id *)arg2;
- (id)name;
- (id)initWithExtension:(id)arg1 andDistributionItem:(id)arg2;

@end