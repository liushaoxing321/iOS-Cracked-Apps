//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQMobileCenterPrimaryViewItem.h"

#import "MQQCallBlockerCenterDelegate-Protocol.h"

@class NSString;

@interface MQQMobileCenterCallBlockerViewItem : MQQMobileCenterPrimaryViewItem <MQQCallBlockerCenterDelegate>
{
    _Bool _updating;
    CDUnknownBlockType _updateCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
- (void)callBlockerCenterDidCancelCheckingIdentification:(id)arg1;
- (void)callBlockerCenter:(id)arg1 didCheckIdentificationWithError:(id)arg2;
- (_Bool)_shouldDisplayUpdate;
- (void)_updateContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateBadge;
- (void)update;
- (void)entrancesManagerMoreEntranceDidUpdate:(id)arg1;
- (void)callBlockerLocationCheckerDetainedProvinceDidChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)baseImageName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
