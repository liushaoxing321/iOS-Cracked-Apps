//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSMutableArray<FAProvinceCityInfo>, NSString;

@interface FAProvinceCity : FAModel
{
    NSString *_areaId;
    NSString *_areaName;
    NSMutableArray<FAProvinceCityInfo> *_cityList;
}

@property(retain, nonatomic) NSMutableArray<FAProvinceCityInfo> *cityList; // @synthesize cityList=_cityList;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(copy, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
- (void).cxx_destruct;

@end

