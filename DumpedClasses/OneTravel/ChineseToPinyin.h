//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ChineseToPinyin : NSObject
{
    _Bool firstLetterOnly_;
    _Bool blankSeparator_;
    _Bool polyphone_;
}

+ (id)permutationOfPolyphone:(id)arg1;
+ (id)pinyinMatchWord:(id)arg1 fromItems:(id)arg2;
@property(nonatomic) _Bool polyphone; // @synthesize polyphone=polyphone_;
@property(nonatomic) _Bool blankSeparator; // @synthesize blankSeparator=blankSeparator_;
@property(nonatomic) _Bool firstLetterOnly; // @synthesize firstLetterOnly=firstLetterOnly_;
- (_Bool)isPinyinUnit:(id)arg1 polyphonePrefixOfUnit:(id)arg2;
- (_Bool)isPinyinUnit:(id)arg1 polyphoneEqualToUnit:(id)arg2;
- (id)pinyinForChinese:(id)arg1;
- (id)init;

@end
