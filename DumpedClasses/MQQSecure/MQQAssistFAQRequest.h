//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class MQQAssistMessage, NSArray;

@interface MQQAssistFAQRequest : MQQSharkBaseRequest
{
    MQQAssistMessage *_relatedMessage;
    NSArray *_FAQs;
}

@property(retain, nonatomic) NSArray *FAQs; // @synthesize FAQs=_FAQs;
@property(retain, nonatomic) MQQAssistMessage *relatedMessage; // @synthesize relatedMessage=_relatedMessage;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)getFAQs;
- (void)dealloc;
- (id)init;

@end
