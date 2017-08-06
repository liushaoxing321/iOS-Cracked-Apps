//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPBasePaymentViewController.h"

#import "WPDiscountCouponViewControllerDelegate-Protocol.h"
#import "WPPointCardViewControllerDelegate-Protocol.h"

@class NSArray, NSString, WPPayAssistManager;

@interface WPMoviePaymentViewController : WPBasePaymentViewController <WPDiscountCouponViewControllerDelegate, WPPointCardViewControllerDelegate>
{
    _Bool _hadGuided;
    WPPayAssistManager *_manager;
    NSArray *_orderDetailTypeArray;
    NSArray *_gwPayChannelTypeArray;
}

@property(nonatomic) _Bool hadGuided; // @synthesize hadGuided=_hadGuided;
@property(retain, nonatomic) NSArray *gwPayChannelTypeArray; // @synthesize gwPayChannelTypeArray=_gwPayChannelTypeArray;
@property(retain, nonatomic) NSArray *orderDetailTypeArray; // @synthesize orderDetailTypeArray=_orderDetailTypeArray;
@property(retain, nonatomic) WPPayAssistManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (_Bool)hadShowAllAvlidPayChannel;
- (id)payChannelArray;
- (long long)noticeType;
- (unsigned long long)payOrderType;
- (id)invalidDate;
- (id)selectedPayChannel;
- (void)pointCardViewControllerDidClickUsePointCard:(id)arg1;
- (void)discountCouponViewControllerDidAddCoupon:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)discountCouponViewControllerDidClickUseDiscount:(id)arg1;
- (void)showAlertViewWithMessage:(id)arg1;
- (void)pushPartnerViewController;
- (void)updatePointCardInfo;
- (void)clearPointCard;
- (void)submitOrder;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sections;
- (void)reloadData;
- (void)setupTableView;
- (void)setupViews;
- (void)backProcess;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithManager:(id)arg1;
- (void)submitOrderWithPayAssistManager:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)submitPayActionWithPayAssistManager:(id)arg1 responseObject:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getPointCardInfoWithCardId:(id)arg1 payAssistManager:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)requestBonusInfoWithPayAssistManager:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestSurplusRedRoundsNumWithPayAssistManager:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
