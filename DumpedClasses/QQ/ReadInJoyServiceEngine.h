//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, ReadInJoyReportParam;

@interface ReadInJoyServiceEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_requestsList;
    NSMutableDictionary *_resultCaches;
    _Bool _needFetchFromServer;
    _Bool _needFetchSearchFromServer;
    NSDictionary *_reportPushInfoDict;
    NSMutableArray *_clickTabList;
    NSDate *_forbidReportStartTime;
    NSDate *_foregroundLastReportTime;
    ReadInJoyReportParam *_reportParam;
    NSMutableDictionary *_reportCondParam;
    _Bool _isHasReportMsgTabExpose;
    unsigned int _lastMsgTabExposeDay;
    _Bool _isManualReq;
    NSString *_muid;
    unsigned int _conn;
    unsigned int _carrier;
    unsigned int _muid_type;
    NSString *_os_ver;
    NSString *_qq_ver;
    NSString *_client_ip;
    NSString *_appid;
    _Bool _testFlag;
    CDStruct_7895f40e _message;
}

+ (id)shareInstance;
@property(nonatomic) CDStruct_7895f40e message; // @synthesize message=_message;
@property(nonatomic) _Bool testFlag; // @synthesize testFlag=_testFlag;
- (_Bool)handle0x97bResponse:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)fetchTabFollowedAndFans:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)readTopicWithID:(unsigned long long)arg1 time:(double)arg2;
- (double)readTimeWithTopicID:(unsigned long long)arg1;
- (_Bool)handleFetchArticleCommentCountResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (void)fetchArticleCommentCount:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (_Bool)handleCreateArticleCommentResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (void)createArticleComment:(id)arg1 comment:(id)arg2 hideName:(int)arg3 Completion:(CDUnknownBlockType)arg4;
- (_Bool)handleReportGalleryInfoResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (unsigned int)getIpIntValue:(id)arg1;
- (void)reportGalleryInfo:(id)arg1 additionalParams:(id)arg2 Completion:(CDUnknownBlockType)arg3;
- (_Bool)handleReportReadPhotoCollectionResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (void)reportReadPhotoCollection:(id)arg1 Uin:(unsigned long long)arg2 additionalParams:(id)arg3 Completion:(CDUnknownBlockType)arg4;
- (_Bool)handleFetchRecommendInfoResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (void)fetchRecommendInfo:(id)arg1 Uin:(unsigned long long)arg2 additionalParams:(id)arg3 Completion:(CDUnknownBlockType)arg4;
- (_Bool)handleFetchPhotoCollectionInfoResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (void)fetchPhotoCollectionInfo:(id)arg1 Uin:(unsigned long long)arg2 additionalParams:(id)arg3 Completion:(CDUnknownBlockType)arg4;
- (_Bool)handleSubChannelFollowStatus:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)handleSuccessResp:(int)arg1;
- (void)checkSubChannelFollowed:(unsigned int)arg1 childChannelList:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)followSubChannel:(int)arg1 parentChannelID:(unsigned int)arg2 childChannelList:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)loadReportCondParam;
- (void)saveReportCondParam;
- (_Bool)checkIsNeedReport80a:(unsigned long long)arg1 time:(unsigned long long)arg2;
- (_Bool)isNeedReport:(unsigned long long)arg1;
- (void)onUpdateConditionParam:(unsigned int)arg1 item:(id)arg2;
- (_Bool)hand0x80aResponse:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (void)reportNewsWithActType:(id)arg1;
- (void)reportNewsInfos:(id)arg1 hasRedPoint:(_Bool)arg2 durationTime:(double)arg3;
- (void)showToastWithReq:(id)arg1;
- (_Bool)isKDInFirstScreen;
- (void)reportPushInfoNotInMainThread:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)reportPushInfo:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (id)getLBSInfoEncodedString;
- (id)jsonStringFromDict:(id)arg1;
- (void)reportPushWithDetails:(id)arg1 hasRedPoint:(id)arg2 durationTime:(id)arg3;
- (void)onReportPushExit;
- (void)onReportPushEnter:(id)arg1 hasRedPoint:(id)arg2;
- (void)onReportBusiEnter:(unsigned long long)arg1 hasRedPoint:(id)arg2;
- (void)reportChangeToForegroundNotMainThread:(int)arg1 dtTabRedPoint:(int)arg2;
- (void)reportChangeToForeground:(int)arg1 dtTabRedPoint:(int)arg2;
- (void)reportDeleteKandian;
- (void)reportClickTab:(id)arg1 time:(double)arg2;
- (void)onLoginProcess;
- (void)onMsgTabExposure;
- (void)onBecomeForeground;
- (id)getCurrentVC;
- (id)getCurrentNavigationController;
- (void)onClickTabWithoutRedPoint:(int)arg1;
- (void)checkTriggerForbidClickTabReport;
- (void)onClickDTTabWithoutRedPoint;
- (void)updateReportParam;
- (_Bool)hand0x6a6Response:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (void)getArticleReadCount:(id)arg1 ReqType:(unsigned int)arg2 articleType:(unsigned int)arg3 platformType:(unsigned int)arg4 Completion:(CDUnknownBlockType)arg5;
- (unsigned int)getCurrentNetworkTypeFor0x75e;
- (void)addPBEncoder:(struct CPBMessageEncoder *)arg1 string:(id)arg2 index:(unsigned int)arg3;
- (_Bool)reportPaFullScreenAd:(id)arg1 actionType:(long long)arg2 adPlayerInfo:(id)arg3 flag:(unsigned long long)arg4;
- (void)addPhoneInfoToCPBMessageEncoder:(struct CPBMessageEncoder *)arg1 index:(unsigned int)arg2;
- (_Bool)reportPaMsgAd:(id)arg1 actionType:(long long)arg2;
- (_Bool)reportAd:(id)arg1 actionType:(long long)arg2 flag:(unsigned long long)arg3;
- (unsigned int)getCurrentNetworkTypeFor0x68b;
- (_Bool)reportUserInterestLabel:(unsigned long long)arg1 InterestLabelList:(id)arg2;
- (_Bool)reportWebSepcialTopic:(id)arg1;
- (_Bool)hand0x6e5Response:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)fetchInterestLabel:(unsigned long long)arg1 isAllLabelId:(_Bool)arg2 isDefaultLabelId:(_Bool)arg3 isGetLastSelectedId:(_Bool)arg4 comletionBlock:(CDUnknownBlockType)arg5;
- (id)recommendVideoArticleDetailFromRspBody:(struct CPBMessageDecoder *)arg1;
- (id)deCodeFeedsInfo0x6cfWithPbMsg:(struct CPBMessageDecoder *)arg1;
- (id)deCodeAdInfo0x6cfWithPbMsg:(struct CPBMessageDecoder *)arg1;
- (id)videoArticleListFromRspBody:(struct CPBMessageDecoder *)arg1;
- (_Bool)handleGetArticleListByVideoId:(basic_string_075b6133 *)arg1 sequence:(unsigned int)arg2;
- (_Bool)handleCheckArticleLikeCountResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (_Bool)handleCheckArticleLikeResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (_Bool)handleArticleLikeResponseWithMessage:(CDStruct_7895f40e)arg1 Sequence:(int)arg2;
- (void)fetchArticleLikeCountWithArticleId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)checkArticelLikeWithArticleId:(id)arg1 Uins:(id)arg2 Completion:(CDUnknownBlockType)arg3;
- (void)likeArticleWithArticleId:(id)arg1 Uin:(unsigned long long)arg2 Like:(unsigned int)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)likeArticleWithArticleId:(id)arg1 Uin:(unsigned long long)arg2 Like:(unsigned int)arg3 pin:(unsigned int)arg4 Completion:(CDUnknownBlockType)arg5;
- (void)getArticleListByVideoId:(id)arg1 localAdInfo:(id)arg2 videoSource:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addLocalAdInfoToCPBMessageEncoder:(struct CPBMessageEncoder *)arg1 localAdInfo:(id)arg2 index:(unsigned int)arg3;
- (_Bool)handleArticleDislike:(basic_string_075b6133 *)arg1 sequence:(unsigned int)arg2;
- (void)setArticleDislike:(id)arg1 dislikeTagArray:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendReportData:(struct CPBMessageEncoder *)arg1;
- (void)reportKandianRedDotExporseOrClick:(unsigned long long)arg1 strategyId:(unsigned int)arg2 algorithmId:(unsigned int)arg3 folderStatus:(unsigned int)arg4 reportType:(int)arg5;
- (void)reportReadInJoyCommandofRead:(id)arg1 operation:(unsigned int)arg2 pageSrc:(unsigned int)arg3 videoPlayTime:(unsigned int)arg4;
- (unsigned long long)reportReadInJoyMsg:(id)arg1 operation:(unsigned int)arg2;
- (void)reportUserActionExpose:(id)arg1 actionFrom:(unsigned int)arg2;
- (void)reportUserActionWithOpType:(id)arg1 operation:(unsigned int)arg2 actionFrom:(unsigned int)arg3;
- (void)reportUserAction:(id)arg1 readTime:(unsigned long long)arg2 actionFrom:(unsigned int)arg3;
- (void)updateChannelInfoWithNewChannelList:(id)arg1;
- (_Bool)handle0x83dResponse:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)publishFeed:(unsigned int)arg1 feedInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)handle0x828Response:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)handleThirdUrl2VidResponse:(CDStruct_7895f40e)arg1 sequence:(int)arg2;
- (_Bool)handleThirdVid2UrlResponse:(CDStruct_7895f40e)arg1 sequence:(int)arg2;
- (_Bool)fetchFeedWithGuideIdList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)fetchSocializeFeedsInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)handle0x8c8Response:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)handle0x83eResponse:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (int)sendUGC:(unsigned long long)arg1 additionalParams:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)socializeMultiBiu:(unsigned long long)arg1 additionalParams:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)deleteLikeToFeed:(unsigned long long)arg1 postedByUin:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)addLikeToFeed:(unsigned long long)arg1 postedByUin:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)sendLikingOperation:(unsigned int)arg1 toFeed:(unsigned long long)arg2 postedByUin:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)socializeSendLikingOperation:(id)arg1 operation:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)deleteComment:(id)arg1 ofFeed:(unsigned long long)arg2 feedPosterUin:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)addComment:(id)arg1 toFeed:(unsigned long long)arg2 feedPosterUin:(unsigned long long)arg3 replyToComment:(id)arg4 replyToUin:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (_Bool)handle0x831Response:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (_Bool)deleteFeed:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)compareUinList:(id)arg1 withList:(id)arg2;
- (_Bool)handle0x83aResponse:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (id)cacheForKey:(id)arg1 ofSeq:(int)arg2;
- (_Bool)fetchFeedOfStream:(unsigned long long)arg1 betweenOlderFeedId:(unsigned long long)arg2 newerFeedId:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)fetchFeed:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)fetchNewFeedOfStream:(unsigned long long)arg1 localNewestFeedId:(unsigned long long)arg2 localFeedInfoList:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)setReq:(struct CPBMessageEncoder *)arg1 toUpdateLocalFeedInfoList:(id)arg2 updateFeedInfo:(_Bool)arg3 updateLikeInfo:(_Bool)arg4 updateComments:(_Bool)arg5;
- (_Bool)updateLocalFeedOfStream:(unsigned long long)arg1 feedInfoList:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)fetchOldFeedOfStream:(unsigned long long)arg1 localOldestFeedId:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (int)updateFeedCommentsOf:(id)arg1 ofUin:(unsigned long long)arg2;
- (void)notifyError:(id)arg1;
- (void)handleError:(int)arg1 ofSeq:(int)arg2;
- (_Bool)handAdReportResponse:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getOIDBSSOPKG:(int)arg1 buffer:(id)arg2 serviceType:(unsigned int)arg3;
- (id)getOIDBSSOPKG:(int)arg1 buffer:(id)arg2;
- (void)removeCurrentResultForSeq:(int)arg1;
- (void)transferCurrentResultFrom:(int)arg1 to:(int)arg2;
- (id)currentResultForSeq:(int)arg1;
- (void)addCurrentResult:(id)arg1 forSeq:(int)arg2;
- (id)deletedArticleIDListFromRspBody:(struct CPBMessageDecoder *)arg1 isChannel:(_Bool)arg2;
- (void)transferCompletionBlockFrom:(int)arg1 to:(int)arg2;
- (void)removeCompletionBlockForSeq:(int)arg1;
- (CDUnknownBlockType)completionBlockForSeq:(int)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forSeq:(int)arg2;
- (int)sendRequestWithOidbServiceType:(struct CPBMessageEncoder *)arg1 commend:(unsigned int)arg2 commendString:(id)arg3 serviceType:(unsigned int)arg4;
- (void)cancelRequest:(long long)arg1;
- (int)sendRequest:(struct CPBMessageEncoder *)arg1 commend:(unsigned int)arg2 commendString:(id)arg3;
- (int)GetNetType;
- (id)getAppVersion;
- (_Bool)handleChannelManageResult:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (void)updateChannel:(id)arg1;
- (void)requestThirdVidWithParams:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestThirdUrlWithParams:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateChannel:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)handleChannelSubscribe:(basic_string_075b6133 *)arg1 sequence:(unsigned int)arg2;
- (_Bool)handleRecommChannelListResp:(struct CPBMessageDecoder *)arg1 sequence:(unsigned int)arg2;
- (_Bool)handleUserChannelListResp:(struct CPBMessageDecoder *)arg1 sequence:(unsigned int)arg2;
- (_Bool)handleSearchChannel:(struct CPBMessageDecoder *)arg1 sequence:(unsigned int)arg2;
- (id)searchChannelListFromResponse:(struct CPBMessageDecoder *)arg1;
- (id)channelListFromResponse:(struct CPBMessageDecoder *)arg1;
- (void)fetchSearchSuggestChannelListWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchChannel:(_Bool)arg1 allSubscribe:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchUserChannelListInfoWithCompletionBlock:(unsigned int)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)fetchRecommChannelListWithCompletionBlock:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)fetchChannelListWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)handleArticleFeature:(basic_string_075b6133 *)arg1 sequence:(unsigned int)arg2;
- (void)fetchIndividualArticlesFeatureByOpType:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)parseSubscribeTabResult:(struct CPBMessageDecoder *)arg1 sequence:(int)arg2;
- (_Bool)handleNewArticleResult:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (void)parseArticle:(id)arg1 withArticlePbDecoder:(struct CPBMessageDecoder *)arg2;
- (void)parseAdListFromPbDecoder:(struct CPBMessageDecoder *)arg1 size:(int)arg2;
- (id)articleListFromRspBody:(struct CPBMessageDecoder *)arg1 seq:(int)arg2;
- (void)fetchSubscibeTabArticle:(_Bool)arg1 articleSeq:(unsigned long long)arg2 currentArticleIDList:(id)arg3 cookie:(id)arg4 updateTimes:(unsigned int)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)fetchArticlesInChannel:(unsigned long long)arg1 isNewArticle:(_Bool)arg2 articleSeq:(unsigned long long)arg3 currentArticleIDList:(id)arg4 requestTopic:(_Bool)arg5 requestArticle:(_Bool)arg6 subcribeArticleIDList:(id)arg7 strategyIdList:(id)arg8 algorithmIdList:(id)arg9 actionData:(id)arg10 channelCookie:(id)arg11 channelType:(unsigned int)arg12 updateTimes:(unsigned int)arg13 uuid:(id)arg14 saArticleId:(unsigned long long)arg15 saArticleTitle:(id)arg16 refreshType:(unsigned int)arg17 requestAd:(_Bool)arg18 completionBlock:(CDUnknownBlockType)arg19;
- (void)updateAdsInChannel:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchArticlesInChannel:(unsigned long long)arg1 beforeLocalOldestArticleSeq:(unsigned long long)arg2 currentArticleIDList:(id)arg3 channelCookie:(id)arg4 channelType:(unsigned int)arg5 updateTimes:(unsigned int)arg6 uuid:(id)arg7 saArticleId:(unsigned long long)arg8 saArticleTitle:(id)arg9 refreshType:(unsigned int)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)updateArticlesInChannel:(unsigned long long)arg1 localNewestArticleSeq:(unsigned long long)arg2 currentArticleIDList:(id)arg3 requestTopic:(_Bool)arg4 subcribeArticleIDList:(id)arg5 strategyIdList:(id)arg6 algorithmIdList:(id)arg7 actionData:(id)arg8 channelCookie:(id)arg9 channelType:(unsigned int)arg10 updateTimes:(unsigned int)arg11 uuid:(id)arg12 saArticleId:(unsigned long long)arg13 saArticleTitle:(id)arg14 refreshType:(unsigned int)arg15 completionBlock:(CDUnknownBlockType)arg16;
- (_Bool)handleChannelArticleByNoRIJResult:(basic_string_075b6133 *)arg1 sequence:(int)arg2;
- (void)dealloc;
- (_Bool)needFetchSearchSuggest;
- (_Bool)needFetch;
- (void)onLoginSuccess:(id)arg1;
- (void)updatePhoneInfo;
- (void)setIsManualRefresh:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
