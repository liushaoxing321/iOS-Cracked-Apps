//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, OCSSPrimitiveValue, OCSSStyleDeclaration;

@interface OCXProperty : NSObject
{
    NSString *_propertyName;
    OCSSPrimitiveValue *_propertyValue;
    OCSSStyleDeclaration *_parentStyleDeclaration;
}

@property __weak OCSSStyleDeclaration *parentStyleDeclaration; // @synthesize parentStyleDeclaration=_parentStyleDeclaration;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
@property(readonly) NSString *cssText;
@property(readonly, nonatomic) OCSSPrimitiveValue *value;
- (void)property:(id)arg1;

@end

