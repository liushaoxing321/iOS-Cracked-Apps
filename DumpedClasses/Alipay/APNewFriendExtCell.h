//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APCommonSelectTableViewCell.h"

@class UILabel;

@interface APNewFriendExtCell : APCommonSelectTableViewCell
{
    UILabel *_openMoreLabel;
}

+ (double)heightOfCell;
@property(retain, nonatomic) UILabel *openMoreLabel; // @synthesize openMoreLabel=_openMoreLabel;
- (void).cxx_destruct;
- (void)setupOpenMoreLabel;
- (void)refreshCellWithItem:(id)arg1;
- (void)adjustCommonItem:(double)arg1;
- (double)adjustIconImage:(double)arg1;
- (void)configParams:(id)arg1;

@end

