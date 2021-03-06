//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDDetailModel;

@interface WDDetailContainerViewModel : NSObject
{
    _Bool _hasLoadedArticle;
    int _fromSource;
    WDDetailModel *_detailModel;
    CDUnknownBlockType _fetchContentBlock;
    double _cdnRequestTime;
}

@property(nonatomic) double cdnRequestTime; // @synthesize cdnRequestTime=_cdnRequestTime;
@property(nonatomic) _Bool hasLoadedArticle; // @synthesize hasLoadedArticle=_hasLoadedArticle;
@property(copy, nonatomic) CDUnknownBlockType fetchContentBlock; // @synthesize fetchContentBlock=_fetchContentBlock;
@property(retain, nonatomic) WDDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) int fromSource; // @synthesize fromSource=_fromSource;
- (void).cxx_destruct;
- (void)_checkArticleContentOrFullValidationWithArticle:(id)arg1 dict:(id)arg2;
- (void)tryFetchDetailForArticle:(id)arg1;
- (id)wendaDetailUrlStringWithAnswerID:(id)arg1;
- (void)refreshArticle:(id)arg1 error:(id)arg2;
- (void)contentLoadFinished:(id)arg1;
- (void)fetchContentFromRemoteIfNeededWithComplete:(CDUnknownBlockType)arg1;
- (id)classNameForSpecificDetailViewController;
- (_Bool)_isArticleReliable:(id)arg1;
- (id)initWithBaseCondition:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

