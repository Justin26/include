//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CADisplayLink, NSMutableDictionary, NSTimer, UIImageView, UITableView;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIImageView *_topDropShadowView;
    UIImageView *_bottomDropShadowView;
    UIView *_containerView;
    id <SBLockScreenNotificationViewDelegate> _delegate;
    id <SBLockScreenNotificationModel> _model;
    CADisplayLink *_displayLink;
    double _currentTextAlpha;
    double _fadeStartTimestamp;
    NSTimer *_oldTextDisabledTimer;
    unsigned long long _indexOfNewItem;
    _Bool _notificationCellIsScrollingToPasscode;
    double _notificationScrollDecelerationRatio;
    NSMutableDictionary *_heightForListItemCache;
    double _totalContentHeight;
    double _startingScrollOffset;
    double _lastDistanceScrolled;
    _Bool _updateCellsToVisibleOnPluginWillDisable;
}

@property(nonatomic) _Bool updateCellsToVisibleOnPluginWillDisable; // @synthesize updateCellsToVisibleOnPluginWillDisable=_updateCellsToVisibleOnPluginWillDisable;
@property(nonatomic) id <SBLockScreenNotificationModel> model; // @synthesize model=_model;
@property(nonatomic) id <SBLockScreenNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cellTextFadeTimerFired:(id)arg1;
- (void)_textDisabledTimerFired:(id)arg1;
- (void)_clearTextFadeTimer;
- (void)_clearTextDisabledTimer;
- (void)_resetAllFadeTimers;
- (void)_disableExistingContent;
- (struct UIEdgeInsets)_contentViewInsets;
- (_Bool)_disableIdleTimer:(_Bool)arg1;
- (void)_pluginWillDisable:(id)arg1;
- (void)updateForRemovalOfItems;
- (void)updateForRemovalOfItemAtIndex:(unsigned long long)arg1 removedItem:(id)arg2;
- (void)_postludeForUpdateForRemoval:(_Bool)arg1;
- (void)updateForModificationOfItemWithOldIndex:(unsigned long long)arg1 andNewIndex:(unsigned long long)arg2;
- (void)updateForAdditionOfItemAtIndex:(unsigned long long)arg1 allowHighlightOnInsert:(_Bool)arg2;
- (long long)_rowAnimationForDelete;
- (long long)_rowAnimationForInsert;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollingEndedInScrollView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_setNonSelectedCellsToVisible:(_Bool)arg1 withSelectedCell:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)lockScreenDidEndScrollingOnPage:(long long)arg1;
- (void)scrollToTopOfListAnimated:(_Bool)arg1;
- (void)setInScreenOffMode:(_Bool)arg1;
- (void)_updateTotalContentHeight;
- (void)_updateBottomShadowVisibility;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (void)layoutSubviews;
- (void)prepareForRemoval;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

