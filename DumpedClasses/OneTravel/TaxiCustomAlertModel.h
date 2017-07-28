//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPaidCustomAlertModel.h"

@class NSString;

@interface TaxiCustomAlertModel : SPaidCustomAlertModel
{
    NSString *_iconImageUrl;
    NSString *_bgImageUrl;
    NSString *_cancelImageUrl;
    NSString *_confirmImageUrl;
    NSString *_titleColorString;
    NSString *_messageColorString;
    NSString *_cancelColorString;
    NSString *_confirmColorString;
}

@property(copy, nonatomic) NSString *confirmColorString; // @synthesize confirmColorString=_confirmColorString;
@property(copy, nonatomic) NSString *cancelColorString; // @synthesize cancelColorString=_cancelColorString;
@property(copy, nonatomic) NSString *messageColorString; // @synthesize messageColorString=_messageColorString;
@property(copy, nonatomic) NSString *titleColorString; // @synthesize titleColorString=_titleColorString;
@property(copy, nonatomic) NSString *confirmImageUrl; // @synthesize confirmImageUrl=_confirmImageUrl;
@property(copy, nonatomic) NSString *cancelImageUrl; // @synthesize cancelImageUrl=_cancelImageUrl;
@property(copy, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(copy, nonatomic) NSString *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
- (void).cxx_destruct;
- (id)p_getImageWithUrl:(id)arg1;
- (id)confirmColor;
- (id)cancelColor;
- (id)messageColor;
- (id)titleColor;
- (id)confirmImage;
- (id)cancelImage;
- (id)bgImage;
- (id)iconImage;
- (_Bool)isValid;
- (id)initWithDictionary:(id)arg1;

@end
