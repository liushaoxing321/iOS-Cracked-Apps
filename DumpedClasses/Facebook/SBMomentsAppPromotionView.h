//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBButton, FBFacepileView, UIButton, UIImageView, UILabel;

@interface SBMomentsAppPromotionView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_socialSentenceLabel;
    FBFacepileView *_facepileView;
    FBButton *_actionButton;
    UIButton *_closeButton;
    UIButton *_helpButton;
}

@property(readonly, nonatomic) UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) FBButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)_downloadIconWithUserSession:(id)arg1 momentsAppInterstitialInfo:(id)arg2;
- (void)layoutSubviews;
- (id)initWithSession:(id)arg1 momentsAppInterstitialInfo:(id)arg2;

@end
