//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBTimer, FBUserSession, NSArray, NSDate, NSString, UIActivityIndicatorView, UITableView;
@protocol FBNavigationCoordinator, FBServiceTransactionMutating;

@interface FBSportsMatchesTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    NSArray *_currentMatches;
    UITableView *_tableView;
    UIActivityIndicatorView *_loadingView;
    FBTimer *_queryTimer;
    id <FBServiceTransactionMutating> _currentQuery;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)_handleFailureWithQueryDate:(id)arg1;
- (void)_handleSuccessWithQueryDate:(id)arg1 response:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_sendMatchesQuery;
- (id)initWithTableView:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
