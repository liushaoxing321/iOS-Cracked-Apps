//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@interface CTTextView : UITextView
{
    _Bool _isAnimationing;
    double _contentSizeHeight;
    double _maxHight;
}

@property(nonatomic) _Bool isAnimationing; // @synthesize isAnimationing=_isAnimationing;
@property(nonatomic) double maxHight; // @synthesize maxHight=_maxHight;
@property(nonatomic) double contentSizeHeight; // @synthesize contentSizeHeight=_contentSizeHeight;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;

@end

