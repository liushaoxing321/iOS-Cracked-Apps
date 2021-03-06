//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface KKKeyObserver : NSObject
{
    NSMutableArray *_callbacks;
    NSMutableDictionary *_children;
}

@property(retain, nonatomic) NSMutableDictionary *children; // @synthesize children=_children;
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)changeObserver:(id)arg1;
- (void)change:(id)arg1 index:(int)arg2 keyPath:(id)arg3 observer:(id)arg4;
- (void)removeCallback:(CDUnknownBlockType)arg1 weakObject:(id)arg2 keys:(id)arg3 index:(int)arg4;
- (void)addCallback:(id)arg1 keys:(id)arg2 index:(int)arg3;

@end

