//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVWealthTypeViewDataSource.h"
#import "KTVWealthTypeViewEventDelegate.h"

@class KTVWealthTypeVM, NSString;

@interface KTVWealthTypeVLL : NSObject <KTVWealthTypeViewEventDelegate, KTVWealthTypeViewDataSource>
{
    KTVWealthTypeVM *_viewModel;
    id <KTVWealthTypeVLLDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVWealthTypeVLLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVWealthTypeVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (long long)numberOfItems;
- (id)playerListWithType:(int)arg1;
- (void)listViewShouldReflashData;
- (void)goToWealthListWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
