//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSString;

@interface GWThemeModel : GWObject
{
    NSArray *_alreadySold;
    NSArray *_alreadychoose;
    NSString *_themeid;
    NSArray *_lovechoose;
    NSArray *_loveSold;
}

+ (id)getPercentFromString:(id)arg1;
@property(retain, nonatomic) NSArray *loveSold; // @synthesize loveSold=_loveSold;
@property(retain, nonatomic) NSArray *lovechoose; // @synthesize lovechoose=_lovechoose;
@property(retain, nonatomic) NSString *themeid; // @synthesize themeid=_themeid;
@property(retain, nonatomic) NSArray *alreadychoose; // @synthesize alreadychoose=_alreadychoose;
@property(retain, nonatomic) NSArray *alreadySold; // @synthesize alreadySold=_alreadySold;
- (void).cxx_destruct;

@end
