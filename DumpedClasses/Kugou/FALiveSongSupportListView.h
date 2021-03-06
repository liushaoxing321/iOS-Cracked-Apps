//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FALCBlankView, FASLiveRoomSongListSong, NSMutableArray, NSString, UIButton, UILabel, UITableView, UIToolbar;

@interface FALiveSongSupportListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _finishLoadData;
    FASLiveRoomSongListSong *_songInfo;
    id <FALiveSongSupportListViewDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_headerView;
    UITableView *_supporterTableView;
    UILabel *_songNameLab;
    UILabel *_supportNumLab;
    UIButton *_supportBtn;
    UIButton *_closeBtn;
    NSMutableArray *_supportList;
    long long _didPageNum;
    FALCBlankView *_blankView;
    UIToolbar *_toolBar;
}

@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) FALCBlankView *blankView; // @synthesize blankView=_blankView;
@property(nonatomic) long long didPageNum; // @synthesize didPageNum=_didPageNum;
@property(retain, nonatomic) NSMutableArray *supportList; // @synthesize supportList=_supportList;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *supportBtn; // @synthesize supportBtn=_supportBtn;
@property(retain, nonatomic) UILabel *supportNumLab; // @synthesize supportNumLab=_supportNumLab;
@property(retain, nonatomic) UILabel *songNameLab; // @synthesize songNameLab=_songNameLab;
@property(retain, nonatomic) UITableView *supporterTableView; // @synthesize supporterTableView=_supporterTableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool finishLoadData; // @synthesize finishLoadData=_finishLoadData;
@property(nonatomic) __weak id <FALiveSongSupportListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FASLiveRoomSongListSong *songInfo; // @synthesize songInfo=_songInfo;
- (void).cxx_destruct;
- (void)getSupportDataWithIsMore:(int)arg1;
- (void)updateListInfo;
- (id)setNumberLabText:(long long)arg1;
- (id)imgStringWithMessage:(id)arg1 fontSize:(double)arg2 msgColor:(id)arg3 img:(id)arg4 imgSize:(struct CGSize)arg5 isImgLeft:(_Bool)arg6 imgDistanceFromLeft:(double)arg7;
- (id)topOneView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)btnClickEvent:(id)arg1;
- (void)changeToFloastGlassStyle;
- (void)changeToFullScreenStyle;
- (void)updateSubViewsData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

