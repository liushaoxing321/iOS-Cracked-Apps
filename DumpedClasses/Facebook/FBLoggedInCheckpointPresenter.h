//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBLoggedInCheckpointPresenting-Protocol.h"

@class NSString;
@protocol FBProvider;

@interface FBLoggedInCheckpointPresenter : NSObject <FBLoggedInCheckpointPresenting>
{
    id <FBProvider> _appSessionControllerProvider;
}

- (void).cxx_destruct;
- (void)loadCheckpointReactNativeView:(CDUnknownBlockType)arg1;
- (void)showCheckpointWebView:(id)arg1 whenClosed:(CDUnknownBlockType)arg2;
- (id)initWithAppSessionControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
