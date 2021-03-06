//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import "UIAlertViewDelegate.h"

@class UIAlertView, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>
{
    float _cellTextWidth;
    UIFont *_cellFont;
    UIAlertView *_disableRecoveryConfirmationAlert;
    BOOL _showsDisableRecoveryOption;
}

@property(nonatomic) BOOL showsDisableRecoveryOption; // @synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption;
- (void)_finishedWithSpecifier:(id)arg1;
- (void)nextPressed;
- (id)specifiers;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end

