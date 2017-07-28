//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Reachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)currentReachabilityStatus;
- (_Bool)isReachable;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus2;
- (long long)networkStatusNewForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end
