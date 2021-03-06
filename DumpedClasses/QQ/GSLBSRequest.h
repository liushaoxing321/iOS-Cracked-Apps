//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class GSLocation, NSString;

@interface GSLBSRequest : GSBaseRequest <GSRequestProtocol>
{
    _Bool _shouldRequestAuthorization;
    _Bool _isLoadLocationOnly;
    _Bool _shouldRequestWhenLBSFailed;
    GSLocation *_location;
}

@property(nonatomic) _Bool shouldRequestWhenLBSFailed; // @synthesize shouldRequestWhenLBSFailed=_shouldRequestWhenLBSFailed;
@property(nonatomic) _Bool isLoadLocationOnly; // @synthesize isLoadLocationOnly=_isLoadLocationOnly;
@property(nonatomic) _Bool shouldRequestAuthorization; // @synthesize shouldRequestAuthorization=_shouldRequestAuthorization;
@property(retain, nonatomic) GSLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (void)loadWithoutCache;
- (void)load;
- (void)dealloc;
- (id)init;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

