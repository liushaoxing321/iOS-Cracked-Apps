//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJumpOperaionPageModel : JceObjectV2
{
    _Bool jcev2_p_3_o_isFloatBar;
    short jcev2_p_4_o_uiType;
    short jcev2_p_5_o_cacheType;
    NSString *jcev2_p_0_r_type;
    NSString *jcev2_p_1_r_dataKey;
    NSString *jcev2_p_2_o_title;
    NSString *jcev2_p_6_o_aid;
    NSString *jcev2_p_7_o_reportShowupKey;
    NSString *jcev2_p_8_o_reportShowupParams;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportShowupParams, setter=setJce_reportShowupParams:) NSString *jcev2_p_8_o_reportShowupParams; // @synthesize jcev2_p_8_o_reportShowupParams;
@property(retain, nonatomic, getter=jce_reportShowupKey, setter=setJce_reportShowupKey:) NSString *jcev2_p_7_o_reportShowupKey; // @synthesize jcev2_p_7_o_reportShowupKey;
@property(retain, nonatomic, getter=jce_aid, setter=setJce_aid:) NSString *jcev2_p_6_o_aid; // @synthesize jcev2_p_6_o_aid;
@property(nonatomic, getter=jce_cacheType, setter=setJce_cacheType:) short jcev2_p_5_o_cacheType; // @synthesize jcev2_p_5_o_cacheType;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) short jcev2_p_4_o_uiType; // @synthesize jcev2_p_4_o_uiType;
@property(nonatomic, getter=jce_isFloatBar, setter=setJce_isFloatBar:) _Bool jcev2_p_3_o_isFloatBar; // @synthesize jcev2_p_3_o_isFloatBar;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_2_o_title; // @synthesize jcev2_p_2_o_title;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_r_dataKey; // @synthesize jcev2_p_1_r_dataKey;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
- (void).cxx_destruct;
- (id)init;

@end

