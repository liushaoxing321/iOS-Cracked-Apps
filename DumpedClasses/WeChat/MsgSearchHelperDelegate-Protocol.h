//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, CMessageWrap, NSIndexPath, NSMutableArray, NSString, UITableView;

@protocol MsgSearchHelperDelegate <NSObject>
- (void)msgSearchBarDoSearch;
- (void)msgSearchBarCancel;
- (UITableView *)getParentTableView;
- (CBaseContact *)chatContactForMessageWrap:(CMessageWrap *)arg1;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1;
- (NSMutableArray *)QueryMsgText:(NSString *)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;

@optional
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)msgSearchBarSearchByTime;
- (void)msgSearchBarSearchByName;
@end
