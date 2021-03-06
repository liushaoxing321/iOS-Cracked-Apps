//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHorizontalTableViewDataSource.h"
#import "PSHorizontalTableViewDelegate.h"
#import "PSTemplatesScrollViewDelegate.h"

@class NSArray, NSDictionary, NSString, PSCategoryModel, PSHorizontalTableView, PSTemplateModel, PSTemplatesScrollView, RichStateModel;

@interface PSTemplatesContainerView : UIView <PSHorizontalTableViewDataSource, PSHorizontalTableViewDelegate, PSTemplatesScrollViewDelegate>
{
    NSDictionary *_templatesAllCateogries;
    NSArray *_categories;
    id <PSTemplatesContainerViewDelegate> _delegate;
    int _xo;
    NSArray *_templates;
    RichStateModel *_richModel;
    NSArray *_columModels;
    PSCategoryModel *_selectedCategory;
    PSHorizontalTableView *_categoryTableview;
    PSHorizontalTableView *_templateTableview;
    PSTemplatesScrollView *_templatesScrollView;
    PSTemplateModel *_selectedTemplate;
    _Bool _needsDefaultCategorySelection;
}

- (void).cxx_destruct;
- (void)templatesScrollView:(id)arg1 deSelectTemplate:(id)arg2;
- (void)templatesScrollView:(id)arg1 didSelectTemplate:(id)arg2;
- (void)templatesScrollView:(id)arg1 didClickedPromotionUrl:(id)arg2;
- (void)deselectCateogry:(id)arg1;
- (void)selectCategory:(id)arg1;
- (void)selectCategoryName:(id)arg1;
- (void)selectTemplate:(unsigned long long)arg1;
- (void)categoryViewTaped:(id)arg1;
- (unsigned long long)numberOfColums:(id)arg1;
- (double)psTableViewWidthForColum:(id)arg1 colum:(unsigned long long)arg2;
- (id)psTableView:(id)arg1 columForIndexPath:(unsigned long long)arg2;
- (id)getTemplatesByCategory:(id)arg1;
@property(retain, nonatomic) NSArray *categories; // @dynamic categories;
- (void)reloadCategoryData;
- (void)reloadData;
- (void)setDefaultTemplate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 richStateModel:(id)arg2;

// Remaining properties
@property(retain, nonatomic) PSHorizontalTableView *categoryTableview; // @dynamic categoryTableview;
@property(retain, nonatomic) NSArray *columModels; // @dynamic columModels;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PSTemplatesContainerViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needsDefaultCategorySelection; // @dynamic needsDefaultCategorySelection;
@property(retain, nonatomic) RichStateModel *richModel; // @dynamic richModel;
@property(retain, nonatomic) PSCategoryModel *selectedCategory; // @dynamic selectedCategory;
@property(retain, nonatomic) PSTemplateModel *selectedTemplate; // @dynamic selectedTemplate;
@property(readonly) Class superclass;
@property(retain, nonatomic) PSHorizontalTableView *templateTableview; // @dynamic templateTableview;
@property(retain, nonatomic) NSArray *templates; // @dynamic templates;
@property(retain, nonatomic) NSDictionary *templatesAllCateogries; // @dynamic templatesAllCateogries;
@property(retain, nonatomic) PSTemplatesScrollView *templatesScrollView; // @dynamic templatesScrollView;

@end

