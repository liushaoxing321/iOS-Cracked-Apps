//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMMediaDataObject, FMMultiMediaSelectorViewController, NSArray;

@protocol FMMultiMediaSelectorViewControllerDelegate <NSObject>
- (void)selectorViewController:(FMMultiMediaSelectorViewController *)arg1 didFinishWithImageList:(NSArray *)arg2;
- (void)selectorViewController:(FMMultiMediaSelectorViewController *)arg1 didFinishWithMediaInfo:(FMMediaDataObject *)arg2;
@end

