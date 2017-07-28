//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TTArticleSearchHistoryContext, TTPersistence;

@interface TTArticleSearchManager : NSObject
{
    _Bool _isLoading;
    NSArray *_historyKeywords;
    NSArray *_recommendKeywords;
    id <TTArticleSearchManagerDelegate> _delegate;
    TTArticleSearchHistoryContext *_context;
    TTPersistence *_persistence;
}

+ (void)setRecommendHidden:(_Bool)arg1;
+ (_Bool)recommendHidden;
+ (_Bool)recommendHiddenIndeed;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) TTPersistence *persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) TTArticleSearchHistoryContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <TTArticleSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *recommendKeywords; // @synthesize recommendKeywords=_recommendKeywords;
@property(copy, nonatomic) NSArray *historyKeywords; // @synthesize historyKeywords=_historyKeywords;
- (void).cxx_destruct;
- (id)invalidResponseError;
- (id)failedRequestError;
- (void)handleResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSearchSuggestInfoWithFrom:(id)arg1 category:(id)arg2 homePageSuggest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchSearchSuggestInfo;
- (void)synchronize;
- (void)loadLocalCache;
- (_Bool)isContentEmpty;
- (void)removeAllKeywords;
- (void)removeKeyword:(id)arg1;
- (void)insertKeyword:(id)arg1;
- (id)initWithContext:(CDUnknownBlockType)arg1;
- (id)init;

@end
