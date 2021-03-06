//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class ExploreCommentSectionCellView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface ExploreCommentEmptyView : SSViewBase
{
    int _type;
    UIImageView *_emptyImageView;
    UILabel *_emptyTipLabel;
    UIButton *_emptyButton;
    UIActivityIndicatorView *_indicator;
    ExploreCommentSectionCellView *_sectionCellView;
    id <ExploreCommentEmptyViewDelegate> _delegate;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <ExploreCommentEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ExploreCommentSectionCellView *sectionCellView; // @synthesize sectionCellView=_sectionCellView;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *emptyButton; // @synthesize emptyButton=_emptyButton;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
- (void).cxx_destruct;
- (void)_changEmptyTipLabelControlStateTo:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshType:(int)arg1;
- (void)themeChanged:(id)arg1;
- (void)forceShowCommentButtonClicked;
- (void)emptyButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

