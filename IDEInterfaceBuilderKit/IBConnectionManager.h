//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBConnectionManager : NSObject
{
    NSMutableDictionary *_documentToEndPointProvidersRegisteredDuringDragSession;
    NSSet *_endPointProviderExtensions;
}

+ (id)mixedConnnectionStateImage;
+ (id)onConnnectionStateImage;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)beginConnectingFromPrototypeView:(id)arg1 withPrototype:(id)arg2 inDocument:(id)arg3 connectionInterfaceStyle:(id)arg4;
- (void)beginConnectingFromAnnotation:(id)arg1 inTextSidebarView:(id)arg2 withEvent:(id)arg3;
- (void)beginOldSchoolConnectingFromEditorCanvasFrameController:(id)arg1 initialEndPoint:(id)arg2 withEvent:(id)arg3;
- (void)beginOldSchoolConnectingFromObject:(id)arg1 withEvent:(id)arg2 inWindow:(id)arg3 usingSourceLocator:(CDUnknownBlockType)arg4;
- (id)runCachingConnectionTrackingLoopWithEvent:(id)arg1 forDragContext:(id)arg2 inWindow:(id)arg3 fadeDraggingWindow:(BOOL)arg4 usingSourceLocator:(CDUnknownBlockType)arg5;
- (id)runCachingConnectionTrackingLoopWithEvent:(id)arg1 forDragContext:(id)arg2 inWindow:(id)arg3 fadeDraggingWindow:(BOOL)arg4 usingSourceLocator:(CDUnknownBlockType)arg5 remainingDocumentsToCache:(id)arg6;
- (id)runConnectionTrackingLoopWithEvent:(id)arg1 forDragContext:(id)arg2 inWindow:(id)arg3 fadeDraggingWindow:(BOOL)arg4 usingSourceLocator:(CDUnknownBlockType)arg5;
- (void)addConstraintsAfterCompletingConnection:(id)arg1 document:(id)arg2;
- (void)sendConnectionManagerDidFinishConnectingToProvider:(id)arg1;
- (void)sendConnectionManagerWillStartConnectingToProvider:(id)arg1;
- (void)unregisterProvidersRegisteredDuringDragSession;
- (id)registeredEndPointProvidingViewForView:(id)arg1 inDocuments:(id)arg2 limitToInterfaceBuilder:(BOOL)arg3 registeredInDocument:(id *)arg4;
- (id)endPointProviderExtensionForLanguage:(id)arg1;
- (BOOL)endPointProviderExtension:(id)arg1 supportsLanguage:(id)arg2;
- (BOOL)languageIdentifier:(id)arg1 identifiesLanguage:(id)arg2;
- (id)hitViewForConnectionDrag:(struct CGPoint)arg1 ingoringWindows:(id)arg2;
- (id)calculateConnectionEndPointInDocument:(id)arg1 forContext:(id)arg2 usingCandidatesBackToFront:(id)arg3 constraintAdditionValidationState:(id)arg4;
- (BOOL)isCandidate:(id)arg1 validForContext:(id)arg2 inDocument:(id)arg3 constraintAdditionValidationState:(id)arg4;
- (BOOL)shouldConnectAsConstraintToItem:(id)arg1 context:(id)arg2 inDocument:(id)arg3;
- (id)prototypeConnectionsNamed:(id)arg1 inDocument:(id)arg2 ofRelationshipType:(long long)arg3 fromClassNamed:(id)arg4 toTarget:(id)arg5;

@end