//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBComponentScrollEventListener-Protocol.h"
#import "FBDirectionalPanGestureRecognizerDelegate-Protocol.h"
#import "POPAnimationDelegate-Protocol.h"

@class FBDirectionalPanGestureRecognizer, NSString, UIGestureRecognizer, UIScrollView;
@protocol FBComponentScrollEventListenable, FBExpandingDrawerViewDelegate;

@interface FBExpandingDrawerView : UIView <FBComponentScrollEventListener, FBDirectionalPanGestureRecognizerDelegate, POPAnimationDelegate>
{
    UIView *_expandingView;
    UIView *_backgroundFadeOverlayView;
    FBDirectionalPanGestureRecognizer *_panGestureRecognizer;
    UIGestureRecognizer *_backgroundTapGestureRecognizer;
    unsigned long long _state;
    unsigned long long _previousState;
    double _panGestureBeganY;
    double _previousTranslationY;
    double _previousScrollPosition;
    _Bool _maintainScrollPosition;
    unsigned long long _initiatedTrigger;
    id <FBExpandingDrawerViewDelegate> _delegate;
    UIScrollView *_expandableContentScrollView;
    double _collapsedHeight;
    double _partialHeight;
    id <FBComponentScrollEventListenable> _scrollEventListenable;
}

@property(nonatomic) __weak id <FBComponentScrollEventListenable> scrollEventListenable; // @synthesize scrollEventListenable=_scrollEventListenable;
@property(nonatomic) double partialHeight; // @synthesize partialHeight=_partialHeight;
@property(nonatomic) double collapsedHeight; // @synthesize collapsedHeight=_collapsedHeight;
@property(retain, nonatomic) UIScrollView *expandableContentScrollView; // @synthesize expandableContentScrollView=_expandableContentScrollView;
@property(nonatomic) __weak id <FBExpandingDrawerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logAnalyticsForDrawerScrolledToEnd;
- (void)logAnalyticsForDrawerPositionChangedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 triggerType:(unsigned long long)arg3;
- (void)didChangePositionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 withTriggerType:(unsigned long long)arg3;
- (void)_didCollapse;
- (void)_willCollapse;
- (void)_didExpandToFull:(_Bool)arg1;
- (void)_willExpandToFull:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_resetScrollingGestureState;
- (double)_expansionProgressForTargetState:(unsigned long long)arg1;
- (void)_updateProgress;
- (_Bool)_shouldMaintainScrollPositionWhenDraggingWithYTranslation:(double)arg1;
- (void)_panDidMoveToYTranslationInView:(double)arg1;
- (unsigned long long)finalStateForPosition:(double)arg1 useThreshold:(_Bool)arg2;
- (unsigned long long)endStateForYTranslation:(double)arg1 yVelocity:(double)arg2;
- (void)_panDidEndWithYTranslation:(double)arg1 yVelocity:(double)arg2;
- (void)_panDidStart;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_didTapBackground:(id)arg1;
- (double)_positionYForState:(unsigned long long)arg1;
- (void)_animateOffsetToState:(unsigned long long)arg1 withVelocity:(double)arg2;
- (void)_setStatusBarHidden:(_Bool)arg1;
- (void)_moveToState:(unsigned long long)arg1 initialVelocity:(double)arg2;
- (void)_performUninterruptibleCollapse;
- (void)_removeStateChangeAnimations;
- (_Bool)isExpanded;
- (_Bool)isCollapsed;
- (void)expandToPartial;
- (void)expandToFull;
- (void)collapseEnablingInterruption:(_Bool)arg1;
- (double)_expandingViewYPosition;
- (void)layoutExpandingView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithExpandingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
