//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

@class UICollectionView, UIView, XYPHRefreshBaseDataSource;

@interface XYPHBaseCollectionRefreshViewController : XYPHBaseViewController
{
    _Bool isFirstLoad;
    _Bool finishFirstLoad;
    _Bool _showAlertErrorInPullToRefresh;
    _Bool _showAlertErrorInMore;
    _Bool _isRegisterPullToRefresh;
    _Bool _showRequestCancelAlert;
    UICollectionView *_baseCollectionView;
    UIView *_loadingParentView;
    XYPHRefreshBaseDataSource *_dataSource;
    UIView *_errorView;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool showRequestCancelAlert; // @synthesize showRequestCancelAlert=_showRequestCancelAlert;
@property(nonatomic) _Bool isRegisterPullToRefresh; // @synthesize isRegisterPullToRefresh=_isRegisterPullToRefresh;
@property(nonatomic) _Bool showAlertErrorInMore; // @synthesize showAlertErrorInMore=_showAlertErrorInMore;
@property(nonatomic) _Bool showAlertErrorInPullToRefresh; // @synthesize showAlertErrorInPullToRefresh=_showAlertErrorInPullToRefresh;
@property(retain, nonatomic) XYPHRefreshBaseDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIView *loadingParentView; // @synthesize loadingParentView=_loadingParentView;
@property(nonatomic) __weak UICollectionView *baseCollectionView; // @synthesize baseCollectionView=_baseCollectionView;
- (void).cxx_destruct;
- (void)finishLoadMore:(id)arg1;
- (void)finishPullToRefresh:(id)arg1;
- (_Bool)hasMore;
- (id)emptyDataView;
- (id)errorResponseView:(id)arg1;
- (void)triggerPullToRefresh:(_Bool)arg1;
- (void)infiniteScrollingAction;
- (void)pullToRefreshAction;
- (void)setupAddMore;
- (void)setupPullToRefresh;
- (void)addErrorResponseView:(id)arg1;
- (void)addEmptyView;
- (void)removeErrorView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
