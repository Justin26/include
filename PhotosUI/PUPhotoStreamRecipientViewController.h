/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessageUI/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotosUI/IDSBatchIDQueryControllerDelegate.h>

@class UITableView, MFComposeRecipientView, UIScrollView, NSArray, MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, IDSBatchIDQueryController, NSMutableSet, UIPopoverController;

@interface PUPhotoStreamRecipientViewController : UIViewController <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UIPopoverControllerDelegate, IDSBatchIDQueryControllerDelegate> {

	UITableView* _searchResultsTable;
	MFComposeRecipientView* _recipientView;
	UIScrollView* _recipientContainerView;
	NSArray* _properties;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	NSNumber* _currentSearchTaskID;
	NSArray* _searchResults;
	IDSBatchIDQueryController* _idsBatchIDQueryController;
	NSMutableSet* _validPhoneNumbers;
	BOOL _wasFirstResponder;
	BOOL _showingPeoplePicker;
	UIPopoverController* _peoplePickerPopoverController;
	CGSize _recipientViewSize;
	CGFloat _lastHeight;
	id _delegate;
	CGFloat _bottomTableOffset;

}

@property (assign,nonatomic,__weak) id delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * recipients; 
@property (assign,nonatomic) CGFloat bottomTableOffset;              //@synthesize bottomTableOffset=_bottomTableOffset - In the implementation block
+(void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(CGFloat)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)recipients;
-(void*)_addressBook;
-(void)makeRecipientViewResignFirstResponder;
-(void)makeRecipientViewFirstResponder;
-(void)setBottomTableOffset:(CGFloat)arg1 ;
-(void)_searchForRecipientWithText:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)_forceDismissPeoplePickerPopover;
-(void)_dismissPeoplePicker:(id)arg1 ;
-(id)_searchManager;
-(void)_setSearchResults:(id)arg1 ;
-(id)_selectedNormalizedPhoneForRecipient:(id)arg1 ;
-(BOOL)shouldShowCardForPerson:(void*)arg1 peoplePicker:(id)arg2 ;
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(int)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)idStatusUpdatedForDestinations:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(BOOL)composeRecipientViewIsShowingPeoplePicker:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(CGFloat)bottomTableOffset;
-(void).cxx_destruct;
@end

