//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMHomeListComponent, FMHomeListTableManager, FMTabsMainView, UITableView;

@interface FMHomeListView : UIView
{
    _Bool isNoticePopLayer;
    _Bool _isShowGotoTopWindow;
    FMHomeListComponent *_listComponent;
    UITableView *_tableView;
    FMHomeListTableManager *_listTableManager;
    FMTabsMainView *_tabsView;
}

@property(nonatomic) _Bool isShowGotoTopWindow; // @synthesize isShowGotoTopWindow=_isShowGotoTopWindow;
@property(retain, nonatomic) FMTabsMainView *tabsView; // @synthesize tabsView=_tabsView;
@property(retain, nonatomic) FMHomeListTableManager *listTableManager; // @synthesize listTableManager=_listTableManager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FMHomeListComponent *listComponent; // @synthesize listComponent=_listComponent;
- (void).cxx_destruct;
- (void)scrollToTop;
- (void)changeRefreshImage:(id)arg1;
- (void)bind;
- (void)showGotoTopWindows:(_Bool)arg1;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 component:(id)arg2;

@end
