//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLActionMenu, UIView;

@protocol QLActionMenuDelegate <NSObject>
- (void)actionMenu:(QLActionMenu *)arg1 didSelectAtIndex:(long long)arg2;

@optional
- (void)actionMenuDidCancelButton:(QLActionMenu *)arg1;
- (_Bool)shouldActionMenuDismiss:(QLActionMenu *)arg1 didSelectAtIndex:(long long)arg2;
- (void)actionMenu:(QLActionMenu *)arg1 dismissFromSuperView:(UIView *)arg2 dismissType:(unsigned long long)arg3;
- (void)actionMenu:(QLActionMenu *)arg1 dismissFromSuperView:(UIView *)arg2;
@end
