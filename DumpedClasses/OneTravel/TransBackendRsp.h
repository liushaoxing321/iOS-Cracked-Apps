//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface TransBackendRsp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *compressedPack; // @dynamic compressedPack;
@property(nonatomic) _Bool hasCompressedPack; // @dynamic hasCompressedPack;
@property(nonatomic) _Bool hasMsg; // @dynamic hasMsg;
@property(nonatomic) _Bool hasSc; // @dynamic hasSc;
@property(nonatomic) _Bool hasSeqid; // @dynamic hasSeqid;
@property(copy, nonatomic) NSString *msg; // @dynamic msg;
@property(nonatomic) unsigned long long sc; // @dynamic sc;
@property(nonatomic) unsigned long long seqid; // @dynamic seqid;

@end
