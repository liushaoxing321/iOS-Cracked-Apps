//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommentListBase.h"

@class NMActionSheetBackgroundView;

@interface NMHotCommentList : NMCommentListBase
{
    NMActionSheetBackgroundView *_rootBgView;
    _Bool _isCommentChanged;
    id <NMHotCommentListDelegate> _hotCommentListDelegate;
}

@property(nonatomic) __weak id <NMHotCommentListDelegate> hotCommentListDelegate; // @synthesize hotCommentListDelegate=_hotCommentListDelegate;
@property(nonatomic) _Bool isCommentChanged; // @synthesize isCommentChanged=_isCommentChanged;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)loadmoreComment;
- (void)refreshView;
- (void)setActionSheetBackground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)commonInit;

@end

