//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHCommonResult.h"

@class NSArray, NSString;

@interface WEALTHFundAutoTransferInQueryRuleResult : WEALTHCommonResult
{
    NSString *_memo;
    NSString *_lastStatus;
    NSString *_nextExecuteDayView;
    NSString *_ruleId;
    NSArray *_autoTransferResultInfos;
}

+ (Class)autoTransferResultInfosElementClass;
@property(retain, nonatomic) NSArray *autoTransferResultInfos; // @synthesize autoTransferResultInfos=_autoTransferResultInfos;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) NSString *nextExecuteDayView; // @synthesize nextExecuteDayView=_nextExecuteDayView;
@property(retain, nonatomic) NSString *lastStatus; // @synthesize lastStatus=_lastStatus;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
- (void).cxx_destruct;

@end
