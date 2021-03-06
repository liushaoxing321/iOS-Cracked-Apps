//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KKMediaPlayerActionDelegate.h"
#import "KKMediaPlayerDataSource.h"
#import "KKMediaPlayerEventProtocol.h"
#import "QLShareDataSource.h"
#import "QLSprayPlayerStatusInfoModelDelegate.h"

@class KKMediaRootViewController, NSArray, NSData, NSDictionary, NSString, QLJCEMiniProgramInfo, QLJCEONALivePreviewBoard, QLJCEONAThemePlayer, QLLightSprayPlayItemCompose, QLMovieItem, QLSprayContext, QLSprayPlayerStatusInfoModel, UIImage, UIImageView, UIViewController;

@interface QLLightSprayVideoView : UIView <KKMediaPlayerActionDelegate, KKMediaPlayerDataSource, QLShareDataSource, KKMediaPlayerEventProtocol, QLSprayPlayerStatusInfoModelDelegate>
{
    UIImageView *_playIconView;
    _Bool _playIconHidden;
    struct CGRect _posterRect;
    QLSprayContext *_sprayContext;
    QLSprayPlayerStatusInfoModel *_sprayPlayerStatusInfoModel;
    id _thePlayingItem;
    id <QLLightSprayVideoViewDelegate> _sprayDelegate;
    KKMediaRootViewController *_playerViewController;
    QLLightSprayPlayItemCompose *_lightPlayItem;
    QLJCEONALivePreviewBoard *_livePreviewBoard;
    QLJCEONAThemePlayer *_themePlayerItem;
}

@property(retain, nonatomic) QLJCEONAThemePlayer *themePlayerItem; // @synthesize themePlayerItem=_themePlayerItem;
@property(retain, nonatomic) QLJCEONALivePreviewBoard *livePreviewBoard; // @synthesize livePreviewBoard=_livePreviewBoard;
@property(retain, nonatomic) QLLightSprayPlayItemCompose *lightPlayItem; // @synthesize lightPlayItem=_lightPlayItem;
@property(nonatomic) __weak KKMediaRootViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak id <QLLightSprayVideoViewDelegate> sprayDelegate; // @synthesize sprayDelegate=_sprayDelegate;
- (void).cxx_destruct;
- (void)action:(id)arg1 didPressMomentButton:(id)arg2;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (id)getCurrentAttentionItem;
- (_Bool)shouldSaveRecord;
- (void)kkPlayer:(id)arg1 didClickButton:(unsigned long long)arg2;
- (void)sprayPlayerStatusInfoModelDidStopPlay:(id)arg1;
- (_Bool)enableAddListBtn;
- (_Bool)shouldHideShareBtn;
- (_Bool)shouldHideAddListBtn;
- (void)configBottomViewButton;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)notifyDelegateWithFinishPlay:(id)arg1;
- (void)notifyDelegateWithStopPlay:(id)arg1;
- (void)notifyDelegateWithStartPlay:(id)arg1;
- (void)playAction:(id)arg1;
- (void)doPlayAction;
- (void)pauseAction;
- (void)layoutPlayIcon;
- (void)removeSubViewByQLSprayLiveBulletinView;
- (void)addSubViewByQLSprayLiveBulletinView;
- (void)showVolumeButtonViewIfCan;
- (void)updateUIByLiveStateNotification:(id)arg1;
- (_Bool)tryPlayAction;
- (void)closeLightPlayer;
- (void)updateContextBySprayPlayItemCompose:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void)registerUITableViewCellOnSprayContextWhenPlayAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end

