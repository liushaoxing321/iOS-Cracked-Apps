//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEAddOneBlacklistResponse : JceObjectV2
{
    int jcev2_p_0_r_iVerson;
    int jcev2_p_1_r_ddwUin;
    int jcev2_p_2_r_iRetCode;
    NSString *jcev2_p_3_o_strErrMsg;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strErrMsg, setter=setJce_strErrMsg:) NSString *jcev2_p_3_o_strErrMsg; // @synthesize jcev2_p_3_o_strErrMsg;
@property(nonatomic, getter=jce_iRetCode, setter=setJce_iRetCode:) int jcev2_p_2_r_iRetCode; // @synthesize jcev2_p_2_r_iRetCode;
@property(nonatomic, getter=jce_ddwUin, setter=setJce_ddwUin:) int jcev2_p_1_r_ddwUin; // @synthesize jcev2_p_1_r_ddwUin;
@property(nonatomic, getter=jce_iVerson, setter=setJce_iVerson:) int jcev2_p_0_r_iVerson; // @synthesize jcev2_p_0_r_iVerson;
- (void).cxx_destruct;
- (id)init;

@end

