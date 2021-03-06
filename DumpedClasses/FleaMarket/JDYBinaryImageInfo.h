//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDYBinaryImageInfo : NSObject
{
    NSString *_imageName;
    NSString *_imagePath;
    NSString *_imageUuid;
    NSString *_imageArch;
    unsigned long long _imageBase;
    unsigned long long _imageSize;
}

+ (struct JDYBinaryImageTextSegmentRange)textSegmentRangeOfImage:(unsigned int)arg1;
+ (id)uuidOfImage:(const struct mach_header *)arg1;
+ (unsigned long long)segmentSizeOfImage:(const struct mach_header *)arg1;
+ (unsigned long long)jdy_firstCmdAfterHeader:(const struct mach_header *)arg1;
+ (id)loadedBinaryImages;
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long imageBase; // @synthesize imageBase=_imageBase;
@property(retain, nonatomic) NSString *imageArch; // @synthesize imageArch=_imageArch;
@property(retain, nonatomic) NSString *imageUuid; // @synthesize imageUuid=_imageUuid;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;

@end

