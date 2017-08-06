//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWDateMovieInfoProvider : GWBaseInfoProvider
{
    NSString *_movieid;
    NSString *_cinemaid;
}

@property(copy, nonatomic) NSString *cinemaid; // @synthesize cinemaid=_cinemaid;
@property(copy, nonatomic) NSString *movieid; // @synthesize movieid=_movieid;
- (void).cxx_destruct;
- (id)stringToArray:(id)arg1;
- (id)getSpecialMovieType:(id)arg1;
- (id)getSpecialMovieImage:(id)arg1;
- (id)getDateSpecialMovie:(id)arg1;
- (void)requestWithDateMovieHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
