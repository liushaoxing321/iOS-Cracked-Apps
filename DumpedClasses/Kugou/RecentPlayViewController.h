//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGMusicTableCellPlayStateDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "KGViewControllerDelegate.h"

@class KGDefaultMoreView, KGMusicControlViewController, KGMusicTableViewAdapter, KGThemeLabel, NSDictionary, NSMutableArray, NSString, UIView;

@interface RecentPlayViewController : KGScrollPageViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, KGViewControllerDelegate, KGMusicTableCellPlayStateDelegate>
{
    KGMusicTableViewAdapter *_tableViewAdapter;
    UIView *_headerView;
    UIView *_footerView;
    KGThemeLabel *_result;
    UIView *_noMusicView;
    struct CGRect tableframe;
    struct CGRect tableeditframe;
    int m_recentlyMusicIndexRow;
    int m_selectRow;
    int oldSelectRow;
    _Bool m_isEditing;
    _Bool m_isShowMoreOption;
    _Bool isIpodMusic;
    _Bool isShowMenu;
    _Bool isFirstShow;
    NSMutableArray *_allMusic;
    NSDictionary *_singerDic;
    _Bool _isShowLoadMoreCell;
    UIView *_tableFooterView;
    KGDefaultMoreView *_moreView;
    KGMusicControlViewController *_control;
}

@property(retain, nonatomic) KGMusicControlViewController *control; // @synthesize control=_control;
@property(retain, nonatomic) KGDefaultMoreView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) _Bool isShowLoadMoreCell; // @synthesize isShowLoadMoreCell=_isShowLoadMoreCell;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)clearAll;
- (void)recentContentChanged;
- (void)deleteSongs:(id)arg1;
- (void)deleteSong:(id)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)removeNotify;
- (void)registerNotify;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (_Bool)hasMoreWithTabelView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)refreshMoreView;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)upDateTheNewOrHotArrowImg:(_Bool)arg1;
- (void)fillContent;
- (void)changeShotBgColor:(id)arg1 isShow:(_Bool)arg2;
- (void)viewInit;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
