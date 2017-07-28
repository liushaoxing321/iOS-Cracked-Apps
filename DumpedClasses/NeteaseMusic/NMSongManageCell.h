//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCell.h"

#import "NMCheckBoxDelegate.h"

@class NMCheckBox;

@interface NMSongManageCell : NMSongCell <NMCheckBoxDelegate>
{
    _Bool _checked;
    _Bool _needAnimation;
    int _state;
    NMCheckBox *_checkBox;
    id <NMSongManageCellDelegate> _manageDelegate;
    double _contentEditingOffset;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) double contentEditingOffset; // @synthesize contentEditingOffset=_contentEditingOffset;
@property(nonatomic) __weak id <NMSongManageCellDelegate> manageDelegate; // @synthesize manageDelegate=_manageDelegate;
@property(retain, nonatomic) NMCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) _Bool needAnimation; // @synthesize needAnimation=_needAnimation;
- (void).cxx_destruct;
- (void)checkBox:(id)arg1 checked:(_Bool)arg2;
- (void)showSongNameNotice;
- (void)setSong:(id)arg1 collectionId:(id)arg2 collectionType:(unsigned long long)arg3 showDownloadState:(_Bool)arg4;
@property(nonatomic) _Bool checked;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
