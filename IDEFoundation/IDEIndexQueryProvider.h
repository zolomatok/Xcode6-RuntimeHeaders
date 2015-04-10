//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEIndexQueryProvider <NSObject>
+ (BOOL)supportsSymbolColoring;
+ (DVTDocumentLocation *)locationForURL:(NSURL *)arg1 locator:(NSString *)arg2;
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly, nonatomic) IDEIndexDatabase *database;
- (IDEIndexCollection *)definitionsForSymbolWithResolutionOffset:(long long)arg1;
- (IDEIndexCollection *)allAutoImportCompletionItemsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 symbolLanguage:(DVTSourceCodeLanguage *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allAutoImportCompletionItemsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 forIndex:(IDEIndex *)arg2;
- (NSString *)completionStringForSymbol:(IDEIndexSymbol *)arg1;
- (BOOL)isProjectSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)calleesForSymbolOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (DVTDocumentLocation *)locationForSymbolOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (IDEIndexSymbol *)containingSymbolForOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (IDEIndexSymbol *)correspondingSymbolForOccurrence:(IDEIndexSymbolOccurrence *)arg1;
- (IDEIndexClassSymbol *)relatedClassForCategory:(IDEIndexCategorySymbol *)arg1;
- (IDEIndexCollection *)propertiesForCategory:(IDEIndexCategorySymbol *)arg1;
- (IDEIndexCollection *)instanceVariablesForCategory:(IDEIndexCategorySymbol *)arg1;
- (IDEIndexCollection *)instanceMethodsForCategory:(IDEIndexCategorySymbol *)arg1;
- (IDEIndexCollection *)classMethodsForCategory:(IDEIndexCategorySymbol *)arg1;
- (IDEIndexCollection *)allImplementingClassesForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)implementingClassesForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)subProtocolsForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)allSuperProtocolsForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)superProtocolsForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)propertiesForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)instanceMethodsForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)classMethodsForProtocol:(IDEIndexProtocolSymbol *)arg1;
- (IDEIndexCollection *)allInterfacesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)interfacesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)allProtocolsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)protocolsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)allOccurrencesOfMembers:(NSObject<NSFastEnumeration> *)arg1 forClass:(IDEIndexClassSymbol *)arg2;
- (IDEIndexCollection *)allSubClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)subClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)allSuperClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)superClassesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)categoriesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibOutletCollectionPropertiesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibOutletCollectionVariablesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibOutletCollectionsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibOutletPropertiesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibOutletVariablesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibOutletsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)ibActionMethodsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)propertiesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)instanceVariablesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)classVariablesForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)instanceMethodsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)classMethodsForClass:(IDEIndexClassSymbol *)arg1;
- (IDEIndexCollection *)childrenForContainer:(IDEIndexContainerSymbol *)arg1;
- (IDEIndexCallableSymbol *)getterForProperty:(IDEIndexPropertySymbol *)arg1;
- (IDEIndexCallableSymbol *)setterForProperty:(IDEIndexPropertySymbol *)arg1;
- (IDEIndexCollection *)callsForCallable:(IDEIndexCallableSymbol *)arg1 cancelWhen:(BOOL (^)(void))arg2;
- (IDEIndexSymbol *)typeOfArgument:(unsigned long long)arg1 forCallable:(IDEIndexCallableSymbol *)arg2;
- (unsigned long long)numArgumentsForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexSymbol *)returnTypeForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexPropertySymbol *)propertyForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexCollection *)overridingSymbolsForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexCollection *)overriddenSymbolsForCallable:(IDEIndexCallableSymbol *)arg1;
- (IDEIndexCollection *)referencesForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)referencingFilesForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexContainerSymbol *)containerSymbolForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)containerSymbolsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)definitionsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)declarationsForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)occurrencesForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexSymbolOccurrence *)modelOccurrenceForSymbol:(IDEIndexSymbol *)arg1;
- (IDEIndexCollection *)filesWithSymbolOccurrencesMatchingName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)classesWithReferencesToSymbols:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allClassesWithMembers:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)classesWithMembers:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allMethodsMatchingMethod:(IDEIndexCallableSymbol *)arg1 forReceiver:(IDEIndexSymbol *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)membersMatchingName:(NSString *)arg1 kinds:(NSObject<NSFastEnumeration> *)arg2 forInterfaces:(NSObject<NSFastEnumeration> *)arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)membersMatchingKinds:(NSObject<NSFastEnumeration> *)arg1 forInterfaces:(NSObject<NSFastEnumeration> *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)symbolsForResolutions:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (unsigned long long)countOfSymbolsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 workspaceOnly:(BOOL)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allSymbolsMatchingKind:(DVTSourceCodeSymbolKind *)arg1 workspaceOnly:(BOOL)arg2 cancelWhen:(BOOL (^)(void))arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)testMethodsForClasses:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allSubClassesForClasses:(NSObject<NSFastEnumeration> *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allSymbolsMatchingNames:(NSObject<NSFastEnumeration> *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allSymbolsMatchingName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)allProtocolsMatchingName:(NSString *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)allClassesMatchingName:(NSString *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)symbolsContaining:(NSString *)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(BOOL (^)(void))arg6 forIndex:(IDEIndex *)arg7;
- (IDEIndexCollection *)topLevelProtocolsWorkspaceOnly:(BOOL)arg1 cancelWhen:(BOOL (^)(void))arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)topLevelClassesWorkspaceOnly:(BOOL)arg1 cancelWhen:(BOOL (^)(void))arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)filesContaining:(NSString *)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(BOOL (^)(void))arg6 forIndex:(IDEIndex *)arg7;
- (IDEIndexCollection *)filesIncludedByFile:(DVTFilePath *)arg1 forIndex:(IDEIndex *)arg2;
- (IDEIndexCollection *)filesIncludingFile:(DVTFilePath *)arg1 forIndex:(IDEIndex *)arg2;
- (NSString *)parsedCodeCommentAtLocation:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (NSArray *)impliedHeadersForModuleImportLocation:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (DVTFilePath *)importedFileAtDocumentLocation:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (NSArray *)importedFilesAtDocument:(NSURL *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexSymbol *)collectionElementTypeSymbolForSymbol:(IDEIndexSymbol *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexSymbol *)typeSymbolForSymbol:(IDEIndexSymbol *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexSymbol *)messageReceiverInContext:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)referencesToSymbolMatchingName:(NSString *)arg1 inContext:(DVTDocumentLocation *)arg2 withCurrentFileContentDictionary:(NSDictionary *)arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)referencesToSymbol:(IDEIndexSymbol *)arg1 inContext:(DVTDocumentLocation *)arg2 withCurrentFileContentDictionary:(NSDictionary *)arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)symbolsUsedInContext:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)symbolsOccurrencesInContext:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)codeDiagnosticsAtLocation:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)codeCompletionsAtLocation:(DVTDocumentLocation *)arg1 withCurrentFileContentDictionary:(NSDictionary *)arg2 completionContext:(id *)arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)allParentsOfSymbols:(NSObject<NSFastEnumeration> *)arg1 cancelWhen:(BOOL (^)(void))arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)symbolsMatchingName:(NSString *)arg1 inContext:(DVTDocumentLocation *)arg2 withCurrentFileContentDictionary:(NSDictionary *)arg3 forIndex:(IDEIndex *)arg4;
- (IDEIndexCollection *)symbolsMatchingName:(NSString *)arg1 inContext:(DVTDocumentLocation *)arg2 forIndex:(IDEIndex *)arg3;
- (IDEIndexCollection *)topLevelSymbolsInFile:(NSString *)arg1 forIndex:(IDEIndex *)arg2;
- (void)purgeCaches;
- (id)initWithSettings:(NSDictionary *)arg1 database:(IDEIndexDatabase *)arg2;
@end