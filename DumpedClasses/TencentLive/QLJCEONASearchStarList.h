//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEONASearchStarList : JceObjectV2
{
    int jcev2_p_4_o_listType;
    NSArray *jcev2_p_0_r_starList__b0x9i_VOQLJCEActorInfo;
    NSString *jcev2_p_1_o_desc;
    NSString *jcev2_p_2_o_reportKey;
    NSString *jcev2_p_3_o_reportParams;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_listType, setter=setJce_listType:) int jcev2_p_4_o_listType; // @synthesize jcev2_p_4_o_listType;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_3_o_reportParams; // @synthesize jcev2_p_3_o_reportParams;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_2_o_reportKey; // @synthesize jcev2_p_2_o_reportKey;
@property(retain, nonatomic, getter=jce_desc, setter=setJce_desc:) NSString *jcev2_p_1_o_desc; // @synthesize jcev2_p_1_o_desc;
@property(retain, nonatomic, getter=jce_starList, setter=setJce_starList:) NSArray *jcev2_p_0_r_starList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_0_r_starList__b0x9i_VOQLJCEActorInfo;
- (void).cxx_destruct;
- (id)init;

@end
