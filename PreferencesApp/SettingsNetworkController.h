//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class PSAppCellularUsageGroupController, PSSpecifier;

@interface SettingsNetworkController : PSListController
{
    PSSpecifier *_specifierRAT;
    PSSpecifier *_specifierRATGroup;
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    BOOL _disabled;
    int _RATSwitchKind;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_lifetimeSpecifier;
    PSSpecifier *_lastResetSpecifier;
    PSAppCellularUsageGroupController *_appUsageGroupController;
}

- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;
- (id)_lastUpdateDate;
- (id)callTime:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)dataUsageWorkspaceInfo;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (BOOL)isCellularDisabled;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (void)newCarrierNotification;
- (void)totalBytesUsedChangedNotification;
- (void)setupCellularFaceTime:(id)arg1;
- (BOOL)shouldShowFaceTimeSetup;
- (void)viewAccountPressed:(id)arg1;
- (BOOL)shouldShowViewAccount;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (void)reloadRATStatus:(id)arg1;
- (BOOL)updateRATSpecifiers;
- (void)updateRATStateWithDictionary:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (void)_setRATModeStateIsOn:(BOOL)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldShowRATModeSwitch;
- (id)localizableRATModeStringKeyForKey:(id)arg1;
- (id)isMobileDataEnabled:(id)arg1;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(BOOL)arg1;
- (void)_setMobileDataSwitch:(BOOL)arg1;
- (void)canceledDataSwitch:(id)arg1;
- (void)acceptedDataSwitch:(id)arg1;
- (void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2;
- (BOOL)isConnectedOverWiFi;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end

