//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TBStoryCardInfoModel, TBStoryVideoCommentInfo;

@protocol TBStoryInteractiveDelegate <NSObject>

@optional
- (void)didClickShareToDiscover:(NSString *)arg1 withFakeModel:(TBStoryCardInfoModel *)arg2 withDataReportEntry:(NSNumber *)arg3;
- (void)didFoldTipsTap;
- (void)didTapNaviChangeWithFeedID:(NSString *)arg1 type:(unsigned int)arg2;
- (void)shouldLoadFansInteractive:(NSString *)arg1;
- (void)didKeyBoardHideWithFeedID:(NSString *)arg1 relativeY:(double)arg2;
- (void)didKeyBoardInputWithFeedID:(NSString *)arg1 boardHeight:(double)arg2;
- (void)didKeyBoardShowWithFeedID:(NSString *)arg1 relativeY:(double)arg2 boardHeight:(double)arg3;
- (void)shouldShowKeyBoardWithDelegate:(id <TBStoryCommentFaceTextViewDelegate>)arg1 commentInfo:(TBStoryVideoCommentInfo *)arg2;
- (void)shouldReloadData:(NSString *)arg1;
@end
