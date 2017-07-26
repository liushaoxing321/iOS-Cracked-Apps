//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabaseQueue, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface QZNewestFeedCache : NSObject
{
    long long _curAccoutUIN;
    NSMutableDictionary *_friendNewestFeedsMutlDict;
    NSString *_databaseFileName;
    FMDatabaseQueue *_databaseQueue;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

- (void).cxx_destruct;
- (void)updateFriNewestFeedToDB:(unsigned long long)arg1 feeds:(id)arg2;
- (void)loadAllFriNewestFeedFromDB:(long long)arg1;
- (void)dropTable:(long long)arg1;
- (void)createTable:(long long)arg1;
- (_Bool)isTableExist:(long long)arg1;
- (void)removedAcountCache:(long long)arg1;
- (id)getFriendNewestFeed:(long long)arg1;
- (void)updateFriendNewestFeeds:(long long)arg1 newestFeeds:(id)arg2;
- (void)onLoginOutNotify:(id)arg1;
- (void)changeAccout;
- (void)updateRelationList;
- (void)initDatabase;
- (void)onDatabaseOptFailed;
- (id)init;

@end
