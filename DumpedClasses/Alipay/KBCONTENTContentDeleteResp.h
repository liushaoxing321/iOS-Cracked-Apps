//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KBCONTENTApiResult.h"

@class NSDictionary;

@interface KBCONTENTContentDeleteResp : KBCONTENTApiResult
{
    _Bool _actionSuccess;
    NSDictionary *_ext;
}

+ (Class)extElementClass;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(nonatomic) _Bool actionSuccess; // @synthesize actionSuccess=_actionSuccess;
- (void).cxx_destruct;

@end

