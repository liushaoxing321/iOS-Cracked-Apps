//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@class ImmPayDevAuthSession;

@interface ImmPayPluginFpAuth : ImmPayEventPlugin
{
    ImmPayDevAuthSession *_session;
}

+ (void)load;
@property(retain, nonatomic) ImmPayDevAuthSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)onFingerAuth:(id)arg1 param:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end

