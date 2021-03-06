//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol EBDPIndicatorDelegate;

@interface EBDPTransactionService : NSObject
{
    id <EBDPIndicatorDelegate> ebdpDelegate;
    NSString *_businessId;
    NSString *_encryptUrl;
    NSString *_loginUrl;
    NSMutableDictionary *_loginParams;
    NSString *_logoutUrl;
    NSMutableDictionary *_logoutParams;
    id _delegate;
    SEL _successCallback;
    SEL _failureCallback;
    id _delegate1;
    SEL _successTranCallback;
    SEL _failureTranCallback;
    NSMutableDictionary *_headerFields;
}

+ (void)test;
+ (id)decodeParam:(id)arg1;
+ (id)makeBusinessLoginParams:(id)arg1 businessId:(id)arg2;
+ (id)getDecryptS3:(id)arg1;
+ (id)getXMLDictionary:(id)arg1;
+ (void)addEbdpParams:(id)arg1 businessId:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(nonatomic) SEL failureTranCallback; // @synthesize failureTranCallback=_failureTranCallback;
@property(nonatomic) SEL successTranCallback; // @synthesize successTranCallback=_successTranCallback;
@property(retain, nonatomic) id delegate1; // @synthesize delegate1=_delegate1;
@property(nonatomic) SEL failureCallback; // @synthesize failureCallback=_failureCallback;
@property(nonatomic) SEL successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *logoutParams; // @synthesize logoutParams=_logoutParams;
@property(retain, nonatomic) NSString *logoutUrl; // @synthesize logoutUrl=_logoutUrl;
@property(retain, nonatomic) NSMutableDictionary *loginParams; // @synthesize loginParams=_loginParams;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl=_encryptUrl;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) id <EBDPIndicatorDelegate> ebdpDelegate; // @synthesize ebdpDelegate;
- (void).cxx_destruct;
- (void)addHTTPRequestHeader:(id)arg1;
- (void)logoutBusinessRequest:(id)arg1;
- (void)logoutCurrentBusinessRequest;
- (void)transactionFailure:(id)arg1;
- (void)transactionSuccess:(id)arg1 responseOperation:(id)arg2;
- (void)logoutBusinessSuccess:(id)arg1 responseOperation:(id)arg2;
- (void)logoutBusiness:(id)arg1;
- (void)loginBusinessFailure:(id)arg1;
- (void)loginBusinessSuccess:(id)arg1 responseOperation:(id)arg2;
- (void)loginBusiness:(id)arg1 responseOperation:(id)arg2;
- (void)loginEPassFailure:(id)arg1;
- (void)loginEPass;
- (void)switchBusinessService:(id)arg1 encryptUrl:(id)arg2 loginUrl:(id)arg3 loginParams:(id)arg4 logoutUrl:(id)arg5 logoutParams:(id)arg6 delegate:(id)arg7 onSuccess:(SEL)arg8 onFailure:(SEL)arg9;
- (id)initWithDelegate:(id)arg1;
- (void)sendBusinessRequestEncrypt:(id)arg1 params:(id)arg2 delegate:(id)arg3 onSuccess:(SEL)arg4 onFailure:(SEL)arg5;

@end

