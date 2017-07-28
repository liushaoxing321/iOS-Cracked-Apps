//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSUserBaseModel.h"

@class SSUserRoleModel;

@interface SSUserModel : SSUserBaseModel
{
    _Bool _isFriend;
    _Bool _isOwner;
    long long _role;
    SSUserRoleModel *_userRole;
    unsigned long long _relation;
}

+ (id)usersWithArray:(id)arg1;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) unsigned long long relation; // @synthesize relation=_relation;
@property(retain, nonatomic) SSUserRoleModel *userRole; // @synthesize userRole=_userRole;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
