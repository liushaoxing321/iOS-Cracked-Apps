//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;

@interface FRConcernV1ConcernListRequestModel : TTRequestModel
{
    NSNumber *_offset;
    NSNumber *_count;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
