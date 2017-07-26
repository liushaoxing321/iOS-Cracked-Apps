//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "TBWaterfallCollectionViewDelegateWaterfallLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MQZoneTableFootLoadingView, NSMutableArray, NSString, ODRefreshControl, TBWaterfallCollectionViewWaterfallLayout;

@interface TBWaterfallCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, TBWaterfallCollectionViewDelegateWaterfallLayout, MQZoneTableFootLoadingViewDelegate>
{
    ODRefreshControl *_refreshControl;
    MQZoneTableFootLoadingView *_loadMoreControl;
    NSMutableArray *_cardList;
    _Bool _isAllowRefresh;
    _Bool _isAllowLoading;
    _Bool _isFinishedLoading;
    id <TBWaterfallCollectionViewDelegate> _viewDelegate;
    long long _colNum;
    unsigned long long _discoveryPageSource;
    TBWaterfallCollectionViewWaterfallLayout *_layout;
}

@property(retain, nonatomic) TBWaterfallCollectionViewWaterfallLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) unsigned long long discoveryPageSource; // @synthesize discoveryPageSource=_discoveryPageSource;
@property(nonatomic) long long colNum; // @synthesize colNum=_colNum;
@property(nonatomic) _Bool isFinishedLoading; // @synthesize isFinishedLoading=_isFinishedLoading;
@property(nonatomic) _Bool isAllowLoading; // @synthesize isAllowLoading=_isAllowLoading;
@property(nonatomic) _Bool isAllowRefresh; // @synthesize isAllowRefresh=_isAllowRefresh;
@property(nonatomic) __weak id <TBWaterfallCollectionViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (void)scrollToIndexPath:(id)arg1;
- (void)onActionActivityInfoUpdate:(id)arg1;
- (void)updateFeatureInfo:(id)arg1;
- (void)onActionCommentVideo:(id)arg1;
- (void)onActionLikeVideo:(id)arg1;
- (void)onMarkedVideo:(id)arg1;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didSelectActivityCardAtIndexPath:(id)arg1;
- (void)didSelectVideoCardAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)exp_cardDataReportWithModel:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)stopLoading;
- (id)getCardId:(id)arg1;
- (_Bool)isExistInList:(id)arg1;
- (void)updateSelfFakeCard:(id)arg1 withData:(id)arg2;
- (void)updateCacheSelfFakeCardWithData:(id)arg1;
- (void)removeSelfFakeDataWithVidList:(id)arg1;
- (void)removeSelfFakeData;
- (void)insertData:(id)arg1;
- (void)refreshData:(id)arg1;
- (void)doInitCollectionView;
- (void)dealloc;
- (void)doInitNotification;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
