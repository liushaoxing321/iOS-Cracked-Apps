//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BusinessPayment : NSObject
{
}

- (id)sendServerByRequestEntity:(id)arg1 BusinessBeanClass:(Class)arg2;
- (id)sendApplePayInfo:(id)arg1;
- (id)sendGetPaymentNotice:(id)arg1;
- (id)sendPayCodeSetStatus:(id)arg1;
- (id)sendPayCodeAllocate:(id)arg1;
- (id)sendCodePayCSubmit:(id)arg1;
- (id)sendQueryCodePayStatus:(id)arg1;
- (id)sendGetPaySeq:(id)arg1;
- (id)sendSetPaySeq:(id)arg1;
- (id)sendShowUserInfo:(id)arg1;
- (id)sendSaveUserInfo:(id)arg1;
- (id)sendGetAliInfo:(id)arg1;
- (id)sendCheckWechatStatus:(id)arg1;
- (id)sendSetTouchPay:(id)arg1;
- (id)sendGetExtendData:(id)arg1;
- (id)sendStageInfoQuery:(id)arg1;
- (id)sendPaymentRateQuery:(id)arg1;
- (id)sendGetPayListInfo:(id)arg1;
- (id)sendPaymentQueryPayResult:(id)arg1;
- (id)sendGetRefundInfo:(id)arg1;
- (id)verifyTicket:(id)arg1;
- (id)sendBindPaySubmit:(id)arg1;
- (id)sendGetBindPayList:(id)arg1;
- (id)BankDataUpdate:(id)arg1;
- (id)checkVerifyCode:(id)arg1;
- (id)sendVerifyCode:(id)arg1;
- (id)queryAccountInfo:(id)arg1;
- (id)queryCardInfo:(id)arg1;
- (id)querySubPayInfo:(id)arg1;
- (id)queryTicketInfo:(id)arg1;
- (id)payServiceMap:(id)arg1;
- (id)paymentCreditCardUpdate:(id)arg1;
- (id)paymentSmsCreate:(id)arg1;
- (id)paymentSubmitSearch:(id)arg1;
- (id)paymentListSearch:(id)arg1;
- (id)execCommand:(id)arg1;

@end
