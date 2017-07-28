//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

#import "FAMobileLiveGiftNumChooseViewDelegate.h"
#import "FAMobileLiveHrizontalMenuViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class FALCGiftViewTapNumView, FALCRichLevelView, FALCRoomGiftModel, FAMobileLiveGiftCollectionViewCell, FAMobileLiveHrizontalMenuView, FAMobileLiveLiveRoomGiftNumChooseView, FAMobileLiveStarGiftCollectionViewCell, NSIndexPath, NSMutableArray, NSString, UIButton, UICollectionView, UILabel, UIPageControl, UIView, YYLabel;

@interface FAMobileLiveGiftView : FAPanGesView <FAMobileLiveHrizontalMenuViewDelegate, UIScrollViewDelegate, FAMobileLiveGiftNumChooseViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <FAMobileLiveGiftViewDelegate> _delegate;
    id <FAMobileLiveGiftViewDataSource> _dataSource;
    long long _showSongType;
    UIView *_backgroundView;
    UIView *_actionView;
    UIView *_topView;
    UIButton *_rechargeBtn;
    UILabel *_selectLabel;
    FALCRichLevelView *_richLevelView;
    YYLabel *_userCoinLabel;
    UIView *_centerView;
    UIView *_tabbarView;
    FAMobileLiveHrizontalMenuView *_classMenuView;
    UIButton *_storageButton;
    UIView *_normalGiftView;
    UICollectionView *_giftCollectionView;
    UIView *_bottomView;
    NSMutableArray *_giftList;
    NSMutableArray *_normalGiftList;
    NSMutableArray *_storageGiftList;
    long long _giftListType;
    NSIndexPath *_selectIndex;
    NSString *_selectNumStr;
    long long _selectNumIndex;
    long long _giftNumType;
    FAMobileLiveGiftCollectionViewCell *_selectedGiftCell;
    FALCRoomGiftModel *_selectedGiftModel;
    UIPageControl *_pageControl;
    FALCGiftViewTapNumView *_giftNumSelectView;
    FAMobileLiveLiveRoomGiftNumChooseView *_giftNumChooseView;
    UIButton *_starGiftChooseView;
    long long _selectedStarFansNum;
    UIButton *_sendButton;
    FAMobileLiveStarGiftCollectionViewCell *_startCellView;
    UIView *_loadingIndicatorView;
    UIView *_retryLoadingIndicatorView;
}

@property(retain, nonatomic) UIView *retryLoadingIndicatorView; // @synthesize retryLoadingIndicatorView=_retryLoadingIndicatorView;
@property(retain, nonatomic) UIView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) FAMobileLiveStarGiftCollectionViewCell *startCellView; // @synthesize startCellView=_startCellView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) long long selectedStarFansNum; // @synthesize selectedStarFansNum=_selectedStarFansNum;
@property(retain, nonatomic) UIButton *starGiftChooseView; // @synthesize starGiftChooseView=_starGiftChooseView;
@property(retain, nonatomic) FAMobileLiveLiveRoomGiftNumChooseView *giftNumChooseView; // @synthesize giftNumChooseView=_giftNumChooseView;
@property(retain, nonatomic) FALCGiftViewTapNumView *giftNumSelectView; // @synthesize giftNumSelectView=_giftNumSelectView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) FALCRoomGiftModel *selectedGiftModel; // @synthesize selectedGiftModel=_selectedGiftModel;
@property(retain, nonatomic) FAMobileLiveGiftCollectionViewCell *selectedGiftCell; // @synthesize selectedGiftCell=_selectedGiftCell;
@property(nonatomic) long long giftNumType; // @synthesize giftNumType=_giftNumType;
@property(nonatomic) long long selectNumIndex; // @synthesize selectNumIndex=_selectNumIndex;
@property(copy, nonatomic) NSString *selectNumStr; // @synthesize selectNumStr=_selectNumStr;
@property(retain, nonatomic) NSIndexPath *selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) long long giftListType; // @synthesize giftListType=_giftListType;
@property(retain, nonatomic) NSMutableArray *storageGiftList; // @synthesize storageGiftList=_storageGiftList;
@property(retain, nonatomic) NSMutableArray *normalGiftList; // @synthesize normalGiftList=_normalGiftList;
@property(retain, nonatomic) NSMutableArray *giftList; // @synthesize giftList=_giftList;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionView *giftCollectionView; // @synthesize giftCollectionView=_giftCollectionView;
@property(retain, nonatomic) UIView *normalGiftView; // @synthesize normalGiftView=_normalGiftView;
@property(retain, nonatomic) UIButton *storageButton; // @synthesize storageButton=_storageButton;
@property(retain, nonatomic) FAMobileLiveHrizontalMenuView *classMenuView; // @synthesize classMenuView=_classMenuView;
@property(retain, nonatomic) UIView *tabbarView; // @synthesize tabbarView=_tabbarView;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) YYLabel *userCoinLabel; // @synthesize userCoinLabel=_userCoinLabel;
@property(retain, nonatomic) FALCRichLevelView *richLevelView; // @synthesize richLevelView=_richLevelView;
@property(retain, nonatomic) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) UIButton *rechargeBtn; // @synthesize rechargeBtn=_rechargeBtn;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long showSongType; // @synthesize showSongType=_showSongType;
@property(nonatomic) __weak id <FAMobileLiveGiftViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FAMobileLiveGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateGiftViewWhenSuccessSendGift;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hrizontalMenuItemDidClickedWithAtIndex:(long long)arg1;
- (void)numChooseViewWillDismiss;
- (void)fxGiftNumChooseViewSumbitNum:(id)arg1 giftType:(long long)arg2;
- (void)fxGiftNumChooseViewSumbitNum:(id)arg1;
- (void)chooseNum;
- (void)actionHide:(id)arg1;
- (void)giftItemDidSelected:(id)arg1;
- (long long)getStarCount;
- (void)rechargeButtonClick:(id)arg1;
- (_Bool)willSelectedGiftCell:(id)arg1;
- (void)sendGiftBtnClick:(id)arg1;
- (void)storageButtonClick:(id)arg1;
- (void)beginDismissAnimation;
- (void)beginShowAnimation;
- (void)reloadData;
- (void)updateClassMenuViewState:(_Bool)arg1;
- (void)updatePageControlState:(_Bool)arg1;
- (void)loadGiftList;
- (void)updateRichLevelViewStatus;
- (void)showRetryGetGiftIndicatorView;
- (void)stopCircleLoader;
- (void)hideLoadGiftIndicatorView;
- (void)showLoadGiftIndicatorView;
- (void)tapRetryLoadButtton;
- (void)reloadGiftViewStatus;
- (void)updateGiftSelectIndex:(id)arg1;
- (void)resetGiftViewState;
- (void)updateUserCoin:(long long)arg1;
- (void)dismissGiftView;
- (void)showInView:(id)arg1;
- (void)updateCoin;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)dealloc;
- (void)initConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
