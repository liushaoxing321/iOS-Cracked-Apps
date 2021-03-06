//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPAPIClientBase.h"

@interface WPShowAPIClient : WPAPIClientBase
{
    long long _showDev;
}

+ (void)errorHandleWithError:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long showDev; // @synthesize showDev=_showDev;
- (id)finalURLStringWithURLString:(id)arg1;
- (id)__finalParametersWithParams:(id)arg1;
- (void)processSuccessTask:(id)arg1 responseObject:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)post:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 enableHttps:(_Bool)arg6;
- (id)get:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5 enableHttps:(_Bool)arg6;
- (id)post:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)get:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)init;
- (id)showPostUserWantsWithUnionId:(id)arg1 size:(id)arg2 page:(id)arg3 interestType:(long long)arg4 sort:(id)arg5 sortField:(long long)arg6 success:(CDUnknownBlockType)arg7 notice:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (id)showPostCancelOrderWithOrderNo:(id)arg1 unionId:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostUserOrderDetailWithOrderNo:(id)arg1 userId:(id)arg2 unionId:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostTopUserEffectiveOrderListWithUnionId:(id)arg1 size:(long long)arg2 timestamp:(double)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostUserShowOrdersWithUnionId:(id)arg1 userId:(id)arg2 status:(long long)arg3 size:(long long)arg4 page:(long long)arg5 success:(CDUnknownBlockType)arg6 notice:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)showPostUserLookedWithUnionId:(id)arg1 size:(id)arg2 page:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostUserWantsWithUnionId:(id)arg1 size:(id)arg2 page:(id)arg3 sort:(id)arg4 success:(CDUnknownBlockType)arg5 notice:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)showPostSeatAreaWithScreeningsId:(id)arg1 width:(id)arg2 onlineId:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostRecordOutstockWithitemId:(id)arg1 showId:(id)arg2 priceId:(id)arg3 mobile:(id)arg4 success:(CDUnknownBlockType)arg5 notice:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)showChooseSeatWithSeatId:(id)arg1 areaId:(id)arg2 onlineId:(id)arg3 showId:(id)arg4 unionId:(id)arg5 success:(CDUnknownBlockType)arg6 notice:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)showPostSeatShowInfoByUserWitdhAreaId:(id)arg1 onlineId:(id)arg2 showId:(id)arg3 unionId:(id)arg4 success:(CDUnknownBlockType)arg5 notice:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)showPostQueryAreaNameWithScreeningsId:(id)arg1 areaId:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostShowsWithOnlineId:(id)arg1 unionId:(id)arg2 withPrice:(id)arg3 withH5SeatUrl:(id)arg4 success:(CDUnknownBlockType)arg5 notice:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)showPostQShowPriceStocksWithOnlineId:(id)arg1 showId:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostQueryItemScreeningsPricesWithOnlineId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostqueryItemsWithDate:(id)arg1 cityName:(id)arg2 onlineId:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostqueryItemWithItemTypePid:(id)arg1 cityName:(id)arg2 showStartTime:(id)arg3 showEndTime:(id)arg4 success:(CDUnknownBlockType)arg5 notice:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)showPostHotItemsWithCityName:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostItemTypesByPidSuccess:(CDUnknownBlockType)arg1 notice:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)showPostqueryItemWithKeyword:(id)arg1 cityName:(id)arg2 returnType:(long long)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostHotWordsWithSearchWords:(id)arg1 Success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostShowSetupReminderWithOnlineId:(id)arg1 phoneCode:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostShowDetailExtraInfoWithOnlineId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostqueryItemDetailInfoWithOnlineId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostAdWithCityName:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostPanicBuyWithCityName:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostTicketWithoutSeatSessionInfoByUserOnlineId:(id)arg1 withDate:(id)arg2 dateType:(long long)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostTicketWithoutSeatSessionScheduleInfoByUserOnlineId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostItemInterestWithItemId:(id)arg1 unionId:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostItemInterestRemoveWithItemId:(id)arg1 unionId:(id)arg2 type:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostItemInterestAddWithItemId:(id)arg1 unionId:(id)arg2 type:(id)arg3 rate:(long long)arg4 success:(CDUnknownBlockType)arg5 notice:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)showDetailShopListWitOnlineId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostWechatPaymentWithOrderNo:(id)arg1 unionId:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostRedBonusWithCurPage:(long long)arg1 pageSize:(long long)arg2 Success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostAddNoSeatTicketsAndCertificationWithOnlineId:(id)arg1 unionId:(id)arg2 showId:(id)arg3 tickets:(id)arg4 captcha:(id)arg5 success:(CDUnknownBlockType)arg6 notice:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)showPostCartGetConfirmationWithUnionId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostAddNoSeatTicketsWithOnlineId:(id)arg1 showId:(id)arg2 priceId:(id)arg3 num:(id)arg4 unionId:(id)arg5 success:(CDUnknownBlockType)arg6 notice:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)showPostOperPdaWithUnionId:(id)arg1 isModify:(_Bool)arg2 addressDic:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostDelPdaWithUnionId:(id)arg1 addressid:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostFindPdasByUuidWithUnionId:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostCitiesListWithSuccess:(CDUnknownBlockType)arg1 notice:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)showPostQueryLogisWithOrderNo:(id)arg1 success:(CDUnknownBlockType)arg2 notice:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)showPostOrderPaymentGetPaymentFormWithUnionId:(id)arg1 orderNo:(id)arg2 paymentType:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)showPostOrderCreateOrderWithUnionId:(id)arg1 orderDic:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)showPostOrderGetTPOrderDetailWithUnionId:(id)arg1 orderNo:(id)arg2 success:(CDUnknownBlockType)arg3 notice:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

