//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponentController.h>

@class FBSearchComponentModel, FBSearchResultsContext;
@protocol FBServiceTransactionMutating;

@interface FBSearchLazyModuleComponentController : CKComponentController
{
    unsigned long long _downloadState;
    FBSearchComponentModel *_moduleEdgeModel;
    FBSearchResultsContext *_context;
    id <FBServiceTransactionMutating> _requestToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_notifyLoadComplete:(id)arg1;
- (void)_beginLoading;
- (id)initWithComponent:(id)arg1;

@end
