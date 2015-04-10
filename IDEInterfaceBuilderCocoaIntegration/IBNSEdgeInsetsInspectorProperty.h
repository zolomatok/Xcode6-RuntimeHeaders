//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBNSEdgeInsetsInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSTextField *_topEdgeTextField;
    NSStepper *_topEdgeStepper;
    NSTextField *_leftEdgeTextField;
    NSStepper *_leftEdgeStepper;
    NSTextField *_rightEdgeTextField;
    NSStepper *_rightEdgeStepper;
    NSTextField *_bottomEdgeTextField;
    NSStepper *_bottomEdgeStepper;
    NSTextField *_sectionTitle;
    NSLayoutConstraint *_leftBaselineAlignmentConstraint;
    NSLayoutConstraint *_rightBaselineAlignmentConstraint;
    double _minimumValue;
}

@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSLayoutConstraint *rightBaselineAlignmentConstraint; // @synthesize rightBaselineAlignmentConstraint=_rightBaselineAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftBaselineAlignmentConstraint; // @synthesize leftBaselineAlignmentConstraint=_leftBaselineAlignmentConstraint;
@property(nonatomic) NSTextField *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) NSStepper *bottomEdgeStepper; // @synthesize bottomEdgeStepper=_bottomEdgeStepper;
@property(nonatomic) NSTextField *bottomEdgeTextField; // @synthesize bottomEdgeTextField=_bottomEdgeTextField;
@property(nonatomic) NSStepper *rightEdgeStepper; // @synthesize rightEdgeStepper=_rightEdgeStepper;
@property(nonatomic) NSTextField *rightEdgeTextField; // @synthesize rightEdgeTextField=_rightEdgeTextField;
@property(nonatomic) NSStepper *leftEdgeStepper; // @synthesize leftEdgeStepper=_leftEdgeStepper;
@property(nonatomic) NSTextField *leftEdgeTextField; // @synthesize leftEdgeTextField=_leftEdgeTextField;
@property(nonatomic) NSStepper *topEdgeStepper; // @synthesize topEdgeStepper=_topEdgeStepper;
@property(nonatomic) NSTextField *topEdgeTextField; // @synthesize topEdgeTextField=_topEdgeTextField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)loadView;
- (void)refresh;
- (void)updateLeftEdgeInset:(id)arg1;
- (void)updateBottomEdgeInset:(id)arg1;
- (void)updateRightEdgeInset:(id)arg1;
- (void)updateTopEdgeInset:(id)arg1;
- (void)setInspectedEdgeInsets:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)inspectedEdgeInsets;
@property(readonly) IBInspectorViewController *inspectorController;

@end