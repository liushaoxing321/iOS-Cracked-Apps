//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKJSController.h"

@interface KKObserverController : KKJSController
{
    id <KKObserverProtocol> _observer;
}

+ (Class)defaultElementClassWithName:(id)arg1 parent:(id)arg2;
@property(readonly, nonatomic) id <KKObserverProtocol> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)endDocument;
- (id)initWithName:(id)arg1 bundle:(id)arg2 view:(id)arg3 observer:(id)arg4;
- (void)dealloc;

@end
