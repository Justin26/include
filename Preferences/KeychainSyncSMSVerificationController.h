//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/KeychainSyncTextEntryController.h>

#import "UIAlertViewDelegate.h"

@class NSString, PSKeychainSyncManager, UIAlertView, UIButton;

@interface KeychainSyncSMSVerificationController : KeychainSyncTextEntryController <UIAlertViewDelegate>
{
    UIButton *_footerButton;
    UIAlertView *_supportVerificationAlert;
    NSString *_phoneNumber;
    NSString *_dialingPrefix;
    NSString *_countryCode;
    unsigned int _verificationCodeLength;
    PSKeychainSyncManager *_keychainSyncManager;
}

- (unsigned int)numberOfPasscodeFields;
@property(nonatomic) PSKeychainSyncManager *keychainSyncManager; // @synthesize keychainSyncManager=_keychainSyncManager;
- (void)showSupportVerification;
@property(nonatomic) unsigned int verificationCodeLength; // @synthesize verificationCodeLength=_verificationCodeLength;
- (id)specifiers;
@property(retain, nonatomic) NSString *dialingPrefix; // @synthesize dialingPrefix=_dialingPrefix;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)init;
- (void)dealloc;

@end

