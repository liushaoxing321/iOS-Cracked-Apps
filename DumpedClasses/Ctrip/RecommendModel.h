//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface RecommendModel : CTBusinessBean
{
    NSString *recommendText;
    int category;
    NSString *brandID;
    int cardInfoID;
    int recommendStatus;
}

@property(nonatomic) int recommendStatus; // @synthesize recommendStatus;
@property(nonatomic) int cardInfoID; // @synthesize cardInfoID;
@property(copy, nonatomic) NSString *brandID; // @synthesize brandID;
@property(nonatomic) int category; // @synthesize category;
@property(copy, nonatomic) NSString *recommendText; // @synthesize recommendText;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
