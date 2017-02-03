//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SBMotionGestureObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBNotificationRowActionFactory;

@interface SBBulletinViewController : UITableViewController <SBMotionGestureObserver>
{
    id <SBBulletinViewControllerDelegate> _delegate;
    NSMutableArray *_orderedSections;
    NSMutableDictionary *_sectionIDsToBulletins;
    NSMutableDictionary *_reusableViewIDsToUnregisteredCellClassNames;
    NSMutableDictionary *_reusableViewIDsToUnregisteredHeaderClassNames;
    BOOL _tableViewNeedsReload;
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int decidesHighlight:1;
        unsigned int interestedInSelection:1;
    } _bulletinViewControllerDelegateFlags;
    SBNotificationRowActionFactory *_cellButtonFactory;
    BOOL _usesTableViewSeparators;
    BOOL _canDismissBulletins;
}

@property(nonatomic) BOOL canDismissBulletins; // @synthesize canDismissBulletins=_canDismissBulletins;
@property(nonatomic) BOOL usesTableViewSeparators; // @synthesize usesTableViewSeparators=_usesTableViewSeparators;
@property(nonatomic) id <SBBulletinViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_hasFirstBulletinInSectionWithRaiseAction;
- (void)_updateMotionGestureObservation;
- (void)didReceiveRaiseGesture;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_selectAction:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)hasContent;
- (void)invalidateCachedLayoutData;
- (void)invalidateSectionAndRowViewHeights:(CDUnknownBlockType)arg1;
- (id)viewForBulletin:(id)arg1 inSection:(id)arg2;
- (id)indexPathForBulletin:(id)arg1 inSection:(id)arg2;
- (id)sectionAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfSection:(id)arg1;
- (void)reloadBulletins:(id)arg1 inSection:(id)arg2;
- (void)replaceWithBulletin:(id)arg1 bulletin:(id)arg2 inSection:(id)arg3;
- (void)moveBulletin:(id)arg1 inSection:(id)arg2 beforeBulletin:(id)arg3 inSection:(id)arg4;
- (void)removeBulletin:(id)arg1 inSection:(id)arg2;
- (void)addBulletin:(id)arg1 inSection:(id)arg2;
- (void)insertBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3;
- (void)replaceWithSection:(id)arg1 section:(id)arg2;
- (void)reloadSections:(id)arg1;
- (void)moveSection:(id)arg1 beforeSection:(id)arg2;
- (void)removeSection:(id)arg1;
- (void)insertSection:(id)arg1 beforeSection:(id)arg2;
- (void)_performReplacementOperation:(id)arg1;
- (void)_performMoveOperation:(id)arg1;
- (void)_performRemovalOperation:(id)arg1;
- (void)_performInsertionOperation:(id)arg1;
- (BOOL)_replaceWithBulletin:(id)arg1 bulletin:(id)arg2 inSection:(id)arg3 dryRun:(BOOL)arg4;
- (BOOL)_moveBulletin:(id)arg1 fromSection:(id)arg2 toIndex:(unsigned int)arg3 inSection:(id)arg4 dryRun:(BOOL)arg5;
- (BOOL)_removeBulletin:(id)arg1 fromSection:(id)arg2 dryRun:(BOOL)arg3;
- (BOOL)_insertBulletin:(id)arg1 atIndex:(unsigned int)arg2 inSection:(id)arg3 dryRun:(BOOL)arg4;
- (void)removeChildBulletinIfPossible:(id)arg1;
- (void)addChildBulletinIfPossible:(id)arg1;
- (BOOL)_replaceWithSection:(id)arg1 section:(id)arg2 dryRun:(BOOL)arg3;
- (BOOL)_moveSection:(id)arg1 toIndex:(unsigned int)arg2 dryRun:(BOOL)arg3;
- (BOOL)_insertSection:(id)arg1 atIndex:(unsigned int)arg2 dryRun:(BOOL)arg3;
- (BOOL)_removeSection:(id)arg1 dryRun:(BOOL)arg2;
- (int)_bulletinSectionLocationAtIndexPath:(id)arg1;
- (id)_representedBulletinAtIndexPath:(id)arg1;
- (id)_bulletinInfoAtIndexPath:(id)arg1;
- (id)_sectionInfoAtIndexPath:(id)arg1;
@property(nonatomic) struct CGRect tableViewFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_reloadOrInvalidateTableViewData;
- (void)reloadTableViewDataIfNecessary;
- (void)_reloadTableViewData;
- (void)setTableViewNeedsReload;
- (id)_viewIfLoaded;
- (void)viewDidLoad;
- (void)_updateEnhancedContrastSettings:(id)arg1;
- (void)_registerOrQueueReusableViewClassForInfo:(id)arg1;
- (void)_registerOrQueueHeaderClassForInfo:(id)arg1;
- (void)_registerOrQueueCellClassForInfo:(id)arg1;
- (void)_registerOrQueueReusableClass:(Class)arg1 forIdentifier:(id)arg2 registerBlock:(CDUnknownBlockType)arg3 queueBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
