//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSString, PSSpecifier, UIAlertView;

@interface ResetPrefController : PSListController
{
    BOOL _requireRestrictionsCode;
    BOOL _requirePasscode;
    BOOL _returningFromPINSheetWithSuccess;
    BOOL _shouldEraseWithFMiP;
    BOOL _shouldTryEraseAgainWithFMiP;
    int _codesNeeded;
    int _codesEntered;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_locationSpecifier;
    int _locationSpecifierIndex;
    NSString *_passcode;
    UIAlertView *_alert;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmEraseCellularSettings;
- (void)eraseCellularSettings;
- (void)resetAKey;
- (void)reprovisionAccount;
- (void)subscriberOptions:(id)arg1;
- (id)specifiers;
- (void)resetNetworkSettings:(id)arg1;
- (void)eraseSettings:(id)arg1;
- (void)_eraseSettingsAndContent;
- (void)locatorStateDidChange:(id)arg1;
- (void)eraseSettingsAndContent:(id)arg1;
- (void)_resetWithMode:(int)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)resetPrivacyWarnings:(id)arg1;
- (void)resetIconPositions:(id)arg1;
- (void)resetKeyboardDictionary:(id)arg1;
- (void)popupViewDidDisappear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didAppear;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLocationResetSpecifier;
- (void)dealloc;
- (id)init;

@end

