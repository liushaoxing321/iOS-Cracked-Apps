//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KTVExceptionHandler : NSObject
{
    long long userSex;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareExceptionHandler;
@property(nonatomic) long long userSex; // @synthesize userSex;
- (id)makeUserInviteOpusEmptyViewWithType:(long long)arg1 ownerAccess:(_Bool)arg2;
- (id)makeUserOpusEmptyViewWithType:(long long)arg1 ownerAccess:(_Bool)arg2;
- (id)getNetErrorView;
- (id)showNetErrorViewInView:(id)arg1 module:(long long)arg2;
- (id)getEmptyViewWithType:(long long)arg1 ownerAccess:(_Bool)arg2;
- (id)showEmptyViewInView:(id)arg1 module:(long long)arg2 ownerAccess:(_Bool)arg3;

@end
