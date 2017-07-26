//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface RightMenuCell : UITableViewCell
{
    UIImageView *_icon;
    UILabel *_label;
    UIView *_separator;
    int _xo;
    UIView *_backgroundView;
    CDUnknownBlockType _layoutedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType layoutedBlock; // @synthesize layoutedBlock=_layoutedBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)redPointContentViewFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIImageView *icon; // @dynamic icon;
@property(retain, nonatomic) UILabel *label; // @dynamic label;
@property(retain, nonatomic) UIView *separator; // @dynamic separator;

@end
