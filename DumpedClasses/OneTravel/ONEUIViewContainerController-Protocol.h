//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ONESchemaRouterNode, UIViewController;

@protocol ONEUIViewContainerController <NSObject>
- (UIViewController *)topViewController;
- (int)pageCount;
- (void)popToRootAnimated:(_Bool)arg1;
- (void)popPageAnimated:(_Bool)arg1;
- (void)pushPageByRouterNode:(ONESchemaRouterNode *)arg1 animated:(_Bool)arg2;
- (void)switchToPageByRouterNode:(ONESchemaRouterNode *)arg1 animated:(_Bool)arg2;

@optional
- (void)hideMainMenu;
- (id <ONEUIViewContainerController>)takeOffContentViewController;
- (void)pushPageByRouterNode:(ONESchemaRouterNode *)arg1 reuseMatcher:(long long (^)(UIViewController *))arg2 animated:(_Bool)arg3;
@end

