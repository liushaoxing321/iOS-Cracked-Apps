//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSThread, NSTimer, UploadSessionMgr;

@interface QZUploadManager : NSObject
{
    NSTimer *_keepAliveTimer;
    UploadSessionMgr *_keepAliveSessionMgr;
    NSTimer *_checkTimer;
    NSThread *_uploadThread;
    NSOperationQueue *_requestQueue;
    _Bool _bStop;
    _Bool _bSuspendRequest;
    id <QZUploadDelegate> _uploaddelegate;
    NSOperationQueue *_otherQueue;
}

+ (id)preUploadSharedManager;
+ (id)sendBoxSharedManager;
@property(readonly, nonatomic) NSOperationQueue *otherQueue; // @synthesize otherQueue=_otherQueue;
@property(nonatomic) __weak id <QZUploadDelegate> uploaddelegate; // @synthesize uploaddelegate=_uploaddelegate;
@property(readonly, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void).cxx_destruct;
- (id)uploadThread;
- (void)finishUploadThread;
- (_Bool)clearSpecialRequestWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)clearAllRequest:(id)arg1;
- (void)clearAllRequest;
- (long long)curReqCnt;
- (void)resume;
- (void)suspend;
- (void)stopAsync;
- (void)stop;
- (_Bool)isReady;
- (_Bool)cancelRequestFile:(id)arg1 Report:(_Bool)arg2;
- (_Bool)cancelRequestByPacket:(id)arg1;
- (_Bool)start:(id)arg1;
- (_Bool)startSingle:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)sendboxAddPacket:(id)arg1;
- (id)delegateDispatcher;
- (void)chanceToProcessPacket:(id)arg1;
- (void)notifyAlbumName:(id)arg1;
- (void)notifyServerTime:(id)arg1;
- (void)notifyFileStatus:(id)arg1;
- (void)notifyProcess:(id)arg1;
- (void)notifyFail:(id)arg1;
- (void)notifySucess:(id)arg1;
- (void)notifyBeginUpload:(id)arg1;
- (void)notifyRequestCancel:(id)arg1;
- (void)notifyRequestFinish:(id)arg1;
- (void)notifyRequestStart:(id)arg1;
- (void)checkTimerStatus;
- (void)stopCheckTimer;
- (void)startCheckTimer;
- (void)checkState;
- (void)applicationEventListen;
- (void)applicationWillEnterForeground;
- (void)applicationWillEnterBackground;
- (void)runRequests;
- (id)getKeepAliveSessionMgr;
- (void)clearKeepAliveSessionMgr;
- (void)stopKeepSessionTimer;
- (void)startKeepSessionTimer;
- (void)saveSessionMgr:(id)arg1;

@end

