//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightInlandListTagContentV3InformationModel, FlightInlandListTagImageSizeV3InformationModel;

@interface FlightInlandListTagStyleV3InformationModel : CTBusinessBean
{
    int tagIndex;
    int tagType;
    FlightInlandListTagImageSizeV3InformationModel *sizeInforModel;
    FlightInlandListTagContentV3InformationModel *colorInforModel;
}

@property(retain, nonatomic) FlightInlandListTagContentV3InformationModel *colorInforModel; // @synthesize colorInforModel;
@property(retain, nonatomic) FlightInlandListTagImageSizeV3InformationModel *sizeInforModel; // @synthesize sizeInforModel;
@property(nonatomic) int tagType; // @synthesize tagType;
@property(nonatomic) int tagIndex; // @synthesize tagIndex;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
