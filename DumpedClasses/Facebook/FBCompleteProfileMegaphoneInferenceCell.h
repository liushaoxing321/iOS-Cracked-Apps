//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBCompleteProfileMegaphoneSelectableCell-Protocol.h"

@class FBMemPage, FBMemProfileQuestionInference, FBNetworkImageView, NSString, UIColor, UIImageView, UILabel;

@interface FBCompleteProfileMegaphoneInferenceCell : UITableViewCell <FBCompleteProfileMegaphoneSelectableCell>
{
    UIImageView *_topBorderView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_selector;
    FBNetworkImageView *_icon;
    double _horizontalPadding;
    double _iconSize;
    _Bool _chosen;
    _Bool _expanded;
    FBMemPage *_page;
    FBMemProfileQuestionInference *_inference;
    UIColor *_titleColor;
}

@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) FBMemProfileQuestionInference *inference; // @synthesize inference=_inference;
@property(readonly, nonatomic) FBMemPage *page; // @synthesize page=_page;
@property(nonatomic, getter=isChosen) _Bool chosen; // @synthesize chosen=_chosen;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 showIcon:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
