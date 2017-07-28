//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMPlaylistManipulateDelegate.h"
#import "NMPlaylistSectionHeaderViewDelegate.h"

@class NMCollection, NSMutableArray, NSString;

@interface NMMultipleManageSongViewControllerHelper : NSObject <NMPlaylistSectionHeaderViewDelegate, NMPlaylistManipulateDelegate>
{
    _Bool _isHidingMessageView;
    _Bool _underMultiple;
    NSMutableArray *_selectedSongArray;
    NMCollection *_collection;
    id <NMMultipleManageSongViewControllerHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <NMMultipleManageSongViewControllerHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSMutableArray *selectedSongArray; // @synthesize selectedSongArray=_selectedSongArray;
@property(nonatomic) _Bool underMultiple; // @synthesize underMultiple=_underMultiple;
- (void).cxx_destruct;
- (void)resetMultipleSelected;
- (void)deleteDownloadButtonClicked:(id)arg1;
- (void)downloadButtonClicked:(id)arg1;
- (void)removeFromPlaylistButtonClicked:(id)arg1;
- (void)addToPlaylistButtonClicked:(id)arg1;
- (void)playNextButtonClicked:(id)arg1;
- (void)exitMultiple;
- (void)enterMultiple;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
