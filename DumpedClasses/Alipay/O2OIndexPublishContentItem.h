//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface O2OIndexPublishContentItem : NSObject
{
    _Bool _isAnwser;
    NSString *_imageUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_actionUrl;
    NSString *_seedId;
}

@property(nonatomic) NSString *seedId; // @synthesize seedId=_seedId;
@property(nonatomic) _Bool isAnwser; // @synthesize isAnwser=_isAnwser;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

@end
