//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTIdentityPickerViewDelegate.h"
#import "CTPTitleTextViewCellDelegate.h"
#import "CTRadioListWidgetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class BillAddressInformationModel, CTIDCardTypeNode, CTPTitleTextViewCell, CTPayWarningCellManager, CTTitleValueCell, NSMutableArray, NSString, UIButton, UIScrollView, UITableView, UITextView;

@interface CTPBillingAddressViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, CTPTitleTextViewCellDelegate, UITextViewDelegate, CTRadioListWidgetDelegate, CTIdentityPickerViewDelegate>
{
    _Bool _isKeyboardShown;
    _Bool _isIdentityPickerViewDelete;
    int _billAddressBitMap;
    NSMutableArray *_arrayCells;
    NSMutableArray *_arrayMethods;
    BillAddressInformationModel *_billInfo;
    NSMutableArray *_IDCardTypeList;
    CTIDCardTypeNode *_selectedIDCardType;
    NSString *_idCardTypeList;
    CDUnknownBlockType _billAddressBlock;
    CDUnknownBlockType _billAddressCancelBlock;
    UITableView *_mTableView;
    UIScrollView *_scrollView;
    CTPTitleTextViewCell *_cellCardHolder;
    CTTitleValueCell *_cellIDCardType;
    CTPTitleTextViewCell *_cellIDCardNumber;
    CTPTitleTextViewCell *_cellPhoneNum;
    CTPTitleTextViewCell *_cellEmail;
    CTPTitleTextViewCell *_cellPostCode;
    CTPTitleTextViewCell *_cellCountry;
    CTPTitleTextViewCell *_cellProvince;
    CTPTitleTextViewCell *_cellCity;
    CTPTitleTextViewCell *_cellAddress;
    UIButton *_buttonConfirm;
    CTPayWarningCellManager *_warningManager;
    double _editingWidgetBottomAtScreen;
    long long _keyboardHeight;
    UITextView *_activeTextView;
}

+ (id)controllerWithCardModel:(id)arg1 billInfo:(id)arg2 billAddressBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool isIdentityPickerViewDelete; // @synthesize isIdentityPickerViewDelete=_isIdentityPickerViewDelete;
@property(retain, nonatomic) UITextView *activeTextView; // @synthesize activeTextView=_activeTextView;
@property(nonatomic) long long keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardShown; // @synthesize isKeyboardShown=_isKeyboardShown;
@property(nonatomic) double editingWidgetBottomAtScreen; // @synthesize editingWidgetBottomAtScreen=_editingWidgetBottomAtScreen;
@property(retain, nonatomic) CTPayWarningCellManager *warningManager; // @synthesize warningManager=_warningManager;
@property(retain, nonatomic) UIButton *buttonConfirm; // @synthesize buttonConfirm=_buttonConfirm;
@property(retain, nonatomic) CTPTitleTextViewCell *cellAddress; // @synthesize cellAddress=_cellAddress;
@property(retain, nonatomic) CTPTitleTextViewCell *cellCity; // @synthesize cellCity=_cellCity;
@property(retain, nonatomic) CTPTitleTextViewCell *cellProvince; // @synthesize cellProvince=_cellProvince;
@property(retain, nonatomic) CTPTitleTextViewCell *cellCountry; // @synthesize cellCountry=_cellCountry;
@property(retain, nonatomic) CTPTitleTextViewCell *cellPostCode; // @synthesize cellPostCode=_cellPostCode;
@property(retain, nonatomic) CTPTitleTextViewCell *cellEmail; // @synthesize cellEmail=_cellEmail;
@property(retain, nonatomic) CTPTitleTextViewCell *cellPhoneNum; // @synthesize cellPhoneNum=_cellPhoneNum;
@property(retain, nonatomic) CTPTitleTextViewCell *cellIDCardNumber; // @synthesize cellIDCardNumber=_cellIDCardNumber;
@property(retain, nonatomic) CTTitleValueCell *cellIDCardType; // @synthesize cellIDCardType=_cellIDCardType;
@property(retain, nonatomic) CTPTitleTextViewCell *cellCardHolder; // @synthesize cellCardHolder=_cellCardHolder;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(copy, nonatomic) CDUnknownBlockType billAddressCancelBlock; // @synthesize billAddressCancelBlock=_billAddressCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType billAddressBlock; // @synthesize billAddressBlock=_billAddressBlock;
@property(nonatomic) int billAddressBitMap; // @synthesize billAddressBitMap=_billAddressBitMap;
@property(retain, nonatomic) NSString *idCardTypeList; // @synthesize idCardTypeList=_idCardTypeList;
@property(retain, nonatomic) CTIDCardTypeNode *selectedIDCardType; // @synthesize selectedIDCardType=_selectedIDCardType;
@property(retain, nonatomic) NSMutableArray *IDCardTypeList; // @synthesize IDCardTypeList=_IDCardTypeList;
@property(retain, nonatomic) BillAddressInformationModel *billInfo; // @synthesize billInfo=_billInfo;
@property(retain, nonatomic) NSMutableArray *arrayMethods; // @synthesize arrayMethods=_arrayMethods;
@property(retain, nonatomic) NSMutableArray *arrayCells; // @synthesize arrayCells=_arrayCells;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)radioListWidget:(id)arg1 didSelect:(id)arg2;
- (void)cellIdCardFillinChangeValue:(id)arg1;
- (void)identityPickerView:(id)arg1 pickValue:(id)arg2 type:(int)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewCellChange:(id)arg1;
- (void)swipDownOrUp;
- (void)repositionScrollViewWithOffset:(double)arg1;
- (double)getEditingWidgetBottomAtScreenWhenChange:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)KeyboardWillHide:(id)arg1;
- (void)KeyboardWillShow:(id)arg1;
- (void)removeKeyboardNotification;
- (void)registerKeyboardNotification;
- (void)confirmClick;
- (id)formatBillAddress;
- (id)getIDCardNum;
- (id)generatorWarningMsgInCell:(id)arg1 msg:(id)arg2;
- (id)checkInputCell;
- (void)switchCellIdCardFillinKeyboard:(id)arg1;
- (void)resetDefaultIDCardType;
- (void)handleEventSelectIDCardType;
- (void)refreshView;
- (void)backBarButtonClicked:(id)arg1;
- (void)handleCellCountry;
- (void)setupTableCells;
- (void)initBaseView;
- (void)setBackButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)initBaseData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

