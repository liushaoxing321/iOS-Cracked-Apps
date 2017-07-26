//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPSAdapterViewController.h"

#import "TBPSImageCollectionViewControllerDelegate.h"
#import "TBPSImageGroupTableViewControllerDelegate.h"

@class NSString, TBPSAssetGroup, TBPSImageCollectionViewController, TBPSImageGroupTableViewController, TBPSImagePickerErrorView, UIBarButtonItem, UIButton, UIView;

@interface TBPSPhotoSelectViewController : TBPSAdapterViewController <TBPSImageGroupTableViewControllerDelegate, TBPSImageCollectionViewControllerDelegate>
{
    _Bool _addObserver;
    _Bool _isShowCancel;
    _Bool _isShowGroup;
    UIView *_dimmedView;
    TBPSImageCollectionViewController *_collectionVC;
    TBPSImageGroupTableViewController *_groupTableVC;
    TBPSImagePickerErrorView *_errorView;
    UIBarButtonItem *_barItemGroup;
    UIButton *_btnGroup;
    TBPSAssetGroup *_selectedGroup;
}

@property(retain, nonatomic) TBPSAssetGroup *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(nonatomic) _Bool isShowGroup; // @synthesize isShowGroup=_isShowGroup;
@property(retain, nonatomic) UIButton *btnGroup; // @synthesize btnGroup=_btnGroup;
@property(retain, nonatomic) UIBarButtonItem *barItemGroup; // @synthesize barItemGroup=_barItemGroup;
@property(retain, nonatomic) TBPSImagePickerErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBPSImageGroupTableViewController *groupTableVC; // @synthesize groupTableVC=_groupTableVC;
@property(retain, nonatomic) TBPSImageCollectionViewController *collectionVC; // @synthesize collectionVC=_collectionVC;
@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
@property(nonatomic) _Bool isShowCancel; // @synthesize isShowCancel=_isShowCancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setGroupItemTitle:(id)arg1;
- (void)dimmedViewTouched;
- (void)showGroup:(id)arg1;
- (void)didSelectedGroup:(id)arg1;
- (void)didSelectAsset:(id)arg1;
- (void)loadAssetsGroups:(id)arg1;
- (void)handleAssetGroupDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)viewDidLoad;
- (void)dismiss:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)initToolBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
