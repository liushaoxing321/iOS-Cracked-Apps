//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary;

@interface FBBackgroundTimeState : FBValueObject <NSCopying, NSCoding>
{
    NSDate *_dateStateBegan;
    double _backgroundTimeSpent;
    double _activeTimeSpent;
    double _inactiveTimeSpent;
    double _timeContributionFromAPNS;
    double _timeContributionFromBGTasks;
    double _timeContributionFromBGFetch;
    double _timeContributionFromBGLocation;
    double _timeContributionFromBGURLSession;
    double _timeContributionFromAudio;
    double _timeContributionFromPushKit;
    double _timeContributionFromUnknown;
    NSDictionary *_pushKitTypeToTimeMap;
    NSDictionary *_backgroundTaskNameToTimeMap;
    NSDictionary *_backgroundTaskNameToExpireCountMap;
    long long _foregroundColdStarts;
    long long _backgroundColdStarts;
}

@property(readonly, nonatomic) long long backgroundColdStarts; // @synthesize backgroundColdStarts=_backgroundColdStarts;
@property(readonly, nonatomic) long long foregroundColdStarts; // @synthesize foregroundColdStarts=_foregroundColdStarts;
@property(readonly, copy, nonatomic) NSDictionary *backgroundTaskNameToExpireCountMap; // @synthesize backgroundTaskNameToExpireCountMap=_backgroundTaskNameToExpireCountMap;
@property(readonly, copy, nonatomic) NSDictionary *backgroundTaskNameToTimeMap; // @synthesize backgroundTaskNameToTimeMap=_backgroundTaskNameToTimeMap;
@property(readonly, copy, nonatomic) NSDictionary *pushKitTypeToTimeMap; // @synthesize pushKitTypeToTimeMap=_pushKitTypeToTimeMap;
@property(readonly, nonatomic) double timeContributionFromUnknown; // @synthesize timeContributionFromUnknown=_timeContributionFromUnknown;
@property(readonly, nonatomic) double timeContributionFromPushKit; // @synthesize timeContributionFromPushKit=_timeContributionFromPushKit;
@property(readonly, nonatomic) double timeContributionFromAudio; // @synthesize timeContributionFromAudio=_timeContributionFromAudio;
@property(readonly, nonatomic) double timeContributionFromBGURLSession; // @synthesize timeContributionFromBGURLSession=_timeContributionFromBGURLSession;
@property(readonly, nonatomic) double timeContributionFromBGLocation; // @synthesize timeContributionFromBGLocation=_timeContributionFromBGLocation;
@property(readonly, nonatomic) double timeContributionFromBGFetch; // @synthesize timeContributionFromBGFetch=_timeContributionFromBGFetch;
@property(readonly, nonatomic) double timeContributionFromBGTasks; // @synthesize timeContributionFromBGTasks=_timeContributionFromBGTasks;
@property(readonly, nonatomic) double timeContributionFromAPNS; // @synthesize timeContributionFromAPNS=_timeContributionFromAPNS;
@property(readonly, nonatomic) double inactiveTimeSpent; // @synthesize inactiveTimeSpent=_inactiveTimeSpent;
@property(readonly, nonatomic) double activeTimeSpent; // @synthesize activeTimeSpent=_activeTimeSpent;
@property(readonly, nonatomic) double backgroundTimeSpent; // @synthesize backgroundTimeSpent=_backgroundTimeSpent;
@property(readonly, copy, nonatomic) NSDate *dateStateBegan; // @synthesize dateStateBegan=_dateStateBegan;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDateStateBegan:(id)arg1 backgroundTimeSpent:(double)arg2 activeTimeSpent:(double)arg3 inactiveTimeSpent:(double)arg4 timeContributionFromAPNS:(double)arg5 timeContributionFromBGTasks:(double)arg6 timeContributionFromBGFetch:(double)arg7 timeContributionFromBGLocation:(double)arg8 timeContributionFromBGURLSession:(double)arg9 timeContributionFromAudio:(double)arg10 timeContributionFromPushKit:(double)arg11 timeContributionFromUnknown:(double)arg12 pushKitTypeToTimeMap:(id)arg13 backgroundTaskNameToTimeMap:(id)arg14 backgroundTaskNameToExpireCountMap:(id)arg15 foregroundColdStarts:(long long)arg16 backgroundColdStarts:(long long)arg17;
- (id)initWithCoder:(id)arg1;

@end

