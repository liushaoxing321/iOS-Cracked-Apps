//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightOrderSuccessViewController.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UIView;

@interface CTIntFlightOrderSuccessViewController : CTFlightOrderSuccessViewController
{
    NSString *privilegeInfo;
    _Bool hasMemberPrivilege;
    double _ratio;
    _Bool _hasReminderRebateInfo;
    NSDictionary *_traceDic;
    NSArray *_packageArray;
    NSMutableArray *_cityList;
    NSMutableArray *_dateList;
    NSMutableArray *_orderList;
    NSString *_priceInfo;
    NSString *_reminderInfo;
    NSString *_rabateInfo;
    NSString *_studentNotice;
    NSString *_studentNoticeTitle;
    UIView *_studentNoticeView;
    NSString *_foreignCardText;
}

@property(retain, nonatomic) NSString *foreignCardText; // @synthesize foreignCardText=_foreignCardText;
@property(nonatomic) _Bool hasReminderRebateInfo; // @synthesize hasReminderRebateInfo=_hasReminderRebateInfo;
@property(retain, nonatomic) UIView *studentNoticeView; // @synthesize studentNoticeView=_studentNoticeView;
@property(retain, nonatomic) NSString *studentNoticeTitle; // @synthesize studentNoticeTitle=_studentNoticeTitle;
@property(retain, nonatomic) NSString *studentNotice; // @synthesize studentNotice=_studentNotice;
@property(retain, nonatomic) NSString *rabateInfo; // @synthesize rabateInfo=_rabateInfo;
@property(retain, nonatomic) NSString *reminderInfo; // @synthesize reminderInfo=_reminderInfo;
@property(retain, nonatomic) NSString *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(retain, nonatomic) NSMutableArray *orderList; // @synthesize orderList=_orderList;
@property(retain, nonatomic) NSMutableArray *dateList; // @synthesize dateList=_dateList;
@property(retain, nonatomic) NSMutableArray *cityList; // @synthesize cityList=_cityList;
@property(retain, nonatomic) NSArray *packageArray; // @synthesize packageArray=_packageArray;
@property(retain, nonatomic) NSDictionary *traceDic; // @synthesize traceDic=_traceDic;
- (void).cxx_destruct;
- (id)addTraceParam;
- (void)setupViewAndCacheBean;
- (void)resetCurrentOrderCells;
- (void)resetCurrentSections;
- (void)pullUpToAddData:(id)arg1;
- (void)hideStudentNotice;
- (void)showStudentNotice;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)toOrderDetailPageWithOrderModel:(id)arg1;
- (void)toUsingCarPage;
- (void)logHotelCouponTrace;
- (void)sendHotelCouponInfoRequest;
- (void)sendFioCarAdInfoRequest;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initData;

@end
