//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSAttributedString, NSString, UIColor;

@interface NVMInvoice : NVMModel
{
    NSString *_invoiceTitle;
    long long _invoiceID;
    NSString *_invoiceNumber;
    unsigned long long _invoiceType;
    long long _isValid;
}

+ (id)invoiceTypeNameFromInvoiceType:(unsigned long long)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long isValid; // @synthesize isValid=_isValid;
@property(nonatomic) unsigned long long invoiceType; // @synthesize invoiceType=_invoiceType;
@property(copy, nonatomic) NSString *invoiceNumber; // @synthesize invoiceNumber=_invoiceNumber;
@property(nonatomic) long long invoiceID; // @synthesize invoiceID=_invoiceID;
@property(copy, nonatomic) NSString *invoiceTitle; // @synthesize invoiceTitle=_invoiceTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *invoiceTagColor;
@property(readonly, copy, nonatomic) NSString *invoiceTagName;
@property(readonly, copy, nonatomic) NSAttributedString *attributedInvoiceTitle;

@end
