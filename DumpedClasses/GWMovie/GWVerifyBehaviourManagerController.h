//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWJSWebViewController.h"

@class NSString, UIViewController;

@interface GWVerifyBehaviourManagerController : GWJSWebViewController
{
    UIViewController *_myParentViewController;
    CDUnknownBlockType _dissBlock;
    CDUnknownBlockType _finalBlock;
    NSString *_url;
}

+ (id)showVerifyManagerUrl:(id)arg1 completion:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3 finalBlock:(CDUnknownBlockType)arg4;
+ (void)showSliderParentController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showSliderParentController:(id)arg1 completion:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;
+ (void)showVerifyManagerUrl:(id)arg1 parentController:(id)arg2 completion:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
+ (id)showSliderCompletion:(CDUnknownBlockType)arg1 finalBlock:(CDUnknownBlockType)arg2;
+ (id)showSliderCompletion:(CDUnknownBlockType)arg1 dismissBlock:(CDUnknownBlockType)arg2 finalBlock:(CDUnknownBlockType)arg3;
+ (id)readLastVerifyQuestionParameter;
+ (id)readLastVerifySliderParameter;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType finalBlock; // @synthesize finalBlock=_finalBlock;
@property(copy, nonatomic) CDUnknownBlockType dissBlock; // @synthesize dissBlock=_dissBlock;
@property(nonatomic) __weak UIViewController *myParentViewController; // @synthesize myParentViewController=_myParentViewController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)viewDidLoad;
- (void)show;
- (void)hide:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;

@end

