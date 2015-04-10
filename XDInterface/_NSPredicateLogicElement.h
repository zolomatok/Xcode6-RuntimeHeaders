//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NSPredicateLogicElement : NSObject <_NSPredicateKeyChooserCallback>
{
    NSPredicateView *_predicateView;
    _NSPredicateLogicElement *_parent;
    NSColor *_color;
    NSString *_label;
    NSTextField *_labelField;
    NSMutableArray *_children;
    long long _logic;
    struct CGRect _frame;
    double _lineWidth;
    _Bool _selected;
    NSString *_chosenKey;
    NSString *_chosenCmpKey[2];
    _Bool _dualOperands;
    long long _betweenIndex;
    id _keyBox;
    unsigned long long _lineIndex;
    NSPopUpButton *_keyPopUp;
    NSPopUpButton *_operatorPopUp;
    NSPopUpButton *_logicPopUp;
    NSMutableArray *_keys;
    id <NSPredicateTypeController> _logicalTypeController;
    id <NSPredicateTypeController> _typeController[2];
    NSPopUpButton *_ckvPopUp[2];
    NSPopUpButton *_keyCompPopUp[2];
    NSMutableArray *_cmpKeys[2];
    NSTextField *_varLabelField[2];
    NSTextField *_varField[2];
    NSTextField *_additionalTextField[2];
    NSTextField *_betweenLabelField;
    NSButton *_plusButton;
    NSButton *_minusButton;
    NSButton *_actionButton;
    struct CGPoint _lastOrigin;
    NSTextField *_formatField;
    struct CGPoint _tailPos;
    double _tailMinX;
    double _tailWidth;
    NSString *_debugName;
    long long _drawingImage;
    struct CGPoint _drawingImageOrigin;
    long long _delayedPerform;
}

- (void)dealloc;
- (id)description;
- (id)contextMenu:(struct CGPoint)arg1;
- (void)testAction:(id)arg1;
- (struct CGPoint)imageLoc;
- (id)image;
- (id)_imagePhotocopy;
- (id)_imageSymbolic;
- (id)_imageTIFFicon;
- (id)initWithPredicate:(id)arg1 inView:(id)arg2;
- (BOOL)_parseLinePredicate:(id)arg1 predicate2:(id)arg2;
- (id)_parsablePredicate:(id)arg1;
- (id)_parseOperand:(long long)arg1 withPredicate:(id)arg2;
- (_Bool)validate;
- (id)debugString;
- (id)predicateString;
- (id)predicate;
- (id)_predicateForOperand:(long long)arg1 op:(id)arg2;
- (id)_formatPredicate;
- (BOOL)operationAlterLogic:(BOOL)arg1;
- (void)operationToVar2;
- (void)operationToVar1;
- (void)operationToVal2;
- (void)operationToVal1;
- (void)operationToKey2;
- (void)operationToKey1;
- (BOOL)operationMoveRight:(BOOL)arg1;
- (BOOL)operationMoveLeft:(BOOL)arg1;
- (BOOL)operationMoveDown:(BOOL)arg1;
- (BOOL)operationMoveUp:(BOOL)arg1;
- (BOOL)_moveLevelDown:(id)arg1 doIt:(BOOL)arg2;
- (id)onlyChild;
- (BOOL)_moveLevelUp:(id)arg1 callingChild:(id)arg2 doIt:(BOOL)arg3;
- (BOOL)_moveChild:(id)arg1 up:(_Bool)arg2 doIt:(BOOL)arg3;
- (BOOL)operationRemove:(BOOL)arg1;
- (BOOL)operationOr:(BOOL)arg1;
- (BOOL)operationAnd:(BOOL)arg1;
- (BOOL)operationNot:(BOOL)arg1;
- (void)addParent:(long long)arg1;
- (BOOL)operationAdd:(BOOL)arg1;
- (void)addFollowing:(id)arg1;
- (void)removeTree;
- (BOOL)dropElement:(id)arg1 at:(struct CGPoint)arg2;
- (long long)childrenCount;
- (void)alterLogic;
- (long long)logic;
- (_Bool)selected;
- (void)setSelected:(_Bool)arg1;
- (id)predicateView;
- (id)parent;
- (void)setParent:(id)arg1;
- (void)deleteChild:(id)arg1;
- (void)deleteSelf;
- (void)_closeViews;
- (void)_testDoubleNegation;
- (void)addChild:(id)arg1;
- (void)replace:(id)arg1 with:(id)arg2;
- (void)insert:(id)arg1 following:(id)arg2;
- (void)insert:(id)arg1 preceding:(id)arg2;
- (id)findElementAt:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)draw;
- (void)_drawLogicWithPopUps;
- (void)_drawLogicGraphically;
- (void)_drawLogicGraphicallyFancy;
- (void)_drawShade:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
- (void)_addLogicPath:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
- (void)_drawBackground;
- (void)_drawImageRect;
- (void)_drawFrontLine;
- (struct CGRect)frame;
- (double)positionUI;
- (struct CGSize)_positionOperand:(long long)arg1 startPoint:(struct CGPoint)arg2 secondRow:(struct CGPoint)arg3;
- (struct CGSize)_positionFormatFieldAt:(struct CGPoint)arg1;
- (void)positionLabel;
- (void)repositionTailFor:(double)arg1;
- (struct CGSize)positionTailAt:(struct CGPoint)arg1 initial:(BOOL)arg2;
- (void)addUI;
- (void)_addFunctionsToKeyPopUp:(id)arg1;
- (void)_functionRemoveForKeyPopUp:(id)arg1;
- (void)_functionAddCriteriaForKeyPopUp:(id)arg1;
- (void)_functionAddNotForKeyPopUp:(id)arg1;
- (void)_functionAddOrForKeyPopUp:(id)arg1;
- (void)_functionAddAndForKeyPopUp:(id)arg1;
- (void)_resetKeyPopUp;
- (void)_addFormatField;
- (void)_addOperatorPopUp;
- (void)_logicChanged:(id)arg1;
- (void)_addLabel;
- (void)_choseKey2:(id)arg1;
- (void)_choseKey1:(id)arg1;
- (void)_choseCmpKey:(long long)arg1;
- (BOOL)_selectCmpKey:(long long)arg1 key:(id)arg2 add:(BOOL)arg3;
- (void)_choseKey:(id)arg1;
- (void)_doChoseKey:(id)arg1;
- (void)selectKeyFromKeyBox;
- (void)setSelectedKeyPath:(id)arg1;
- (void)_setKeyFromKeyBox:(id)arg1;
- (BOOL)dualOperands;
- (id)opType:(long long)arg1;
- (void)_operatorChanged:(id)arg1;
- (void)_removeOperand:(long long)arg1;
- (void)_addOperand:(long long)arg1;
- (void)_removeVar:(long long)arg1;
- (void)_addVar:(long long)arg1;
- (void)_removeVarField:(long long)arg1;
- (void)_addVarField:(long long)arg1;
- (void)_removeVarLabelField:(long long)arg1;
- (void)_addVarLabelField:(long long)arg1;
- (void)_removeBetweenLabelField;
- (void)_addBetweenLabelField;
- (void)_removeCKVPopUp:(long long)arg1;
- (void)_addCKVPopUp:(long long)arg1;
- (void)_operandKind1:(id)arg1;
- (void)_operandKind0:(id)arg1;
- (void)_operandKindAtIndex:(long long)arg1;
- (id)_operatorFor1;
- (id)_operatorLessOrEqual;
- (id)_operatorGreaterOrEqual;
- (void)_removeKeyCompPopUp:(long long)arg1;
- (void)_addKeyCompPopUp:(long long)arg1;
- (void)_updateLogicalTypeController;
- (void)_removeUIforConstant:(long long)arg1;
- (void)_addUIforConstant:(long long)arg1;
- (void)_removeTypeController:(long long)arg1;
- (void)_addTypeController:(long long)arg1;
- (id)_addGenericLabel;
- (id)openKeyBox;
- (void)_typedOperator:(id)arg1;
- (void)_setSelectedKey:(id)arg1;
- (id)_selectedKey;
- (unsigned long long)_nonKeyEntries;
- (id)_makeTinyButton:(id)arg1 action:(BOOL)arg2;
- (void)collectLines:(id)arg1;
- (struct CGRect)addToFrame:(struct CGRect)arg1;
- (double)positionAt:(struct CGPoint)arg1;
- (void)_positionLogicPopUp;
- (BOOL)_anyAll;
- (double)_tailHorizontalAlign;
- (double)_keyMinWidth;
- (double)_keyMaxWidth;
- (double)_bottomSpace;
- (double)_topSpace;
- (double)_logicHeight;
- (double)_minHeight;
- (double)_lineHeight;
- (id)initWithDictionary:(id)arg1 inView:(id)arg2;
- (id)newLogic:(long long)arg1;
- (id)initWithLogic:(long long)arg1 inView:(id)arg2;
- (void)_addLogicPopUp;
- (void)_addFunctionsToLogicPopUp:(id)arg1;
- (void)_functionRemoveForLogicPopUp:(id)arg1;
- (void)_functionAddCriteriaForLogicPopUp:(id)arg1;
- (void)_functionAddNotForLogicPopUp:(id)arg1;
- (void)_functionAddOrForLogicPopUp:(id)arg1;
- (void)_functionAddAndForLogicPopUp:(id)arg1;
- (void)_resetLogicPopUp;
- (BOOL)_useSelectKeyBox;
- (BOOL)_useTypedFormat;
- (double)_logicHorizontalLabelOffset;
- (double)_logicCurveY;
- (double)_logicCurveX;
- (double)_logicCorner;
- (double)_calculateWidth;
- (double)_leftSpace;
- (BOOL)_onLeftBorder;
- (double)_logicSymbolWidth;
- (double)_logicPopUpWidth;

@end