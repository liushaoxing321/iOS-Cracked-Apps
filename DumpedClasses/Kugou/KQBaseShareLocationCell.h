//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KQBaseChatCell.h"

@class UIImageView, UILabel;

@interface KQBaseShareLocationCell : KQBaseChatCell
{
    _Bool _isLoadSmallPicFail;
    UIImageView *_mapImageView;
    UILabel *_locationName;
    struct CLLocationCoordinate2D _selectedLocation;
}

+ (double)heightForCell:(id)arg1 nickName:(id)arg2 isHideTime:(_Bool)arg3 isGChat:(_Bool)arg4;
+ (double)heightForCell:(id)arg1 isHideTime:(_Bool)arg2 isGChat:(_Bool)arg3;
@property(nonatomic) _Bool isLoadSmallPicFail; // @synthesize isLoadSmallPicFail=_isLoadSmallPicFail;
@property(nonatomic) struct CLLocationCoordinate2D selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property(retain, nonatomic) UILabel *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
- (void).cxx_destruct;
- (void)updateUIWithMessageInfo:(id)arg1 isHideTime:(_Bool)arg2 iconUrl:(id)arg3 nickName:(id)arg4 relationshipBean:(id)arg5;
- (void)updateUIWithMessageInfo:(id)arg1 isHideTime:(_Bool)arg2 iconUrl:(id)arg3 nickName:(id)arg4;
- (void)setChatBean:(id)arg1;
- (void)tagMapImage;
- (void)networkChanged:(id)arg1;
- (void)viewInit;
- (void)removeNotice;
- (void)registNotice;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
