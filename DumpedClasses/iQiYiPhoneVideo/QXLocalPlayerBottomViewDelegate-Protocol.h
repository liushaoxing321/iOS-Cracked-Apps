//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QXShortPlayBottomView;

@protocol QXLocalPlayerBottomViewDelegate <NSObject>

@optional
- (void)localPlayerBottomView:(QXShortPlayBottomView *)arg1 didClickLikeBtn:(_Bool)arg2;
- (void)localPlayerBottomView:(QXShortPlayBottomView *)arg1 didClickFollowBtn:(_Bool)arg2;
- (void)localPlayerBottomView:(QXShortPlayBottomView *)arg1 didClickAvatar:(NSString *)arg2;
@end

