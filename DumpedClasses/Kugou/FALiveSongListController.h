//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FALiveSongViewDelegate.h"

@class FALiveSongView, NSString;

@interface FALiveSongListController : NSObject <FALiveSongViewDelegate>
{
    id <FALiveSongListControllerDataSource> _dataSource;
    id <FALiveSongListControllerDelegate> _delegate;
    long long _starKgId;
    FALiveSongView *_songView;
}

@property(retain, nonatomic) FALiveSongView *songView; // @synthesize songView=_songView;
@property(nonatomic) long long starKgId; // @synthesize starKgId=_starKgId;
@property(nonatomic) __weak id <FALiveSongListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FALiveSongListControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)songSheetViewSupportSingerWithInfo:(id)arg1;
- (void)songViewWillShow;
- (void)songViewWillDismiss;
- (void)songViewDidDismiss;
- (id)chooseSongViewGetNormalRoomInfo;
- (void)songListHandleInviteCount:(id)arg1;
- (void)songListHandleGiftSupportCount:(id)arg1;
- (void)songListHandleFansVodSong:(id)arg1;
- (void)songListHandleAnchorVodSong:(id)arg1;
- (void)songListHandleDeleteSong:(id)arg1;
- (void)songListHandleSung:(id)arg1;
- (void)songListHandleBeginSing:(id)arg1;
- (void)songListHandleTouchSingBtn:(id)arg1;
- (void)getCountDownInfo;
- (void)resetSongList;
- (void)setSongListHidden:(_Bool)arg1;
- (long long)getStarId;
- (void)dismissSongList;
- (id)showSongListViewInSuperView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
