//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MBAssist : NSObject
{
    int _hasVideo;
    int _hasRedBag;
    long long _tempID;
    long long _videoLen;
    NSString *_redbagID;
    long long _redbagCount;
}

@property(nonatomic) int hasRedBag; // @synthesize hasRedBag=_hasRedBag;
@property(nonatomic) int hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) long long redbagCount; // @synthesize redbagCount=_redbagCount;
@property(retain, nonatomic) NSString *redbagID; // @synthesize redbagID=_redbagID;
@property(nonatomic) long long videoLen; // @synthesize videoLen=_videoLen;
@property(nonatomic) long long tempID; // @synthesize tempID=_tempID;
- (void).cxx_destruct;
- (void)reset;

@end
