//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSArray<TaxiExtraFeeModel><Optional>, NSNumber<Optional>, NSString<Optional>;

@interface TaxiOrderInfoModel : TaxiBaseModel
{
    NSString<Optional> *_oid;
    NSString<Optional> *_from_name;
    NSString<Optional> *_from_address;
    NSString<Optional> *_to_name;
    NSString<Optional> *_to_address;
    NSString<Optional> *_time;
    NSNumber<Optional> *_tip;
    NSString<Optional> *_tip_fee;
    NSString<Optional> *_status;
    NSNumber<Optional> *_area;
    NSNumber<Optional> *_type;
    NSString<Optional> *_flat;
    NSString<Optional> *_flng;
    NSString<Optional> *_tlat;
    NSString<Optional> *_tlng;
    NSString<Optional> *_lat;
    NSString<Optional> *_lng;
    NSString<Optional> *_dlng;
    NSString<Optional> *_dlat;
    NSNumber<Optional> *_inputType;
    NSString<Optional> *_createTime;
    NSString<Optional> *_striveTime;
    NSString<Optional> *_setuptime;
    NSString<Optional> *_complaintTime;
    NSString<Optional> *_terminateTime;
    NSString<Optional> *_extra_info;
    NSNumber<Optional> *_extra_waittime;
    NSNumber<Optional> *_incar;
    NSString<Optional> *_ekey;
    NSNumber<Optional> *_driver_num;
    NSNumber<Optional> *_timeout;
    NSArray<TaxiExtraFeeModel><Optional> *_extra_fee;
    NSString<Optional> *_from;
    NSString<Optional> *_to;
}

@property(copy, nonatomic) NSString<Optional> *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString<Optional> *from; // @synthesize from=_from;
@property(copy, nonatomic) NSArray<TaxiExtraFeeModel><Optional> *extra_fee; // @synthesize extra_fee=_extra_fee;
@property(retain, nonatomic) NSNumber<Optional> *timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSNumber<Optional> *driver_num; // @synthesize driver_num=_driver_num;
@property(copy, nonatomic) NSString<Optional> *ekey; // @synthesize ekey=_ekey;
@property(retain, nonatomic) NSNumber<Optional> *incar; // @synthesize incar=_incar;
@property(retain, nonatomic) NSNumber<Optional> *extra_waittime; // @synthesize extra_waittime=_extra_waittime;
@property(copy, nonatomic) NSString<Optional> *extra_info; // @synthesize extra_info=_extra_info;
@property(copy, nonatomic) NSString<Optional> *terminateTime; // @synthesize terminateTime=_terminateTime;
@property(copy, nonatomic) NSString<Optional> *complaintTime; // @synthesize complaintTime=_complaintTime;
@property(copy, nonatomic) NSString<Optional> *setuptime; // @synthesize setuptime=_setuptime;
@property(copy, nonatomic) NSString<Optional> *striveTime; // @synthesize striveTime=_striveTime;
@property(copy, nonatomic) NSString<Optional> *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSNumber<Optional> *inputType; // @synthesize inputType=_inputType;
@property(copy, nonatomic) NSString<Optional> *dlat; // @synthesize dlat=_dlat;
@property(copy, nonatomic) NSString<Optional> *dlng; // @synthesize dlng=_dlng;
@property(copy, nonatomic) NSString<Optional> *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString<Optional> *lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString<Optional> *tlng; // @synthesize tlng=_tlng;
@property(copy, nonatomic) NSString<Optional> *tlat; // @synthesize tlat=_tlat;
@property(copy, nonatomic) NSString<Optional> *flng; // @synthesize flng=_flng;
@property(copy, nonatomic) NSString<Optional> *flat; // @synthesize flat=_flat;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString<Optional> *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString<Optional> *tip_fee; // @synthesize tip_fee=_tip_fee;
@property(retain, nonatomic) NSNumber<Optional> *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(copy, nonatomic) NSString<Optional> *oid; // @synthesize oid=_oid;
- (void).cxx_destruct;

@end

