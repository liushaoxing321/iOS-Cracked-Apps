//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (HDExtension)
- (double)hd_mdShapeDiameterForPoint:(struct CGPoint)arg1;
- (void)hd_addAnimationAtPoint:(struct CGPoint)arg1 WithType:(long long)arg2 withColor:(id)arg3;
- (void)hd_addAnimationAtPoint:(struct CGPoint)arg1 WithDuration:(double)arg2 WithType:(long long)arg3 withColor:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)hd_addAnimationAtPoint:(struct CGPoint)arg1 WithType:(long long)arg2 withColor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hd_addAnimationAtPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint hd_origin;
@property(nonatomic) struct CGSize hd_size;
@property(nonatomic) double hd_width;
@property(nonatomic) double hd_height;
@property(nonatomic) double hd_centerY;
@property(nonatomic) double hd_centerX;
@property(nonatomic) double hd_y;
@property(nonatomic) double hd_x;
@end
