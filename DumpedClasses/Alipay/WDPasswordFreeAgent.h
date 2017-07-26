//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DirectConnectionDelegate.h"
#import "InteractiveConnectionDelegate.h"

@class NSData, NSString, WDBleDevice;

@interface WDPasswordFreeAgent : NSObject <DirectConnectionDelegate, InteractiveConnectionDelegate>
{
    int _connectionMode;
    int _processType;
    WDBleDevice *_targetDevice;
    id <WDProcessDelegate> _delegate;
    id <WDPeripheralDelegate> _connector;
    id <WDAuthenticatorDelegate> _owner;
    SEL _callback;
    NSData *_command;
}

+ (id)agentWith:(int)arg1 processType:(int)arg2 owner:(id)arg3 callback:(SEL)arg4 andDelegate:(id)arg5 param:(id)arg6;
@property(nonatomic) int processType; // @synthesize processType=_processType;
@property(nonatomic) int connectionMode; // @synthesize connectionMode=_connectionMode;
@property(retain, nonatomic) NSData *command; // @synthesize command=_command;
@property(nonatomic) SEL callback; // @synthesize callback=_callback;
@property(nonatomic) __weak id <WDAuthenticatorDelegate> owner; // @synthesize owner=_owner;
@property(retain, nonatomic) id <WDPeripheralDelegate> connector; // @synthesize connector=_connector;
@property(nonatomic) __weak id <WDProcessDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WDBleDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)onResult:(id)arg1;
- (void)onCommandSended:(id)arg1;
- (void)sendCommand:(id)arg1;
- (void)onTargetDeviceConnected:(id)arg1;
- (_Bool)isTargetReadCharacteristic:(id)arg1;
- (_Bool)isTargetWriteCharacteristic:(id)arg1;
- (_Bool)isTargetService:(id)arg1;
- (void)onDeviceFound:(id)arg1;
- (_Bool)isTargetDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
