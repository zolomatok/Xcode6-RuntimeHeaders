//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAbstractActionConnection : IBConnection
{
}

+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (void)refactorConnectionsInExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 fromObject:(id)arg4 toObject:(id)arg5 context:(id)arg6;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (BOOL)objectAggregatesAllActions:(id)arg1;
+ (id)normalizeDestination:(id)arg1 withParent:(id)arg2;
+ (BOOL)canObjectFireActions:(id)arg1 inDocument:(id)arg2;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (id)messageForConnectingAcrossRepeatingStoryboardRelationship;
- (id)endPointForStoryboardCrossRepetitionWarning;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)insertingFromPasteboardShouldRetargetEndPoint:(long long)arg1;
- (BOOL)sourceIsFirstResponder;
- (BOOL)shouldFollowDestinationToPasteboardAsExternalConnection;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)displayDescriptionInDocument:(id)arg1;
- (BOOL)refactorWithActionChangeTypeRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (BOOL)refactorWithActionMoveRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (BOOL)refactorWithActionRenameRefactoringOperation:(id)arg1 inDocument:(id)arg2 error:(id *)arg3;
- (id)displayGroupIdentifierFromReferenceEndPoint:(id)arg1;
- (id)displayGroupIdentifierForDragFromObject:(id)arg1 toObject:(id)arg2;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (BOOL)canCoexistsWithOtherConnectionsHavingSameEndPoint;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)exclusitivityHintInObjectContainer:(id)arg1;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (id)missingComponents;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEquivalentToPrototypeFor:(id)arg1 inDocument:(id)arg2;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (id)explicitDisplayNameWithRespectToPredecessors:(id)arg1;
- (long long)relationshipType;
- (id)archiveKeyForEndPoint:(long long)arg1;
- (long long)endPointToArchive;
- (BOOL)useConnectionSourceForSearchLocation;
- (id)archiveKeyForLabel;
- (id)connectionDefinitionForObject:(id)arg1;

@end