//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQTODownloadSession.h"

@class MQQHttpRequest;

@interface MQQTODownloadForegroundSession : MQQTODownloadSession
{
    _Bool _isDownloading;
    MQQHttpRequest *_currentRequest;
}

@property(retain, nonatomic) MQQHttpRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void)downloadRequestDidFail:(id)arg1;
- (void)downloadRequestDidFinish:(id)arg1;
- (void)stopDownloadTask;
- (void)startDownloadTaskWithInfo:(id)arg1;
- (void)stopDownload;
- (void)startDownload;
- (void)dealloc;

@end
