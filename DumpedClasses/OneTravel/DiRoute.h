//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DiRoute : NSObject
{
    int _intersectionType;
    NSString *_currentRoadName;
    NSString *_nextRoadName;
    NSString *_distance;
    NSString *_totalDistanceLeft;
    NSString *_timeLeft;
    NSString *_intersectionImageName;
}

@property(nonatomic) int intersectionType; // @synthesize intersectionType=_intersectionType;
@property(retain, nonatomic) NSString *intersectionImageName; // @synthesize intersectionImageName=_intersectionImageName;
@property(retain, nonatomic) NSString *timeLeft; // @synthesize timeLeft=_timeLeft;
@property(retain, nonatomic) NSString *totalDistanceLeft; // @synthesize totalDistanceLeft=_totalDistanceLeft;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *nextRoadName; // @synthesize nextRoadName=_nextRoadName;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
- (void).cxx_destruct;
- (id)baseRoute;

@end
