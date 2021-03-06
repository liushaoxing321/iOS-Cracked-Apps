//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WopcBasicRequestModelDelegate.h"

@class NSString, WopcBasicRequestModel, WopcLoginAdapter, WopcSession;

@interface WopcUserAuth : NSObject <WopcBasicRequestModelDelegate>
{
    WopcLoginAdapter *_login;
    WopcBasicRequestModel *_request;
    WopcBasicRequestModel *_request1;
    NSString *_appkey;
    NSString *_domain;
    NSString *_jsessionId;
    NSString *_csrfToken;
    CDUnknownBlockType _completeBlock;
    WopcSession *_session;
}

@property(retain, nonatomic) WopcSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSString *csrfToken; // @synthesize csrfToken=_csrfToken;
@property(retain, nonatomic) NSString *jsessionId; // @synthesize jsessionId=_jsessionId;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) WopcBasicRequestModel *request1; // @synthesize request1=_request1;
@property(retain, nonatomic) WopcBasicRequestModel *request; // @synthesize request=_request;
@property(retain, nonatomic) WopcLoginAdapter *login; // @synthesize login=_login;
- (void).cxx_destruct;
- (void)modelDidCancelLoad:(id)arg1;
- (void)modelDidFailedLoad:(id)arg1;
- (void)modelDidFinishLoad:(id)arg1;
- (void)showAuthDialog:(id)arg1;
- (double)currentTimeInterval;
- (_Bool)timeIsExpire:(id)arg1;
- (void)step_3;
- (void)step_2;
- (void)step_1:(_Bool)arg1;
- (void)authWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

