//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSString;

@interface GIFTPRODCommonPagedReq : GIFTPRODToString
{
    int _pageSize;
    int _pageNo;
    int _offset;
    NSString *_pageCursor;
}

@property(retain, nonatomic) NSString *pageCursor; // @synthesize pageCursor=_pageCursor;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;

@end
