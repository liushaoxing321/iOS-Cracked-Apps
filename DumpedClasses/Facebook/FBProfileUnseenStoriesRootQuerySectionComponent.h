//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBCompositeSectionComponent.h>

@protocol FBProfileUnseenStoriesToolbox;

@interface FBProfileUnseenStoriesRootQuerySectionComponent : FBCompositeSectionComponent
{
    id <FBProfileUnseenStoriesToolbox> _toolbox;
}

+ (id)newWithFragmentModel:(struct FBProfileUnseenStoriesRootQuerySectionComponentGraphQL)arg1 isOriginatedFromProfileSurfing:(_Bool)arg2 sectionComponentToolbox:(id)arg3 toolbox:(id)arg4;
@property(readonly, nonatomic) id <FBProfileUnseenStoriesToolbox> toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;

@end
