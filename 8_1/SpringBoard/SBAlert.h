//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBDisplayProtocol.h"

@class NSHashTable, NSMutableDictionary, NSString, SBActivationSettings, SBAlertManager, SBAlertView, SBDeactivationSettings, SBStateSettings, UIScreen;

@interface SBAlert : UIViewController <SBDisplayProtocol>
{
    id <SBAlertDelegate> _alertDelegate;
    SBAlertView *_display;
    NSMutableDictionary *_dictionary;
    BOOL _isWallpaperTunnelActive;
    BOOL _backgroundStyleIsSet;
    int _backgroundStyle;
    BOOL _isForcingBackgroundStyleUpdate;
    BOOL _suppressesBanners;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    SBStateSettings *_stateSettings;
    int _orientationChangedEventsEnabled;
    BOOL _requestedDismissal;
    UIScreen *_targetScreen;
    NSHashTable *_observers;
    SBAlertManager *_alertManager;
}

+ (void)test;
+ (void)registerForAlerts;
@property(retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) BOOL requestedDismissal; // @synthesize requestedDismissal=_requestedDismissal;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)_isLockAlert;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_impersonatesApplicationWithBundleID;
- (void)removeFromView;
- (void)alertViewIsReadyToDismiss:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setAlertDelegate:(id)arg1;
- (id)alertDelegate;
- (BOOL)_shouldDismissSwitcherOnActivation;
@property(readonly, nonatomic) BOOL suppressesSiri;
@property(readonly, nonatomic) BOOL suppressesControlCenter;
@property(readonly, nonatomic) BOOL suppressesNotificationCenter;
@property(nonatomic) BOOL suppressesBanners;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)hasTranslucentBackground;
- (BOOL)shouldPendAlertItemsWhileActive;
- (void)handleSlideshowHardwareButton;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonTap;
- (void)animateDeactivation;
- (BOOL)currentlyAnimatingDeactivation;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(BOOL)arg2;
- (void)didFinishAnimatingOut;
- (void)didFinishAnimatingIn;
- (id)legibilitySettings;
- (id)effectiveStatusBarStyleRequest;
- (int)effectiveStatusBarStyle;
- (id)statusBarStyleRequest;
- (int)starkStatusBarStyle;
- (int)statusBarStyle;
- (double)autoLockTime;
- (double)autoDimTime;
- (BOOL)managesOwnStatusBarAtActivation;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (BOOL)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(BOOL)arg1;
@property(readonly, copy) NSString *description;
- (id)_basicDescription;
- (void)deactivate;
@property(readonly, nonatomic) BOOL wantsSupportedInterfaceOrientationsIgnoredDuringDeactivation;
- (int)interfaceOrientationForActivation;
@property(readonly, nonatomic) UIViewController *viewControllerForSupportedInterfaceOrientations;
- (void)activate;
- (int)statusBarStyleOverridesToCancel;
- (void)displayDidDisappear;
- (float)finalAlpha;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)undimsDisplay;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)removeBackgroundStyleWithAnimationFactory:(id)arg1;
- (void)setBackgroundStyle:(int)arg1 withAnimationFactory:(id)arg2 force:(BOOL)arg3;
- (void)setBackgroundStyle:(int)arg1 withAnimationFactory:(id)arg2;
- (int)customBackgroundStyle;
- (BOOL)wantsCustomBackgroundStyleForAllWallpaperVariants;
- (BOOL)wantsCustomBackgroundStyle;
- (BOOL)isWallpaperTunnelActive;
- (void)setWallpaperTunnelActive:(BOOL)arg1;
- (void)applyStateSettings:(id)arg1;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (BOOL)boolForStateSetting:(unsigned int)arg1;
- (int)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forStateSetting:(unsigned int)arg2;
- (void)clearStateSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (BOOL)boolForDeactivationSetting:(unsigned int)arg1;
- (int)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearDeactivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (BOOL)boolForActivationSetting:(unsigned int)arg1;
- (int)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forActivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (id)copyDisplaySettings;
- (void)dismissAlert;
- (void)clearDisplay;
- (id)display;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)wantsFullScreenLayout;
- (id)_screen;
- (void)_setTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isRemote;
- (BOOL)matchesInCallUIService;
- (BOOL)matchesAnyInCallService;
- (BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (id)effectiveViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
