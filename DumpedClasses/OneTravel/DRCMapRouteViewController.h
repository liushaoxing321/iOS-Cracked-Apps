//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseViewController.h"

#import "ONESBaseMapEntranceAware.h"
#import "ONESBaseMapEntranceDelegate.h"

@class DRCFetchCarPointModel, DRCMapRouteBottomView, DRCPOIEntityModel, DRCRouteBussiness, DRCServicePointRecommendedView, NSString, ONESBaseMapEntrance;

@interface DRCMapRouteViewController : DRCBaseViewController <ONESBaseMapEntranceAware, ONESBaseMapEntranceDelegate>
{
    DRCFetchCarPointModel *_fetchCarPoint;
    CDUnknownBlockType _locInfoChooseBlock;
    ONESBaseMapEntrance *_mapEntrance;
    DRCMapRouteBottomView *_bottomView;
    DRCServicePointRecommendedView *_spView;
    DRCRouteBussiness *_routeBussiness;
    DRCPOIEntityModel *_startPlace;
    long long _requestType;
}

@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) DRCPOIEntityModel *startPlace; // @synthesize startPlace=_startPlace;
@property(retain, nonatomic) DRCRouteBussiness *routeBussiness; // @synthesize routeBussiness=_routeBussiness;
@property(retain, nonatomic) DRCServicePointRecommendedView *spView; // @synthesize spView=_spView;
@property(retain, nonatomic) DRCMapRouteBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) ONESBaseMapEntrance *mapEntrance; // @synthesize mapEntrance=_mapEntrance;
@property(copy, nonatomic) CDUnknownBlockType locInfoChooseBlock; // @synthesize locInfoChooseBlock=_locInfoChooseBlock;
@property(retain, nonatomic) DRCFetchCarPointModel *fetchCarPoint; // @synthesize fetchCarPoint=_fetchCarPoint;
- (void).cxx_destruct;
- (_Bool)disableGuesture;
- (id)availableMaps;
- (void)navigationWithMap:(id)arg1;
- (void)didiLocationManagerDidUpdateDistance:(double)arg1 distanceFilter:(double)arg2;
- (void)addAnnotations;
- (void)createMapView;
- (void)createBottomView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
