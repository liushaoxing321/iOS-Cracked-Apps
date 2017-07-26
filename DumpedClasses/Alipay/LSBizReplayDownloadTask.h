//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSBizReplayDownloadTask : NSObject
{
    NSString *_cloudId;
    NSString *_business;
    double _startTime;
    double _endTime;
    CDUnknownBlockType _downloadBlock;
    long long _maxRetryTimes;
}

@property(nonatomic) long long maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
- (void).cxx_destruct;
- (id)initWithCloudId:(id)arg1 downloadBlock:(CDUnknownBlockType)arg2;
- (id)initWithCloudId:(id)arg1;

@end
