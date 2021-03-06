//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, PSListController, PSSpecifier;

@interface PSExpandableListGroupController : NSObject
{
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    int _collaspeAfterCount;
    NSMutableArray *_specifiers;
    BOOL _showAll;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

- (void)removeAllSpecifiers;
- (void)addSpecifiers:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)showAll;
- (id)spinnerSpecifier;
- (id)showAllSpecifier;
- (int)_groupIndex;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(int)arg3;
@property(readonly) NSArray *specifiers;
- (void)reloadSpecifier:(id)arg1;
- (void)dealloc;

@end

