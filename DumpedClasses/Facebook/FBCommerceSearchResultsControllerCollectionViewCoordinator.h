//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCommerceSerpContainerHeaderViewDelegate-Protocol.h"
#import "FBSearchModuleResultsControllerCoordinator-Protocol.h"

@class FBCommerceSerpContainerHeaderView, FBCommerceSerpContainerView, FBPreferences, FBSearchModuleResultsControllerCollectionViewCoordinator, FBSearchResultsCommerceFlowLayoutManager, FBSerpConfig, FBStreamListView, NSString, UIScrollView, UIView;
@protocol FBSearchModuleResultsControllerCoordinatorDelegate, FBSectionedDataSourceReading, FBSectionedDataSourceWriting;

@interface FBCommerceSearchResultsControllerCollectionViewCoordinator : NSObject <FBCommerceSerpContainerHeaderViewDelegate, FBSearchModuleResultsControllerCoordinator>
{
    FBCommerceSerpContainerView *_containerView;
    id <FBSearchModuleResultsControllerCoordinatorDelegate> _delegate;
    FBSearchModuleResultsControllerCollectionViewCoordinator *_internalCollectionViewCoordinator;
    FBCommerceSerpContainerHeaderView *_headerView;
    FBSearchResultsCommerceFlowLayoutManager *_commerceLayoutManager;
    FBPreferences *_preferences;
    FBSerpConfig *_serpConfig;
}

- (void).cxx_destruct;
- (void)showErrorFooterWithErrorType:(unsigned long long)arg1 viewStyle:(unsigned long long)arg2;
@property(readonly, nonatomic) id componentDataSource;
- (void)removeAppearanceEventListener:(id)arg1;
- (void)addAppearanceEventListener:(id)arg1;
- (void)removeScrollEventListener:(id)arg1;
- (void)addScrollEventListener:(id)arg1;
- (void)updateLoadingIndicator:(_Bool)arg1;
- (void)showEndIndicator;
- (void)showLoadingFooter;
@property(readonly, nonatomic) id <FBSectionedDataSourceWriting> writeInterface;
@property(readonly, nonatomic) id <FBSectionedDataSourceReading> readInterface;
@property(readonly, nonatomic) _Bool hasComponentDataSource;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) FBStreamListView *streamListView;
- (void)createComponentDataSourceWithResultsContext:(id)arg1 constraintProvider:(id)arg2 identifier:(id)arg3;
- (void)updateSizeAndContext:(id)arg1;
@property(readonly, nonatomic) _Bool isGrid;
- (void)layoutSubviewsWithTopInset:(double)arg1;
@property(readonly, nonatomic) UIView *viewToAdd;
- (void)_updateContextForHeader:(id)arg1;
- (void)toggleLayout;
- (void)loadView;
- (id)initWithSession:(id)arg1 serpConfig:(id)arg2 componentProvider:(Class)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
