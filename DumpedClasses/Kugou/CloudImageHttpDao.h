//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface CloudImageHttpDao : BaseHttpDao
{
}

- (id)signWithDicParam:(id)arg1;
- (id)requestAuthKeyWithType:(long long)arg1 withBucketName:(id)arg2 withFileName:(id)arg3 WithError:(id *)arg4;
- (id)uploadImage:(id)arg1 withBucketName:(id)arg2 withUploadUrl:(id)arg3 withAuthKey:(id)arg4 WithError:(id *)arg5;
- (id)uploadImage:(id)arg1 saveToBucket:(id)arg2 withError:(id *)arg3;

@end
