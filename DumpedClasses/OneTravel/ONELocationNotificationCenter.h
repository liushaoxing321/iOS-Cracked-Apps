//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ONELocationNotificationCenter : NSObject
{
    struct CLLocationCoordinate2D _lastLocationCoor;
}

+ (id)sharedInstance;
@property(nonatomic) struct CLLocationCoordinate2D lastLocationCoor; // @synthesize lastLocationCoor=_lastLocationCoor;

@end
