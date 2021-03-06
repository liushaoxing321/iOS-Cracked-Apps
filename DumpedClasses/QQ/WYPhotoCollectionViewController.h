//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WYBaseViewController.h"

#import "QQMultiImagePickerControllerDelegate.h"
#import "WYCollectionBackupBarDelegate.h"

@class NSString;

@interface WYPhotoCollectionViewController : WYBaseViewController <WYCollectionBackupBarDelegate, QQMultiImagePickerControllerDelegate>
{
    _Bool _showBackupBar;
    long long _numberOfUnbackupItems;
}

@property(nonatomic) long long numberOfUnbackupItems; // @synthesize numberOfUnbackupItems=_numberOfUnbackupItems;
@property(nonatomic) _Bool showBackupBar; // @synthesize showBackupBar=_showBackupBar;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)checkUnbackupItems;
- (void)didTouchedcollectionBackupBar:(id)arg1;
- (_Bool)isBackupSection:(long long)arg1;
- (void)filterPhotoChanged:(id)arg1;
- (void)observerFilterNotification;
- (struct CGSize)sizeForHeaderInSection:(long long)arg1;
- (id)headerViewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadCollectionView;
- (void)commonInitialize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

