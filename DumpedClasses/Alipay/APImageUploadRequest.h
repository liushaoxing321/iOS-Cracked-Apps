//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBaseUploadRequest.h"

@interface APImageUploadRequest : APBaseUploadRequest
{
    _Bool _isPublic;
    unsigned long long _compress;
    CDUnknownBlockType _complete;
}

@property(nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) unsigned long long compress; // @synthesize compress=_compress;
- (void).cxx_destruct;

@end
