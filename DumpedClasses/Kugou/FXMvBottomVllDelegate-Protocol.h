//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXSMvComment, NSString;

@protocol FXMvBottomVllDelegate <NSObject>
- (double)bottomVllGetMvCurrentTime;

@optional
- (void)bottomVllToLogin;
- (void)bottomVllNeedTips:(NSString *)arg1;
- (void)bottomVllKeyboardWillDismiss;
- (void)bottomVllKeyboardWillAppear;
- (void)didReceiveComment:(FXSMvComment *)arg1;
- (void)didSentComment:(FXSMvComment *)arg1;
@end
