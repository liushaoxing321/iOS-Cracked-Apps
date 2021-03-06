//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItemAccessLog, NSArray, NSMutableArray, NSObject<TTPlayer>;

@interface TTAVPlayerItemAccessLog : NSObject
{
    AVPlayerItemAccessLog *_accessLog;
    NSObject<TTPlayer> *_player;
    NSMutableArray *_eventArray;
}

@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property(nonatomic) __weak NSObject<TTPlayer> *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItemAccessLog *accessLog; // @synthesize accessLog=_accessLog;
- (void).cxx_destruct;
- (void)clearEvent;
- (void)willReadWatchedDuration;
@property(readonly, nonatomic) NSArray *events;
- (void)addEvent:(id)arg1;
- (id)init;

@end

