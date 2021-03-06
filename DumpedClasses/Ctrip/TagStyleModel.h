//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIColor;

@interface TagStyleModel : NSObject <NSCopying>
{
    _Bool _hasSubTitle;
    int _tagHuaType;
    NSString *_mainTagTitle;
    double _mainTagFontSize;
    UIColor *_mainTagFontColor;
    UIColor *_mainTagBackgroundColor;
    NSString *_subTagTitle;
    double _subTagFontSize;
    UIColor *_subTagFontColor;
    UIColor *_subTagBackgroundColor;
    double _tagFrameWidth;
    double _tagCornerRadius;
    UIColor *_tagFrameColor;
    NSString *_tagIconUrl;
    struct CGSize _mainSize;
    struct CGSize _subSize;
}

+ (id)colorWithHex:(id)arg1;
@property(nonatomic) struct CGSize subSize; // @synthesize subSize=_subSize;
@property(nonatomic) struct CGSize mainSize; // @synthesize mainSize=_mainSize;
@property(retain, nonatomic) NSString *tagIconUrl; // @synthesize tagIconUrl=_tagIconUrl;
@property(nonatomic) int tagHuaType; // @synthesize tagHuaType=_tagHuaType;
@property(nonatomic) _Bool hasSubTitle; // @synthesize hasSubTitle=_hasSubTitle;
@property(retain, nonatomic) UIColor *tagFrameColor; // @synthesize tagFrameColor=_tagFrameColor;
@property(nonatomic) double tagCornerRadius; // @synthesize tagCornerRadius=_tagCornerRadius;
@property(nonatomic) double tagFrameWidth; // @synthesize tagFrameWidth=_tagFrameWidth;
@property(retain, nonatomic) UIColor *subTagBackgroundColor; // @synthesize subTagBackgroundColor=_subTagBackgroundColor;
@property(retain, nonatomic) UIColor *subTagFontColor; // @synthesize subTagFontColor=_subTagFontColor;
@property(nonatomic) double subTagFontSize; // @synthesize subTagFontSize=_subTagFontSize;
@property(copy, nonatomic) NSString *subTagTitle; // @synthesize subTagTitle=_subTagTitle;
@property(retain, nonatomic) UIColor *mainTagBackgroundColor; // @synthesize mainTagBackgroundColor=_mainTagBackgroundColor;
@property(retain, nonatomic) UIColor *mainTagFontColor; // @synthesize mainTagFontColor=_mainTagFontColor;
@property(nonatomic) double mainTagFontSize; // @synthesize mainTagFontSize=_mainTagFontSize;
@property(copy, nonatomic) NSString *mainTagTitle; // @synthesize mainTagTitle=_mainTagTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSafeValue;
- (id)init;

@end

