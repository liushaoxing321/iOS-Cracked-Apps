//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFeedContainerViewModel.h"

@class NSMutableSet;

@interface TTFeedMultiDeleteViewModel : TTFeedContainerViewModel
{
    NSMutableSet *_deletingItems;
}

@property(retain, nonatomic) NSMutableSet *deletingItems; // @synthesize deletingItems=_deletingItems;
- (void).cxx_destruct;
- (void)removeDeletingItemsObject:(id)arg1;
- (void)addDeletingItemsObject:(id)arg1;
- (unsigned long long)countOfDeletingItems;
- (id)initWithDelegate:(id)arg1;

@end
