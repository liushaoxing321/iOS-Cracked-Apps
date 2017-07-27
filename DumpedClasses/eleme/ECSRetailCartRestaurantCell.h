//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ECSRetailCartRestaurant, NSMutableArray, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface ECSRetailCartRestaurantCell : NVMTableViewCell
{
    CDUnknownBlockType _didClickDeleteButton;
    CDUnknownBlockType _didClickSelf;
    CDUnknownBlockType _didClickCheckButton;
    UIButton *_checkButton;
    UILabel *_restaurantNameLabel;
    UIImageView *_arrowImageView;
    UILabel *_weightLabel;
    UIButton *_deleteButton;
    UITapGestureRecognizer *_tapGR;
    ECSRetailCartRestaurant *_restaurant;
    NSMutableArray *_accessibleElements;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) ECSRetailCartRestaurant *restaurant; // @synthesize restaurant=_restaurant;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *weightLabel; // @synthesize weightLabel=_weightLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *restaurantNameLabel; // @synthesize restaurantNameLabel=_restaurantNameLabel;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(copy, nonatomic) CDUnknownBlockType didClickCheckButton; // @synthesize didClickCheckButton=_didClickCheckButton;
@property(copy, nonatomic) CDUnknownBlockType didClickSelf; // @synthesize didClickSelf=_didClickSelf;
@property(copy, nonatomic) CDUnknownBlockType didClickDeleteButton; // @synthesize didClickDeleteButton=_didClickDeleteButton;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)clickDeleteButtonAction:(id)arg1;
- (void)clickCheckButtonAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)configCellWithRestaurantCheckoutInfo:(id)arg1;
- (void)setupSubviews;
- (void)setupSelf;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
