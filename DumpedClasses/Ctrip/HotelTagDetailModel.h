//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelTagInformationModel, NSString;

@interface HotelTagDetailModel : CTBusinessBean
{
    HotelTagInformationModel *_roomTagInfoModel;
    NSString *_tagDescription;
}

@property(copy, nonatomic) NSString *tagDescription; // @synthesize tagDescription=_tagDescription;
@property(retain, nonatomic) HotelTagInformationModel *roomTagInfoModel; // @synthesize roomTagInfoModel=_roomTagInfoModel;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
