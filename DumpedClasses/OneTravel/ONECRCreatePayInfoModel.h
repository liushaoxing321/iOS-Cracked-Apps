//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface ONECRCreatePayInfoModel : JSONModel
{
    NSString<Optional> *_paymentmode;
    NSString<Optional> *_prepayid;
    NSString<Optional> *_partnerid;
    NSString<Optional> *_appid;
    NSString<Optional> *_noncestr;
    NSString<Optional> *_package;
    NSString<Optional> *_timestamp;
    NSString<Optional> *_sign;
    NSString<Optional> *_appkey;
    NSString<Optional> *_pay_string;
}

@property(copy, nonatomic) NSString<Optional> *pay_string; // @synthesize pay_string=_pay_string;
@property(copy, nonatomic) NSString<Optional> *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString<Optional> *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString<Optional> *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString<Optional> *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString<Optional> *noncestr; // @synthesize noncestr=_noncestr;
@property(copy, nonatomic) NSString<Optional> *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString<Optional> *partnerid; // @synthesize partnerid=_partnerid;
@property(copy, nonatomic) NSString<Optional> *prepayid; // @synthesize prepayid=_prepayid;
@property(copy, nonatomic) NSString<Optional> *paymentmode; // @synthesize paymentmode=_paymentmode;
- (void).cxx_destruct;

@end
