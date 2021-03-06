//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface IOMSQLoopPageView : UIView
{
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    long long _itemCount;
}

@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
- (void).cxx_destruct;
- (void)setCurrentItem:(long long)arg1;
- (void)drawSelf:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 itemCount:(long long)arg2;

@end

