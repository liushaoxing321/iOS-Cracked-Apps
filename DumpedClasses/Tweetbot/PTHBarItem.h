//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIFont, UIImage, UIView;

@interface PTHBarItem : NSObject
{
    NSMutableArray *_gestureRecognizers;
    _Bool _enabled;
    NSString *_title;
    UIImage *_image;
    long long _tag;
    UIImage *_selectedImage;
    UIImage *_highlightedImage;
    UIImage *_disabledImage;
    UIImage *_backgroundImage;
    UIImage *_selectedBackgroundImage;
    UIImage *_highlightedBackgroundImage;
    UIImage *_disabledBackgroundImage;
    UIColor *_titleColor;
    UIColor *_selectedTitleColor;
    UIColor *_highlightedTitleColor;
    UIColor *_disabledTitleColor;
    UIFont *_titleFont;
    NSString *_badgeValue;
    Class _viewClass;
    UIView *_view;
    struct UIEdgeInsets _imageInsets;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(nonatomic) __weak Class viewClass; // @synthesize viewClass=_viewClass;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *disabledTitleColor; // @synthesize disabledTitleColor=_disabledTitleColor;
@property(retain, nonatomic) UIColor *highlightedTitleColor; // @synthesize highlightedTitleColor=_highlightedTitleColor;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIImage *disabledBackgroundImage; // @synthesize disabledBackgroundImage=_disabledBackgroundImage;
@property(retain, nonatomic) UIImage *highlightedBackgroundImage; // @synthesize highlightedBackgroundImage=_highlightedBackgroundImage;
@property(retain, nonatomic) UIImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setBarItem:(id)arg1;
- (void)addTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
