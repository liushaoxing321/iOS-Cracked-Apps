//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "FMShowGuideDelegate.h"

@class FMGuideShiftingBubbleView, FMItemDO, FMPostView, FMPostViewModel, FMTaoBaoTradeOrder, NSArray, NSString, UIImage;

@interface FMPostViewController : FMBaseViewController <FMShowGuideDelegate>
{
    unsigned int _from;
    NSString *_topicTag;
    _Bool _isDraft;
    FMItemDO *_itemDO;
    NSString *_itemId;
    NSArray *_assets;
    UIImage *_cameraImage;
    FMTaoBaoTradeOrder *_resellOrder;
    FMGuideShiftingBubbleView *_guidePostVideoView;
    FMPostView *_postView;
    FMPostViewModel *_viewModel;
}

@property(retain, nonatomic) FMPostViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) FMPostView *postView; // @synthesize postView=_postView;
- (void).cxx_destruct;
- (void)showGuideForHandler:(id)arg1;
- (void)didFinishGuideShowing;
- (void)$$didClickPostGuideView:(id)arg1;
- (void)$$updatePostGuideView:(id)arg1 rect:(id)arg2;
- (void)$$setPostViewTop:(id)arg1 top:(id)arg2;
- (void)$$postSuccessTips:(id)arg1 postRet:(id)arg2;
- (void)postSuccessDismissControllerComplete;
- (void)$$postSuccessJump:(id)arg1;
- (void)$$abtestBucketTrial:(id)arg1 data:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)showPostTipView;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (void)setupNavigationBar;
- (void)reRequestItemDetail;
- (void)requestItemFail:(id)arg1;
- (void)requestItemSuccess:(id)arg1;
- (void)requestItemDetailWithId:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)urlHandlerWithQuery:(id)arg1 nativeParams:(id)arg2;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
