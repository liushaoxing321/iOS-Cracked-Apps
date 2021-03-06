//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class QLPlayerWaterMarkView, QLWaterMarkFactory;

@interface QLWaterMarkController : UIViewController
{
    QLPlayerWaterMarkView *_waterMarkView;
    QLWaterMarkFactory *_waterMarkFactory;
}

@property(retain, nonatomic) QLWaterMarkFactory *waterMarkFactory; // @synthesize waterMarkFactory=_waterMarkFactory;
@property(retain, nonatomic) QLPlayerWaterMarkView *waterMarkView; // @synthesize waterMarkView=_waterMarkView;
- (void).cxx_destruct;
- (_Bool)isExistWaterMark:(id)arg1;
- (void)removeWaterMark:(id)arg1;
- (void)showWaterMark:(id)arg1;
- (id)responseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;

@end

