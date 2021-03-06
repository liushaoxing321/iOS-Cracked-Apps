//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLRequestModelDelegate.h"

@class NSString, QLPropertyActPopModel, QLPropertyPayModel, UIViewController;

@interface QLPropertyActPopMgr : NSObject <QLRequestModelDelegate>
{
    id _delegate;
    UIViewController *_parrentCtl;
    QLPropertyActPopModel *_actPopModel;
    QLPropertyPayModel *_payModel;
}

@property(retain, nonatomic) QLPropertyPayModel *payModel; // @synthesize payModel=_payModel;
@property(retain, nonatomic) QLPropertyActPopModel *actPopModel; // @synthesize actPopModel=_actPopModel;
@property(nonatomic) __weak UIViewController *parrentCtl; // @synthesize parrentCtl=_parrentCtl;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startGetGift;
- (void)loginStateChange:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)askActPopAction:(long long)arg1 withParentCtl:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

