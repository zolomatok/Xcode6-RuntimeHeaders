//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCToolSpecification_ivars : NSObject
{
    NSArray *commandLineTemplate;
    XCFnmatchPatternSet *patternsOfFlagsToElide;
    NSArray *ruleLineTemplate;
    Class commandInvocationClass;
    NSArray *outputParserClassesOrRules;
    Class resultsPostprocessorClass;
    NSArray *fallbackToolIdentifiers;
    NSMutableDictionary *fallbackToolSpecifications;
    NSSet *inputFileTypes;
    NSArray *additionalPathsToClean;
    XCFnmatchPatternSet *flagsNotAffectingOutputFile;
    BOOL supportsDeploymentTarget;
    NSMutableDictionary *defaultDeploymentTargetsByName;
    NSArray *outputPaths;
    BOOL outputsAreProducts;
    NSDictionary *environmentVariables;
    NSArray *requiredComponents;
    BOOL shouldSynthesizeGlobalBuildRule;
    NSArray *buildPhasesForWhichToSynthesizeBuildRules;
}

- (void)dealloc;

@end