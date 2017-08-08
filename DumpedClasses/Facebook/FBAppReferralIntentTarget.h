//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIntentTarget.h>

#import "FBAppReferralDataModel-Protocol.h"

@class NSURL;

@interface FBAppReferralIntentTarget : FBIntentTarget <FBAppReferralDataModel>
{
    NSURL *_appReferralURL;
}

+ (id)appReferralTargetWithURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *appReferralURL; // @synthesize appReferralURL=_appReferralURL;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)fallbackURLs;
- (id)toDictionary;
- (id)previewImageURLString;
- (id)applinkURLString;
- (id)promotionText;
- (id)promotionSource;
- (id)promotionCode;
- (id)destination;
- (id)applicationIconURLString;
- (id)applicationName;
- (id)applicationID;
- (id)sponsoredContext;

@end
