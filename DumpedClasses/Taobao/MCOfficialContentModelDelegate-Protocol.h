//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArray<TBIMSessionOfficialAdapter>, NSError, NSString;

@protocol MCOfficialContentModelDelegate <NSObject>

@optional
- (void)sendMessageFail:(id <MCOfficialMessageDOProtocol>)arg1 error:(NSError *)arg2;
- (void)messageDel:(id <TBIMSessionOfficialAdapter>)arg1 msgs:(NSArray *)arg2;
- (void)deleteMessageFail:(id <TBIMSessionOfficialAdapter>)arg1 msgs:(NSArray *)arg2 error:(NSError *)arg3;
- (void)officalAccountMessages:(NSArray *)arg1 hasMore:(_Bool)arg2 error:(NSError *)arg3 officalAccount:(NSString *)arg4 fromMessageId:(NSString *)arg5 isHistoryMessage:(_Bool)arg6;
- (void)officialAccountInfoUpdate:(NSArray<TBIMSessionOfficialAdapter> *)arg1;
@end
