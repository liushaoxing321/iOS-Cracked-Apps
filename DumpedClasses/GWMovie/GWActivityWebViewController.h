//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWWebDetailViewController.h"

@class GWActivity;

@interface GWActivityWebViewController : GWWebDetailViewController
{
    GWActivity *_activity;
}

+ (id)activityWebViewControllerWithActivity:(id)arg1;
@property(retain, nonatomic) GWActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)startLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
