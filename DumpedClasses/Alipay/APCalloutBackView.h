//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface APCalloutBackView : UIView
{
    struct CGPoint targetPoint;
    long long pointerSize;
    double cornerRadius;
    UIColor *backgroundColor;
    _Bool highlight;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)bubbleFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end
