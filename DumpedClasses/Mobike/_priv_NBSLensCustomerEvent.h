//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _priv_NBSLensCustomerEvent : NSObject
{
    NSString *_eventName;
    unsigned long long _eventTimeInSeconds;
}

@property(nonatomic) unsigned long long eventTimeInSeconds; // @synthesize eventTimeInSeconds=_eventTimeInSeconds;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)initWithEventName:(id)arg1;

@end
