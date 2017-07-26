//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseCell.h"

@class UIView;

@interface CTDestDownloadedPocketCell : CTDestBaseCell
{
    CDUnknownBlockType _pocketBlock;
    CDUnknownBlockType _leaderBlock;
    CDUnknownBlockType _travelBlock;
    UIView *_pocketView;
}

+ (double)heightForCell:(int)arg1 withModel:(id)arg2;
@property(retain, nonatomic) UIView *pocketView; // @synthesize pocketView=_pocketView;
@property(copy, nonatomic) CDUnknownBlockType travelBlock; // @synthesize travelBlock=_travelBlock;
@property(copy, nonatomic) CDUnknownBlockType leaderBlock; // @synthesize leaderBlock=_leaderBlock;
@property(copy, nonatomic) CDUnknownBlockType pocketBlock; // @synthesize pocketBlock=_pocketBlock;
- (void).cxx_destruct;
- (_Bool)obtainDownloadPocketUpdateTag;
- (_Bool)pocketHaveOffline;
- (void)refreshCell:(int)arg1 withModel:(id)arg2;
- (void)updateView:(id)arg1;
- (void)pocketTap;
- (id)createIcon;

@end
