//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGSceneViewControllerDataSource : NSObject <DBGSceneViewControllerDataSource>
{
    NSDictionary *_plistDict;
    NSMutableDictionary *_viewInstacesDict;
    NSMutableArray *_allViews;
    NSString *_rootIdentifier;
    unsigned long long globalRenderingOrderCounter;
}

- (void).cxx_destruct;
- (id)allViews;
- (id)viewWithIdentifier:(id)arg1;
- (id)rootViewForHierarchyToDisplay;
- (void)updateViewRenderingOrderWithRootViewInstance:(id)arg1;
- (void)updateViewInstanceDictionaryWithViewInstance:(id)arg1;
- (void)prepareDataWithRootViewSurface:(id)arg1 viewInstanceCreationOptions:(id)arg2;

@end