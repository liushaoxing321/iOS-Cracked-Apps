//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCBubbleHandlerProtocol.h"

@class NSString;

@interface MCChatBubbleHandler : NSObject <MCBubbleHandlerProtocol>
{
    id <MCChatPageDisplayPresenterForCellAndBubbleInterface> _presenterContext;
    id <MCCellModeProtocol> _currentCellObject;
    id <TBIMMessageServiceAdapter> _currentMessageSvr;
    id <MCCellModeProtocol> _currentMenuCellObject;
}

@property(retain, nonatomic) id <MCCellModeProtocol> currentMenuCellObject; // @synthesize currentMenuCellObject=_currentMenuCellObject;
@property(retain, nonatomic) id <TBIMMessageServiceAdapter> currentMessageSvr; // @synthesize currentMessageSvr=_currentMessageSvr;
@property(retain, nonatomic) id <MCCellModeProtocol> currentCellObject; // @synthesize currentCellObject=_currentCellObject;
@property(nonatomic) __weak id <MCChatPageDisplayPresenterForCellAndBubbleInterface> presenterContext; // @synthesize presenterContext=_presenterContext;
- (void).cxx_destruct;
- (id)getUserInfoWithModel:(id)arg1;
- (void)forwardingMessage:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)copyMessage:(id)arg1;
- (void)stopAction;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showMenuWithCellModel:(id)arg1 bubble:(id)arg2;
- (void)actionWithCellModel:(id)arg1 bubble:(id)arg2 context:(id)arg3 actionType:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

