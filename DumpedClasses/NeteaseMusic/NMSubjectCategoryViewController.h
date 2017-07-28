//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMScrollableTableControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCLoadMoreTableView, NMScrollTableController, NMScrollableTabItem, NMSubjectCategoryListRequest, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface NMSubjectCategoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MCLoadMoreTableFooterViewDelegate, NMHttpRequestDelegate, NMScrollableTableControllerProtocol>
{
    NSMutableArray *_hotSubjects;
    _Bool _isHotLoadingMore;
    _Bool _isHotEnd;
    _Bool _neverLoadedHot;
    NSMutableArray *_newSubjects;
    _Bool _isNewLoadingMore;
    _Bool _isNewEnd;
    _Bool _neverLoadedNew;
    unsigned long long _currentIndex;
    long long _pubTime;
    NMSubjectCategoryListRequest *_hotSubjectListRequest;
    NMSubjectCategoryListRequest *_newSubjectListRequest;
    UIView *_headerView;
    UILabel *_placeholderLabel;
    UIButton *_hotButton;
    UIButton *_newButton;
    UIView *_line;
    NMScrollableTabItem *_scrollableItem;
    NMScrollTableController *_scrollTableController;
    NSString *_categoryId;
    UIViewController *_subjectListViewController;
    MCLoadMoreTableView *_tableView;
}

@property(retain, nonatomic) MCLoadMoreTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *subjectListViewController; // @synthesize subjectListViewController=_subjectListViewController;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) __weak NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem; // @synthesize scrollableItem=_scrollableItem;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)parseNewResult:(id)arg1;
- (void)parseHotResult:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finishNewLoadmore:(_Bool)arg1;
- (void)loadmoreNewSubjects;
- (void)finishHotLoadmore:(_Bool)arg1;
- (void)loadmoreHotSubjects;
- (void)cleanData;
- (void)loadDataIfNeeded;
- (void)presented;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)newButtonClicked:(id)arg1;
- (void)hotButtonClicked:(id)arg1;
- (void)handleChangeSkin:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithSubjectCategoryId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
