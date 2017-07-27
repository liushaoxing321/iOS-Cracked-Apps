//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIImage, UINavigationController, UIView;

@protocol NVMApplicationServices <NSObject>
@property(copy, nonatomic) NSString *notificationToken;
- (void)switchDataEntryStatusWithCompletion:(void (^)(_Bool))arg1;
- (void)setupEntryForView:(UIView *)arg1 entryStatsString:(NSString *)arg2;
- (void)addEntryObserverIfNeedForView:(UIView *)arg1 withEntryStats:(NSString *)arg2;
- (_Bool)canRequestEntryStats;
- (void)requestPromotionURLCompletion:(void (^)(NSURL *, NSString *))arg1;
- (_Bool)hasGuideImage;
- (UIImage *)backgroundImageForHomeNavigationBar;
- (UINavigationController *)rootNavigationController;
- (void)returnToRootController;
- (void)dismissToTabBarRootController;
- (NSString *)SNSShareSchemeWithShareInfos:(NSDictionary *)arg1;
- (NSString *)shareSchemeWithType:(long long)arg1 title:(NSString *)arg2 URLString:(NSString *)arg3 imageURLString:(NSString *)arg4 description:(NSString *)arg5;
- (void)showUserPromotionIfNeeded;
- (_Bool)isGlobalWeexEnable;
- (void)switchGlobalWeexStatusForTest;
- (_Bool)handleWeexScheme:(NSString *)arg1;
- (void)tryToShowPrompt;
- (void)rateApp;
- (void)showPromotionPopupWithParams:(NSDictionary *)arg1;
- (void)mockCrashForSafeLaunchTest;
- (void)clearElemeCookie;
- (NSArray *)cookiesRelativedToElemeService;
- (void)fillInEntryStatsDataForObjects:(NSArray *)arg1 completion:(void (^)(_Bool))arg2;
@end
