//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICLaunchImageSet : IBICMappedMultipartImage
{
}

+ (id)pluralTypeNameForIssues;
+ (id)typeNameForIssues;
+ (id)fileExtension;
+ (id)defaultInstanceForPlatforms:(id)arg1;
+ (id)defaultImageName;
+ (double)currentContentsJSONVersionNumber;
+ (double)latestUnderstoodContentsJSONVersionNumber;
+ (double)earliestUnderstoodContentsJSONVersionNumber;
+ (Class)imageRepClass;
- (id)descriptionShortClassName;
- (id)validatedContentsJSONImageEntriesFromSnapshot:(id)arg1 results:(id)arg2;
- (id)suggestedFileNameForImageRepInSlot:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)imageRepForIdentifier:(id)arg1;
- (id)imageRepForImageRepIdentifier:(id)arg1;
- (id)imageRepForSlot:(id)arg1;

@end