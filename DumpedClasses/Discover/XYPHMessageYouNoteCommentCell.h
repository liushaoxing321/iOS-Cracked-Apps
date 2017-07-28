//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHMessageYouCell.h"

@class UIButton, UILabel, UIView;

@interface XYPHMessageYouNoteCommentCell : XYPHMessageYouCell
{
    unsigned long long commentStyle;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_titleLabel;
    UIButton *_noteView;
    UIButton *_commentView;
    UILabel *_commentLabel;
    UILabel *_targetCommentLabel;
    UILabel *_commentInvalidInfoLabel;
    UILabel *_targetCommentInvalidInfoLabel;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *targetCommentInvalidInfoLabel; // @synthesize targetCommentInvalidInfoLabel=_targetCommentInvalidInfoLabel;
@property(retain, nonatomic) UILabel *commentInvalidInfoLabel; // @synthesize commentInvalidInfoLabel=_commentInvalidInfoLabel;
@property(retain, nonatomic) UILabel *targetCommentLabel; // @synthesize targetCommentLabel=_targetCommentLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIButton *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIButton *noteView; // @synthesize noteView=_noteView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) unsigned long long commentStyle; // @synthesize commentStyle;
- (void).cxx_destruct;
- (void)noteViewTapped:(id)arg1;
- (void)invalidateTargetComment;
- (void)invalidateComment;
- (void)didTapCommentView:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
