//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MidasIAPBaseReq : NSObject
{
    _Bool _depositGameCoin;
    int reqType;
    NSString *offerId;
    NSString *openId;
    NSString *openKey;
    NSString *sessionId;
    NSString *sessionType;
    NSString *zoneId;
    NSString *pf;
    NSString *pfKey;
    NSDictionary *dictExtend;
    NSString *_varItem;
    NSString *_extend;
}

@property(copy, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(copy, nonatomic) NSString *varItem; // @synthesize varItem=_varItem;
@property(nonatomic) _Bool depositGameCoin; // @synthesize depositGameCoin=_depositGameCoin;
@property(retain, nonatomic) NSDictionary *dictExtend; // @synthesize dictExtend;
@property(copy, nonatomic) NSString *pfKey; // @synthesize pfKey;
@property(copy, nonatomic) NSString *pf; // @synthesize pf;
@property(copy, nonatomic) NSString *zoneId; // @synthesize zoneId;
@property(copy, nonatomic) NSString *sessionType; // @synthesize sessionType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey;
@property(copy, nonatomic) NSString *openId; // @synthesize openId;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId;
@property(nonatomic) int reqType; // @synthesize reqType;
- (void).cxx_destruct;
- (_Bool)validateParams;
- (id)init;

@end

