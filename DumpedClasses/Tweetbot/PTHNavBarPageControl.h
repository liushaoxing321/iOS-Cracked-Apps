//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton;

@interface PTHNavBarPageControl : UIControl
{
    unsigned long long _currentPage;
    unsigned long long _pageCount;
    UIButton *_upButton;
    UIButton *_downButton;
}

@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)_next;
- (void)_previous;
- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;

@end
