//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProfileMediaUploadEventHandler-Protocol.h"

@class FBProfileMediaDeeplinkAttachment, FBProfileVideoUploadFlowDelegateHandler, NSString, UIViewController;
@protocol FBProfileEditingUploadStepHandler;

@interface FBProfileVideoUploadStagingGroundUploadEventHandler : NSObject <FBProfileMediaUploadEventHandler>
{
    UIViewController *_hostingViewController;
    UIViewController *_videoSelectionViewController;
    FBProfileVideoUploadFlowDelegateHandler *_profileVideoUploadHandler;
    FBProfileMediaDeeplinkAttachment *_deeplinkAttachment;
    _Bool _enableFrameSelectionInUMG;
    id <FBProfileEditingUploadStepHandler> _uploadEditingStepHandler;
}

@property(nonatomic) __weak id <FBProfileEditingUploadStepHandler> uploadEditingStepHandler; // @synthesize uploadEditingStepHandler=_uploadEditingStepHandler;
- (void).cxx_destruct;
- (void)handleUploadEventWithDataPack:(id)arg1 dependencyPack:(id)arg2;
- (id)checkValidation;
- (id)initWithHosintViewController:(id)arg1 selectingViewController:(id)arg2 profileVideoUploadHandler:(id)arg3 deeplinkAttachment:(id)arg4 enableFrameSelectionInUMG:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
