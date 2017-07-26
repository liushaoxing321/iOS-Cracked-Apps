//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UITextField;

@interface CloudVerifyIndiePasswdView : QQView <UITextFieldDelegate>
{
    UITextField *_inputText;
    UIButton *_okBtn;
    UIActivityIndicatorView *_indicatorView;
    QQView *_loadingView;
    UIImageView *_logoIV;
    id <CloudVerifyIndiePasswdDelegate> delegate;
}

@property(nonatomic) id <CloudVerifyIndiePasswdDelegate> delegate; // @synthesize delegate;
- (void)verifySucc;
- (void)verifyFailed:(id)arg1;
- (void)querySucc:(_Bool)arg1;
- (void)queryFailed;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)verifyPasswd:(id)arg1;
- (void)queryHasSetIndiePasswd;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
