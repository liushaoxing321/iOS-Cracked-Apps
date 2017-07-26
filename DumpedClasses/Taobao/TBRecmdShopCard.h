//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCard.h"

@class TBRecmdMaskImageView, UIImageView, UILabel, UIView;

@interface TBRecmdShopCard : TBRecmdCard
{
    UIImageView *_headerBgImgView;
    UILabel *_titleLabel;
    UIImageView *_iconImgView;
    UIImageView *_levelImgView;
    TBRecmdMaskImageView *_itemImgView1;
    TBRecmdMaskImageView *_itemImgView2;
    TBRecmdMaskImageView *_itemImgView3;
    UILabel *_descLabel;
    UIView *_iconImgBorderView;
}

+ (double)cardHeight;
+ (double)cardWidth;
@property(retain, nonatomic) UIView *iconImgBorderView; // @synthesize iconImgBorderView=_iconImgBorderView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) TBRecmdMaskImageView *itemImgView3; // @synthesize itemImgView3=_itemImgView3;
@property(retain, nonatomic) TBRecmdMaskImageView *itemImgView2; // @synthesize itemImgView2=_itemImgView2;
@property(retain, nonatomic) TBRecmdMaskImageView *itemImgView1; // @synthesize itemImgView1=_itemImgView1;
@property(retain, nonatomic) UIImageView *levelImgView; // @synthesize levelImgView=_levelImgView;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headerBgImgView; // @synthesize headerBgImgView=_headerBgImgView;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)addSubviews;
- (id)init;

@end
