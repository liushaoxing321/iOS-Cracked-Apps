//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOwnerSubInfoModel : CTBusinessBean
{
    NSString *_iconURL;
    NSString *_titleName;
    NSString *_jumpURL;
}

@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

