//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface NBDebugAppConfig : NSObject
{
    id <APConfigService> _configService;
    NSDate *_appModeBeginTime;
}

@property(retain, nonatomic) NSDate *appModeBeginTime; // @synthesize appModeBeginTime=_appModeBeginTime;
@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
- (void).cxx_destruct;
- (id)stringValue:(id)arg1;
- (_Bool)enableDebugRpc;
- (_Bool)enableNebulaDebugMode;
- (id)init;

@end
