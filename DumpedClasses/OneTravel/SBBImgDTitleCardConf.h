//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBCardConf.h"

@class NSString;

@interface SBBImgDTitleCardConf : SBBCardConf
{
    NSString *_imageName;
    NSString *_title;
    NSString *_content;
    NSString *_targetURLStr;
    NSString *_remoteImageUrl;
    NSString *_iconURLstr;
}

@property(retain, nonatomic) NSString *iconURLstr; // @synthesize iconURLstr=_iconURLstr;
@property(retain, nonatomic) NSString *remoteImageUrl; // @synthesize remoteImageUrl=_remoteImageUrl;
@property(copy, nonatomic) NSString *targetURLStr; // @synthesize targetURLStr=_targetURLStr;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;

@end

