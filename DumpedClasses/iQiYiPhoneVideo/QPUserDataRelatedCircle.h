//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface QPUserDataRelatedCircle : MTLModel <MTLJSONSerializing>
{
    NSNumber *_circleId;
    long long _circleType;
    NSString *_circleName;
    NSString *_circleIcon;
    NSNumber *_showType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *circleIcon; // @synthesize circleIcon=_circleIcon;
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName=_circleName;
@property(nonatomic) long long circleType; // @synthesize circleType=_circleType;
@property(retain, nonatomic) NSNumber *circleId; // @synthesize circleId=_circleId;
- (void).cxx_destruct;

@end

