//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession;

@interface FBSettingsButtonActionController : NSObject
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (_Bool)performActionForButtonWithKey:(id)arg1;
- (void)_checkForUpdates;
- (void)_failXplatMustFixAssertWarning;
- (void)_failMustFixNow;
- (void)_failWarningNow;
- (void)_failDebugNow;
- (void)_failAssertNow;
- (void)_generateCPPExceptionNow:(_Bool)arg1;
- (void)_generateExceptionNow:(_Bool)arg1;
- (void)_sendCPUUsage;
- (void)_allocateMemory;
- (void)_generateOOM;
- (void)_fbExitCall;
- (void)_crashNowEXC_BAD_ACCESS;
- (void)_crashNowAbort;
- (void)_checkFailAssertNow;
- (void)_checkCrashNow;
- (id)initWithSession:(id)arg1;

@end
