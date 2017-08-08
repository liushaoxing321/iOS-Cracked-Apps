//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFNSettingsDataController, FBMemLocationSharing, FBNearbySection, FBUserSession, NSArray, NSDictionary, NSMutableArray, NSSet, NSString;

@protocol FBFriendsNearbyDataController <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *nearbyFriendsInDashboard;
@property(readonly, copy, nonatomic) NSSet *fbidsBlockedInDashboard;
@property(readonly, copy, nonatomic) NSArray *fbidsInDashboard;
@property(readonly, nonatomic) _Bool hasEmptyDashboard;
@property(readonly, nonatomic) FBFNSettingsDataController *settingsDataController;
@property(readonly, nonatomic) _Bool isInitialized;
@property(readonly, nonatomic) long long state;
@property(readonly, retain, nonatomic) FBMemLocationSharing *locationSharing;
@property(readonly, retain, nonatomic) NSMutableArray *dashboardSections;
- (void)claimUnknownRegion;
- (void)reportIncorrectRegion;
- (void)loadMoreInNearbySection:(FBNearbySection *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removePersonWithFBID:(NSString *)arg1;
- (void)loadData:(void (^)(NSError *))arg1;
- (id)initWithSession:(FBUserSession *)arg1 settingsDataController:(FBFNSettingsDataController *)arg2;

@optional
- (void)loadDataWithHighlightFBIDs:(NSArray *)arg1 previewCompletion:(void (^)(NSError *))arg2 dataCompletion:(void (^)(NSError *))arg3;
@end
