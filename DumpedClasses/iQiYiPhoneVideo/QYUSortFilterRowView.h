//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, QY_Leaf_Category, UIButton, UIView;
@protocol QYUSortFilterRowDelegate;

@interface QYUSortFilterRowView : UIScrollView
{
    UIView *_viewContent;
    UIButton *_buttonHighlight;
    UIView *_viewAnimationFrame;
    NSMutableArray *_arrayButtons;
    id <QYUSortFilterRowDelegate> _sortFilterRowDelegate;
    QY_Leaf_Category *_highlightLeaf;
}

@property(readonly, nonatomic) QY_Leaf_Category *highlightLeaf; // @synthesize highlightLeaf=_highlightLeaf;
- (void).cxx_destruct;
- (void)onCategoryClicked:(id)arg1;
- (id)initWithCategoryArray:(id)arg1 frame:(struct CGRect)arg2 sortFilterRowDelegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

