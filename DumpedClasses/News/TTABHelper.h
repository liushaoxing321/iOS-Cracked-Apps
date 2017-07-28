//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Singleton.h"

@class NSString, TTABManager, TTABMigrationManager;

@interface TTABHelper : NSObject <Singleton>
{
    TTABManager *_ABManager;
    TTABMigrationManager *_ABMigrationManager;
}

+ (unsigned long long)clearCacheLiteraryType;
@property(retain, nonatomic) TTABMigrationManager *ABMigrationManager; // @synthesize ABMigrationManager=_ABMigrationManager;
@property(retain, nonatomic) TTABManager *ABManager; // @synthesize ABManager=_ABManager;
- (void).cxx_destruct;
- (id)valueForFeatureKey:(id)arg1;
- (void)saveServerSettins:(id)arg1;
- (void)saveABVersion:(id)arg1;
- (id)ABVersion;
- (id)ABFeature;
- (id)ABGroup;
- (void)distributionIfNeed;
- (void)migrationIfNeed;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
