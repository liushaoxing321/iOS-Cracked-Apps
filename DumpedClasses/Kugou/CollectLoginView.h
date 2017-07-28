//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class KGThemeLabel, KGThemeLine, NSString, UIImage, UIImageView, UIView;

@interface CollectLoginView : UIControl
{
    NSString *_tips;
    UIImage *_bgImg;
    KGThemeLine *_bgLine;
    KGThemeLabel *_tipsLable;
    UIView *_selectedBgView;
    UIImageView *_bgImageView;
}

+ (double)loginViewHeight;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *selectedBgView; // @synthesize selectedBgView=_selectedBgView;
@property(retain, nonatomic) KGThemeLabel *tipsLable; // @synthesize tipsLable=_tipsLable;
@property(retain, nonatomic) KGThemeLine *bgLine; // @synthesize bgLine=_bgLine;
@property(retain, nonatomic) UIImage *bgImg; // @synthesize bgImg=_bgImg;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)viewInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
