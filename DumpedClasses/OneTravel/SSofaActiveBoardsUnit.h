//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SActiveBoardsCom.h"

@class NSArray, SSofaWebViewJSHelper;

@interface SSofaActiveBoardsUnit : SActiveBoardsCom
{
    NSArray *_confs;
    NSArray *_adverts;
    SSofaWebViewJSHelper *_sofaJSHelper;
}

@property(retain, nonatomic) SSofaWebViewJSHelper *sofaJSHelper; // @synthesize sofaJSHelper=_sofaJSHelper;
@property(readonly, nonatomic) NSArray *adverts; // @synthesize adverts=_adverts;
@property(copy, nonatomic) NSArray *confs; // @synthesize confs=_confs;
- (void).cxx_destruct;
- (void)entranceButtonClick:(id)arg1;
- (void)clickActiveButton:(id)arg1;
- (void)p_registerSofaJS;
- (void)registerBridge;
- (_Bool)activitySheetDidDismiss:(_Bool)arg1;

@end

