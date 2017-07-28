//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DGPBusRealtimeInfoModel, DGPDepartureStopModel, DGPLineModel, DGPMetroBusModel, DGPRecinfoModel, NSAttributedString, NSString;

@interface DGPRealtimeBusModel : JSONModel
{
    _Bool _fail;
    _Bool _noData;
    _Bool _realtimeAvaliable;
    NSString *_city;
    NSString *_fingerprint;
    DGPDepartureStopModel *_departureStop;
    DGPDepartureStopModel *_arrivalStop;
    DGPRecinfoModel *_recInfo;
    DGPLineModel *_busline;
    DGPMetroBusModel *_oldBusline;
    NSString *_segmentViewRealParamStr;
    NSAttributedString *_rightTopAttributeString;
    NSAttributedString *_rightBottomAttributeString;
    NSAttributedString *_realTimeInfoAttributeString;
    DGPBusRealtimeInfoModel *_realTimeInfoModel;
    long long _scheduleValue;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) long long scheduleValue; // @synthesize scheduleValue=_scheduleValue;
@property(nonatomic) _Bool realtimeAvaliable; // @synthesize realtimeAvaliable=_realtimeAvaliable;
@property(nonatomic) _Bool noData; // @synthesize noData=_noData;
@property(nonatomic) _Bool fail; // @synthesize fail=_fail;
@property(retain, nonatomic) DGPBusRealtimeInfoModel *realTimeInfoModel; // @synthesize realTimeInfoModel=_realTimeInfoModel;
@property(retain, nonatomic) NSAttributedString *realTimeInfoAttributeString; // @synthesize realTimeInfoAttributeString=_realTimeInfoAttributeString;
@property(retain, nonatomic) NSAttributedString *rightBottomAttributeString; // @synthesize rightBottomAttributeString=_rightBottomAttributeString;
@property(retain, nonatomic) NSAttributedString *rightTopAttributeString; // @synthesize rightTopAttributeString=_rightTopAttributeString;
@property(retain, nonatomic) NSString *segmentViewRealParamStr; // @synthesize segmentViewRealParamStr=_segmentViewRealParamStr;
@property(retain, nonatomic) DGPMetroBusModel *oldBusline; // @synthesize oldBusline=_oldBusline;
@property(retain, nonatomic) DGPLineModel *busline; // @synthesize busline=_busline;
@property(retain, nonatomic) DGPRecinfoModel *recInfo; // @synthesize recInfo=_recInfo;
@property(retain, nonatomic) DGPDepartureStopModel *arrivalStop; // @synthesize arrivalStop=_arrivalStop;
@property(retain, nonatomic) DGPDepartureStopModel *departureStop; // @synthesize departureStop=_departureStop;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (id)uniqueRealtimeBusId;

@end
