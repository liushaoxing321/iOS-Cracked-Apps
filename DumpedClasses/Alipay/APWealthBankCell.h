//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewDoubleLineCell.h"

@class NSString, UIImageView;

@interface APWealthBankCell : APTableViewDoubleLineCell
{
    UIImageView *_kuaijieImageView;
    _Bool _kuaiJie;
    _Bool _hasNext;
    _Bool _hasAlert;
    _Bool _showKuaijieLogo;
    NSString *_iconMask;
    NSString *_iconURLString;
    NSString *_mainTitle;
    NSString *_subtitle;
}

+ (double)cellHeight;
@property(nonatomic) _Bool showKuaijieLogo; // @synthesize showKuaijieLogo=_showKuaijieLogo;
@property(nonatomic) _Bool hasAlert; // @synthesize hasAlert=_hasAlert;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool kuaiJie; // @synthesize kuaiJie=_kuaiJie;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(retain, nonatomic) NSString *iconMask; // @synthesize iconMask=_iconMask;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyBankCard:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)hasAbilityToUpdateIcon;
- (void)applyIconImage:(id)arg1;
- (void)applyDefaultImage:(id)arg1;
- (void)prepareForReuse;

@end
