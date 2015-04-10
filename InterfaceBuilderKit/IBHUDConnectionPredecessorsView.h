//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHUDConnectionPredecessorsView : IBAutoLayoutView
{
    NSArray *predecessorDisplayValues;
    NSMutableArray *predecessors;
    NSSet *objectsThatTriggerRebuild;
    BOOL cachedPredecessorRects;
    BOOL cachedPredecessorSubrowRects;
    BOOL cachedPredecessorAttributedDisplayValues;
    BOOL expanded;
    BOOL allowsEstablishingNewConnections;
    NSString *warningMessage;
    double expandedWidth;
    IBSlateBezierButton *collapseButton;
    IBSlateBezierButton *connectionButton;
    IBSlateBezierButton *refocusButton;
    NSMutableArray *disconnectButtons;
    IBConnection *prototype;
    IBDocument *document;
    NSString *reasonForDisallowingNewConnections;
    id delegate;
    IBConnectionInterfaceStyle *connectionInterfaceStyle;
    IBPredecessorDisplayValue *selectedDisplayValue;
}

- (void)beginConnecting:(id)arg1;
- (void)connectRolledOver:(id)arg1;
- (id)setupLineView;
- (void)drawRect:(struct CGRect)arg1;
- (void)refocusHUDOnSelection:(id)arg1;
- (void)toggleExpansion:(id)arg1;
- (void)diconnectPredecessor:(id)arg1;
- (void)predecessorsChanged;
- (void)diconnectRolledOver:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)toolTipForPoint:(struct CGPoint)arg1 clipRect:(struct CGRect *)arg2;
- (void)refreshDisconnectButtons;
- (id)makeDisconnectButtonForPredecessorDisplayValue:(id)arg1;
- (void)refreshRefocusButton;
- (void)refocusButtonRolledOver:(id)arg1;
- (void)refreshDisconnectButton:(id)arg1 withRollOverState:(BOOL)arg2;
- (void)removeDisconnectButtons;
- (void)refreshCollapseButton;
- (void)refreshConnectionButton;
- (BOOL)showsPlusConnectPath;
- (void)layout;
- (id)predecessorDisplayValueAtPoint:(struct CGPoint)arg1;
- (id)predecessorDisplayValueForPredecessor:(id)arg1;
- (struct CGRect)refocusButtonRect;
- (struct CGRect)collapseButtonRect;
- (struct CGRect)connectionButtonRect;
- (struct CGSize)desiredSize;
- (struct CGSize)collapsedSize;
- (struct CGSize)expandedSize;
- (struct CGRect)frameForDisconnectButtonInPredecessorDisplayValue:(id)arg1;
- (struct CGRect)frameForDisconnectButtonInPredecessorRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForPredecessorDisplayValue:(id)arg1 subValueIndex:(long long)arg2;
- (struct CGRect)highlightRectForSelectedPredecessorDisplayValue;
- (struct CGRect)highlightRectForPredecessorDisplayValue:(id)arg1;
- (struct CGRect)wholeRectForPredecessorDisplayValue:(id)arg1;
- (struct CGRect)rectForPredecessorDisplayValue:(id)arg1 subValueIndex:(long long)arg2;
- (struct CGRect)firstDisplayRectOfFirstPredecessorRect;
- (struct CGRect)utilityButtonIconBounds;
- (struct CGRect)collapseIconBounds;
- (struct CGRect)disconnectIconBounds;
- (struct CGRect)connectWarningIconBounds;
- (struct CGRect)connectIconBounds;
- (struct CGRect)utilityButtonBounds;
- (struct CGRect)collapseButtonBounds;
- (struct CGRect)disconnectButtonBounds;
- (struct CGRect)connectButtonBounds;
- (id)attributedTitleForPredecessorDisplayValue:(id)arg1 subValueIndex:(long long)arg2;
- (id)displayedWarningsForPredecessor:(id)arg1;
- (BOOL)isSelected;
- (void)setSelectedPredecessor:(id)arg1 withEndPoint:(id)arg2;
- (id)selectedPredecessor;
- (id)mapPredecessor:(id)arg1 toDisplayValueWithEndPoint:(id)arg2;
- (id)headerView;
- (BOOL)isHUDStyle;
- (id)connectionInterfaceStyle;
- (void)applyInterfaceState:(id)arg1;
- (id)captureInterfaceState;
- (id)predecessors;
- (id)prototype;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)isExpanded;
- (id)document;
- (BOOL)isFlipped;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)hasAnyPredecessorDisplayValues;
- (BOOL)hasSinglePredecessorDisplayValue;
- (BOOL)hasMultiplePredecessorDisplayValues;
- (long long)numberOfPredecessorDisplayValues;
- (id)predecessorDisplayValuesForDisplayValue:(id)arg1;
- (BOOL)canHaveMultiplePredecessors;
- (id)reasonForDisallowingNewConnections;
- (void)setReasonForDisallowingNewConnections:(id)arg1;
- (void)setAllowsEstablishingNewConnections:(BOOL)arg1;
- (BOOL)allowsEstablishingNewConnections;
- (void)setWarningMessage:(id)arg1;
- (id)warningMessage;
- (id)predecessorDisplayValues;
- (void)documentDidRemoveObject:(id)arg1;
- (void)documentDidAddObject:(id)arg1;
- (BOOL)needsRevalidation;
- (void)documentDidRemoveConnection:(id)arg1;
- (void)documentDidAddConnection:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (void)clearDocumentReference;
- (void)dealloc;
- (id)initWithPredecessors:(id)arg1 andPrototype:(id)arg2 forDocument:(id)arg3 connectionInterfaceStyle:(id)arg4;
- (id)refocusButtonContentRolledOver;
- (id)refocusButtonContentNormal;
- (id)disconnectButtonIconContentRolledOver:(BOOL)arg1;
- (id)warningConnectionButtonIconContent;
- (id)warningConnectionButtonIconContent:(struct CGRect)arg1;
- (id)normalConnectionButtonIconContentWithPath:(id)arg1;
- (id)disabledConnectionButtonIconContentWithPath:(id)arg1;
- (id)collapseIconContentExpanded:(BOOL)arg1;

@end