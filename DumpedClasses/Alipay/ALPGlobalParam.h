//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@interface ALPGlobalParam : NSObject
{
    _Bool _isAddSucess;
    NSString *_resultSignId;
    NSString *_addBankCardSuccessKey;
    NSString *_sourceExp;
    UIViewController *_sucessDesVC;
}

+ (void)exitSuccessDesVC:(id)arg1;
+ (void)postSucessNotification;
+ (void)destoryInstance;
+ (id)instanceALPGlobalParam;
@property(nonatomic) __weak UIViewController *sucessDesVC; // @synthesize sucessDesVC=_sucessDesVC;
@property(retain, nonatomic) NSString *sourceExp; // @synthesize sourceExp=_sourceExp;
@property(retain, nonatomic) NSString *addBankCardSuccessKey; // @synthesize addBankCardSuccessKey=_addBankCardSuccessKey;
@property(retain, nonatomic) NSString *resultSignId; // @synthesize resultSignId=_resultSignId;
@property(nonatomic) _Bool isAddSucess; // @synthesize isAddSucess=_isAddSucess;
- (void).cxx_destruct;
- (_Bool)startApp;
- (id)init;

@end

