//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppTableView.h"

@class WeAppActionManager, WeAppViewManager;

@interface WeAppCascadeSelectorTableViewController : WeAppTableView
{
    WeAppViewManager *vm;
    WeAppActionManager *actionManager;
}

- (void).cxx_destruct;
- (id)setupString:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)setupActionWithActionItem:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)setupEventWithEventItem:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)setupStyleBindingWithStyleBindingItem:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)setupDataBindingWithDictionary:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)setupExpressionWithExpressionItem:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)setupConditionWithConditionItem:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (void)recurSetupComponentWithComponentItem:(id)arg1 atIndex:(unsigned long long)arg2 keyWord:(id)arg3;
- (long long)getSelectionStyle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)createView;

@end

