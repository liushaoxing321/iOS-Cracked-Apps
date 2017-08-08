//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBFriendCenterConfiguration : NSObject
{
    NSArray *_menuItems;
    unsigned long long _initialMenuItem;
    NSString *_relevantRequesterID;
}

+ (_Bool)_showQRCodeInFriendCenter:(id)arg1;
+ (id)_prioritizeMenuItems:(id)arg1;
+ (id)configurationForFriendCenterWithSession:(id)arg1 initialMenuItem:(unsigned long long)arg2 relevantRequesterID:(id)arg3;
+ (id)configurationForFriendCenterWithSession:(id)arg1;
@property(copy, nonatomic) NSString *relevantRequesterID; // @synthesize relevantRequesterID=_relevantRequesterID;
@property(nonatomic) unsigned long long initialMenuItem; // @synthesize initialMenuItem=_initialMenuItem;
@property(copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;

@end
