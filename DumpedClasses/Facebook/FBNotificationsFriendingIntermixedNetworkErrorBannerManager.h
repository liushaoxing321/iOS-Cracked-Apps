//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBFeedNetworkErrorBannerDelegate-Protocol.h"
#import "FBReachabilityListener-Protocol.h"

@class FBFeedBannerContainerView, FBFeedBannerPresenter, FBFeedNetworkErrorBanner, FBReachabilityAnnouncer, NSString;

@interface FBNotificationsFriendingIntermixedNetworkErrorBannerManager : NSObject <FBFeedNetworkErrorBannerDelegate, FBReachabilityListener>
{
    FBFeedBannerContainerView *_bannerContainer;
    FBFeedBannerPresenter *_bannerPresenter;
    FBFeedNetworkErrorBanner *_networkErrorBanner;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
}

- (void).cxx_destruct;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithContainingView:(id)arg1 bannerContainerFactory:(CDUnknownBlockType)arg2 bannerPresenterFactory:(CDUnknownBlockType)arg3 networkErrorBannerFactory:(CDUnknownBlockType)arg4 reachabilityAnnouncerFactory:(CDUnknownBlockType)arg5;
- (id)initWithContainingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
