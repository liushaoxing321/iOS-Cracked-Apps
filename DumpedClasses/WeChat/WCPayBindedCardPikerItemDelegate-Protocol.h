//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "WCBaseInfoItemDelegate.h"

@class WCPayBindedCardPikerItem;

@protocol WCPayBindedCardPikerItemDelegate <NSObject, WCBaseInfoItemDelegate>

@optional
- (void)OnChooseCard:(WCPayBindedCardPikerItem *)arg1;
- (void)OnChooseNewCard:(WCPayBindedCardPikerItem *)arg1;
@end
