//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSStatusbarObserver : NSObject
{
    _Bool _disable;
    long long _currentStyleBelowLockscreen;
}

+ (id)sharedObserver;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) long long currentStyleBelowLockscreen; // @synthesize currentStyleBelowLockscreen=_currentStyleBelowLockscreen;
- (void)restoreStatusbarTextStyle;
- (void)makeWhiteStatusbarTextStyle;
- (void)backupCurrentStyle;
- (void)makeBlackStatusbarTextStyle;
- (void)reset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observe;
- (id)init;

@end

