//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCoreObject.h"

#import "DISocketDataManagerDelegate.h"

@class NSString;

@interface SCarPushService : SCCoreObject <DISocketDataManagerDelegate>
{
    id <SCarPushMessageHandle> _messageHandler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SCarPushMessageHandle> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (void)collectPassengerCoordinate:(id)arg1;
- (void)recvmessageWithPushMsgModel:(id)arg1;
- (void)pullOrderPayresult:(id)arg1;
- (void)pullOrderStatus:(id)arg1;
- (_Bool)pushMsgMatchCurrentWanliuOrder:(id)arg1;
- (void)registerMessageHandler:(id)arg1;
- (void)globalPushService:(id)arg1 didReceiveMsg:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
