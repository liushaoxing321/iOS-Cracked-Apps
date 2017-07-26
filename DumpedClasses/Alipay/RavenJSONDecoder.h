//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RavenJSONDecoder : NSObject
{
    unsigned long long _options;
}

+ (id)decoder;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)setProperty:(struct objc_property *)arg1 ofObject:(id)arg2 lookupDictionary:(id)arg3;
- (void)setupObject:(id)arg1 ofClass:(Class)arg2 lookupDictionary:(id)arg3;
- (id)decodeObjectOfClass:(Class)arg1 fromJSONObject:(id)arg2;
- (id)decodeArrayFromJSONObject:(id)arg1;
- (id)decodeDictionaryFromJSONObject:(id)arg1;
- (id)decodeFromJSONObject:(id)arg1;
- (id)decodeFromJSONString:(id)arg1 options:(unsigned long long)arg2;

@end
