//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QRBaseModel.h"

@class NSString;

@interface QROperateActivityModel : QRBaseModel
{
    long long _jumpType;
    NSString *_h5Url;
    long long _IosBookid;
    NSString *_IosCircleid;
    NSString *_banner;
}

@property(copy, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(copy, nonatomic) NSString *IosCircleid; // @synthesize IosCircleid=_IosCircleid;
@property(nonatomic) long long IosBookid; // @synthesize IosBookid=_IosBookid;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;

@end

