//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MAMDataBuilderProcol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface MAMHTTPDataBuilder : NSObject <MAMDataBuilderProcol>
{
    _Bool _bCompleteRequest;
    int _statusCode;
    int _errorCode;
    int _dnsNumber;
    int _dnsFailNumber;
    NSString *_url;
    NSURL *_replacedDNSURL;
    double _requestEndTime;
    double _responseStartTime;
    double _responseEndTime;
    double _finishHeadersTime;
    double _firstPackageTime;
    long long _sendBytes;
    long long _receivedBytes;
    NSDictionary *_responseHeaders;
    NSArray *_redirectUrls;
    double _readEndTime;
    NSArray *_ips;
    NSString *_errorMsg;
    double _requestStartTime;
    double _dnsTime;
    NSDictionary *_requestHeaders;
    unsigned long long _dataSumSize;
}

@property(nonatomic) unsigned long long dataSumSize; // @synthesize dataSumSize=_dataSumSize;
@property(copy, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(nonatomic) int dnsFailNumber; // @synthesize dnsFailNumber=_dnsFailNumber;
@property(nonatomic) int dnsNumber; // @synthesize dnsNumber=_dnsNumber;
@property(nonatomic) double dnsTime; // @synthesize dnsTime=_dnsTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSArray *ips; // @synthesize ips=_ips;
@property(nonatomic) double readEndTime; // @synthesize readEndTime=_readEndTime;
@property(retain, nonatomic) NSArray *redirectUrls; // @synthesize redirectUrls=_redirectUrls;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool bCompleteRequest; // @synthesize bCompleteRequest=_bCompleteRequest;
@property(nonatomic) long long receivedBytes; // @synthesize receivedBytes=_receivedBytes;
@property(nonatomic) long long sendBytes; // @synthesize sendBytes=_sendBytes;
@property(nonatomic) double firstPackageTime; // @synthesize firstPackageTime=_firstPackageTime;
@property(nonatomic) double finishHeadersTime; // @synthesize finishHeadersTime=_finishHeadersTime;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(retain, nonatomic) NSURL *replacedDNSURL; // @synthesize replacedDNSURL=_replacedDNSURL;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)checkedValid;
- (id)build;
- (void)httpDataBuildDownloadDestinationURL:(id)arg1 resumeDataSize:(unsigned long long)arg2;
- (void)httpDataBuildFinishDownloadingDestinationURL:(id)arg1;
- (void)httpDataBuildResponseInRedirect;
- (void)httpDataBuildRedirectRequest:(id)arg1;
- (void)httpDataBuildFinishLoading;
- (void)httpDataBuildReceiveDataSize:(unsigned long long)arg1;
- (void)httpDataBuildReceiveResponse:(id)arg1;
- (void)httpDataBuildFail:(id)arg1;
- (void)httpDataBuildStart;
- (void)setURL:(id)arg1;
- (void)setRequest:(id)arg1;

@end
