//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBLiveTipView;

@interface TBLiveCommentTipsView : UIView
{
    TBLiveTipView *_tipsView1;
    TBLiveTipView *_tipsView2;
}

@property(retain, nonatomic) TBLiveTipView *tipsView2; // @synthesize tipsView2=_tipsView2;
@property(retain, nonatomic) TBLiveTipView *tipsView1; // @synthesize tipsView1=_tipsView1;
- (void).cxx_destruct;
- (id)getShownTipsView;
- (id)getHiddenTipsView;
- (void)hideAllTipsView;
- (void)showTipsWithModel:(id)arg1;
- (void)dealloc;

@end

