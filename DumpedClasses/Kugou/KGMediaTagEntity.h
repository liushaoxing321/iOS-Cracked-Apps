//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSMutableArray, NSString;

@interface KGMediaTagEntity : KugouObject
{
    long long _tagId;
    long long _parentId;
    long long _sort;
    NSString *_tagName;
    NSMutableArray *_sons;
}

@property(retain, nonatomic) NSMutableArray *sons; // @synthesize sons=_sons;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(nonatomic) long long parentId; // @synthesize parentId=_parentId;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end

