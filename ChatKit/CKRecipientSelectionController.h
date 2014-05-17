//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKRecipientSearchListControllerDelegate.h"
#import "MFComposeRecipientViewDelegate.h"
#import "MFGroupDetailViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class ABPeoplePickerNavigationController, CKComposeRecipientView, CKRecipientSearchListController, CKScheduledUpdater, MFComposeRecipient, UIScrollView, _UINavigationControllerPalette;

@interface CKRecipientSelectionController : UIViewController <MFGroupDetailViewControllerDelegate, UINavigationControllerDelegate, MFComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate>
{
    double _keyboardHeightWithAccessoryView;
    _Bool _peoplePickerHidden;
    _Bool _editable;
    _Bool _preventAtomization;
    id <CKRecipientSelectionControllerDelegate> _delegate;
    CKComposeRecipientView *_toField;
    _UINavigationControllerPalette *_toFieldPalette;
    CKRecipientSearchListController *_searchListController;
    ABPeoplePickerNavigationController *_peoplePickerController;
    UIScrollView *_toFieldScrollingView;
    CKScheduledUpdater *_backfillUpdater;
    MFComposeRecipient *_recentContactForPresentedABCard;
}

@property(nonatomic) _Bool preventAtomization; // @synthesize preventAtomization=_preventAtomization;
@property(retain, nonatomic) MFComposeRecipient *recentContactForPresentedABCard; // @synthesize recentContactForPresentedABCard=_recentContactForPresentedABCard;
@property(retain, nonatomic) CKScheduledUpdater *backfillUpdater; // @synthesize backfillUpdater=_backfillUpdater;
@property(readonly, nonatomic) UIScrollView *toFieldScrollingView; // @synthesize toFieldScrollingView=_toFieldScrollingView;
@property(retain, nonatomic) ABPeoplePickerNavigationController *peoplePickerController; // @synthesize peoplePickerController=_peoplePickerController;
@property(retain, nonatomic) CKRecipientSearchListController *searchListController; // @synthesize searchListController=_searchListController;
@property(retain, nonatomic) _UINavigationControllerPalette *toFieldPalette; // @synthesize toFieldPalette=_toFieldPalette;
@property(retain, nonatomic) CKComposeRecipientView *toField; // @synthesize toField=_toField;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isPeoplePickerHidden) _Bool peoplePickerHidden; // @synthesize peoplePickerHidden=_peoplePickerHidden;
@property(nonatomic) id <CKRecipientSelectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setAddressBookProperties:(id)arg1;
- (void)_updateSearchResultsTable;
- (struct UIEdgeInsets)_navigationBarInsets;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_hideSearchField;
- (void)_showSearchField;
- (void)_updateShowingSearch;
- (void)_resetSearchResultsInsets;
- (_Bool)_isToFieldPushedUp;
- (void)_adjustToFieldPositionIfNecessary;
- (void)_updateRecipientViewLayouts;
- (void)_setupSearchField;
- (id)_navigationControllerForSearchResults;
- (void)_removeRecent;
- (void)_showDetailsForRecipient:(id)arg1 canDelete:(_Bool)arg2;
- (void)_showDetailsForGroup:(id)arg1;
- (void)_updateBackfillForNewRecipients;
- (void)setupToFieldPalette;
- (void)invalidateOutstandingIDStatusRequests;
@property(nonatomic, getter=isSearchResultsHidden) _Bool searchResultsHidden;
- (id)proposedRecipients;
- (id)recipients;
- (void)reset;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)searchListControllerDidScroll:(id)arg1;
- (void)searchListControllerDidFinishSearch:(id)arg1;
- (void)searchListController:(id)arg1 accessoryPickedForRecipient:(id)arg2;
- (void)searchListController:(id)arg1 didSelectRecipient:(id)arg2;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)_handleRecipientViewChanged:(id)arg1;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;

@end

