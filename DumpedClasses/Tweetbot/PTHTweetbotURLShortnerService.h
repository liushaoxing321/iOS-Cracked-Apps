//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotService.h"

@class PTHURLRequest;

@interface PTHTweetbotURLShortnerService : PTHTweetbotService
{
    PTHURLRequest *_request;
}

+ (id)genericServiceFailureTweetbotError;
+ (id)serviceClasses;
- (void).cxx_destruct;
- (void)cancel;
- (void)shortenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

