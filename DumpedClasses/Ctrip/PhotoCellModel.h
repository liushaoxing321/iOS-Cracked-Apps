//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsGroup, NSMutableArray, NSString, PHFetchResult;

@interface PhotoCellModel : NSObject
{
    ALAssetsGroup *_group;
    PHFetchResult *_fetchResult;
    NSString *_cellTitle;
    NSMutableArray *_selectedArray;
}

@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(copy, nonatomic) NSString *cellTitle; // @synthesize cellTitle=_cellTitle;
@property(copy, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) ALAssetsGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)init;

@end
