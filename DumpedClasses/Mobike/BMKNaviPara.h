//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMKPlanNode, NSString;

@interface BMKNaviPara : NSObject
{
    BMKPlanNode *_startPoint;
    BMKPlanNode *_endPoint;
    int _naviType;
    NSString *_appScheme;
    NSString *_appName;
    _Bool _isSupportWeb;
}

@property(nonatomic) _Bool isSupportWeb; // @synthesize isSupportWeb=_isSupportWeb;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(nonatomic) int naviType; // @synthesize naviType=_naviType;
@property(retain, nonatomic) BMKPlanNode *endPoint; // @synthesize endPoint=_endPoint;
@property(retain, nonatomic) BMKPlanNode *startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (id)init;

@end

