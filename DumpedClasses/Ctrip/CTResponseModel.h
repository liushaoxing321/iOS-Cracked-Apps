//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CTResponseModel : NSObject
{
    _Bool _isSuccess;
    _Bool _isCanceled;
    int _errorCode;
    int _taskType;
    int _childTaskCount;
    int _errorCodeFromServer;
    NSString *_errorInfo;
    NSString *_addInfo;
    NSString *_token;
    NSMutableArray *_childTaskIndexArray;
    NSString *_errorTitle;
}

@property(nonatomic) int errorCodeFromServer; // @synthesize errorCodeFromServer=_errorCodeFromServer;
@property(copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(retain, nonatomic) NSMutableArray *childTaskIndexArray; // @synthesize childTaskIndexArray=_childTaskIndexArray;
@property(nonatomic) int childTaskCount; // @synthesize childTaskCount=_childTaskCount;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *addInfo; // @synthesize addInfo=_addInfo;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;
- (id)init;

@end
