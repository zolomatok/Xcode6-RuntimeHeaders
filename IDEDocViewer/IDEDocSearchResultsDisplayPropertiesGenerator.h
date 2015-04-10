//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDocSearchResultsDisplayPropertiesGenerator : NSObject
{
}

+ (unsigned long long)lineBreakMode;
+ (id)matchAttributes;
+ (id)_underlineHighlightColor;
+ (id)_backgroundHighlightColor;
+ (id)findResultsImageForToken:(id)arg1;
+ (id)_sourceSymbolKindForToken:(id)arg1;
+ (id)imageForSearchResult:(id)arg1;
+ (id)imagePathForResult:(id)arg1;
+ (id)_imageForNode:(id)arg1;
+ (id)genericReferenceImage;
+ (id)playgroundImage;
+ (id)sampleCodeImage;
+ (id)bookmarkImage;
+ (id)genericBookImage;
+ (id)attributedStringForResult:(id)arg1 rowHighlighted:(BOOL)arg2 searchString:(id)arg3 includeTokenScope:(BOOL)arg4;
+ (id)URLForResult:(id)arg1;
+ (id)attributedStringForResult:(id)arg1 rowHighlighted:(BOOL)arg2 searchString:(id)arg3;
+ (id)tokenScopeAttributedString:(id)arg1 textColor:(id)arg2;
+ (BOOL)isTokenDeprecated:(id)arg1;
+ (id)font;

@end