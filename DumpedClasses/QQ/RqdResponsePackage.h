//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RqdResponsePackage : NSObject
{
    BOOL result;
    int cmd;
    NSObject *sBuffer;
    NSString *gateWayIp;
    long long serverTime;
}

+ (id)initWithWUPModel:(struct ResponsePkg *)arg1;
@property(retain, nonatomic) NSString *gateWayIp; // @synthesize gateWayIp;
@property(retain, nonatomic) NSObject *sBuffer; // @synthesize sBuffer;
@property(nonatomic) long long serverTime; // @synthesize serverTime;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(nonatomic) BOOL result; // @synthesize result;
- (void)dealloc;

@end
