//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YYCache;

@interface AWEVideoDiskCache : NSObject
{
    YYCache *_cacheInstance;
}

+ (void)trimDiskCacheToQuota;
+ (void)clearForURLString:(id)arg1;
+ (void)sizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)clear;
+ (void)hasCacheForURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)videoDataForURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setVideoCache:(id)arg1 forURLString:(id)arg2 cost:(unsigned long long)arg3 source:(id)arg4;
+ (void)setVideoCacheToDisk:(id)arg1 forURLString:(id)arg2;
+ (void)setVideoCacheToMemory:(id)arg1 forURLString:(id)arg2 cost:(unsigned long long)arg3;
+ (void)config:(CDUnknownBlockType)arg1;
+ (id)cachePath;
+ (id)cacheQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) YYCache *cacheInstance; // @synthesize cacheInstance=_cacheInstance;
- (void).cxx_destruct;
- (void)_trimDiskCacheToQuota;
- (void)configCacheInstance;
- (void)_addNotificationObservers;
- (void)dealloc;
- (id)init;

@end
