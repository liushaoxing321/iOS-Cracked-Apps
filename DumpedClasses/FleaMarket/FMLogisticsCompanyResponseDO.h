//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMLogisticsCompanyDO, NSArray<FMLogisticsCompanyDO>, NSNumber, NSString;

@interface FMLogisticsCompanyResponseDO : NSObject
{
    _Bool _nextPage;
    FMLogisticsCompanyDO *_lastCompany;
    NSArray<FMLogisticsCompanyDO> *_hotCompany;
    NSArray<FMLogisticsCompanyDO> *_items;
    NSNumber *_totalCount;
    NSString *_serverTime;
}

@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSArray<FMLogisticsCompanyDO> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray<FMLogisticsCompanyDO> *hotCompany; // @synthesize hotCompany=_hotCompany;
@property(retain, nonatomic) FMLogisticsCompanyDO *lastCompany; // @synthesize lastCompany=_lastCompany;
- (void).cxx_destruct;

@end

