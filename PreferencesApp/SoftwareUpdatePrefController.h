//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "RUIObjectModelDelegate.h"
#import "SUManagerClientDelegate.h"
#import "SUNetworkObserver.h"
#import "UITableViewDelegate.h"

@class NSError, NSMutableArray, NSString, NSURL, PSSpecifier, RUILoader, SUDescriptor, SUDownload, SUManagerClient, SUTitleCell, UIAlertView, UINavigationController;

@interface SoftwareUpdatePrefController : PSListController <SUManagerClientDelegate, UITableViewDelegate, SUNetworkObserver, RUIObjectModelDelegate>
{
    SUManagerClient *_SUManager;
    SUDownload *_download;
    SUDescriptor *_update;
    PSSpecifier *_titleGroup;
    SUTitleCell *_titleCell;
    PSSpecifier *_installButtonGroup;
    PSSpecifier *_installButtonSpecifier;
    int _suState;
    NSError *_suError;
    int _networkType;
    BOOL _manuallyStartedScan;
    BOOL _anyScanInProgress;
    BOOL _disableInstallButton;
    BOOL _connectedToPowerSource;
    BOOL _presentedCellularFees;
    SEL _termsAcceptanceAction;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    UIAlertView *_softwareUpdateAlert;
    UIAlertView *_agreeConfirmationAlert;
    RUILoader *_termsLoader;
    NSMutableArray *_objectModels;
    UINavigationController *_modalBuddyMLController;
    NSURL *_genericTermsURL;
    NSString *_agreeURL;
    BOOL _termsLoading;
}

+ (id)_SUManagerClientClass;
@property(retain, nonatomic) NSError *SUError; // @synthesize SUError=_suError;
@property(nonatomic) int SUState; // @synthesize SUState=_suState;
@property(retain, nonatomic) SUDownload *download; // @synthesize download=_download;
@property(retain, nonatomic) SUDescriptor *update; // @synthesize update=_update;
- (void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadDidFinish:(id)arg2;
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
- (void)client:(id)arg1 downloadDidStart:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)controllerForSpecifier:(id)arg1;
- (void)detailedReleaseNotesDonePressed:(id)arg1;
- (void)handleScanError:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)handleInstallationError:(id)arg1;
- (void)handleDownloadError:(id)arg1;
- (id)humanReadableDescriptionForError:(id)arg1 enableButton:(char *)arg2 showAsButtonFooter:(char *)arg3;
- (void)setSUError:(id)arg1 disableButton:(BOOL)arg2 reload:(BOOL)arg3;
- (void)presentError:(id)arg1;
- (void)openUsageSettings:(id)arg1;
- (void)install:(id)arg1;
- (void)_reallyInstall;
- (void)downloadAndInstall:(id)arg1;
- (void)downloadTermsAccepted;
- (void)_reallyDownloadAndInstallAcceptingCellularFees:(BOOL)arg1;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)_cleanupLoader;
- (void)_loadTermsRemoteUIWithResponseData:(id)arg1;
- (void)_loadTermsRemoteUIFailureWithError:(id)arg1;
- (void)presentTermsIfNecessaryWithAcceptanceAction:(SEL)arg1;
- (void)_loadRemoteUITermsWithCloud;
- (void)_loadTermsFromUpdateAsset;
- (void)_combinedTermsAgree;
- (void)_termsDisagree;
- (void)_termsAgree;
- (void)resumeDownload:(id)arg1;
- (void)_reallyResumeDownloadAcceptingCellularFees:(BOOL)arg1;
- (BOOL)_alertForDownloadConstraintsWithContext:(id)arg1;
- (id)specifiers;
- (id)specifiersForState:(int)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willEnterForeground;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)scanForUpdate;
- (void)scanFinishedWithUpdate:(id)arg1 error:(id)arg2;
- (void)_batteryStateChanged:(id)arg1;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)updateState;
- (void)updateStateFromDownload:(id)arg1;
- (Class)tableViewClass;
- (void)dealloc;
- (id)init;

@end

