//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MAFIADataService : NSObject
{
}

+ (_Bool)saveSceneModel:(id)arg1 groupName:(id)arg2 sceneKey:(id)arg3;
+ (id)getSceneCahceForJudgment:(id)arg1 sceneConfig:(id)arg2;
+ (id)getFileDownloadUrl:(id)arg1;
+ (void)transformFileDataToSceneModel:(id)arg1 judgment:(id)arg2 sceneConfig:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)downloadSceneForJudgment:(id)arg1 sceneConfig:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getSceneLocal:(id)arg1 sceneKey:(id)arg2;
+ (id)getSceneConfig:(id)arg1 sceneKey:(id)arg2;

@end
