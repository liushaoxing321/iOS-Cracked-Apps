//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightInlandPositionInformationModel, NSMutableArray;

@interface FlightListSearchV3Request : CTBusinessBean
{
    int tripType;
    long long flag;
    NSMutableArray *flightSearchItemList;
    int seatGrade;
    NSMutableArray *iDList;
    NSMutableArray *aBTInfoList;
    FlightInlandPositionInformationModel *positionInfoModel;
}

@property(retain, nonatomic) FlightInlandPositionInformationModel *positionInfoModel; // @synthesize positionInfoModel;
@property(retain, nonatomic) NSMutableArray *aBTInfoList; // @synthesize aBTInfoList;
@property(retain, nonatomic) NSMutableArray *iDList; // @synthesize iDList;
@property(nonatomic) int seatGrade; // @synthesize seatGrade;
@property(retain, nonatomic) NSMutableArray *flightSearchItemList; // @synthesize flightSearchItemList;
@property(nonatomic) long long flag; // @synthesize flag;
@property(nonatomic) int tripType; // @synthesize tripType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

