//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CTRequestDataBean : NSObject
{
    int _dataProcessCode;
    NSData *_headPrefix;
    NSData *_head;
    NSData *_body;
    NSData *_headAndBody;
    NSData *_totalData;
    unsigned long long _encodingCode;
    long long _serialNumber;
}

@property(nonatomic) long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long encodingCode; // @synthesize encodingCode=_encodingCode;
@property(copy, nonatomic) NSData *totalData; // @synthesize totalData=_totalData;
@property(copy, nonatomic) NSData *headAndBody; // @synthesize headAndBody=_headAndBody;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSData *head; // @synthesize head=_head;
@property(copy, nonatomic) NSData *headPrefix; // @synthesize headPrefix=_headPrefix;
@property(nonatomic) int dataProcessCode; // @synthesize dataProcessCode=_dataProcessCode;
- (void).cxx_destruct;
- (id)init;

@end
