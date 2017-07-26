//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@interface TBFavSDKError : NSObject
{
    NSString *_errorCode;
    NSString *_msg;
    NSString *_sub_code;
    NSString *_sub_msg;
    NSDictionary *_args;
    NSDictionary *_raw;
    NSString *_errorLocation;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *errorLocation; // @synthesize errorLocation=_errorLocation;
@property(retain, nonatomic) NSDictionary *raw; // @synthesize raw=_raw;
@property(retain, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *sub_msg; // @synthesize sub_msg=_sub_msg;
@property(retain, nonatomic) NSString *sub_code; // @synthesize sub_code=_sub_code;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;

@end
