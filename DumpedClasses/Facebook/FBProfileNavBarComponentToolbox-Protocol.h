//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBUserSession;
@protocol FBProfileNavBarComponentTapResponder;

@protocol FBProfileNavBarComponentToolbox <NSObject>
@property(readonly, nonatomic) id <FBProfileNavBarComponentTapResponder> navBarComponentTapResponder;
@property(readonly, nonatomic) FBUserSession *session;
@end
