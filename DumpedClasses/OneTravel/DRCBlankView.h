//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface DRCBlankView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_messageLabel;
    UILabel *_actionButton;
    UIView *_containerView;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configureIconImage:(id)arg1 message:(id)arg2 actionText:(id)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void)layout;
- (void)bind;
- (id)initWithFrame:(struct CGRect)arg1;

@end
